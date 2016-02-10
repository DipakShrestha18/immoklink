<?php

/**
 * Menu callback, the slideshows overview page providing a list of slideshows with links
 * to add, edit and delete.
 */
function mwt_slideshow_overview() {

  if ($slideshows = MWTSlideshow::loadMultiple(FALSE)) {
    foreach ($slideshows as $slideshow) {
      $rows[] = array(
        'data' => array(
          'title' => l($slideshow->title, 'slideshow/' . $slideshow->slideshow_id),
          'edit' => l(t('edit'), 'slideshow/' . $slideshow->slideshow_id . '/edit'),
          'delete' => l(t('delete'), 'slideshow/' . $slideshow->slideshow_id . '/delete'),
        ),
      );
    }
    $content['table'] = array(
      '#theme' => 'table',
      '#rows' => $rows,
      '#header' => array(t('Slideshow'), array('data' => t('Operations'), 'colspan' => 2)),
    );
  }
  else {
    $content['message'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('There are currently no slideshows.') . '</p>',
    );
  }

  return $content;
}

/**
 * Menu callback providing a basic view of a slideshow for administrative purposes.
 */
function mwt_slideshow_page_view($slideshow, $view_mode = 'full') {
  $slideshow->content = array();

  // Build fields content.
  field_attach_prepare_view('mwt_slideshow', array($slideshow->slideshow_id => $slideshow), $view_mode);
  entity_prepare_view('mwt_slideshow', array($slideshow->slideshow_id => $slideshow));
  $slideshow->content += field_attach_view('mwt_slideshow', $slideshow, $view_mode);

  return $slideshow->content;
}

/**
 * Form constructor for creating/editing slideshows.
 *
 * @see mwt_slideshow_ui_form_validate()
 * @see mwt_slideshow_ui_form_submit()
 * @ingroup forms
 */
function mwt_slideshow_ui_form($form, &$form_state, $slideshow) {
  $form['slideshow'] = array(
    '#type' => 'value',
    '#value' => $slideshow,
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#required' => TRUE,
    '#default_value' => $slideshow->title,
  );


  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 5,
  );
  // Add the field related form elements.
  field_attach_form('mwt_slideshow', $slideshow, $form, $form_state);

  return $form;
}

/**
 * Form validation handler for mwt_slideshow_ui_form().
 *
 * @see mwt_slideshow_ui_form_submit()
 */
function mwt_slideshow_ui_form_validate($form, &$form_state) {
  field_attach_form_validate('mwt_slideshow', $form_state['values']['slideshow'], $form, $form_state);
}

/**
 * Form submission handler for mwt_slideshow_ui_form().
 *
 * @see mwt_slideshow_ui_form_validate()
 */
function mwt_slideshow_ui_form_submit($form, &$form_state) {
  if (!isset($form_state['values']['slideshow'])) {
    $slideshow = new MWTSlideshow();
    $slideshow->setTitle($form_state['values']['title']);
    $slideshow->field_slideshow_image = $form_state['values']['field_slideshow_image'];
  } else {
    $slideshow = $form_state['values']['slideshow'];
  }
  //Save and go back.
  $slideshow->save();
  $form_state['redirect'] = 'admin/workbench/slideshows';

}

/**
 * Menu callback providing a delete confirm form.
 *
 * @see mwt_slideshow_confirm_delete_form_submit()
 * @ingroup forms
 */
function mwt_slideshow_confirm_delete_form($form, &$form_state, $slideshow) {
  $form['slideshow_id'] = array(
    '#type' => 'value',
    '#value' => $slideshow->slideshow_id,
  );

  return confirm_form($form,
    t('Are you sure you want to delete %title?',
      array('%title' => $slideshow->title)),
    'admin/structure/slideshow',
    t('Deleting a %slideshow could impact on other elements within the site. This action cannot be undone.', array('%slideshow' => $slideshow->title)),
    t('Delete'),
    t('Cancel'));
}

/**
 * Confirm delete form submit.
 *
 * @see mwt_slideshow_confirm_delete_form()
 */
function mwt_slideshow_confirm_delete_form_submit($form, &$form_state) {
  $slideshow = MWTSlideshow::load($form_state['values']['slideshow_id']);
  $slideshow->delete();
  drupal_set_message(t('You have successfully deleted %slideshow', array('%slideshow' => $slideshow->title)));
  $form_state['redirect'] = array('admin/workbench/slideshows');
}
