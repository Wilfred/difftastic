==========
Test for buffering in core functions with implicit flush off
==========

<?php
$res = var_export("foo1");
echo "\n";
$res = var_export("foo2", TRUE);
echo "\n";
echo $res."\n";
?>

---
