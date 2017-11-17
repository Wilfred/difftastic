<?php

function handler($errno, $errstr, $errfile, $errline, $context)
{
	echo __FUNCTION__ . "($errstr)\n";
}

set_error_handler('handler');

function foo($x) {
	return "foo";
}

$output = array();
++$output[foo("bar")];

print_r($output);

echo "Done";
?>
