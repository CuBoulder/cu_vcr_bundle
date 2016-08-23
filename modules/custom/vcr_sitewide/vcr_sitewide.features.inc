<?php
/**
 * @file
 * vcr_sitewide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_sitewide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
