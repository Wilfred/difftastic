==========
Catching an exception thrown from an included file
==========

<?php

try {
	include "inc_throw.inc";
} catch (Exception $e) {
	echo "caught exception\n";
}

?>

---
