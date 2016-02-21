<?php
/**
 * @file
 * fimmoklink_paragraphs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fimmoklink_paragraphs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_paragraph-bundles:admin/structure/paragraphs.
  $menu_links['management_paragraph-bundles:admin/structure/paragraphs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/paragraphs',
    'router_path' => 'admin/structure/paragraphs',
    'link_title' => 'Paragraph Bundles',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Paragraph bundles',
      ),
      'identifier' => 'management_paragraph-bundles:admin/structure/paragraphs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraph Bundles');

  return $menu_links;
}
