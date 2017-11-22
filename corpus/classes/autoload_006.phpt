==========
ZE2 Autoload from destructor
==========

<?php

spl_autoload_register(function ($class_name) {
	require_once(dirname(__FILE__) . '/' . strtolower($class_name) . '.p5c');
	echo 'autoload(' . $class_name . ")\n";
});

var_dump(interface_exists('autoload_interface', false));
var_dump(class_exists('autoload_implements', false));

$o = new Autoload_Implements;
var_dump($o);
var_dump($o instanceof autoload_interface);
unset($o);

var_dump(interface_exists('autoload_interface', false));
var_dump(class_exists('autoload_implements', false));

?>
===DONE===
--EXPECTF--
bool(false)
bool(false)
autoload(autoload_interface)
autoload(Autoload_Implements)
object(autoload_implements)#%d (0) {
}
bool(true)
bool(true)
bool(true)
===DONE===
