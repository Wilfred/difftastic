<?php
	var_dump(-2147483647 % -1);
	var_dump(-2147483649 % -1);
	var_dump(-2147483648 % -1);
	var_dump(-2147483648 % -2);
?>
--EXPECTF--
int(%i)
int(%i)
int(%i)
int(%i)
