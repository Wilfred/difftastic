<?php

interface if_a {
	public $member;
}
?>
--EXPECTF--
Fatal error: Interfaces may not include member variables in %s on line %d
