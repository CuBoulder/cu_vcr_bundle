<?php
/**
 * @file
 * frequently_asked_questions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function frequently_asked_questions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function frequently_asked_questions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function frequently_asked_questions_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: faqs
  $nodequeues['faqs'] = array(
    'qid' => '1',
    'name' => 'faqs',
    'title' => 'FAQs',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'frequently_asked_questions',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function frequently_asked_questions_node_info() {
  $items = array(
    'frequently_asked_questions' => array(
      'name' => t('Frequently Asked Questions'),
      'base' => 'node_content',
      'description' => t('Questions and Answers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
