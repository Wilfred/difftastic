<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(1) {
  ["file"]=>
  array(5) {
    ["name"]=>
    array(1) {
      [0]=>
      string(9) "file1.txt"
    }
    ["type"]=>
    array(1) {
      [0]=>
      string(16) "text/plain-file1"
    }
    ["tmp_name"]=>
    array(1) {
      [0]=>
      string(%d) "%s"
    }
    ["error"]=>
    array(1) {
      [0]=>
      int(0)
    }
    ["size"]=>
    array(1) {
      [0]=>
      int(1)
    }
  }
}
array(0) {
}
