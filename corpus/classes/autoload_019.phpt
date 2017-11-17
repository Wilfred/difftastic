<?php
spl_autoload_register(function ($name) {
  echo "autoload $name\n";
  class_exists("undefinedCLASS");
});

class_exists("unDefinedClass");
?>
--EXPECTF--
autoload unDefinedClass
