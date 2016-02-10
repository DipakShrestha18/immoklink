<?php

/**
 * @file
 * Entity Class for MWT Slideshow Entity.
 */

/**
 * This Class represents a Slideshow Entity.
 */
class MWTSlideshow extends Entity {

  /**
   * Unique ID of the Slideshow.
   *
   * @var Integer
   */
  public $slideshow_id;

  /**
   * Revision ID of the Slideshow.
   *
   * @var Integer
   */
  public $revision_id;

  /**
   * Title of the Slideshow.
   *
   * @var String
   */
  public $title;

  /**
   * UNIX timestamp with the creation date of the Slideshow.
   *
   * @var Integer
   */
  public $created;

  /**
   * UNIX timestamp with the last time the Slideshow was updated.
   *
   * @var Integer
   */
  public $updated;

  /**
   * @param array $values
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'mwt_slideshow');

    // If is_new is not set, and it's a new Slideshow, set is_new to TRUE.
    if (!isset($this->is_new) && $this->isNew()) {
      $this->is_new = TRUE;
      $this->default_revision = TRUE;
    } else {
      $this->is_new = FALSE;
      $this->is_new_revision = TRUE;
      $this->default_revision = TRUE;
    }

    return $this;
  }

  /**
   * Implements Entity::save().
   */
  public function save() {
    // If creating a new Slideshow, add created time.
    if ($this->isNew()) {
      $this->created = time();
      $this->default_revision = TRUE;
    } else {
      $this->is_new = FALSE;
      $this->is_new_revision = TRUE;
    }
    // Updated time is always added.
    $this->updated = time();

    if (isset($this->field_slideshow_image[LANGUAGE_NONE])) {
      $image_styles = array('fullscreen', 'slideshow');
      foreach($this->field_slideshow_image[LANGUAGE_NONE] as $slideshow_image) {
        $file = file_load($slideshow_image['fid']);
        mwt_sitewide_generate_image_styles_per_image($file, $image_styles);
      }
    }

    parent::save();
  }

  /**
   * @static
   * @param $slideshow_id
   * @param bool $reset
   * @return bool|MWTSlideshow
   */
  public static function load($slideshow_id, $reset = FALSE) {
    $slideshow_id = array($slideshow_id);

    $slideshow = entity_load('mwt_slideshow', $slideshow_id, array(), $reset);
    if ($slideshow) {
      return current($slideshow);
    }
    return FALSE;
  }

  public static function loadMultiple($slideshow_ids = array(), $reset = FALSE) {
    return entity_load('mwt_slideshow', $slideshow_ids, array(), $reset);
  }

  /**
   * Implements Entity::delete().
   */
  public function delete() {
    parent::delete();
  }

  /**
   * @group Getters and Setters.
   */

  /**
   * @return int
   */
  public function getSlideshowId() {
    return $this->slideshow_id;
  }

  /**
   * @return String
   */
  public function getTitle() {
    return $this->title;
  }

  /**
   * @param String $title
   */
  public function setTitle($title) {
    $this->title = $title;
    return $this;
  }

  /**
   * @return int
   */
  public function getCreated() {
    return $this->created;
  }

  /**
   * @param int $created
   */
  public function setCreated($created) {
    $this->created = $created;
    return $this;
  }

  /**
   * @return int
   */
  public function getUpdated() {
    return $this->updated;
  }

  /**
   * @param int $updated
   */
  public function setUpdated($updated) {
    $this->updated = $updated;
    return $this;
  }

  /**
   * Checks whether the entity is a new one or not.
   *
   * @return bool
   */
  public function isNew() {
    return (isset($this->is_new) && $this->is_new) || is_null($this->identifier()) || $this->identifier() == 0;
  }

  /**
   * @endgroup Getters and Setters.
   */

  /**
   * TODO: Finish this.
   *
   * Implements Entity::buildContent().
   */
  public function buildContent($view_mode = 'full', $langcode = NULL) {
    // Get content built by the EntityAPIController, with the attached fields
    // contents.
    $default = parent::buildContent();
    return $default;
  }

  /**
   * Returns the full url() for the slideshow.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the drupal path to this slideshow.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  /**
   * Implements Entity::defaultUri();
   */
  public function defaultUri() {
    return array('path' => 'slideshow/' . $this->slideshow_id);
  }

  public function defaultLabel() {
    return $this->label;
  }
}
