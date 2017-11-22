==========
func_get_args with variable number of args
==========

<?php

function foo($a)
{
	var_dump(func_get_args());	
}
foo(1, 2, 3);

?>

---
