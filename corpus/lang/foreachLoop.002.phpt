<?php

echo "\nDirectly changing array values.\n";
$a = array("original.1","original.2","original.3");
foreach ($a as $k=>$v) {
	$a[$k]="changed.$k";
	var_dump($v);
}
var_dump($a);

echo "\nModifying the foreach \$value.\n";
$a = array("original.1","original.2","original.3");
foreach ($a as $k=>$v) {
	$v="changed.$k";
}
var_dump($a);


echo "\nModifying the foreach &\$value.\n";
$a = array("original.1","original.2","original.3");
foreach ($a as $k=>&$v) {
	$v="changed.$k";
}
var_dump($a);

echo "\nPushing elements onto an unreferenced array.\n";
$a = array("original.1","original.2","original.3");
$counter=0;
foreach ($a as $v) {
	array_push($a, "new.$counter");

	//avoid infinite loop if test is failing
    if ($counter++>10) {
    	echo "Loop detected\n";
    	break;    	
    }
}
var_dump($a);

echo "\nPushing elements onto an unreferenced array, using &\$value.\n";
$a = array("original.1","original.2","original.3");
$counter=0;
foreach ($a as &$v) {
	array_push($a, "new.$counter");

	//avoid infinite loop if test is failing
    if ($counter++>10) {
    	echo "Loop detected\n";
    	break;    	
    }	
}
var_dump($a);

echo "\nPopping elements off an unreferenced array.\n";
$a = array("original.1","original.2","original.3");
foreach ($a as $v) {
	array_pop($a);
	var_dump($v);	
}
var_dump($a);

echo "\nPopping elements off an unreferenced array, using &\$value.\n";
$a = array("original.1","original.2","original.3");
foreach ($a as &$v) {
	array_pop($a);
	var_dump($v);
}
var_dump($a);

?>
