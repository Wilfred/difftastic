==========
Bug #24445 (get_parent_class() returns the current class when passed an object)
==========

<?php
class Test { }
var_dump(get_parent_class('Test'));
$t = new Test;
var_dump(get_parent_class($t));
?>

---
