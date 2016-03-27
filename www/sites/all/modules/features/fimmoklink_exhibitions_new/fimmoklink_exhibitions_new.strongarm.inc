<?php
/**
 * @file
 * fimmoklink_exhibitions_new.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fimmoklink_exhibitions_new_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__exhibtions_new';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__exhibtions_new'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_exhibtions_new';
  $strongarm->value = array();
  $export['menu_options_exhibtions_new'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_exhibtions_new';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_exhibtions_new'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_exhibtions_new';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_exhibtions_new'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_exhibtions_new';
  $strongarm->value = '1';
  $export['node_preview_exhibtions_new'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_exhibtions_new';
  $strongarm->value = 0;
  $export['node_submitted_exhibtions_new'] = $strongarm;

  return $export;
}
