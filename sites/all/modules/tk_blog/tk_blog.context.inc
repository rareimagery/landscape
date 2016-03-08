<?php
/**
 * @file
 * tk_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tk_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_post';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog_post:page' => 'blog_post:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-nodequeue_2-block' => array(
          'module' => 'views',
          'delta' => 'nodequeue_2-block',
          'region' => 'top_panel',
          'weight' => '-9',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_category-block' => array(
          'module' => 'views',
          'delta' => 'blog_category-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'quicktabs-quicktab_blog' => array(
          'module' => 'quicktabs',
          'delta' => 'quicktab_blog',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_firstcolumn',
          'weight' => '-10',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'footer_secondcolumn',
          'weight' => '-10',
        ),
        'views-blog_post-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_post-block_2',
          'region' => 'footer_thirdcolumn',
          'weight' => '-9',
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
  $export['blog_post'] = $context;

  return $export;
}
