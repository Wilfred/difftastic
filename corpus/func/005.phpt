<?php 

function foo()
{
	print "foo";
}

register_shutdown_function("foo");

print "foo() will be called on shutdown...\n";

?>
