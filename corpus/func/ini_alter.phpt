<?php
ini_alter('error_reporting', 1);
$var = ini_get('error_reporting');
var_dump($var);
ini_alter('error_reporting', 0);
$var = ini_get('error_reporting');
var_dump($var);
?>
