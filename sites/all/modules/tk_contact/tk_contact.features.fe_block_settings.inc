<?php
/**
 * @file
 * tk_contact.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tk_contact_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_contact_info'] = array(
    'cache' => -1,
    'css_class' => 'block-contact-info large-4 medium-4 left',
    'custom' => 0,
    'machine_name' => 'block_contact_info',
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
    'title' => 'Contact Info',
    'visibility' => 0,
  );

  $export['block-block_map'] = array(
    'cache' => -1,
    'css_class' => 'block-map',
    'custom' => 0,
    'machine_name' => 'block_map',
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

  return $export;
}
