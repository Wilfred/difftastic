<?php

error_reporting(E_ALL);

$arr = array('foo' => 'bar');
echo "$arr['foo']";

?>
--EXPECTF--
Parse error: %s error, %s(T_STRING)%s(T_VARIABLE)%s(T_NUM_STRING)%sin %sbug21820.php on line %d
