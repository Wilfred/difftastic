<?php
$top_level_value = 2;




function enclosing_function($input) {
    $a = $input + 1;
    $b = $a + 2;
    $c = $b + 3;
    $d = $c + 4;
    $e = $d + 5;
    return $e;
}
