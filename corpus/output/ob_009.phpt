==========
output buffering - ob_get_flush
==========

<?php
ob_start();
echo "foo\n";
var_dump(ob_get_flush());
?>

---
