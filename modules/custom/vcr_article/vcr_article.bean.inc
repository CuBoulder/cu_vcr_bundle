<?php
/**
 * @file
 * vcr_article.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function vcr_article_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'articles';
  $bean_type->label = 'Articles';
  $bean_type->options = '';
  $bean_type->description = 'A filterable list of articles';
  $export['articles'] = $bean_type;

  return $export;
}
