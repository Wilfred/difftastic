<?php 
function F () { 
	if(1) {
		return("Hello");
	}
}

$i=0;
while ($i<2) {
	echo F();
	$i++;
}
?>
