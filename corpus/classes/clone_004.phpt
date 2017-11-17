<?php
abstract class base {
  public $a = 'base';

  // disallow cloning
  private function __clone() {}
}

class test extends base {
  public $b = 'test';

  // reenable cloning
  public function __clone() {}

  public function show() {
	var_dump($this);
  }
}

echo "Original\n";
$o1 = new test;
$o1->a = array(1,2);
$o1->b = array(3,4);
$o1->show();

echo "Clone\n";
$o2 = clone $o1;
$o2->show();

echo "Modify\n";
$o2->a = 5;
$o2->b = 6;
$o2->show();

echo "Done\n";
?>
