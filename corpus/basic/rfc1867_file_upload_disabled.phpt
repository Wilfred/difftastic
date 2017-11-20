==========
rfc1867 file_upload disabled
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(0) {
}
array(2) {
  ["foo"]=>
  string(3) "bar"
  ["bar"]=>
  string(3) "foo"
}
