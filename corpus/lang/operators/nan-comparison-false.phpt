<?php

echo "** CONST\n";
var_dump(0 < NAN);
var_dump(0 <= NAN);
var_dump(0 > NAN);
var_dump(0 >= NAN);

echo "** VAR\n";
$nan = NAN;
var_dump(0 < $nan);
var_dump(0 <= $nan);
var_dump(0 > $nan);
var_dump(0 >= $nan);

