==========
Execution order of variables
==========

<?php

/* strings and concat */

class strclass {
   var $str = "bad";
   static $statstr = "bad";
}

$a = "bad";
$b = "good";
echo "1)";
$c = $a.($a=$b);
echo $c;
echo "\r\n";

$a = "bad";
$b = "good";
$c = ($a=$b).$a;
echo "2)";
echo $c;
echo "\r\n";


$str = new strclass();
$c = $str->str.($str->str="good");
echo "3)";
echo $c;
echo "\r\n";

$str->str = "bad";

$c = ($str->str="good").$str->str;
echo "4)";
echo $c;
echo "\r\n";

$c = strclass::$statstr.(strclass::$statstr="good");
echo "5)";
echo $c;
echo "\r\n";

strclass::$statstr = "bad";

$c = (strclass::$statstr="good").strclass::$statstr;
echo "6)";
echo $c;
echo "\r\n";


function foo() {
   global $a;
   $a = "good";
   return $a;
}


$a = "bad";
echo "7)";
echo foo() . $a;
echo "\r\n";

$a = "bad";
echo "8)";
echo $a . foo();
echo "\r\n";

/* other operators */

$x = 1;
$z = $x - ($x++);
echo "9)";
echo $z;
echo "\r\n";

$x = 1;
$z = ($x++) - $x;
echo "10)";
echo $z;
echo "\r\n";

$x = 1;
$z = $x - (++$x);
echo "11)";
echo $z;
echo "\r\n";

$x = 1;
$z = (++$x) - $x;
echo "12)";
echo $z;
echo "\r\n";


$x = 1;
$y = 3;
$z = $x - ($x=$y);
echo "13)";
echo $z;
echo "\r\n";

$x = 1;
$y = 3;
$z = ($x=$y) - $x;
echo "14)";
echo $z;
echo "\r\n";


$a = 100;
$b = 200;
echo "15)";
echo $a + ($a=$b);
echo "\r\n";

$a = 100;
$b = 200;
echo "16)";
echo ($a=$b) + $a;
echo "\r\n";


$a = array(100,200);
$i = 0;

echo "17)";
echo $a[$i++] + $a[$i++];
echo "\r\n";

$i = -1;
echo "18)";
echo $a[++$i] + $a[++$i];
echo "\r\n";

$i = 0;
echo "19)";
echo $a[$i] + ($a[$i]=400);
echo "\r\n";


$a[0] = 100;
echo "20)";
echo ($a[$i]=400) + $a[$i];
echo "\r\n";


class c {
   var $val = 10;
   static $stat = 20;
}

echo "21)";
echo c::$stat + (c::$stat=200);
echo "\r\n";

echo "22)";
echo (c::$stat=300) + c::$stat;
echo "\r\n";

$c = new c();

echo "23)";
echo $c->val + ($c->val=200);
echo "\r\n";

echo "24)";
echo ($c->val=300) + $c->val;
echo "\r\n";

?>

---

(program  (comment) (class_declaration (name) (property_declaration (property_modifier) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (static_modifier)) (property_element (variable_name (name)) (property_initializer (string))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string)) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (string))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (string)) (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name))))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (function_definition (name) (compound_statement (global_declaration (simple_variable (variable_name (name)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (return_statement (simple_variable (variable_name (name)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (echo_statement (string)) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments)) (simple_variable (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (echo_statement (string)) (echo_statement (binary_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (echo_statement (string)) (comment) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (update_expression (simple_variable (variable_name (name))))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (update_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (update_expression (simple_variable (variable_name (name))))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (update_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (echo_statement (simple_variable (variable_name (name)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer))) (echo_statement (string)) (echo_statement (binary_expression (simple_variable (variable_name (name))) (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer))) (echo_statement (string)) (echo_statement (binary_expression (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (simple_variable (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (echo_statement (string)) (echo_statement (binary_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name))))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name))))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (unary_op_expression (float)))) (echo_statement (string)) (echo_statement (binary_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name))))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (update_expression (simple_variable (variable_name (name))))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (echo_statement (string)) (echo_statement (binary_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))) (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))) (integer)))) (echo_statement (string)) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float)) (integer))) (echo_statement (string)) (echo_statement (binary_expression (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))) (integer)) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (echo_statement (string)) (class_declaration (name) (property_declaration (property_modifier) (property_element (variable_name (name)) (property_initializer (integer)))) (property_declaration (property_modifier (static_modifier)) (property_element (variable_name (name)) (property_initializer (integer))))) (echo_statement (string)) (echo_statement (binary_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (integer)))) (echo_statement (string)) (echo_statement (string)) (echo_statement (binary_expression (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))) (integer)) (scoped_property_access_expression (qualified_name (name)) (simple_variable (variable_name (name)))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (echo_statement (string)) (echo_statement (binary_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (integer)))) (echo_statement (string)) (echo_statement (string)) (echo_statement (binary_expression (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (integer)) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))) (echo_statement (string)))

