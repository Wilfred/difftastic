<?php
	$foo = create_function('$s', 'return strtoupper($s);');
	ob_start($foo);
	echo $foo("bar\n");
?>
bar
--EXPECTF--

Deprecated: Function create_function() is deprecated in %s on line %d
BAR
BAR
