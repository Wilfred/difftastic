==========
Bug #38579 (include_once() may include the same file twice)
==========

<?php
$file = dirname(__FILE__)."/bug38579.inc";
include_once(strtolower($file));
include_once(strtoupper($file));
?>

---
