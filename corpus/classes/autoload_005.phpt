==========
ZE2 Autoload from destructor
==========

<?php

spl_autoload_register(function ($class_name) {
	var_dump(class_exists($class_name, false));
	require_once(dirname(__FILE__) . '/' . $class_name . '.p5c');
	echo 'autoload(' . $class_name . ")\n";
});

var_dump(class_exists('autoload_derived', false));
var_dump(class_exists('autoload_derived', false));

class Test
{
    function __destruct() {
        echo __METHOD__ . "\n";
        $o = new autoload_derived;
        var_dump($o);
    }
}

$o = new Test;
unset($o);

?>
===DONE===
--EXPECTF--
bool(false)
bool(false)
Test::__destruct
bool(false)
bool(false)
autoload(autoload_root)
autoload(autoload_derived)
object(autoload_derived)#%d (0) {
}
===DONE===
