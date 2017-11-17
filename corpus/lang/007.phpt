<?php
error_reporting(0);
$a = 10;

function Test()
{
	static $a=1;
	global $b;
	$c = 1;
	$b = 5;
	echo "$a $b ";
	$a++;
	$c++;
	echo "$a $c ";
}

Test();	
echo "$a $b $c ";
Test();	
echo "$a $b $c ";
Test();
?>
