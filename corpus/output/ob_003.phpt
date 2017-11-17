<?php
ob_start();
echo "foo\n";
ob_flush();
echo "bar\n";
ob_flush();
?>
