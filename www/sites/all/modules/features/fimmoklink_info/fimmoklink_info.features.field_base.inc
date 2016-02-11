<?php
/**
 * @file
 * fimmoklink_info.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fimmoklink_info_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_info_info_list'.
  $field_bases['field_info_info_list'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_info_info_list',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'immoklink_info_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'immoklink_info_field',
  );

  return $field_bases;
}
