<body>
  <?php
    $form = drupal_get_form('user_register_form'); 
    print drupal_render($form);
  ?>
</body>