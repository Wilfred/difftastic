==========
enable_post_data_reading: using multiple input streams (more than 8k data)
==========

<?php
echo "Test\n";

$f1 = fopen("php://input", "r");
$f2 = fopen("php://input", "r");

while (!feof($f1) && !feof($f2)) {
	echo fgets($f1), fgets($f2);
}

?>

Done

---
