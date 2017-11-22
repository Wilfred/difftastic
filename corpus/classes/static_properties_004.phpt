==========
Inherited static properties can be separated from their reference set. 
==========

<?php
class C { public static $p = 'original'; }
class D extends C {	}
class E extends D {	}

echo "\nInherited static properties refer to the same value across classes:\n";
var_dump(C::$p, D::$p, E::$p);

echo "\nChanging one changes all the others:\n";
D::$p = 'changed.all';
var_dump(C::$p, D::$p, E::$p);

echo "\nBut because this is implemented using PHP references, the reference set can easily be split:\n";
$ref = 'changed.one';
D::$p =& $ref;
var_dump(C::$p, D::$p, E::$p);
?>
==Done==
--EXPECTF--
Inherited static properties refer to the same value across classes:
string(8) "original"
string(8) "original"
string(8) "original"

Changing one changes all the others:
string(11) "changed.all"
string(11) "changed.all"
string(11) "changed.all"

But because this is implemented using PHP references, the reference set can easily be split:
string(11) "changed.all"
string(11) "changed.one"
string(11) "changed.all"
==Done==
