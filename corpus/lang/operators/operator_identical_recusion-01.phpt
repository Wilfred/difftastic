<?php
$n = 0;
$a = [[$n]];
$b = [&$a];
var_dump($a === $b);
