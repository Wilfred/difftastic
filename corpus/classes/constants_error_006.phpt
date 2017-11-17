<?php
  class aclass
  {
      const myConst = "hello";
  }
  
  echo "\nTrying to modify a class constant directly - should be parse error.\n";
  aclass::myConst = "no!!";
  var_dump(aclass::myConst);
?>
--EXPECTF--

Parse error: %s in %s on line %d
