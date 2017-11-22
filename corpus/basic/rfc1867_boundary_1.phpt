==========
rfc1867 boundary 1
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(0) {
}
array(1) {
  ["foobar"]=>
  string(1) "1"
}
