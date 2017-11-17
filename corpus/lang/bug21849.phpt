<?php
class foo {
	const bar = "fubar\n";
	
	function __construct($arg = self::bar) {
		echo $arg;
	}
}

new foo();
?>
