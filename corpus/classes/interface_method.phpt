<?php

interface if_a {
	function err() {}
}

?>
--EXPECTF--

Fatal error: Interface function if_a::err() cannot contain body %s on line %d
