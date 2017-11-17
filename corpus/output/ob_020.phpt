<?php
print_r(ob_list_handlers());

ob_start();
print_r(ob_list_handlers());

ob_start();
print_r(ob_list_handlers());

ob_end_flush();
print_r(ob_list_handlers());

ob_end_flush();
print_r(ob_list_handlers());
?>
