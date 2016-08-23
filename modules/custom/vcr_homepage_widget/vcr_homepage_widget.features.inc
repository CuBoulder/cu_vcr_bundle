<?php
/**
 * @file
 * vcr_homepage_widget.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_homepage_widget_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
