<?php
/**
 * @file
 * Admin forms
 */

function islandora_altmetrics_admin_form($form, &$form_state) {
  $form['islandora_altmetrics_badge'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Badge'),
    '#description' => t('Name of the badge style to use when displaying the Altmetrics information.'),
    '#default_value' => variable_get('islandora_altmetrics_badge', 'Default'),
  );

  $form['islandora_altmetrics_popover'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Popover'),
    '#description' => t('Popover direction for extra information.'),
    '#default_value' => variable_get('islandora_altmetrics_popover', 'right'),
  );
  return system_settings_form($form);
}
