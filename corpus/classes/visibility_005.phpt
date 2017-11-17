<?php

class base
{
	public $a=1;
	protected $b=2;
	private $c=3;

	function f()
	{
		foreach($this as $k=>$v) {
			echo "$k=>$v\n";
		}
	}
}

class derived extends base
{
}

$o = new base;
$o->d = 4;
echo "===base::function===\n";
$o->f();
echo "===base,foreach===\n";
foreach($o as $k=>$v) {
	echo "$k=>$v\n";
}

$o = new derived;
$o->d = 4;
echo "===derived::function===\n";
$o->f();
echo "===derived,foreach===\n";
foreach($o as $k=>$v) {
	echo "$k=>$v\n";
}

?>
