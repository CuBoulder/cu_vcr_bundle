<?php

/**
 * @file
 * VCR Template file
 */

/**
 * Preprocess theme variables for a specific theme hook.
 *
 * This hook allows modules to preprocess theme variables for a specific theme
 * hook. It should only be used if a module needs to override or add to the
 * theme preprocessing for a theme hook it didn't define.
 *
 * For more detailed information, see theme().
 *
 * @param array $vars
 *   The variables array (modify in place).
 */
function vcr_preprocess_html(&$vars) {
  // Remove show-grid class.
  unset($vars['classes_array'][array_search('show-grid', $vars['classes_array'])]);
  
  unset($css[drupal_get_path('theme', 'cu_bootstrap') . '/styles/images.css']);

  // Add CSS for logo background.
  $logo = theme_get_setting('logo');
  $logo_css = "#branding h1 a, #branding #logo a { background-image:url(" . check_url($logo) . "); }";
  $options = array(
    'type' => 'inline',
    'group' => CSS_THEME);
  drupal_add_css($logo_css, $options);

  $banner_color = theme_get_setting('banner_color');
  $vars['classes_array'][] = $banner_color;

  // Add fonts.
  $font_set = theme_get_setting('fonts');
  $font_path = drupal_get_path('theme', 'cu_bootstrap');
  if ($font_set) {
    drupal_add_css($font_path . '/fonts/' . $font_set . '.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  }
}


/**
 * Preprocess theme variables for a specific theme block.
 *
 * This is mostly to hide the titles of blocks that are buttons.
 *
 * @param array &$vars
 *   An array of variables to pass to the theme template.
 *
 * @return void
 *   Void where prohibited
 */
function vcr_preprocess_block(&$vars) {
  if ($vars['block']->delta == 'footer_content') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'iacuc_button_investigator') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'ocg_button_contact_us') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'iacuc_button_researcher') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'iacuc_button_era') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'button_irb_policies') {
    $vars['block']->subject = '<none>';
  }
  elseif ($vars['block']->delta == 'award-menu') {
    $vars['block']->subject = 'AWARD LIFECYCLE';
  }
  elseif (preg_match("/^footer_button_/", $vars['block']->subject)) {
    $vars['block']->subject = '<none>';
  }
}

/**
 * Preprocessor for theme('node_form').
 *
 * This hook allows modules to preprocess theme variables for a specific theme
 * hook. It should only be used if a module needs to override or add to the
 * theme preprocessing for a theme hook it didn't define.
 *
 * For more detailed information, see theme().
 *
 * @param array $vars
 *   The variables array (modify in place).
 */
function vcr_preprocess_form_node(&$vars) {
  // Put our page right sidebar fields
  // into the node edit/add form's right sidebar.
  if ($vars['form']['#node']->type == 'page') {
    if (isset($vars['form']['field_right_sidebar'])) {
      $right = array(
        'exclude_node_title',
        'field_right_sidebar',
        'field_override_right_sidebar',
        'field_inner_content',
        'field_header',
        'field_footer',
      );
      foreach ($right as $r) {
        $vars['sidebar'][$r] = $vars['form'][$r];
        unset($vars['form'][$r]);
      }
    }
  }
}
