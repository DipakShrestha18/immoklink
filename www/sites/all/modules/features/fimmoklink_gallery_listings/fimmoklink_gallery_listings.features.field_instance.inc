<?php
/**
 * @file
 * fimmoklink_gallery_listings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_gallery_listings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-gallery_listings-field_gallery_list_gallery_type'.
  $field_instances['node-gallery_listings-field_gallery_list_gallery_type'] = array(
    'bundle' => 'gallery_listings',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_gallery_list_gallery_type',
    'label' => 'Gallery type',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery type');

  return $field_instances;
}
