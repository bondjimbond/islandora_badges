<?php
/**
 * @file
 * Utility functions
 */

/**
 * Find a DOI in the MODS record and return it.
 * @param \AbstractObject $object
 *    The Fedora object.
 * @return string
 *    The DOI or FALSE
 */
function islandora_badges_get_doi(AbstractObject $object) {
  // Get DOI.
  if (!isset($object['MODS'])) {
    return FALSE;
  }
  $doc = new DOMDocument();
  $doc->loadXML($object['MODS']->content);
  $xpath = new DOMXPath($doc);
  $xpath->registerNamespace('mods', 'http://www.loc.gov/mods/v3');
  $xpath_results = $xpath->query(
    variable_get('islandora_badges_doi_xpath', '/mods:mods/mods:identifier[@type="doi"]')
  );
  if ($xpath_results->length == 0) {
    return FALSE;
  }
  $doi = $xpath_results->item(0)->nodeValue;
  if (!$doi) {
    return FALSE;
  }
  return $doi;
}