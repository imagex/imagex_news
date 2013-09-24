<?php
/**
 * @file
 * imagex_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create imagex_news content.
  $permissions['create imagex_news content'] = array(
    'name' => 'create imagex_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any imagex_news content.
  $permissions['delete any imagex_news content'] = array(
    'name' => 'delete any imagex_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own imagex_news content.
  $permissions['delete own imagex_news content'] = array(
    'name' => 'delete own imagex_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any imagex_news content.
  $permissions['edit any imagex_news content'] = array(
    'name' => 'edit any imagex_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own imagex_news content.
  $permissions['edit own imagex_news content'] = array(
    'name' => 'edit own imagex_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
