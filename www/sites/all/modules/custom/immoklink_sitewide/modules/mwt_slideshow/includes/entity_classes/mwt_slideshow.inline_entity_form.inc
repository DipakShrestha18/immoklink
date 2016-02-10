<?php

/**
 * @file
 * Defines the inline entity form controller for Speakers.
 */

class SlideshowInlineEntityFormController extends EntityInlineEntityFormController {

  /**
   * Overrides EntityInlineEntityFormController::labels().
   */
  public function labels() {
    $labels = array(
      'singular' => t('Slideshow'),
      'plural' => t('Slideshows'),
    );
    return $labels;
  }

  /**
   * Overrides EntityInlineEntityFormController::defaultFields().
   */
  public function defaultFields($bundles) {
    $fields = array();
    $fields['title'] = array(
      'type' => 'property',
      'label' => t('Title'),
      'visible' => TRUE,
      '#weight' => 0,
    );

    return $fields;
  }

  /**
   * Overrides EntityInlineEntityFormController::entityForm().
   */
  public function entityForm($entity_form, &$form_state) {

    $slideshow = $entity_form['#entity'];

    $entity_form['slideshow'] = array(
      '#type' => 'value',
      '#value' => $slideshow,
    );

    $title = $slideshow->title;
    $entity_form['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#required' => TRUE,
      '#default_value' => $title,
    );

    // Add the field slideshow form elements.
    field_attach_form('mwt_slideshow', $slideshow, $entity_form, $form_state);
    return $entity_form;
  }

  /**
   * Overrides EntityInlineEntityFormController::entityFormValidate().
   */
  public function entityFormValidate($entity_form, &$form_state) {
    $slideshow = $entity_form['#entity'];
    field_attach_form_validate('mwt_slideshow', $slideshow, $entity_form, $form_state);
  }

  /**
   * Overrides EntityInlineEntityFormController::entityFormValidate().
   */
  public function entityFormSubmit(&$entity_form, &$form_state) {
    $entity = entity_get_info($this->entityType);
    parent::entityFormSubmit($entity_form, $form_state);
    $entity_instance = $entity_form['#entity'];
    $context = array(
      'parent_entity_type' => $this->entityType,
      'parent_entity' => $entity,
    );
    $this->save($entity_instance, $context);
  }

  /**
   * Overrides EntityInlineEntityFormController::save().
   */
  public function save($entity, $context) {
    $entity->save();
  }
}
