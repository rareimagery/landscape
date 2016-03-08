<?php
/**
 * @file
 * tk_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tk_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/97' => 'node/97',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'webform-client-block-2' => array(
          'module' => 'webform',
          'delta' => 'client-block-2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_firstcolumn',
          'weight' => '-10',
        ),
        'block-35' => array(
          'module' => 'block',
          'delta' => '35',
          'region' => 'footer_secondcolumn',
          'weight' => '-10',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'footer_thirdcolumn',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'footer_fourthcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact'] = $context;

  return $export;
}
