<?php
class foo {}
$result = get_declared_classes();
var_dump(array_search('foo', $result));
?>
--EXPECTF--
int(%d)
