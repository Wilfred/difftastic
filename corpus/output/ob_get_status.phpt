<?php
ob_start();
$status = ob_get_status(true);
ob_end_clean();
var_dump($status);
?>
