<?php
class par {
	private $id = "foo";

	function displayMe()
	{
		print $this->id;
	}
};

class chld extends par {
	public $id = "bar";
	function displayHim()
	{
		parent::displayMe();
	}
};


$obj = new chld();
$obj->displayHim();
?>
