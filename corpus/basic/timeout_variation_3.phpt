==========
Timeout within eval
==========

<?php

include dirname(__FILE__) . DIRECTORY_SEPARATOR . "timeout_config.inc";

set_time_limit($t);

function hello ($t) { 
	echo "call", PHP_EOL; 
	busy_wait($t*2);
}

eval('hello($t);');
?>
never reached here
--EXPECTF--
call

Fatal error: Maximum execution time of 3 seconds exceeded in %s on line %d
