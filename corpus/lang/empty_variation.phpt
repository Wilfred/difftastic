==========
empty() on array elements
==========

<?php
$a=array('0','empty'=>'0');
var_dump(empty($a['empty']));
var_dump(empty($a[0]));
$b='0';
var_dump(empty($b));
?>

---
