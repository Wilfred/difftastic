<?php
$string = "foobar";
var_dump(isset($string{0}{0}[0][0]));
?>
--EXPECTF--
bool(true)

