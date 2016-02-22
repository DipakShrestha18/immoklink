<?php
/**
 * @file
 * fimmoklink_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_frontend_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
