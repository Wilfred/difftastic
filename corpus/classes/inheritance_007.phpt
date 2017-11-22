==========
Ensure inherited old-style constructor doesn't block other methods
==========

<?php
class A {
  public function B () { echo "In " . __METHOD__ . "\n"; }
  public function A () { echo "In " . __METHOD__ . "\n"; }
}
class B extends A { }

$rc = new ReflectionClass('B');
var_dump($rc->getMethods());


$b = new B();
$b->a();
$b->b();

?>
--EXPECTF--
Deprecated: Methods with the same name as their class will not be constructors in a future version of PHP; A has a deprecated constructor in %s on line %d
array(2) {
  [0]=>
  object(ReflectionMethod)#%d (2) {
    ["name"]=>
    string(1) "B"
    ["class"]=>
    string(1) "A"
  }
  [1]=>
  object(ReflectionMethod)#%d (2) {
    ["name"]=>
    string(1) "A"
    ["class"]=>
    string(1) "A"
  }
}
In A::A
In A::A
In A::B
