<?php
  print render($form['profile_main']['field_primer_nombre']);
  print render($form['profile_main']['field_segundo_nombre']);
  print render($form['profile_main']['field_primer_apellido']);
  print render($form['profile_main']['field_segundo_apellido']);
  print render($form['account']['name']);
  print render($form['profile_main']['field_codigo_evento_pertenece']);
  print render($form['account']['mail']);
  print render($form['account']['pass']);
  
  print drupal_render($form['actions']);
  print drupal_render($form['form_build_id']);
  print drupal_render($form['form_id']);
?>