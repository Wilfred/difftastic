<?php

class fail {
	abstract final function show();
}

echo "Done\n"; // Shouldn't be displayed
?>
--EXPECTF--

Fatal error: Cannot use the final modifier on an abstract class member in %s on line %d
