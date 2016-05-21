<?php
/**
 * @file
 * fimmoklink_publications.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_publications_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-publications-field_publications'.
  $field_instances['node-publications-field_publications'] = array(
    'bundle' => 'publications',
    'clean_markup' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publications',
    'label' => 'Publications',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'books_bundle' => -1,
        'gallery_bundle' => -1,
        'homepage' => -1,
        'info_bundle' => -1,
        'publications' => 'publications',
      ),
      'bundle_weights' => array(
        'books_bundle' => 2,
        'gallery_bundle' => 3,
        'homepage' => 4,
        'info_bundle' => 5,
        'publications' => 6,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Publications',
      'title_multiple' => 'Publications',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');

  return $field_instances;
}
