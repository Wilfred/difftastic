==========
ZE2 Autoload and get_class_methods
==========

<?php

spl_autoload_register(function ($class_name) {
	require_once(dirname(__FILE__) . '/' . $class_name . '.p5c');
	echo 'autoload(' . $class_name . ")\n";
});

var_dump(get_class_methods('autoload_root'));

?>
===DONE===

---
