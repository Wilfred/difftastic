<?php

echo "\nSame variable used as static and non static.\n";
function staticNonStatic() {
	echo "---------\n";	
	$a=0;
	echo "$a\n";	
	static $a=10;
	echo "$a\n";
	$a++;	
}
staticNonStatic();
staticNonStatic();
staticNonStatic();

echo "\nLots of initialisations in the same statement.\n";
function manyInits() {
	static $counter=0;
	echo "------------- Call $counter --------------\n";
	static $a, $b=10, $c=20, $d, $e=30;
	echo "Unitialised      : $a\n";
	echo "Initialised to 10: $b\n";
	echo "Initialised to 20: $c\n";
	echo "Unitialised      : $d\n";
	echo "Initialised to 30: $e\n";
	$a++;
	$b++;
	$c++;
	$d++;
	$e++;
	$counter++;
}
manyInits();
manyInits();
manyInits();

echo "\nUsing static keyword at global scope\n";
for ($i=0; $i<3; $i++) {
   static $s, $k=10;
   echo "$s $k\n";
   $s++;
   $k++;
}
?>
