<?php
/**
 * @file
 * frequently_asked_questions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function frequently_asked_questions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__frequently_asked_questions';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar' => array(
        'custom_settings' => FALSE,
      ),
      'article_blocks' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'faqs_entity_view_1' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'faq_accordion_entity_view_1' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_frequently_asked_questions';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_frequently_asked_questions';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_frequently_asked_questions';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_frequently_asked_questions';
  $strongarm->value = '1';
  $export['node_preview_frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_frequently_asked_questions';
  $strongarm->value = 1;
  $export['node_submitted_frequently_asked_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_frequently_asked_questions_pattern';
  $strongarm->value = '[node:menu-link:parent:title]/[node:title]';
  $export['pathauto_node_frequently_asked_questions_pattern'] = $strongarm;

  return $export;
}
