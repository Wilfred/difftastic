<?php
class Id {
        private $id="priv";

        public function tester($obj)
        {
	        	$obj->id = "bar";
        }
}

$id = new Id();
@$obj->foo = "bar";
$id->tester($obj);
print_r($obj);
?>
