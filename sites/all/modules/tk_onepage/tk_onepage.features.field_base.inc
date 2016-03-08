<?php
/**
 * @file
 * tk_onepage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tk_onepage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_section'
  $field_bases['field_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tk_onepage',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'section_onepage',
  );

  return $field_bases;
}
