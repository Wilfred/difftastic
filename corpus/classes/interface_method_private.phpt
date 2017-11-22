==========
ZE2 An interface method cannot be private
==========

<?php

interface if_a {
	abstract private function err();
}

?>
--EXPECTF--

Fatal error: Access type for interface method if_a::err() must be omitted in %s on line %d
