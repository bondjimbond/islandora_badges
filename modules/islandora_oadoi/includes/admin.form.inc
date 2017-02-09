<?php
/**
 * @file
 * oaDOI badge admin options
 */
function islandora_oaidoi_admin_form($form, $form_settings) {
  $form['islandora_oai_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Placeholder field'),
    '#description' => t('Placeholder field.'),
    '#default_value' => variable_get('islandora_oai_placeholder', ''),
  );
  return system_settings_form($form);
}
