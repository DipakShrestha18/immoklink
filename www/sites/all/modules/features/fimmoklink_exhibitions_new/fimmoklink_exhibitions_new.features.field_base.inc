<?php
/**
 * @file
 * fimmoklink_exhibitions_new.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fimmoklink_exhibitions_new_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_exhibitions'.
  $field_bases['field_exhibitions'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
