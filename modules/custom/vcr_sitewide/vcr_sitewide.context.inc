<?php
/**
 * @file
 * vcr_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vcr_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pc2tr40fz12bx';
  $context->description = 'Sitewide context - name hashed for security by obscurity.';
  $context->tag = 'locked';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'google_appliance-ga_block_search_form' => array(
          'module' => 'google_appliance',
          'delta' => 'ga_block_search_form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
        'bean-researcher_bean' => array(
          'module' => 'bean',
          'delta' => 'researcher_bean',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-institutes_bean' => array(
          'module' => 'bean',
          'delta' => 'institutes_bean',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'bean-centers_bean' => array(
          'module' => 'bean',
          'delta' => 'centers_bean',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'bean-computing_bean' => array(
          'module' => 'bean',
          'delta' => 'computing_bean',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'menu_block-vcr_content-footer-funding' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_content-footer-funding',
          'region' => 'footer_menus',
          'weight' => '-10',
        ),
        'menu_block-vcr_content-footer-ocg' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_content-footer-ocg',
          'region' => 'footer_menus',
          'weight' => '-9',
        ),
        'menu_block-vcr_content-footer-ori' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_content-footer-ori',
          'region' => 'footer_menus',
          'weight' => '-8',
        ),
        'menu_block-vcr_content-footer-hr' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_content-footer-hr',
          'region' => 'footer_menus',
          'weight' => '-7',
        ),
        'menu_block-vcr_content-footer-resources' => array(
          'module' => 'menu_block',
          'delta' => 'vcr_content-footer-resources',
          'region' => 'footer_menus',
          'weight' => '-6',
        ),
        'menu-education-menu' => array(
          'module' => 'menu',
          'delta' => 'education-menu',
          'region' => 'footer_menus',
          'weight' => '-5',
        ),
        'bean-footer_content' => array(
          'module' => 'bean',
          'delta' => 'footer_content',
          'region' => 'site_info',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context - name hashed for security by obscurity.');
  t('locked');
  $export['pc2tr40fz12bx'] = $context;

  return $export;
}
