==========
rfc1867 post_max_size
==========

<?php
var_dump($_FILES);
var_dump($_POST);
?>
--EXPECTF--
Warning: POST Content-Length of %d bytes exceeds the limit of 1 bytes in %s
array(0) {
}
array(0) {
}
