<?php

/**
 * @file
 * VCR themes settings. Oh Yeah!
 *
 * More power!
 */

/**
 * Allow themes to alter the theme-specific settings form.
 *
 * With this hook, themes can alter the theme-specific settings form in any way
 * allowable by Drupal's Forms API, such as adding form elements, changing
 * default values and removing form elements. See the Forms API documentation on
 * api.drupal.org for detailed information.
 *
 * Note that the base theme's form alterations will be run before any sub-theme
 * alterations.
 *
 * @param variable $form
 *   Nested array of form elements that comprise the form.
 * @param array $form_state
 *   A keyed array containing the current state of the form.
 */
function vcr_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['vcr_theme_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('CU Admin Theme Settings'),
  );

  // Color Options are bodacious.
  $form['vcr_theme_settings']['color_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color Options'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['vcr_theme_settings']['color_options']['banner_color'] = array(
    '#type' => 'radios',
    '#title' => t('Banner Color'),
    '#default_value' => theme_get_setting('banner_color', 'vcr') ? theme_get_setting('banner_color', 'vcr') : 'banner-dark',
    '#description' => t('Choose a color that matches your logo graphic.'),
    '#options' => array(
      'banner-white' => t('White'), 'banner-light' => t('Light Grey'), 'banner-dark' => t('Dark Grey'), 'banner-black' => t('Black')),
    '#group' => 'vcr_theme_settings',
  );
}
