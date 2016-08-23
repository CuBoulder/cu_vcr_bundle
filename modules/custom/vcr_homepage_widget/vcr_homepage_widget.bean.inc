<?php
/**
 * @file
 * vcr_homepage_widget.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function vcr_homepage_widget_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'cu_homepage_widget';
  $bean_type->label = 'CU Homepage Widget';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['cu_homepage_widget'] = $bean_type;

  return $export;
}
