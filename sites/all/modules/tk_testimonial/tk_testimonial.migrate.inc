<?php

/**
 * @file
 *  Migrations for tk_blog.
 */
class ThemeskiTestimonial extends ThemeskiMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import Testimonial nodes.');

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
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'tk_testimonial') . '/import/testimonial.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('testimonial', array('text_format' => 'full_html'));

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_testimonial_quote', 'quote');
    $this->addFieldMapping('field_author_name', 'name');
    $this->addFieldMapping('field_author_image', 'images')->separator(', ');
    $this->addFieldMapping('field_author_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_author_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'tk_testimonial') . '/import/images');
    $this->addFieldMapping('field_author_description', 'description');
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title", "Images", "Tags", "Body"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('quote', 'Quote');
    $columns[2] = array('name', 'Author name');
    $columns[3] = array('images', 'Author image');
    $columns[4] = array('description', 'Author description');

    return $columns;
  }
}
