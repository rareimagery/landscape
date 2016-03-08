<?php
/**
 * @file
 * tk_contact.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tk_contact_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_body_webform'
  $field_bases['field_body_webform'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_body_webform',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
