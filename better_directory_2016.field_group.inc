<?php
/**
 * @file
 * better_directory_2016.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function better_directory_2016_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|directory_entry|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_location_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|directory_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|node|directory_entry|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '0',
    'children' => array(
      0 => 'field_picture',
      1 => 'field_bio',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_personal|node|directory_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional|node|directory_entry|form';
  $field_group->group_name = 'group_professional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional',
    'weight' => '1',
    'children' => array(
      0 => 'field_title',
      1 => 'field_company',
      2 => 'field_email',
      3 => 'field_phone',
      4 => 'field_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-professional field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_professional|node|directory_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|directory_entry|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '2',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_linkedin',
      3 => 'field_instagram',
      4 => 'field_google_plus',
      5 => 'field_pinterest',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social|node|directory_entry|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Location');
  t('Personal');
  t('Professional');
  t('Social');

  return $field_groups;
}
