<?php
/**
 * @file
 * fimmoklink_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function fimmoklink_paragraphs_paragraphs_info() {
  $items = array(
    'books_bundle' => array(
      'name' => 'Books Bundle',
      'bundle' => 'books_bundle',
      'locked' => '1',
    ),
    'gallery_bundle' => array(
      'name' => 'Gallery Bundle',
      'bundle' => 'gallery_bundle',
      'locked' => '1',
    ),
  );
  return $items;
}
