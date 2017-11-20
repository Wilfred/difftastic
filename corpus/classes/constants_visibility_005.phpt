==========
Static constants are not allowed
==========

<?php
class A {
	static const X = 1;
}
?>
--EXPECTF--
Fatal error: Cannot use 'static' as constant modifier in %s on line 3
