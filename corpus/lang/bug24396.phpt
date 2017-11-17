<?php

$arr = array('a' => 1, 'b' => 2, 'c' => 3);

foreach($arr as $k=>$v)  {
    global $$k; // comment this out and it works in PHP 7 too..
               
    echo "($k => $v)\n";
                       
    $$k = $v;          
}
?>
