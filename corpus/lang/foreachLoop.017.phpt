==========
Ensure foreach works with arrays with Binary keys.
==========

<?php
$a = array ( "\x90" => 10 );
foreach ($a as $val=>$key) echo $key;
echo "\nDone\n";
?> 
--EXPECTF--
10
Done
