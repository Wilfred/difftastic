<?php
$v = array(123456789.012345678901234567890, 10/3, 987e100, 10.0000001);

echo "INI".PHP_EOL;
ini_set('precision', -1);
ini_set('serialize_precision', -1);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;


echo "INI".PHP_EOL;
ini_set('precision', 0);
ini_set('serialize_precision', 0);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 9);
ini_set('serialize_precision', 9);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 14);
ini_set('serialize_precision', 14);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 17);
ini_set('serialize_precision', 17);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 25);
ini_set('serialize_precision', 25);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 100);
ini_set('serialize_precision', 100);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;
