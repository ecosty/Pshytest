<div class="row white-bg round-corners20 gray-border">
  <div class="twelve columns">
    <?php
        $login_block = module_invoke('user', 'block_view', 'login');  
        print render($login_block);
    ?>
  </div>
</div>