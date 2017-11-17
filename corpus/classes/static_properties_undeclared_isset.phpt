<?php
Class C {}
var_dump(isset(C::$p));
?>
--EXPECTF--
bool(false)
