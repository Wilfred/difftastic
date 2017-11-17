<?php
class FooBar { static function error() { debug_print_backtrace(); } }
set_error_handler(array('FooBar', 'error'));
include('foobar.php');
?>
--EXPECTREGEX--
.*#1\s*include.*
