<?php
/**
 * @file
 * fimmoklink_exhibitions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_exhibitions_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fimmoklink_exhibitions_node_info() {
  $items = array(
    'exhibitions' => array(
      'name' => t('Exhibitions'),
      'base' => 'node_content',
      'description' => t('Exhibitions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
