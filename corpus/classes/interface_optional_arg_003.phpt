<?php 
include 'interface_optional_arg_003.inc';

class C implements I {
  function f($a = 2) {
  	var_dump($a);
  }
}

$c = new C;
$c->f();
?>
--EXPECTF--
int(2)
