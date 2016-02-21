<?php
/**
 * @file
 * fimmoklink_gallery_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_gallery_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fimmoklink_gallery_listings_node_info() {
  $items = array(
    'gallery_listings' => array(
      'name' => t('Gallery listings'),
      'base' => 'node_content',
      'description' => t('Gallery listing page, are used to gallery landing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
