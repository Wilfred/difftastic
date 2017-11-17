<?php

class A {
    function NotAConstructor ()
    {
        if (isset($this->x)) {
            //just for demo
        }
    }
}

$t = new A ();

print_r($t);

?>
