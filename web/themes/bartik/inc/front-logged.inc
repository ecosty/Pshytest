<header>
  <div class="row">
    <div class="  mobile-two columns">
      <h3 class="username">
        <?php
          //load specific fields from the profile2 participant
          $uid = user_load($GLOBALS['user']->uid);
          $profile = profile2_load_by_user($uid);
          
          print $profile['main']->field_primer_nombre['und'][0]['value'] . " " . $profile['main']->field_primer_apellido['und'][0]['value'];
        ?>
      </h3>
    </div>    
  </div>
</header>