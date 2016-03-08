<?php
/**
 * @file
 * tk_shortcode.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tk_shortcode_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'accordion_module_';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Accordion (Module)';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_9',
      'hide_title' => 1,
      'title' => 'Block 1',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_10',
      'hide_title' => 1,
      'title' => 'Block 2',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion (Module)');
  t('Block 1');
  t('Block 2');

  $export['accordion_module_'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'tabs_module_';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Tabs (Module)';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_11',
      'hide_title' => 1,
      'title' => 'Demo 1',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_12',
      'hide_title' => 1,
      'title' => 'Demo 2',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Demo 1');
  t('Demo 2');
  t('Tabs (Module)');

  $export['tabs_module_'] = $quicktabs;

  return $export;
}
