<?php
	define("A", "1");
	static $a=array(A => 1);
	var_dump($a);
	var_dump(isset($a[A]));
?>
