==========
Error case: class constant as an encapsed containing a variable
==========

<?php
  class myclass
  {
      const myConst = "$myVar";
  }
?>
--EXPECTF--
Fatal error: Constant expression contains invalid operations in %s on line %d
