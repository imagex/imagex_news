<?php
/**
 * @file
 * imagex_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function imagex_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'best-of',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9caa27c7-96f7-44f2-bebf-79420537b4f3',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  return $terms;
}
