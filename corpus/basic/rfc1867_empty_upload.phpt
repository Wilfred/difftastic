==========
rfc1867 empty upload
==========

<?php
var_dump($_FILES);
var_dump($_POST);
if (is_uploaded_file($_FILES["file1"]["tmp_name"])) {
	var_dump(file_get_contents($_FILES["file1"]["tmp_name"]));
}
if (is_uploaded_file($_FILES["file3"]["tmp_name"])) {
	var_dump(file_get_contents($_FILES["file3"]["tmp_name"]));
}
?>
--EXPECTF--
array(3) {
  ["file1"]=>
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
  ["file2"]=>
  array(5) {
    ["name"]=>
    %string|unicode%(0) ""
    ["type"]=>
    %string|unicode%(0) ""
    ["tmp_name"]=>
    %string|unicode%(0) ""
    ["error"]=>
    int(4)
    ["size"]=>
    int(0)
  }
  ["file3"]=>
  array(5) {
    ["name"]=>
    %string|unicode%(9) "file3.txt"
    ["type"]=>
    %string|unicode%(16) "text/plain-file3"
    ["tmp_name"]=>
    %string|unicode%(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(1)
  }
}
array(1) {
  ["foo"]=>
  string(0) ""
}
string(1) "1"
string(1) "3"
