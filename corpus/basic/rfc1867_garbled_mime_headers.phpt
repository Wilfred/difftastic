==========
rfc1867 garbled mime headers
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
Warning: File Upload Mime headers garbled in %s
array(0) {
}
array(0) {
}
