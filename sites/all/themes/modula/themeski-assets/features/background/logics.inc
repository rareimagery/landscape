<?php 
function modula_get_backgrounds() {
  $theme_name = 'modula';
  $path_to_theme = drupal_get_path('theme', $theme_name);
  $images_1 = file_scan_directory($path_to_theme.'/themeski-assets/images/patterns', '/^.*\.(png|jpg|jpge|gif|bmp|PNG|JPG|JPGE|GIF|BMP)$/');
  
  $path_to_files =  file_stream_wrapper_get_instance_by_uri('public://')->getDirectoryPath();
  $images_2 = file_scan_directory($path_to_files.'/bg/patterns', '/^.*\.(png|jpg|jpge|gif|bmp|PNG|JPG|JPGE|GIF|BMP)$/'); 
  
  $images = array_merge($images_1, $images_2);
  
  return $images;
}
//Get images background form upload
function modula_get_backgrounds_bg() {
  $theme_name = 'modula';
  $path_to_theme = drupal_get_path('theme', $theme_name);
  $images_1 = file_scan_directory($path_to_theme.'/themeski-assets/images/background', '/^.*\.(png|jpg|jpge|gif|bmp|PNG|JPG|JPGE|GIF|BMP)$/');

  $path_to_files =  file_stream_wrapper_get_instance_by_uri('public://')->getDirectoryPath();
  $images_2 = file_scan_directory($path_to_files.'/bg/thumb', '/^.*\.(png|jpg|jpge|gif|bmp|PNG|JPG|JPGE|GIF|BMP)$/'); 

  $images = array_merge($images_1, $images_2);

  return $images;
}

/**
 * Save settings data.
 */
function modula_settings_submit($form, &$form_state) {
  
  // Check for a new uploaded file, and use that if available.
  if ($file = file_save_upload('upload_pattern')) {
    $destination = 'public://bg/patterns/';
    modula_save_patterns_image($file, $destination);
  }

  if ($file = file_save_upload('upload_bg')) {
    modula_save_bg_image($file);
  }
}

function modula_save_bg_image($file, $bg_folder = 'public://bg/full/', $bg_thumb_folder = 'public://bg/thumb/') {
  // Check directory and create it (if not exist)
  modula_check_dir($bg_folder);
  modula_check_dir($bg_thumb_folder);

  $parts = pathinfo($file->filename);
  $destination = $bg_folder . $parts['basename'];
  $setting = array();

  $file->status = FILE_STATUS_PERMANENT;
  
  // Copy temporary image into slide folder
  if ($img = file_copy($file, $destination, FILE_EXISTS_REPLACE)) {
    // Generate image thumb
    $image = image_load($destination);
    $small_img = image_scale($image, 300, 100);
    $image->source = $bg_thumb_folder . $parts['basename'];
    image_save($image);

  }
  
  return FALSE;
}
//function save images background
function modula_save_patterns_image($file, $destination) {
  // Check directory and create it (if not exist)
  modula_check_dir($destination);
  $destination .= $file->filename;
  $file->status = FILE_STATUS_PERMANENT;
  
  file_copy($file, $destination, FILE_EXISTS_REPLACE);
  
  
  return FALSE;
}

/**
 * Check if folder is available or create it.
 *
 * @param <string> $dir
 *    Folder to check
 */
function modula_check_dir($dir) {
  // Normalize directory name
  $dir = file_stream_wrapper_uri_normalize($dir);

  // Create directory (if not exist)
  file_prepare_directory($dir,  FILE_CREATE_DIRECTORY);
}
