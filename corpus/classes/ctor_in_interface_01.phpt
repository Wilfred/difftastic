<?php
interface constr
{
	function __construct();
}

class implem implements constr
{
	function __construct($a)
	{
	}
}

?>
--EXPECTF--
Fatal error: Declaration of implem::__construct($a) must be compatible with constr::__construct() in %s on line %d
