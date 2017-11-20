==========
rfc1867 missing boundary
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
Warning: Missing boundary in multipart/form-data POST data in %s
array(0) {
}
array(0) {
}
