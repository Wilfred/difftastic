==========
Bug #26866 (segfault when exception raised in __get)
==========

<?php
class bar {
	function get_name() {
		return 'bar';
	}
}
class foo {
	function __get($sName) {
		throw new Exception('Exception!');
		return new bar();
	}
}
$foo = new foo();
try {
	echo $foo->bar->get_name();
}
catch (Exception $E) {
	echo "Exception raised!\n";
}
?>

---
