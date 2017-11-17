<?php

class testClass {
  const TEST_CONST = 'test';
  const TEST_CONST = 'test1';
  
  function testClass() {
    echo self::TEST_CONST;
  }
}

$test = new testClass;

?>
--EXPECTF--
Fatal error: Cannot redefine class constant testClass::TEST_CONST in %s on line 5
