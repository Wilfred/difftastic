<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(1) {
  ["file1"]=>
  array(5) {
    ["name"]=>
    %string|unicode%(9) "file1.txt"
    ["type"]=>
    %string|unicode%(0) ""
    ["tmp_name"]=>
    %string|unicode%(0) ""
    ["error"]=>
    int(3)
    ["size"]=>
    int(0)
  }
}
array(0) {
}
