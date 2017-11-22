==========
Error case: class constant as an array
==========

<?php
  class myclass
  {
      const myConst = array();
  }
?>
===DONE===
--EXPECTF--
===DONE===
