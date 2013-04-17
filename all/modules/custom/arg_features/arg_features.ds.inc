<?php
/**
 * @file
 * arg_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function arg_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|arg_aplicatie|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'arg_aplicatie';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'butoane' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
  );
  $export['node|arg_aplicatie|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|arg_bursa|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'arg_bursa';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'butoane' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
    'referinta_univ' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
    'referinta_fac' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
  );
  $export['node|arg_bursa|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|arg_facultate|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'arg_facultate';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'butoane' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
    'referinta_univ' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
  );
  $export['node|arg_facultate|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|arg_sesiune|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'arg_sesiune';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'butoane' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
    'referinta_univ' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
  );
  $export['node|arg_sesiune|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|arg_universitate|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'arg_universitate';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'butoane' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'node_title_nolink_h1',
    ),
  );
  $export['node|arg_universitate|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function arg_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|arg_aplicatie|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'arg_aplicatie';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'butoane',
      ),
      'left' => array(
        1 => 'referinta_sesiune',
        2 => 'scrisoare_intentie',
      ),
    ),
    'fields' => array(
      'butoane' => 'right',
      'referinta_sesiune' => 'left',
      'scrisoare_intentie' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|arg_aplicatie|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|arg_bursa|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'arg_bursa';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'facultate_partenera',
        1 => 'conditii',
        2 => 'descriere_bursa',
      ),
      'right' => array(
        3 => 'butoane',
        4 => 'referinta_univ',
        5 => 'referinta_fac',
      ),
    ),
    'fields' => array(
      'facultate_partenera' => 'left',
      'conditii' => 'left',
      'descriere_bursa' => 'left',
      'butoane' => 'right',
      'referinta_univ' => 'right',
      'referinta_fac' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|arg_bursa|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|arg_facultate|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'arg_facultate';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'logo',
        1 => 'mail',
        2 => 'telefon',
        3 => 'adresa',
        4 => 'culoare_fundal',
        5 => 'pseudonim',
        6 => 'descriere',
      ),
      'right' => array(
        7 => 'referinta_univ',
        8 => 'butoane',
      ),
    ),
    'fields' => array(
      'logo' => 'left',
      'mail' => 'left',
      'telefon' => 'left',
      'adresa' => 'left',
      'culoare_fundal' => 'left',
      'pseudonim' => 'left',
      'descriere' => 'left',
      'referinta_univ' => 'right',
      'butoane' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|arg_facultate|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|arg_sesiune|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'arg_sesiune';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'stare',
      ),
      'right' => array(
        1 => 'perioada',
        2 => 'butoane',
        3 => 'referinta_univ',
      ),
    ),
    'fields' => array(
      'stare' => 'left',
      'perioada' => 'right',
      'butoane' => 'right',
      'referinta_univ' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|arg_sesiune|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|arg_universitate|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'arg_universitate';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'logo',
        1 => 'mail',
        2 => 'telefon',
        3 => 'adresa',
        4 => 'culoare_fundal',
        5 => 'pseudonim',
        7 => 'descriere',
      ),
      'right' => array(
        6 => 'butoane',
      ),
    ),
    'fields' => array(
      'logo' => 'left',
      'mail' => 'left',
      'telefon' => 'left',
      'adresa' => 'left',
      'culoare_fundal' => 'left',
      'pseudonim' => 'left',
      'butoane' => 'right',
      'descriere' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|arg_universitate|default'] = $ds_layout;

  return $export;
}
