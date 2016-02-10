<?php

/**
 * @file
 * Entity Class for immoklink Image gallery Entity.
 */

/**
 * This Class represents an Image gallery Entity.
 */
class immoklinkImagegallery extends Entity {

  /**
   * Unique ID of the imagegallery.
   *
   * @var Integer
   */
  public $imagegallery_id;

  /**
   * Revision ID of the Image gallery.
   *
   * @var Integer
   */
  public $revision_id;

  /**
   * Title of the Image gallery.
   *
   * @var String
   */
  public $title;

  /**
   * UNIX timestamp with the creation date of the Image gallery.
   *
   * @var Integer
   */
  public $created;

  /**
   * UNIX timestamp with the last time the Image gallery was updated.
   *
   * @var Integer
   */
  public $updated;

  /**
   * @param array $values
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'immoklink_imagegallery');

    // If is_new is not set, and it's a new Image gallery, set is_new to TRUE.
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
    // If creating a new Image gallery, add created time.
    if ($this->isNew()) {
      $this->created = time();
      $this->default_revision = TRUE;
    } else {
      $this->is_new = FALSE;
      $this->is_new_revision = TRUE;
    }
    // Updated time is always added.
    $this->updated = time();

    parent::save();
  }

  /**
   * @static
   * @param $imagegallery_id
   * @param bool $reset
   * @return bool|immoklinkImagegallery
   */
  public static function load($imagegallery_id, $reset = FALSE) {
    $imagegallery_id = array($imagegallery_id);

    $imagegallery = entity_load('immoklink_imagegallery', $imagegallery_id, array(), $reset);
    if ($imagegallery) {
      return current($imagegallery);
    }
    return FALSE;
  }

  public static function loadMultiple($imagegallery_ids = array(), $reset = FALSE) {
    return entity_load('immoklink_imagegallery', $imagegallery_ids, array(), $reset);
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
  public function getImagegalleryId() {
    return $this->imagegallery_id;
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
   * Returns the full url() for the imagegallery.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the drupal path to this imagegallery.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  /**
   * Implements Entity::defaultUri();
   */
  public function defaultUri() {
    return array('path' => 'imagegallery/' . $this->imagegallery_id);
  }

  public function defaultLabel() {
    return $this->label;
  }
}
