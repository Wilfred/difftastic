==========
output buffering - ob_clean
==========

<?php
ob_start();
echo "foo\n";
ob_clean();
echo "bar\n";
?>

---
