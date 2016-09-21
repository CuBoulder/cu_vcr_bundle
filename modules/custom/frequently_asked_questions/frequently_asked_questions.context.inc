<?php
/**
 * @file
 * frequently_asked_questions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function frequently_asked_questions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq';
  $context->description = 'Active on all FAQ nodes and /faq.';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'frequently_asked_questions' => 'frequently_asked_questions',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'faq' => 'faq',
        'faq/*' => 'faq/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active on all FAQ nodes and /faq.');
  $export['faq'] = $context;

  return $export;
}
