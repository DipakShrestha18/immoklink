<?php
/**
 * @file
 * fimmoklink_books.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fimmoklink_books_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-books-field_books_books'.
  $field_instances['node-books-field_books_books'] = array(
    'bundle' => 'books',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_books_books',
    'label' => 'Books',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'books_bundle' => 'books_bundle',
        'exhibitions' => -1,
        'image' => -1,
      ),
      'bundle_weights' => array(
        'books_bundle' => 2,
        'exhibitions' => 3,
        'image' => 4,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Book',
      'title_multiple' => 'Books',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-books-field_books_description'.
  $field_instances['node-books-field_books_description'] = array(
    'bundle' => 'books',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_books_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Books');
  t('Description');

  return $field_instances;
}
