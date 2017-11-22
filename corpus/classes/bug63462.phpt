==========
Test script to verify that magic methods should be called only once when accessing an unset property.
==========

<?php
class Test {
	public    $publicProperty;
	protected $protectedProperty;
	private   $privateProperty;

	public function __construct() {
		unset(
			$this->publicProperty,
			$this->protectedProperty,
			$this->privateProperty
		);
	}

	function __get($name) {
		echo '__get ' . $name;
		return $this->$name;
	}

	function __set($name, $value) {
		echo '__set ' . $name . "\n";
		$this->$name = $value;
	}

	function __isset($name) {
		echo '__isset ' . $name . "\n";
		return isset($this->$name);
	}
}

$test = new Test();

$test->nonExisting;
$test->publicProperty;
$test->protectedProperty;
$test->privateProperty;
isset($test->nonExisting);
isset($test->publicProperty);
isset($test->protectedProperty);
isset($test->privateProperty);
$test->nonExisting       = 'value';
$test->publicProperty	 = 'value';
$test->protectedProperty = 'value';
$test->privateProperty   = 'value';

?>

--EXPECTF--
__get nonExisting
Notice: Undefined property: Test::$nonExisting in %sbug63462.php on line %d
__get publicProperty
Notice: Undefined property: Test::$publicProperty in %sbug63462.php on line %d
__get protectedProperty
Notice: Undefined property: Test::$protectedProperty in %sbug63462.php on line %d
__get privateProperty
Notice: Undefined property: Test::$privateProperty in %sbug63462.php on line %d
__isset nonExisting
__isset publicProperty
__isset protectedProperty
__isset privateProperty
__set nonExisting
__set publicProperty
__set protectedProperty
__set privateProperty
