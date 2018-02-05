==========
Evaluation order during assignments.
==========

<?php

function i1() {
        echo "i1\n";
        return 0;
}

function i2() {
        echo "i2\n";
        return 0;
}

function i3() {
        echo "i3\n";
        return 0;
}

function i4() {
        echo "i4\n";
        return 0;
}

function i5() {
        echo "i5\n";
        return 0;
}

function i6() {
        echo "i6\n";
        return 0;
}

$a = array(array(0));
$b = array(array(1));
$c = array(array(2));

$a[i1()][i2()] = $b[i3()][i4()] = $c[i5()][i6()];

var_dump($a);
var_dump($b);
var_dump($c);

?>

---

(program  (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (integer)))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (integer))))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (integer))))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (array_creation_expression (array_element_initializer (integer))))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments))) (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments))) (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

