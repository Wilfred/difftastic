==========
testing the behavior of string offset chaining
==========

<?php
$string = "foobar";
var_dump($string{0}{0}[0][0]);
?>
--EXPECTF--
string(1) "f"

