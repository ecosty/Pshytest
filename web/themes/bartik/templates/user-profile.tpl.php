<div class="profile"<?php print $attributes; ?>>
  <?php
    $user_profile['profile_main']['#title'] = 'Datos Personales';
    print render($user_profile['profile_main']); 
  ?>
</div>