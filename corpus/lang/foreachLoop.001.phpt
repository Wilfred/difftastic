<?php

$a = array("a","b","c");

foreach ($a as $v) {
	var_dump($v);
}
foreach ($a as $k => $v) {
	var_dump($k, $v);
}
//check key and value after the loop.
var_dump($k, $v);

echo "\n";
//Dynamic array
foreach (array("d","e","f") as $v) {
	var_dump($v);
}
foreach (array("d","e","f") as $k => $v) {
	var_dump($k, $v);
}
//check key and value after the loop.
var_dump($k, $v);

echo "\n";
//Ensure counter is advanced during loop
$a=array("a","b","c");
foreach ($a as $v);
var_dump(current($a));
$a=array("a","b","c");
foreach ($a as &$v);
var_dump(current($a));

?>
