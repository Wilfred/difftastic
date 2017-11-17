<?php
class Test { }
var_dump(get_parent_class('Test'));
$t = new Test;
var_dump(get_parent_class($t));
?>
