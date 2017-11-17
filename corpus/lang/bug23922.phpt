<?php
  class foo
  {
    public $foo = 1;

    function as_string()
    { assert('$this->foo == 1'); }

    function as_expr()
    { assert($this->foo == 1); }
  }

  $foo = new foo();
  $foo->as_expr();
  $foo->as_string();
?>
--EXPECTF--
Deprecated: assert(): Calling assert() with a string argument is deprecated in %s on line %d
