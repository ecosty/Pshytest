<?php
  
  /*
   * Función dedicada a customizar los alters para vualquier form.
   */
  function pshytest_helper_form_alter(&$form, &$form_state, $form_id) {
    
    //Si el form es la creación de un evento.
    if ($form_id == 'evento_node_form') {         
         $form['field_codigo_evento']['und'][0]['value']['#default_value'] = _randomString();
         $form['field_codigo_evento']['und'][0]['value']['#attributes'] = array('disabled' => 'disabled');
    }
    
    //Si el form es el registro de un usuario.
    if ($form_id == 'user_register_form') {    
      
      $form['account']['name']['#title'] = 'Número de Cédula';
      $form['account']['name']['#description'] = '';
      
      $form['account']['mail']['#title'] = 'Correo Electrónico';
      $form['account']['mail']['#description'] = '';
      $form['account']['pass']['#description'] = '';
    }
    
    // The language selector is only displayed if there is more than one language.
    if (drupal_multilingual()) {
      if ($form_id == 'user_register_form' || ($form_id == 'user_profile_form' && $form['#user_category'] == 'account')) {
        if (count(element_children($form['locale'])) > 1) {
          $form['locale']['language']['#access'] = FALSE;
        }
        else {
          $form['locale']['#access'] = FALSE;
        }
      }
    }
  }
  
  /*
   * Función local que permite obtener un código alphanumérico para ser utilizado al momento de la creación del evento.
   */
  function _randomString() {
    $str = '';
    
    for ($i = 0; $i < 4; $i++) {
      $str .= chr(mt_rand(65, 90));
    }
    
    for ($i = 0; $i < 3; $i++) {
      $str .= mt_rand(0, 9);
    }
    
    return strtoupper($str);
  }
  