<?php

function foo($a)
{
	var_dump(func_get_args());	
}
foo(1, 2, 3);

?>
