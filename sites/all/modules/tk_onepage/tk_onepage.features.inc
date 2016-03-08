<?php
/**
 * @file
 * tk_onepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_onepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tk_onepage_node_info() {
  $items = array(
    'one_page' => array(
      'name' => t('One Page'),
      'base' => 'node_content',
      'description' => t('Use for creating a single page landing or sales page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
