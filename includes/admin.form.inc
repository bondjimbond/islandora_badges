<?php
/**
 * @file
 * Admin form functions for Islandora Altmetrics.
 */

/**
 * Admin form for Islandora Badges.
 */
function islandora_badges_admin_form($form, $form_settings) {
  $form['islandora_badges_doi_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('DOI XPath'),
    '#description' => t('MODS XPath for retrieving the DOI.'),
    '#default_value' => variable_get('islandora_badges_doi_xpath', '/mods:mods/mods:identifier[@type="doi"]'),
  );
  return system_settings_form($form);
}
