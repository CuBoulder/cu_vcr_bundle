<?php
/**
 * @file
 * vcr_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vcr_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = 'VCR Home Page Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_updates-block' => array(
          'module' => 'views',
          'delta' => 'homepage_updates-block',
          'region' => 'after_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('VCR Home Page Context');
  $export['home_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal';
  $context->description = 'All internal content.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'internal/*' => 'internal/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-iacuc-intranet-menu' => array(
          'module' => 'menu',
          'delta' => 'iacuc-intranet-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-iacuc-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'iacuc-secondary-menu',
          'region' => 'secondary-navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All internal content.');
  $export['internal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ocg_award_lifecycle_menu';
  $context->description = 'strictly to place OCG AWARD Lifecycle Menu on respective OCG pages.  You probabably don\'t want to use this context for anything else.';
  $context->tag = 'ocg';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ocg-sponsored-research' => 'ocg-sponsored-research',
        'ocg-sponsored-research/getting-started' => 'ocg-sponsored-research/getting-started',
        'ocg-sponsored-research/proposal-preparation-submission' => 'ocg-sponsored-research/proposal-preparation-submission',
        'ocg-sponsored-research/award-review-acceptance' => 'ocg-sponsored-research/award-review-acceptance',
        'ocg-sponsored-research/award-management' => 'ocg-sponsored-research/award-management',
        'ocg-sponsored-research/award-closeout' => 'ocg-sponsored-research/award-closeout',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-award-menu' => array(
          'module' => 'menu',
          'delta' => 'award-menu',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ocg');
  t('strictly to place OCG AWARD Lifecycle Menu on respective OCG pages.  You probabably don\'t want to use this context for anything else.');
  $export['ocg_award_lifecycle_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide-minus-internal';
  $context->description = 'Shows on the entire site except for internal';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~internal' => '~internal',
        '~internal/*' => '~internal/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-vcr_main-menu' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'secondary-menu',
          'region' => 'secondary-navigation',
          'weight' => '-10',
        ),
        'menu_block-vcr_menu-main-subnav' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_menu-main-subnav',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu_block-main-menu-secondary-links-subnav' => array(
          'module' => 'menu_block',
          'delta' => 'main-menu-secondary-links-subnav',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows on the entire site except for internal');
  $export['sitewide-minus-internal'] = $context;

  return $export;
}
