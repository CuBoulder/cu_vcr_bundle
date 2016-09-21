<?php
/**
 * @file
 * vcr_reports.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vcr_reports_taxonomy_default_vocabularies() {
  return array(
    'report_type' => array(
      'name' => 'Report Type',
      'machine_name' => 'report_type',
      'description' => 'Categorize reports by Monthly Proposal, Award and Expenditure...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
