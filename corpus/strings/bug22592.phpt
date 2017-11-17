<?php
$wrong = $correct = 'abcdef';

$t = $x[] = 'x';

var_dump($correct);
var_dump($wrong);

$correct[1] = '*';
$correct[3] = '*';
$correct[5] = '*';

// This produces the 
$wrong[1] = $wrong[3] = $wrong[5] = '*';

var_dump($correct);
var_dump($wrong);

?>
