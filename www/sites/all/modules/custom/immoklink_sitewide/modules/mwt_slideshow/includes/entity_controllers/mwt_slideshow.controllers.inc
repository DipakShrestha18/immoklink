<?php

/**
 * @file
 * Controller Class for 'mwt_slideshow' entities.
 */

/**
 * Controls the interaction of a MWT slideshow with the system.
 */
class MWTSlideshowController extends EntityAPIController {

  /**
   * Overrides EntityAPIController::save().
   *
   * @param $transaction
   *   Optionally a DatabaseTransaction object to use. Allows overrides to pass
   *   in their transaction object.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $entity_is_new = $entity->isNew();

    if (!$entity_is_new) {
      $entity->unchanged_entity = entity_load_unchanged($entity->entityType(), $entity->identifier());
    }

    try {
      // Let the Entity API store the actual Slideshow data.
      parent::save($entity, $transaction);

    }
    catch (Exception $e) {
      // TODO: Probably want more detail in this dblog entry than added by the
      // Entity API by default.
    }
  }

  /**
   * Overrides EntityAPIController::delete().
   *
   * @param $transaction
   *   Optionally a DatabaseTransaction object to use. Allows overrides to pass
   *   in their transaction object.
   */
  public function delete($ids, DatabaseTransaction $transaction = NULL) {
    try {
      // Let Entity API do its stuff.
      parent::delete($ids, $transaction);

      // All went well, do whatever we want now...
    }
    catch (Exception $e) {
    }
  }

}
