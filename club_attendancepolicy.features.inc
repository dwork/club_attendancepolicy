<?php
/**
 * @file
 * club_attendancepolicy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_attendancepolicy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function club_attendancepolicy_node_info() {
  $items = array(
    'attendance_configuration' => array(
      'name' => t('Attendance Policy'),
      'base' => 'node_content',
      'description' => t('Configuration parameters for attendance reporting'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
