<?php
/**
 * @file
 * imagex_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function imagex_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:imagex_news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'imagex_news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'one_fw_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e4191fdd-b1d7-47d1-89ae-7dbe6536a81c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66c9e029-935b-468c-838b-469faba8f9da';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'news',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66c9e029-935b-468c-838b-469faba8f9da';
    $display->content['new-66c9e029-935b-468c-838b-469faba8f9da'] = $pane;
    $display->panels['one_fw_main'][0] = 'new-66c9e029-935b-468c-838b-469faba8f9da';
    $pane = new stdClass();
    $pane->pid = 'new-c1a3a16f-09b2-4e51-b214-ae6da3b0ad12';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'title',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1a3a16f-09b2-4e51-b214-ae6da3b0ad12';
    $display->content['new-c1a3a16f-09b2-4e51-b214-ae6da3b0ad12'] = $pane;
    $display->panels['one_fw_main'][1] = 'new-c1a3a16f-09b2-4e51-b214-ae6da3b0ad12';
    $pane = new stdClass();
    $pane->pid = 'new-5deb782c-40dd-47f5-bb94-4fd813f524b0';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5deb782c-40dd-47f5-bb94-4fd813f524b0';
    $display->content['new-5deb782c-40dd-47f5-bb94-4fd813f524b0'] = $pane;
    $display->panels['one_fw_main'][2] = 'new-5deb782c-40dd-47f5-bb94-4fd813f524b0';
    $pane = new stdClass();
    $pane->pid = 'new-830f4260-dc42-4695-af58-100df9157cee';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '830f4260-dc42-4695-af58-100df9157cee';
    $display->content['new-830f4260-dc42-4695-af58-100df9157cee'] = $pane;
    $display->panels['one_fw_main'][3] = 'new-830f4260-dc42-4695-af58-100df9157cee';
    $pane = new stdClass();
    $pane->pid = 'new-9d2a191a-e28f-4551-9a0b-42e991614431';
    $pane->panel = 'one_fw_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Comment count',
      'title' => '',
      'body' => '<a href="#comments" class="comment-count"><span class="comments-icon"></span>%node:comment-count</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9d2a191a-e28f-4551-9a0b-42e991614431';
    $display->content['new-9d2a191a-e28f-4551-9a0b-42e991614431'] = $pane;
    $display->panels['one_fw_main'][4] = 'new-9d2a191a-e28f-4551-9a0b-42e991614431';
    $pane = new stdClass();
    $pane->pid = 'new-e8cf70ba-e65a-494a-a613-06386fea6526';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e8cf70ba-e65a-494a-a613-06386fea6526';
    $display->content['new-e8cf70ba-e65a-494a-a613-06386fea6526'] = $pane;
    $display->panels['one_fw_main'][5] = 'new-e8cf70ba-e65a-494a-a613-06386fea6526';
    $pane = new stdClass();
    $pane->pid = 'new-91f846a6-85e8-4ee0-b98e-65f07fab801d';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '91f846a6-85e8-4ee0-b98e-65f07fab801d';
    $display->content['new-91f846a6-85e8-4ee0-b98e-65f07fab801d'] = $pane;
    $display->panels['one_fw_main'][6] = 'new-91f846a6-85e8-4ee0-b98e-65f07fab801d';
    $pane = new stdClass();
    $pane->pid = 'new-e2952672-fec8-4fa6-a3f3-e02faefc9677';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Comments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comments',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e2952672-fec8-4fa6-a3f3-e02faefc9677';
    $display->content['new-e2952672-fec8-4fa6-a3f3-e02faefc9677'] = $pane;
    $display->panels['one_fw_main'][7] = 'new-e2952672-fec8-4fa6-a3f3-e02faefc9677';
    $pane = new stdClass();
    $pane->pid = 'new-a40fc026-9261-47a2-9ff2-bc9d42cce460';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a40fc026-9261-47a2-9ff2-bc9d42cce460';
    $display->content['new-a40fc026-9261-47a2-9ff2-bc9d42cce460'] = $pane;
    $display->panels['one_fw_main'][8] = 'new-a40fc026-9261-47a2-9ff2-bc9d42cce460';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:imagex_news:default'] = $panelizer;

  features_alter_code('panelizer_defaults', $export);

  return $export;
}
