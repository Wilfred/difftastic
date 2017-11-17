<?php
ob_start();
echo "foo\n";
var_dump(ob_get_clean());
?>
