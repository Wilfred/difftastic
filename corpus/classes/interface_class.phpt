==========
ZE2 A class can only implement interfaces
==========

<?php
class base {
}
	
class derived implements base {
}
?>
--EXPECTF--
Fatal error: derived cannot implement base - it is not an interface in %s on line %d
