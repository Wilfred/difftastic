<?php

class base {
}

class derived extends base {
	abstract function show();
}

?>
===DONE===
<?php exit(0); ?>
--EXPECTF--

Fatal error: Class derived contains 1 abstract method and must therefore be declared abstract or implement the remaining methods (derived::show) in %sabstract_derived.php on line %d
