<?php

/**
 * @file
 * Provides basic support of mwt_slideshow entity for the Views module.
 */

/**
 * Views definition for MWT Slideshow Entity properties.
 *
 * @see hook_views_data
 */
class MWTSlideshowViewsController extends EntityDefaultViewsController {

  /**
   * Override views_data().
   */
  public function views_data() {
    // Extending this class gives us views integration for the base properties
    // out of the box.
    $data = parent::views_data();

    // $this->info, contains the metadata defined in hook_entity_info(), so we
    // fetch the base table from there, to define the 'created' and
    // 'updated' column handlers.
    $data[$this->info['base table']]['created'] = array(
      'title' => t('Created'),
      'help' => t('Created date.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    );
    $data[$this->info['base table']]['updated'] = array(
      'title' => t('Updated'),
      'help' => t('Updated date.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    );

    return $data;
  }
}
