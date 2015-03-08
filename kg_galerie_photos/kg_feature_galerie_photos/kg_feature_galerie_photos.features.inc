<?php
/**
 * @file
 * kg_feature_galerie_photos.features.inc
 */

/**
 * Implements hook_node_info().
 */
function kg_feature_galerie_photos_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Galerie photo'),
      'base' => 'node_content',
      'description' => t('Contient des photos liées à un thème'),
      'has_title' => '1',
      'title_label' => t('Nom de la galerie'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
