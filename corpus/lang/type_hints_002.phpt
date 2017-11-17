<?php
class P { }
class T {
	function f(P $p = NULL) {
		var_dump($p);
		echo "-\n";
	}
}

$o=new T();
$o->f(new P);
$o->f();
$o->f(NULL);
?>
