<?php
  class myclass
  {
      const myConst = "hello";
      const myConst = "hello again";
  }
?>
--EXPECTF--

Fatal error: Cannot redefine class constant myclass::myConst in %s on line 5
