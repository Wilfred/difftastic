==========
ZE2 Ensuring destructor visibility
==========

<?php

class Base {
	private function __destruct() {
		echo __METHOD__ . "\n";
	}
}

class Derived extends Base {
	public function __destruct() {
		echo __METHOD__ . "\n";
	}
}

$obj = new Derived;

unset($obj); // Derived::__destruct is being called not Base::__destruct

?>
===DONE===
--EXPECTF--
Derived::__destruct
===DONE===
