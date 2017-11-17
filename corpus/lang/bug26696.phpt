<?php

$str = 'asdd/?';
$len = strlen($str);
for ($i = 0; $i < $len; $i++) {
	switch ($str[$i]) {
		case '?':
			echo "OK\n";
			break;
	}
}

$str = '*';
switch ($str[0]) { 
	case '*';
		echo "OK\n";
		break;
	default:
		echo 'Default RAN!';
}

?>
