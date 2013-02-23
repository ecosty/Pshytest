<body>
    <?php
      if ($GLOBALS['user']->uid != 0) {
        include_once drupal_get_path('theme', 'bartik') . '/inc/front-logged.inc';
      }
      else{
        include_once drupal_get_path('theme', 'bartik') . '/inc/front.inc';
      } ?>
</body>