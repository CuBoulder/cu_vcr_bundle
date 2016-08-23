<?php
/**
 * @file
 * vcr_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vcr_article_ctools_plugin_api() {
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
function vcr_article_views_api() {
  return array("api" => "3.0");
}
