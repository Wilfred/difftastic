==========
enable_post_data_reading: rfc1867
==========

<?php
var_dump($_FILES);
var_dump($_POST);
var_dump(file_get_contents("php://input"));
var_dump(file_get_contents("php://input"));
--EXPECTF--
array(0) {
}
array(0) {
}
string(%d) "-----------------------------20896060251896012921717172737
Content-Disposition: form-data; name="file1"; filename="file1.txt"
Content-Type: text/plain-file

1
-----------------------------20896060251896012921717172737--"
string(%d) "-----------------------------20896060251896012921717172737
Content-Disposition: form-data; name="file1"; filename="file1.txt"
Content-Type: text/plain-file

1
-----------------------------20896060251896012921717172737--"
