==========
Error messages are shown
==========

<?php
// If this test fails ask the developers of run-test.php
$error = 1 / 0;
?>
--EXPECTREGEX--
.*Division by zero.*
