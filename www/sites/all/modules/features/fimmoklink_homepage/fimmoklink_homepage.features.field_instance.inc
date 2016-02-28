<?php
/**
 * @file
 * fimmoklink_homepage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_homepage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-home-field_homepage_images'.
  $field_instances['node-home-field_homepage_images'] = array(
    'bundle' => 'home',
    'clean_markup' => 1,
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
    'field_name' => 'field_homepage_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'books_bundle' => -1,
        'gallery_bundle' => -1,
        'homepage' => 'homepage',
      ),
      'bundle_weights' => array(
        'books_bundle' => 2,
        'gallery_bundle' => 3,
        'homepage' => 4,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Image',
      'title_multiple' => 'Images',
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
  t('Images');

  return $field_instances;
}
