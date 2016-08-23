<?php
/**
 * @file
 * vcr_policies.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function vcr_policies_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'policies_list';
  $bean_type->label = 'Policies List';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['policies_list'] = $bean_type;

  return $export;
}
