==========
ZE2 factory and singleton, test 9
==========

<?php
class test {

  protected function __destruct() {
  	echo __METHOD__ . "\n";
  }
}

$obj = new test;

?>
===DONE===
--EXPECTF--
===DONE===

Warning: Call to protected test::__destruct() from context '' during shutdown ignored in Unknown on line 0
