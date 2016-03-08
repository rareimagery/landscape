<?php
/**
 * @file
 * tk_onepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tk_onepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'one_page';
  $context->description = '';
  $context->tag = 'One Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/122' => 'node/122',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-onepage-122' => array(
          'module' => 'menu',
          'delta' => 'menu-onepage-122',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-91' => array(
          'module' => 'block',
          'delta' => '91',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('One Page');
  $export['one_page'] = $context;

  return $export;
}
