#!php
<?php

error_reporting(E_ALL);

echo $foo;

?>
--EXPECTREGEX--
Notice: Undefined variable:.*foo in .* on line 6
