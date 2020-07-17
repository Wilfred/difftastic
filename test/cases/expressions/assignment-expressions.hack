$var = 1;
$var[] = 1;
$var[1] = 1;
$var['key'] = 1;
$var[$var['key']] = 1;
$var[$var['key']][] = 1;
$var[][$var['key']] = 1;

list($var, $bar) = tuple(1, 1);
list($var[], $bar) = tuple(1, 1);
list($var[1], $bar[]) = tuple(1, 1);
list($var['key'], $bar[1]) = tuple(1, 1);
list($var[$var['key']], $bar['key']) = tuple(1, 1);
list($var[$var['key']][], $var[$var['key']],) = tuple(1, 1);
