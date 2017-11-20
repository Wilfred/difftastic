==========
ZE2 A final method cannot be abstract
==========

<?php

class fail {
	final abstract function show();
}

echo "Done\n"; // Shouldn't be displayed
?>
--EXPECTF--

Fatal error: Cannot use the final modifier on an abstract class member in %s
