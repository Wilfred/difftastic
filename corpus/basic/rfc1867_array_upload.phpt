<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(1) {
  ["file"]=>
  array(5) {
    ["name"]=>
    array(3) {
      [0]=>
      string(9) "file1.txt"
      [2]=>
      string(9) "file2.txt"
      [3]=>
      string(9) "file3.txt"
    }
    ["type"]=>
    array(3) {
      [0]=>
      string(16) "text/plain-file1"
      [2]=>
      string(16) "text/plain-file2"
      [3]=>
      string(16) "text/plain-file3"
    }
    ["tmp_name"]=>
    array(3) {
      [0]=>
      string(%d) "%s"
      [2]=>
      string(%d) "%s"
      [3]=>
      string(%d) "%s"
    }
    ["error"]=>
    array(3) {
      [0]=>
      int(0)
      [2]=>
      int(0)
      [3]=>
      int(0)
    }
    ["size"]=>
    array(3) {
      [0]=>
      int(1)
      [2]=>
      int(1)
      [3]=>
      int(1)
    }
  }
}
array(0) {
}
