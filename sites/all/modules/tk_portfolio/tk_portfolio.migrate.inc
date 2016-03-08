<?php

/**
 * @file
 *  Migrations for tk_blog.
 */
class ThemeskiPortfolio extends ThemeskiMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import Portfolio nodes.');

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
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'tk_portfolio') . '/import/portfolio.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('portfolio', array('text_format' => 'full_html'));

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_portfolio_body', 'body');
    $this->addFieldMapping('field_portfolio_body:summary', 'excerpt');

    $this->addFieldMapping('field_portfolio_description', 'description');

    $this->addFieldMapping('field_portfolio_category', 'category')->separator(', ');
    $this->addFieldMapping('field_portfolio_category:create_term')
      ->defaultValue(TRUE);
    // Images
    $this->addFieldMapping('field_portfolio_image', 'images')->separator(', ');
    $this->addFieldMapping('field_portfolio_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_portfolio_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'tk_portfolio') . '/import/images');

    $this->addFieldMapping('field_portfolio_link', 'link');
    $this->addFieldMapping('field_portfolio_link:title', 'title_link');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title", "Images", "Tags", "Body"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('images', 'Images');
    $columns[2] = array('category', 'Category');
    $columns[3] = array('body', 'Body');
    $columns[4] = array('description', 'Description');
    $columns[5] = array('link','Link');
    $columns[6] = array('title_link','Tlink');
    return $columns;
  }
}
