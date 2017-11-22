==========
Reading a non-existent static property
==========

<?php
Class C {}
echo C::$p;
?>
--EXPECTF--
Fatal error: Uncaught Error: Access to undeclared static property: C::$p in %s:3
Stack trace:
#0 {main}
  thrown in %s on line 3
