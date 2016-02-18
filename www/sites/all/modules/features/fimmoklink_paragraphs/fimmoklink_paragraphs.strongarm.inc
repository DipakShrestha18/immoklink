<?php
/**
 * @file
 * fimmoklink_paragraphs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fimmoklink_paragraphs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__books_bundle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__books_bundle'] = $strongarm;

  return $export;
}
