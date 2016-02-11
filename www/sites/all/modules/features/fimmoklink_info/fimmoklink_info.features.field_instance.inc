<?php
/**
 * @file
 * fimmoklink_info.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_info_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-info-field_info_info_list'.
  $field_instances['node-info-field_info_info_list'] = array(
    'bundle' => 'info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'immoklink_info_field',
        'settings' => array(),
        'type' => 'immoklink_info_field_formatter_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_info_info_list',
    'label' => 'Info list',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'immoklink_info_field',
      'settings' => array(),
      'type' => 'immoklink_info_field_widget_default',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Info list');

  return $field_instances;
}
