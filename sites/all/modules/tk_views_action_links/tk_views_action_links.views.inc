<?php
// This file must be at mymodule/views directory.

/**
 * @file
 * Views definitions for mymodule module.
 */

/**
 * Implements hook_views_data().
 */
function tk_views_action_links_views_data() {
  $data['views']['actions'] = array(
    'title' => t('TK Action links'),
    'help' => t('Add action links to create node or term.'),
    'area' => array(
      'handler' => 'tk_views_action_links_handler',
    ),
  );
  return $data;
}