==========
Bug #26703 (Certain characters inside strings incorrectly treated as keywords)
==========

<?php
	highlight_string('<?php echo "foo[] $a \n"; ?>');
?>

---
