==========
Dynamic access of static members
==========

<?php
class A {
    public    static $b = 'foo';
}

$classname       =  'A';
$wrongClassname  =  'B';

echo $classname::$b."\n";
echo $wrongClassname::$b."\n";

?>
===DONE===
--EXPECTF--
foo

Fatal error: Uncaught Error: Class 'B' not found in %s041.php:%d
Stack trace:
#0 {main}
  thrown in %s041.php on line %d
