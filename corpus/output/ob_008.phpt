==========
output buffering - ob_get_contents
==========

<?php
ob_start();
echo "foo\n";
echo ob_get_contents();
?>

---
