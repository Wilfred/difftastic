<?php
class c_iter implements Iterator {

	private $obj;
	private $num = 0;

	function __construct($obj) {
		echo __METHOD__ . "\n";
		$this->obj = $obj;
	}
	function rewind() {
		echo __METHOD__ . "\n";
	}
	function valid() {
		$more = $this->num < $this->obj->max;
		echo __METHOD__ . ' = ' .($more ? 'true' : 'false') . "\n";
		return $more;
	}
	function current() {
		echo __METHOD__ . "\n";
		return $this->num;
	}
	function next() {
		echo __METHOD__ . "\n";
		$this->num++;
	}
	function key() {
		return $this->num;
	}
}
	
class c implements IteratorAggregate {

	public $max = 4;

	function getIterator() {
		echo __METHOD__ . "\n";
		return new c_iter($this);
	}
}

$t = new c();

foreach($t as $v) {
	if ($v == 0) {
		echo "continue outer\n";
		continue;
	}
	foreach($t as $w) {
		if ($w == 1) {
			echo "continue inner\n";
			continue;
		}
		if ($w == 2) {
			echo "break inner\n";
			break;
		}
		echo "double:$v:$w\n";
	}
	if ($v == 2) {
		echo "break outer\n";
		break;
	}
}

print "Done\n";
?>
