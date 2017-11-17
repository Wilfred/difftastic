<?php

class Test
{
    function __construct($msg) {
        echo __METHOD__ . "($msg)\n";
        throw new Exception($msg);
    }
    
    function __destruct() {
        echo __METHOD__ . "\n";
    }
}

try
{
    $o = new Test('Hello');
    unset($o);
}
catch (Exception $e)
{
    echo 'Caught ' . get_class($e) . '(' . $e->getMessage() . ")\n";
}

?>
===DONE===
