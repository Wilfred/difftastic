==========
rfc1867 anonymous upload
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
array(2) {
  [%d]=>
  array(5) {
    ["name"]=>
    %string|unicode%(9) "file1.txt"
    ["type"]=>
    %string|unicode%(16) "text/plain-file1"
    ["tmp_name"]=>
    %string|unicode%(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(1)
  }
  [%d]=>
  array(5) {
    ["name"]=>
    %string|unicode%(9) "file2.txt"
    ["type"]=>
    %string|unicode%(16) "text/plain-file2"
    ["tmp_name"]=>
    %string|unicode%(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(1)
  }
}
array(0) {
}
