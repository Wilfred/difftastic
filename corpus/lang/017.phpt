<?php
$a = 1;
function Test ($a) {
	if ($a<3) {
		return(3);
	}
}

if ($a < Test($a)) {
	echo "$a\n";
	$a++;
}
?>
