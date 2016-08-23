<?php
/**
 * @file
 * vcr_people.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vcr_people_strongarm() {
  $export = array();

  /*
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_person';
  $strongarm->value = '[node:field_person_first_name] [node:field_person_last_name]';
  $export['ant_pattern_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_person';
  $strongarm->value = '1';
  $export['ant_person'] = $strongarm;
  */

  return $export;
}
