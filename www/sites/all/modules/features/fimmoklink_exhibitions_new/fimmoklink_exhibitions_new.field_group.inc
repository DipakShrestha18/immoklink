<?php
/**
 * @file
 * fimmoklink_exhibitions_new.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fimmoklink_exhibitions_new_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibitions|node|exhibtions_new|form';
  $field_group->group_name = 'group_exhibitions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibtions_new';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibitions',
    'weight' => '0',
    'children' => array(
      0 => 'field_exhibitions',
      1 => 'metatags',
      2 => 'title',
      3 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibitions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibitions|node|exhibtions_new|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibitions');

  return $field_groups;
}
