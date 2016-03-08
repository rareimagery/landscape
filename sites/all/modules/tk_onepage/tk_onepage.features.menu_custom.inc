<?php
/**
 * @file
 * tk_onepage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tk_onepage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-one-page.
  $menus['menu-one-page'] = array(
    'menu_name' => 'menu-one-page',
    'title' => 'One page',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('One page');


  return $menus;
}
