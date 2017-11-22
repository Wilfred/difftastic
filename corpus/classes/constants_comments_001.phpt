==========
Class constants and doc comments
==========

<?php
class X {
	/** comment X1 */	
	const X1 = 1;
	const X2 = 2;
	/** comment X3 */	
	const X3 = 3;
}
class Y extends X {
	/** comment Y1 */	
	const Y1 = 1;
	const Y2 = 2;
	/** comment Y3 */	
	const Y3 = 3;
}
$r = new ReflectionClass('Y');
foreach ($r->getReflectionConstants() as $rc) {
	echo $rc->getName() . " : " . $rc->getDocComment() . "\n";
}


?>

---
