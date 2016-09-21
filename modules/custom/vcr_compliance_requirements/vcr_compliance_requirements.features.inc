<?php
/**
 * @file
 * vcr_compliance_requirements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_compliance_requirements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vcr_compliance_requirements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vcr_compliance_requirements_node_info() {
  $items = array(
    'compliance_requirement' => array(
      'name' => t('Compliance Requirement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
