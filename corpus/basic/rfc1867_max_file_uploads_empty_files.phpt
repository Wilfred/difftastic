<?php
var_dump($_FILES);
var_dump($_POST);
if (is_uploaded_file($_FILES["file1"]["tmp_name"])) {
	var_dump(file_get_contents($_FILES["file1"]["tmp_name"]));
}
if (is_uploaded_file($_FILES["file4"]["tmp_name"])) {
	var_dump(file_get_contents($_FILES["file4"]["tmp_name"]));
}
?>
--EXPECTF--
array(4) {
  ["file2"]=>
  array(5) {
    ["name"]=>
    string(0) ""
    ["type"]=>
    string(0) ""
    ["tmp_name"]=>
    string(0) ""
    ["error"]=>
    int(4)
    ["size"]=>
    int(0)
  }
  ["file3"]=>
  array(5) {
    ["name"]=>
    string(0) ""
    ["type"]=>
    string(0) ""
    ["tmp_name"]=>
    string(0) ""
    ["error"]=>
    int(4)
    ["size"]=>
    int(0)
  }
  ["file4"]=>
  array(5) {
    ["name"]=>
    string(9) "file4.txt"
    ["type"]=>
    string(15) "text/plain-file"
    ["tmp_name"]=>
    string(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(0)
  }
  ["file1"]=>
  array(5) {
    ["name"]=>
    string(9) "file1.txt"
    ["type"]=>
    string(15) "text/plain-file"
    ["tmp_name"]=>
    string(%d) "%s"
    ["error"]=>
    int(0)
    ["size"]=>
    int(1)
  }
}
array(0) {
}
string(1) "1"
string(0) ""
