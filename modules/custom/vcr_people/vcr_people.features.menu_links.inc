<?php
/**
 * @file
 * vcr_people.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vcr_people_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: secondary-menu:contact-us
  $menu_links['secondary-menu:contact-us'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'contact-us',
    'router_path' => 'contact-us',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'VCR Contact Page',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');


  return $menu_links;
}
