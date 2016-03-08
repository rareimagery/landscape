<?php
/**
 * @file
 * tk_call_to_action.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_call_to_action_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tk_call_to_action_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('Call to action'),
      'base' => 'node_content',
      'description' => t('A basic call to action block has description and a button link'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
