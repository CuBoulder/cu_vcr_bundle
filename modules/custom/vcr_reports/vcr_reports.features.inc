<?php
/**
 * @file
 * vcr_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_reports_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vcr_reports_node_info() {
  $items = array(
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => t('Monthly Proposal, Award and Expenditure Reports'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
