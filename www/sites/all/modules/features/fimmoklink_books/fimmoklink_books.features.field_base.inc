<?php
/**
 * @file
 * fimmoklink_books.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fimmoklink_books_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_books_books'.
  $field_bases['field_books_books'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_books_books',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_books_description'.
  $field_bases['field_books_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_books_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
