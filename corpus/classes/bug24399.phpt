==========
Bug #24399 (is_subclass_of() crashes when parent class doesn't exist)
==========

<?php
class dooh {
    public $blah;
}
$d = new dooh;
var_dump(is_subclass_of($d, 'dooh'));
?>

---
