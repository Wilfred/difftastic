<?php
var_dump(ini_set("open_basedir", "/usr/local/bin"));
var_dump(ini_get("open_basedir"));
var_dump(ini_set("open_basedir", "/usr"));
var_dump(ini_get("open_basedir"));
?>
