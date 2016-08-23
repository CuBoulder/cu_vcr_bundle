<?php
/**
 * @file
 * vcr_compliance_requirements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vcr_compliance_requirements_taxonomy_default_vocabularies() {
  return array(
    'compliance_research_type' => array(
      'name' => 'Compliance Research Type',
      'machine_name' => 'compliance_research_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
