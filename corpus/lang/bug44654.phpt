==========
Bug #44654 (syntax error for #)
==========

#<?php echo 1; ?>
<?php if (1) { ?>#<?php } ?>
#<?php echo 1; ?>

