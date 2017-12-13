==========
Evaluation order during assignments.
==========

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

---

(program (script_section (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (float)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (float)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (float)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer))))) (expression_statement (assignment_expression (list_literal (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (binary_expression (function_call_expression (qualified_name (name)) (arguments)) (function_call_expression (qualified_name (name)) (arguments)))) (list_literal (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (function_call_expression (qualified_name (name)) (arguments))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name))))))) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)))) (array_element_initializer (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))

