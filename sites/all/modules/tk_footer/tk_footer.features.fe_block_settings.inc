<?php
/**
 * @file
 * tk_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tk_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_copyright'] = array(
    'cache' => -1,
    'css_class' => 'block-copyright',
    'custom' => 0,
    'machine_name' => 'block_copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'modula' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'modula',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_facebook_like'] = array(
    'cache' => -1,
    'css_class' => 'block-fan-page',
    'custom' => 0,
    'machine_name' => 'block_facebook_like',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'modula' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'modula',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_useful_link'] = array(
    'cache' => -1,
    'css_class' => 'block-useful-link',
    'custom' => 0,
    'machine_name' => 'block_useful_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'modula' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'modula',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Useful link',
    'visibility' => 0,
  );

  return $export;
}
