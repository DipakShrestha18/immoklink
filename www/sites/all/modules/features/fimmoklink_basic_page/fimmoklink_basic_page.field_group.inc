<?php
/**
 * @file
 * fimmoklink_basic_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fimmoklink_basic_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|basic_page|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'metatags',
      2 => 'title',
      3 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_information|node|basic_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Information');

  return $field_groups;
}
