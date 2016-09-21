<?php
/**
 * @file
 * vcr_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vcr_page_taxonomy_default_vocabularies() {
  return array(
    'private_audience' => array(
      'name' => 'Private Audience',
      'machine_name' => 'private_audience',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
