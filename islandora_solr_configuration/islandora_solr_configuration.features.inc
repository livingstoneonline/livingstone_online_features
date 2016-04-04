<?php
/**
 * @file
 * islandora_solr_configuration.features.inc
 */

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function islandora_solr_configuration_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'mods_titleInfo_title_s',
    'field_type' => 'sort_fields',
    'weight' => -12,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'mods_titleInfo_title_hlt',
    'field_type' => 'result_fields',
    'weight' => -12,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_originInfo_dateCreated_hlt',
    'field_type' => 'result_fields',
    'weight' => -11,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  3 => array(
    'solr_field' => 'mods_originInfo_encoding_iso8601_dateCreated_dt',
    'field_type' => 'sort_fields',
    'weight' => -11,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'creator_s',
    'field_type' => 'sort_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'creator_s',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  6 => array(
    'solr_field' => 'mods_originInfo_type_normalized_dateOther_t',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'addressee_s',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Addressee',
      'permissions' => FALSE,
    ),
  ),
  8 => array(
    'solr_field' => 'addressee_s',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Addressee',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  9 => array(
    'solr_field' => 'mods_name_personal_creator_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_originInfo_place_placeTerm_text_s',
    'field_type' => 'sort_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Place Created',
      'permissions' => FALSE,
    ),
  ),
  12 => array(
    'solr_field' => 'mods_originInfo_place_placeTerm_text_hlt',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Place Created',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  13 => array(
    'solr_field' => 'mods_physicalDescription_extent_pages_s',
    'field_type' => 'sort_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Extent (pages)',
      'permissions' => FALSE,
    ),
  ),
  14 => array(
    'solr_field' => 'mods_physicalDescription_extent_pages_hlt',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Extent (pages)',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  15 => array(
    'solr_field' => 'mods_physicalDescription_extent_mm_s',
    'field_type' => 'sort_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Extent (size)',
      'permissions' => FALSE,
    ),
  ),
  16 => array(
    'solr_field' => 'mods_physicalDescription_extent_mm_hlt',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Extent (size)',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  17 => array(
    'solr_field' => 'genre_s',
    'field_type' => 'sort_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => FALSE,
    ),
  ),
  18 => array(
    'solr_field' => 'genre_s',
    'field_type' => 'result_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  19 => array(
    'solr_field' => 'repository_s',
    'field_type' => 'sort_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Repository / Shelfmark',
      'permissions' => FALSE,
    ),
  ),
  20 => array(
    'solr_field' => 'repository_s',
    'field_type' => 'result_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Repository / Shelfmark',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  21 => array(
    'solr_field' => 'mods_identifier_local_NLS_copy_identifier_s',
    'field_type' => 'sort_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Copy of Item',
      'permissions' => FALSE,
    ),
  ),
  22 => array(
    'solr_field' => 'mods_identifier_local_NLS_copy_identifier_hlt',
    'field_type' => 'result_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Copy of Item',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  23 => array(
    'solr_field' => 'otherVersions_s',
    'field_type' => 'sort_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Other Versions',
      'permissions' => FALSE,
    ),
  ),
  24 => array(
    'solr_field' => 'otherVersions_s',
    'field_type' => 'result_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Other Versions',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  25 => array(
    'solr_field' => 'mods_identifier_local_Canonical_Catalog_Number_s',
    'field_type' => 'sort_fields',
    'weight' => -1,
    'solr_field_settings' => array(
      'label' => 'C&C Catalogue Number',
      'permissions' => FALSE,
    ),
  ),
  26 => array(
    'solr_field' => 'mods_identifier_local_Canonical_Catalog_Number_hlt',
    'field_type' => 'result_fields',
    'weight' => -1,
    'solr_field_settings' => array(
      'label' => 'C&C Catalogue Number',
      'snippet' => 1,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}
