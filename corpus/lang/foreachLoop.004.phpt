<?php

$a=array("a", "b", "c");
$v=array();
foreach($a as $v[0]) {
	var_dump($v);
}
var_dump($a);
var_dump($v);

echo "\n";
$a=array("a", "b", "c");
$v=array();
foreach($a as $k=>$v[0]) {
	var_dump($k, $v);
}
var_dump($a);
var_dump($k, $v);
?>
