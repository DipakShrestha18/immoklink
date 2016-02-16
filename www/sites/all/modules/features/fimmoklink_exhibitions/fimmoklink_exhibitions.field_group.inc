<?php
/**
 * @file
 * fimmoklink_exhibitions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fimmoklink_exhibitions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition|node|exhibitions|form';
  $field_group->group_name = 'group_exhibition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Exhibition',
    'weight' => '1',
    'children' => array(
      0 => 'field_exhibitions_image1',
      1 => 'field_exhibitions_group_exhi',
      2 => 'field_exhibition_group_exh_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition|node|exhibitions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|exhibitions|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_exhibitions_image',
      1 => 'field_exhibitions_exhibition',
      2 => 'metatags',
      3 => 'title',
      4 => 'path',
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
  $field_groups['group_information|node|exhibitions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_collection|node|exhibitions|form';
  $field_group->group_name = 'group_public_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Collection',
    'weight' => '2',
    'children' => array(
      0 => 'field_exhibitions_image2',
      1 => 'field_exhibition_public_collect',
      2 => 'field_exhibition_pub_col_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-public-collection field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_public_collection|node|exhibitions|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group Exhibition');
  t('Information');
  t('Public Collection');

  return $field_groups;
}
