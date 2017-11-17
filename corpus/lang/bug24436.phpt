<?php
class test {
	function __construct() {
		if (empty($this->test[0][0])) { print "test1";}
		if (!isset($this->test[0][0])) { print "test2";}
	}
}

$test1 = new test();
?>
