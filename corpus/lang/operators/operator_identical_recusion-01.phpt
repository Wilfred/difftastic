==========
Test === operator : False recursion detection
==========

<?php
$n = 0;
$a = [[$n]];
$b = [&$a];
var_dump($a === $b);

---
