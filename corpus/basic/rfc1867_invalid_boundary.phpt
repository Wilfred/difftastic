==========
rfc1867 invalid boundary
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
Warning: Invalid boundary in multipart/form-data POST data in %s
array(0) {
}
array(0) {
}
