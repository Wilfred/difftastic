==========
Bug #24908 (super-globals can not be used in __destruct())
==========

<?php
class test { 
	function __construct() {
		if (count($_SERVER)) echo "O";
	}
	function __destruct() {
		if (count($_SERVER)) echo "K\n";
	}
}
$test = new test();
?>

---
