==========
Class constant whose initial value references a non-existent class
==========

<?php
  class C
  {
      const c1 = D::hello;
  }
  
  $a = new C();
?>
--EXPECTF--
Fatal error: Class 'D' not found in %s on line %d
