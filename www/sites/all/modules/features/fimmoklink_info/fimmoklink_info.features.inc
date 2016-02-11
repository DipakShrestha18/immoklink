<?php
/**
 * @file
 * fimmoklink_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_info_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fimmoklink_info_node_info() {
  $items = array(
    'info' => array(
      'name' => t('Info'),
      'base' => 'node_content',
      'description' => t('Info landing page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
