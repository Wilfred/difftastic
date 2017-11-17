<?php

function i1() {
        echo "i1\n";
        return 1;
}

function i2() {
        echo "i2\n";
        return 1;
}

function i3() {
        echo "i3\n";
        return 3;
}

$a = array(10, 11, 12, 13);
list($a[i1()+i2()], , list($a[i3()], $a[])) = array(0, 1, array(30, 40), 3);

var_dump($a);

?>
