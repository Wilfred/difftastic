==========
Operators on overlaoded property reference
==========

<?php
class C {
	function __construct() { $this->bar = str_repeat("1", 2); }
	function &__get($x) { return $this->bar; }
	function __set($x, $v) { $this->bar = $v; }
}
$x = new C;
var_dump(++$x->foo);
$x = new C;
var_dump($x->foo++);
$x = new C;
var_dump($x->foo += 2);
?>

---
