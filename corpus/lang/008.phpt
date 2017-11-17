<?php

function Test()
{
	static $a=1;
	echo "$a ";	
	$a++;
	if($a<10): Test(); endif;
}

Test();

?>
