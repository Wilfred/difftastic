==========
enable_post_data_reading: using multiple input streams
==========

<?php
echo "Test\n";

$f1 = fopen("php://input", "r");
$f2 = fopen("php://input", "r");

while (!feof($f1) && !feof($f2)) {
	echo fgetc($f1), fgetc($f2);
}

?>

Done

---
