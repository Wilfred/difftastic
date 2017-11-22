==========
Testing eval function inside user-defined function
==========

<?php 
function F ($a) { 
	eval($a);
}

error_reporting(0);
F("echo \"Hello\";");
?>

---
