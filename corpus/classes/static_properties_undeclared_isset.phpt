==========
Issetting a non-existent static property
==========

<?php
Class C {}
var_dump(isset(C::$p));
?>
--EXPECTF--
bool(false)
