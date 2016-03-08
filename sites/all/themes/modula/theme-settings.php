<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function modula_form_system_theme_settings_alter(&$form, &$form_state) {
	global $base_url;
	/*
	 * Themeski Settings.
	 */
	if (!isset($form['tk'])) {
	  $form['tk'] = array(
	    '#type' => 'vertical_tabs',
	    '#weight' => -100,
	  );

	  // Work-around for a core bug affecting admin themes. See issue #943212.
	  $current_theme_path = drupal_get_path('theme', 'modula');
	  // Load zframe Features
	  foreach (file_scan_directory($current_theme_path . '/themeski-assets/features', '/settings.inc/') as $file) {
	    require($file->uri);
	  }
	  if (isset($form_id)) {
	    return;
	  };
	}

	if (isset($form['zurb_foundation']['topbar'])) {
		unset($form['zurb_foundation']['topbar']);
	}
}
