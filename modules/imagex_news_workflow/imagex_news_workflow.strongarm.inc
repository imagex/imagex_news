<?php
/**
 * @file
 * imagex_news_workflow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_news_workflow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_imagex_news';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_imagex_news';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_imagex_news';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_imagex_news';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_imagex_news';
  $strongarm->value = 0;
  $export['scheduler_publish_required_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_imagex_news';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_imagex_news';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_imagex_news';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_imagex_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_imagex_news';
  $strongarm->value = 'archived';
  $export['scheduler_unpublish_moderation_state_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_imagex_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_imagex_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_imagex_news';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_imagex_news';
  $strongarm->value = 1;
  $export['workbench_access_node_type_imagex_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_imagex_news';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_imagex_news'] = $strongarm;

  features_alter_code('variable', $export);

  return $export;
}
