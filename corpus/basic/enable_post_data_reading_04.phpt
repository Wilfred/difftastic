<?php
var_dump($_FILES);
var_dump($_POST);
var_dump($HTTP_RAW_POST_DATA);
var_dump(file_get_contents("php://input"));
var_dump(file_get_contents("php://input"));
--EXPECTF--
array(0) {
}
array(0) {
}

Notice: Undefined variable: HTTP_RAW_POST_DATA in %s on line %d
NULL
string(9) "a=1&b=ZYX"
string(9) "a=1&b=ZYX"
