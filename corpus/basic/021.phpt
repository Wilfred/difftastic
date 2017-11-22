==========
Bug #37276 (problems witch $_POST array)
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(1) {
  ["pics"]=>
  array(5) {
    ["name"]=>
    string(12) "bug37276.txt"
    ["type"]=>
    string(10) "text/plain"
    ["tmp_name"]=>
    string(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(9)
  }
}
array(1) {
  ["submitter"]=>
  string(8) "testname"
}
