<?php
interface constr
{
	function __construct();
}

class implem implements constr
{
	function __construct()
	{
	}
}

class derived extends implem
{
	function __construct($a)
	{
	}
}

?>
--EXPECTF--
Fatal error: Declaration of derived::__construct($a) must be compatible with constr::__construct() in %s on line %d
