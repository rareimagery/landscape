<?php

/**
 * @file
 * Contains the list style plugin.
 */

/**
 * Style plugin to render each item in a slideshow of an ordered or unordered list.
 *
 * @ingroup views_style_plugins
 */
class views_superslide_plugin_style_slideshow extends views_plugin_style {

  // Set default options
  function option_definition() {
    $options = parent::option_definition();
    $options['effect'] = array('default' => 'leftLoop');
    $options['autoPlay'] = array('default' => 1);
    $options['vis'] = array('default' => 3);
    $options['trigger'] = array('default' => 'click');

    return $options;

  }

  // Build the settings form for the view.
  function options_form(&$form, &$form_state) {
    $effect = array(
      'leftLoop' => 'leftLoop',
      'topLoop' => 'topLoop',
      'fade' => 'fade',
      'slideDown' => 'slideDown',

    );
    $form['effect'] = array(
      '#title' => t('Effect'),
      '#type' => 'select',
      '#options' => $effect,
    );
    $form['autoPlay'] = array(
      '#title' => t('AutoPlay'),
      '#type' => 'select',
      '#options' => array('No','Yes'),
    );
    $form['vis'] = array(
      '#title' => t('Items visibility'),
      '#type' => 'textfield',
    );
    $form['trigger'] = array(
      '#title' => t('Tringger'),
      '#type' => 'select',
      '#options' => array('click' => 'Click'),
    );
  }

  // Run any validation on the form settings.
  function options_validate(&$form, &$form_state) {
    
  }

  // Run any necessary actions on submit.
  function options_submit(&$form, &$form_state) {
    
  }
  public function pre_render($result) {
    drupal_add_css(drupal_get_path('module', 'views_superslide') . '/css/views-superslide.css');
    drupal_add_js(drupal_get_path('module', 'views_superslide') . '/js/superslide.2.1.js');
    drupal_add_js(drupal_get_path('module', 'views_superslide') . '/js/views-superslide.js');
  }
  /**
   * Render the display in this style.
   */
  public function render() {
    $output = '';
    if (parent::uses_fields()) {
      $output = parent::render();
    }
    $superslide_id = 'views-superslide-' . $this->view->name .'-' . $this->view->current_display;
    $view_settings['effect'] = 'leftLoop';
    $view_settings['autoPlay'] = TRUE;
    $view_settings['vis'] = '3';
    $view_settings['autoPage'] = TRUE;
    $view_settings['trigger'] = 'click';
    
    $view_settings['display'] = $this->view->current_display;
    $view_settings['viewname'] = $this->view->name;

    drupal_add_js(array('views_superslide' => array($superslide_id => $view_settings)), 'setting');
    return $output;
  }
}
