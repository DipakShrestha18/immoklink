<?php
/**
 * @file
 * fimmoklink_entity_view_mode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fimmoklink_entity_view_mode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
