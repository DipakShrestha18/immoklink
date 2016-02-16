<?php
/**
 * @file
 * fimmoklink_exhibitions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fimmoklink_exhibitions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_exhibition_group_exh_title'.
  $field_bases['field_exhibition_group_exh_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibition_group_exh_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_exhibition_pub_col_title'.
  $field_bases['field_exhibition_pub_col_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibition_pub_col_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_exhibition_public_collect'.
  $field_bases['field_exhibition_public_collect'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibition_public_collect',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'immoklink_exhibitions_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'immoklink_exhibitions_field',
  );

  // Exported field_base: 'field_exhibitions_exhibition'.
  $field_bases['field_exhibitions_exhibition'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions_exhibition',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'immoklink_exhibitions_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'immoklink_exhibitions_field',
  );

  // Exported field_base: 'field_exhibitions_group_exhi'.
  $field_bases['field_exhibitions_group_exhi'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions_group_exhi',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'immoklink_exhibitions_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'immoklink_exhibitions_field',
  );

  // Exported field_base: 'field_exhibitions_image'.
  $field_bases['field_exhibitions_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_exhibitions_image1'.
  $field_bases['field_exhibitions_image1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions_image1',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_exhibitions_image2'.
  $field_bases['field_exhibitions_image2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exhibitions_image2',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
