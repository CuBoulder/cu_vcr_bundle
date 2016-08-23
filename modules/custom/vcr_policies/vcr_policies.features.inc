<?php
/**
 * @file
 * vcr_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_policies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vcr_policies_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vcr_policies_node_info() {
  $items = array(
    'policy' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
