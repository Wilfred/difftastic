==========
Evaluation order during assignments.
==========

<?php
$b = "bb";
$a = "aa";

function foo()
{
echo "Bad call\n";
}

function baa()
{
echo "Good call\n";
}

$bb = "baa";

$aa = "foo";

$c = ${$a=$b};

$c();

$a1 = array("dead","dead","dead");
$a2 = array("dead","dead","live");
$a3 = array("dead","dead","dead");

$a = array($a1,$a2,$a3);

function live()
{
echo "Good call\n";
}

function dead()
{
echo "Bad call\n";
}

$i = 0;

$a[$i=1][++$i]();

$a = -1;

function foo1()
{
  global $a;
  return ++$a;
}

$arr = array(array(0,0),0);

$brr = array(0,0,array(0,0,0,5),0);
$crr = array(0,0,0,0,array(0,0,0,0,0,10),0,0);

$arr[foo1()][foo1()] = $brr[foo1()][foo1()] +
                     $crr[foo1()][foo1()];

$val = $arr[0][1];
echo "Expect 15 and get...$val\n";

$x = array(array(0),0);
function mod($b)
{
global $x;
$x = $b;
return 0;
}

$x1 = array(array(1),1);
$x2 = array(array(2),2);
$x3 = array(array(3),3);
$bx = array(10);

$x[mod($x1)][mod($x2)] = $bx[mod($x3)];

// expecting 10,3

var_dump($x);
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (string))) (function_definition (name) (compound_statement (echo_statement (string)))) (function_definition (name) (compound_statement (echo_statement (string)))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (simple_variable (assignment_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (variable_name (name)) (arguments))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name)))))) (function_definition (name) (compound_statement (echo_statement (string)))) (function_definition (name) (compound_statement (echo_statement (string)))) (expression_statement (assignment_expression (variable_name (name)) (float))) (expression_statement (function_call_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (assignment_expression (variable_name (name)) (float)))) (update_expression (variable_name (name)))) (arguments))) (expression_statement (assignment_expression (variable_name (name)) (unary_op_expression (float)))) (function_definition (name) (compound_statement (global_declaration (variable_name (name))) (return_statement (update_expression (variable_name (name)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (integer)))) (array_element_initializer (float)) (array_element_initializer (float))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments))) (binary_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments))) (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))))) (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float))) (float)))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (float)))) (array_element_initializer (float))))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (global_declaration (variable_name (name))) (expression_statement (assignment_expression (variable_name (name)) (variable_name (name)))) (return_statement (float)))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (float)))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (float)))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (float)))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))))) (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

