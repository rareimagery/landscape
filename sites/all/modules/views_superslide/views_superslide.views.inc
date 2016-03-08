<?php

/**
 * @file
 * Defines the View Style Plugins for Views Slideshow module.
 */

/**
 * Implements hook_views_plugins().
 */
function views_superslide_views_plugins() {
  return array(
    'style' => array(
      'superslide' => array(
        'title' => t('Super Slideshow'),
        'help' => t('Display the results as a superslide.'),
        'handler' => 'views_superslide_plugin_style_slideshow',
        'uses options' => TRUE,
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses row class' => TRUE,
        'type' => 'normal',
        'path' => drupal_get_path('module', 'views_superslide'),
        'theme' => 'views_superslide',
      ),
    ),
  );
}
