<?php
/**
 * @file
 * tk_portfolio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tk_portfolio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_portfolio-1-column:portfolio-1-col
  $menu_links['main-menu_portfolio-1-column:portfolio-1-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-1-col',
    'router_path' => 'portfolio-1-col',
    'link_title' => 'Portfolio 1 column',
    'options' => array(
      'identifier' => 'main-menu_portfolio-1-column:portfolio-1-col',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-3-cols',
  );
  // Exported menu link: main-menu_portfolio-3-columns:portfolio-3-cols
  $menu_links['main-menu_portfolio-3-columns:portfolio-3-cols'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-3-cols',
    'router_path' => 'portfolio-3-cols',
    'link_title' => 'Portfolio 3 Columns',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-3-columns:portfolio-3-cols',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-3-cols',
  );
  // Exported menu link: main-menu_portfolio:portfolio-3-cols
  $menu_links['main-menu_portfolio:portfolio-3-cols'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-3-cols',
    'router_path' => 'portfolio-3-cols',
    'link_title' => 'Portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio:portfolio-3-cols',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Portfolio');
  t('Portfolio 1 column');
  t('Portfolio 3 Columns');


  return $menu_links;
}
