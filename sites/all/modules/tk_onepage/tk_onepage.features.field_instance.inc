<?php
/**
 * @file
 * tk_onepage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tk_onepage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-one_page-field_section'
  $field_instances['node-one_page-field_section'] = array(
    'bundle' => 'one_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tk_onepage',
        'settings' => array(),
        'type' => 'section_onepage_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tk_onepage',
      'settings' => array(),
      'type' => 'section_onepage_section_onepagefield_form',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');

  return $field_instances;
}
