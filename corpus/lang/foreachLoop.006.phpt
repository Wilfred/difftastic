<?php
$a = array("a","b","c");
foreach ($a as &$k=>$v) {
  var_dump($v);
}
?>
--EXPECTF--
Fatal error: Key element cannot be a reference in %s on line 3
