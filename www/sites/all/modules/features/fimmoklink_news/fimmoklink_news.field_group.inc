<?php
/**
 * @file
 * fimmoklink_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fimmoklink_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_information|node|news|form';
  $field_group->group_name = 'group_news_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News information',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_date',
      1 => 'field_news_image_main',
      2 => 'field_news_listing_text',
      3 => 'field_news_main_text',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_information|node|news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('News information');

  return $field_groups;
}
