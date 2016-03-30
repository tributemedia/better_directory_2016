<?php
/**
 * @file
 * better_directory_2016.features.inc
 */

/**
 * Implements hook_views_api().
 */
function better_directory_2016_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function better_directory_2016_image_default_styles() {
  $styles = array();

  // Exported image style: directory_image.
  $styles['directory_image'] = array(
    'name' => 'directory_image',
    'label' => 'directory_image',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '400',
          'height' => '400',
        ),
        'weight' => '-8',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function better_directory_2016_node_info() {
  $items = array(
    'directory_entry' => array(
      'name' => t('Directory Entry'),
      'base' => 'node_content',
      'description' => t('Create an entry for the Directory content type.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
