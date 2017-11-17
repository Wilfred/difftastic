<?php
function f($arg1, &$arg2)
{
	var_dump($arg1++);
	var_dump($arg2++);
}

function g (&$arg1, &$arg2)
{
	var_dump($arg1);
	var_dump($arg2);
}
$a = 7;
$b = 15;

f($a, $b);

var_dump($a);
var_dump($b);

$c=array(1);
g($c,$c[0]);

?>
