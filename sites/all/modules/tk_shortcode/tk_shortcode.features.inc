<?php
/**
 * @file
 * tk_shortcode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_shortcode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
