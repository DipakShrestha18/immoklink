<?php
/**
 * @file
 * Function helpers for taxonomies deployment.
 */

/**
 * Create new taxonomy terms and vocabularies.
 */
function immoklink_deploy_create_taxonomy($vocab, $terms) {

  $vocabulary = taxonomy_vocabulary_machine_name_load($vocab['machine_name']);
  if (!$vocabulary) {
    // Create vocabulary.
    $vocabulary = new StdClass;
    $vocabulary->name = $vocab['name'];
    $vocabulary->description = $vocab['description'];
    $vocabulary->machine_name = $vocab['machine_name'];
    taxonomy_vocabulary_save($vocabulary);
  }

  foreach ($terms as $term) {
    // Create terms.
    $newterm = new StdClass;
    $newterm->vid = $vocabulary->vid;
    $newterm->name = $term['name'];
    if (isset($term['description'])) {
      $newterm->description = $term['description'];
    }
    $newterm->vocabulary_machine_name = $vocab['machine_name'];
    if (isset($term['parent'])) {
      $parents = taxonomy_get_term_by_name($term['parent'], $vocab['machine_name']);
      $parent = array_shift($parents);
      $newterm->parent[] = $parent->tid;
    }
    $existing = taxonomy_get_term_by_name($newterm->name, $vocab['machine_name']);
    if (empty($existing)) {
      taxonomy_term_save($newterm);
      unset($newterm);
    }
  }
}
