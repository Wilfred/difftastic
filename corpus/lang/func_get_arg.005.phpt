==========
A variable, which is referenced by another variable, is passed by value.
==========

<?php
function refVal($x) {
	global $a;
	$a = 'changed.a';
	var_dump($x);
	var_dump(func_get_arg(0));
}

$a = "original.a";
$ref =& $a;
refVal($a);
?>
--EXPECTF--
string(10) "original.a"
string(10) "original.a"
