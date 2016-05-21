<?php
/**
 * @file
 * fimmoklink_publications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fimmoklink_publications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_publications';
  $strongarm->value = array();
  $export['menu_options_publications'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_publications';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_publications'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_publications';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_publications'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_publications';
  $strongarm->value = '1';
  $export['node_preview_publications'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_publications';
  $strongarm->value = 0;
  $export['node_submitted_publications'] = $strongarm;

  return $export;
}
