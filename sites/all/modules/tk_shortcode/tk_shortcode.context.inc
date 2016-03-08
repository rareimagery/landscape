<?php
/**
 * @file
 * tk_shortcode.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tk_shortcode_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shortcode';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'styleguide' => 'styleguide',
        'shortcode2' => 'shortcode2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-19',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'content',
          'weight' => '-18',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content',
          'weight' => '-17',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'content',
          'weight' => '-16',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content',
          'weight' => '-14',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'content',
          'weight' => '-13',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'content',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['shortcode'] = $context;

  return $export;
}
