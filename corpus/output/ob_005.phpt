<?php
ob_start();
echo "foo\n";
ob_start();
echo "bar\n";
ob_end_clean();
echo "baz\n";
?>
