<?php

class Test
{
    function __construct() {
        echo __METHOD__ . "\n";
    }
    
    function __destruct() {
        echo __METHOD__ . "\n";
    }
}

$o = new Test;

?>
===DONE===
