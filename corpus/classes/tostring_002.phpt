==========
ZE2 __toString() in __destruct
==========

<?php

class Test
{
	function __toString()
	{
		return "Hello\n";
	}
	
	function __destruct()
	{
		echo $this;
	}
}

$o = new Test;
$o = NULL;

$o = new Test;

?>
====DONE====
--EXPECTF--
Hello
====DONE====
Hello
