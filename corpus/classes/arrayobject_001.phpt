<?php

$a = new ArrayObject;
$a['foo'] = 'bar';
echo reset($a);
echo count($a);
echo current($a);
?>
