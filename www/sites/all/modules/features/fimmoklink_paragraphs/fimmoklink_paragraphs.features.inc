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
