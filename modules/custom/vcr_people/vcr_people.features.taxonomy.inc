<?php
/**
 * @file
 * vcr_people.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vcr_people_taxonomy_default_vocabularies() {
  return array(
    'award_lifecycle' => array(
      'name' => 'Award Lifecycle',
      'machine_name' => 'award_lifecycle',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'departments' => array(
      'name' => 'Departments',
      'machine_name' => 'departments',
      'description' => 'The Department terms for OCG',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vcr_unit' => array(
      'name' => 'Unit',
      'machine_name' => 'vcr_unit',
      'description' => NULL,
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
