==========
Bug #23524 (Improper handling of constants in array indices)
==========

<?php
  echo "Begin\n";
  define("THE_CONST",123);
  function f($a=array(THE_CONST=>THE_CONST)) {
    print_r($a);
  }
  f();
  f();
  f();
  echo "Done";
?>

---
