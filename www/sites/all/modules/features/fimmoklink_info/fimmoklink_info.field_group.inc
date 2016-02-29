<?php
/**
 * @file
 * fimmoklink_info.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fimmoklink_info_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|info|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_info_info_list',
      1 => 'field_info_address_first_line',
      2 => 'field_info_address_second_line',
      3 => 'field_info_address_third_line',
      4 => 'field_info_postcode',
      5 => 'field_info_telephone',
      6 => 'field_info_email',
      7 => 'field_info_facebook_url',
      8 => 'field_info_twitter_url',
      9 => 'field_info_instagram_url',
      10 => 'field_info_blog_url',
      11 => 'metatags',
      12 => 'title',
      13 => 'path',
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
  $field_groups['group_information|node|info|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Information');

  return $field_groups;
}
