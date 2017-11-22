==========
Test HTTP_RAW_POST_DATA with excessive post length
==========

<?php
var_dump($_POST, $HTTP_RAW_POST_DATA);
?>
--EXPECTF--
Warning: Unknown: POST Content-Length of 2050 bytes exceeds the limit of 1024 bytes in Unknown on line 0

Warning: Cannot modify header information - headers already sent in Unknown on line 0

Notice: Undefined variable: HTTP_RAW_POST_DATA in %s on line %d
array(0) {
}
NULL
