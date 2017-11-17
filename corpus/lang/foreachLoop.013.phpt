<?php

define('MAX_LOOPS',5);

function withRefValue($elements, $transform) {
	echo "\n---( Array with $elements element(s): )---\n";
	//Build array:
	for ($i=0; $i<$elements; $i++) {
		$a[] = "v.$i";
	}
	$counter=0;
	
	echo "--> State of array before loop:\n";
	var_dump($a);
	
	echo "--> Do loop:\n";	
	foreach ($a as $k=>&$v) {
		echo "     iteration $counter:  \$k=$k; \$v=$v\n";
		eval($transform);
		$counter++;
		if ($counter>MAX_LOOPS) {
			echo "  ** Stuck in a loop! **\n";
			break;
		}
	}
	
	echo "--> State of array after loop:\n";
	var_dump($a);
}


echo "\nPopping elements off end of an unreferenced array, using &\$value.";
$transform = 'array_pop($a);';
withRefValue(1, $transform);
withRefValue(2, $transform);
withRefValue(3, $transform);
withRefValue(4, $transform);

echo "\n\n\nShift elements off start of an unreferenced array, using &\$value.";
$transform = 'array_shift($a);';
withRefValue(1, $transform);
withRefValue(2, $transform);
withRefValue(3, $transform);
withRefValue(4, $transform);

echo "\n\n\nRemove current element of an unreferenced array, using &\$value.";
$transform = 'unset($a[$k]);';
withRefValue(1, $transform);
withRefValue(2, $transform);
withRefValue(3, $transform);
withRefValue(4, $transform);

echo "\n\n\nAdding elements to the end of an unreferenced array, using &\$value.";
$transform = 'array_push($a, "new.$counter");';
withRefValue(1, $transform);
withRefValue(2, $transform);
withRefValue(3, $transform);
withRefValue(4, $transform);

echo "\n\n\nAdding elements to the start of an unreferenced array, using &\$value.";
$transform = 'array_unshift($a, "new.$counter");';
withRefValue(1, $transform);
withRefValue(2, $transform);
withRefValue(3, $transform);
withRefValue(4, $transform);

?>
