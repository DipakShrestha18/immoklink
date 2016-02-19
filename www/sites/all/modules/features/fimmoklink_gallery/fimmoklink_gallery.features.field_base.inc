<?php
/**
 * @file
 * fimmoklink_gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fimmoklink_gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gallery_images'.
  $field_bases['field_gallery_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gallery_images',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
