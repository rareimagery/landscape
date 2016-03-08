<?php
/**
 * @file
 * tk_portfolio.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tk_portfolio_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio_detail';
  $context->description = '';
  $context->tag = 'Node detail';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'portfolio' => 'portfolio',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block_2' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_2',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node detail');
  $export['portfolio_detail'] = $context;

  return $export;
}
