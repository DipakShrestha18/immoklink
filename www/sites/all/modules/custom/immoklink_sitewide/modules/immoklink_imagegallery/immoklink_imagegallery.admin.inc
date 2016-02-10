<?php

/**
 * Menu callback, the imagegalleries overview page providing a list of imagegalleries with links
 * to add, edit and delete.
 */
function immoklink_imagegallery_overview() {

  if ($imagegalleries = immoklinkImagegallery::loadMultiple(FALSE)) {
    foreach ($imagegalleries as $imagegallery) {
      $rows[] = array(
        'data' => array(
          'title' => l($imagegallery->title, 'imagegallery/' . $imagegallery->imagegallery_id),
          'edit' => l(t('edit'), 'imagegallery/' . $imagegallery->imagegallery_id . '/edit'),
          'delete' => l(t('delete'), 'imagegallery/' . $imagegallery->imagegallery_id . '/delete'),
        ),
      );
    }
    $content['table'] = array(
      '#theme' => 'table',
      '#rows' => $rows,
      '#header' => array(t('Image gallery'), array('data' => t('Operations'), 'colspan' => 2)),
    );
  }
  else {
    $content['message'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('There are currently no image galleries.') . '</p>',
    );
  }

  return $content;
}

/**
 * Menu callback providing a basic view of a image gallery for administrative purposes.
 */
function immoklink_imagegallery_page_view($imagegallery, $view_mode = 'full') {
  $imagegallery->content = array();

  // Build fields content.
  field_attach_prepare_view('immoklink_imagegallery', array($imagegallery->imagegallery_id => $imagegallery), $view_mode);
  entity_prepare_view('immoklink_imagegallery', array($imagegallery->imagegallery_id => $imagegallery));
  $imagegallery->content += field_attach_view('immoklink_imagegallery', $imagegallery, $view_mode);

  return $imagegallery->content;
}

/**
 * Form constructor for creating/editing image galleries.
 *
 * @see immoklink_imagegallery_ui_form_validate()
 * @see immoklink_imagegallery_ui_form_submit()
 * @ingroup forms
 */
function immoklink_imagegallery_ui_form($entity_form, &$form_state, $imagegallery = NULL) {
  if (!$imagegallery) {
    $imagegallery = entity_create('immoklink_imagegallery', array());
    drupal_set_title('Add new gallery');
  } else {
    drupal_set_title($imagegallery->title);
  }

  $entity_form['imagegallery'] = array(
    '#type' => 'value',
    '#value' => $imagegallery,
  );

  $title = $imagegallery->title;
  $entity_form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#required' => TRUE,
    '#default_value' => $title,
  );

  // Add the field imagegallery form elements.
  field_attach_form('immoklink_imagegallery', $imagegallery, $entity_form, $form_state);

  $entity_form['actions'] = array('#type' => 'actions');
  $entity_form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 5,
  );
  return $entity_form;
}

/**
 * Form validation handler for immoklink_imagegallery_ui_form().
 *
 * @see immoklink_imagegallery_ui_form_submit()
 */
function immoklink_imagegallery_ui_form_validate($entity_form, &$form_state) {
  $imagegallery = $entity_form['#entity'];
  field_attach_form_validate('immoklink_imagegallery', $imagegallery, $entity_form, $form_state);
}

/**
 * Form submission handler for immoklink_imagegallery_ui_form().
 *
 * @see immoklink_imagegallery_ui_form_validate()
 */
function immoklink_imagegallery_ui_form_submit(&$entity_form, &$form_state) {
  $info = entity_get_info('immoklink_imagegallery');
  list(, , $bundle) = entity_extract_ids('immoklink_imagegallery', $entity_form['#entity']);
  $entity = $entity_form['#entity'];
  $entity_values = drupal_array_get_nested_value($form_state['values'], $entity_form['#parents']);

  // Copy top-level form values that are not for fields to entity properties,
  // without changing existing entity properties that are not being edited by
  // this form. Copying field values must be done using field_attach_submit().
  $values_excluding_fields = $info['fieldable'] ? array_diff_key($entity_values, field_info_instances('immoklink_imagegallery', $bundle)) : $entity_values;
  foreach ($values_excluding_fields as $key => $value) {
    $entity->$key = $value;
  }

  if ($info['fieldable']) {
    field_attach_submit('immoklink_imagegallery', $entity, $entity_form, $form_state);
  }
  $entity_instance = $entity_form['#entity'];
  $context = array(
    'parent_entity_type' => 'immoklink_imagegallery',
    'parent_entity' => $entity,
  );

  $entity->save($entity_instance, $context);
//  $form_state['redirect'] = 'admin/workbench/content/image-galleries';

}

/**
 * Menu callback providing a delete confirm form.
 *
 * @see immoklink_imagegallery_confirm_delete_form_submit()
 * @ingroup forms
 */
function immoklink_imagegallery_confirm_delete_form($form, &$form_state, $imagegallery) {
  $form['imagegallery_id'] = array(
    '#type' => 'value',
    '#value' => $imagegallery->imagegallery_id,
  );

  return confirm_form($form,
    t('Are you sure you want to delete %title?',
      array('%title' => $imagegallery->title)),
    'admin/structure/imagegallery',
    t('Deleting a %imagegallery could impact on other elements within the site. This action cannot be undone.', array('%imagegallery' => $imagegallery->title)),
    t('Delete'),
    t('Cancel'));
}

/**
 * Confirm delete form submit.
 *
 * @see immoklink_imagegallery_confirm_delete_form()
 */
function immoklink_imagegallery_confirm_delete_form_submit($form, &$form_state) {
  $imagegallery = immoklinkImagegallery::load($form_state['values']['imagegallery_id']);
  $imagegallery->delete();
  drupal_set_message(t('You have successfully deleted %imagegallery', array('%imagegallery' => $imagegallery->title)));
  $form_state['redirect'] = array('admin/workbench/imagegalleries');
}
