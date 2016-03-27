<?php
/**
 * @file
 * fimmoklink_exhibitions_new.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_exhibitions_new_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-exhibtions_new-field_exhibitions'.
  $field_instances['node-exhibtions_new-field_exhibitions'] = array(
    'bundle' => 'exhibtions_new',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_exhibitions',
    'label' => 'Exhibitions',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibitions');

  return $field_instances;
}
