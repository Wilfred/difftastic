<?php
function my_error_handler($error, $errmsg='', $errfile='', $errline=0, $errcontext='')
{
	echo "$errmsg\n";
	$errcontext = '';
}
                                                                                        
set_error_handler('my_error_handler');

function test()
{
	echo "Undefined index here: '{$data['HTTP_HEADER']}'\n";
}
test();
?>
