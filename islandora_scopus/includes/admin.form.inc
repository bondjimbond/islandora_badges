<?php
/**
 * @file
 * Admin forms
 */

function islandora_scopus_admin_form($form, &$form_state) {
  $form['islandora_scopus_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Scopus API Key'),
    '#description' => t('The default key here is for demonstartion purposes only; you need to get your own key.'),
    '#default_value' => variable_get('islandora_scopus_api_key', 'b3a71de2bde04544495881ed9d2f9c5b'),
  );

  return system_settings_form($form);
}