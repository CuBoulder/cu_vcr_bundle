<?php
/**
 * @file
 * vcr_people.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vcr_people_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: secondary-menu.
  $menus['secondary-menu'] = array(
    'menu_name' => 'secondary-menu',
    'title' => 'Quick Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Quick Links');

  return $menus;
}
