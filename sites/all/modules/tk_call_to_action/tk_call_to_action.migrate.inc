<?php

/**
 * @file
 *  Migrations
 */
class ThemeskiCta extends ThemeskiMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import Cta nodes.');
    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'tk_call_to_action') . '/import/cta.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('call_to_action', array('text_format' => 'full_html'));

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_cta_slogan', 'body');
    $this->addFieldMapping('field_cta_link', 'link');
    $this->addFieldMapping('field_cta_link:title', 'tlink');

    // Images
   
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title", "Images", "Tags", "Body"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('link', 'Link');
    $columns[3] = array('tlink', 'Title Link');
    return $columns;
  }
}
