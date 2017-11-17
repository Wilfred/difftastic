<?php 

class OverloadedArray implements ArrayAccess {
	public $realArray;
	
	function __construct() {
		$this->realArray = array();
	}

	function offsetExists($index) {
		return array_key_exists($this->realArray, $index);
	}

	function offsetGet($index) {
		return $this->realArray[$index];
	}

	function offsetSet($index, $value) {
		if (is_null($index)) {
			$this->realArray[] = $value;
		} else {
			$this->realArray[$index] = $value;
		}
	}

	function offsetUnset($index) {
		unset($this->realArray[$index]);
	}

	function dump() {
		var_dump($this->realArray);
	}
}

$a = new OverloadedArray;
$a[] = 1;
$a[1] = 2;
$a[2] = 3;
$a[] = 4;
$a->dump();
?>
===DONE===
