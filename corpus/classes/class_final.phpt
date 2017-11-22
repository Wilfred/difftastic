==========
ZE2 A final class cannot be inherited
==========

<?php

final class base {
	function show() {
		echo "base\n";
	}
}

$t = new base();

class derived extends base {
}

echo "Done\n"; // shouldn't be displayed
?>
--EXPECTF--
Fatal error: Class derived may not inherit from final class (base) in %s on line %d
