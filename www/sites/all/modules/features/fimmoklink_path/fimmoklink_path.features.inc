<?php
/**
 * @file
 * fimmoklink_path.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_path_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
