<?php
/**
 * @file
 * fimmoklink_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fimmoklink_news_taxonomy_default_vocabularies() {
  return array(
    'news_tags' => array(
      'name' => 'News tags',
      'machine_name' => 'news_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
