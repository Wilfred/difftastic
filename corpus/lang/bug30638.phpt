<?php 
# activate the german locale
setlocale(LC_NUMERIC, "de_DE.UTF-8", "de_DE", "de", "german", "ge", "de_DE.ISO-8859-1");

$lc = localeconv();
printf("decimal_point: %s\n", $lc['decimal_point']);
printf("thousands_sep: %s\n", $lc['thousands_sep']);
?>
