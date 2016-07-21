<?php
/**
 * @file
 * Admin form functions for Islandora Altmetrics.
 */

/**
 * Admin form for Islandora Badges.
 */
function islandora_badges_admin_form($form, $form_settings) {
  $form['islandora_badges_altmetrics_badge'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Badge'),
    '#description' => t('Name of the badge style to use when displaying the Altmetrics information.'),
    '#default_value' => variable_get('islandora_badges_altmetrics_badge', 'Default'),
  );
  $form['islandora_badges_altmetrics_popover'] = array(
    '#type' => 'textfield',
    '#title' => t('Altmetrics Popover'),
    '#description' => t('Popover direction for extra information.'),
    '#default_value' => variable_get('islandora_badges_altmetrics_popover', 'right'),
  );
  $form['islandora_badges_scopus_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Scopus API Key'),
    '#description' => t('The default key here is for demonstartion purposes only; you need to get your own key.'),
    '#default_value' => variable_get('islandora_badges_scopus_api_key', 'b3a71de2bde04544495881ed9d2f9c5b'),
  );
    $form['islandora_badges_wos_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Web of Science Developer Key'),
    '#description' => t('The default key here is for demonstartion purposes only; you need to get your own key.'),
    '#default_value' => variable_get('islandora_badges_wos_api_key', 'ASD7GRswkggAUrmuIVn9MGwmGYEYtG6C'),
  $form['islandora_badges_doi_xpath'] = array(
    '#type' => 'textfield',
    '#title' => t('DOI XPath'),
    '#description' => t('MODS XPath for retrieving the DOI.'),
    '#default_value' => variable_get('islandora_badges_doi_xpath', '/mods:mods/mods:identifier[@type="doi"]'),
  );
  return system_settings_form($form);
}
