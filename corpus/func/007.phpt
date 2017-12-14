==========
INI functions test
==========

<?php

$ini1 =  ini_get('include_path');
ini_set('include_path','ini_set_works');
echo ini_get('include_path')."\n";
ini_restore('include_path');
$ini2 =  ini_get('include_path');

if ($ini1 !== $ini2) {
        echo "ini_restore() does not work.\n";
}
else {
        echo "ini_restore_works\n";
}

?>

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (string))) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string))))) (if_statement (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (compound_statement (echo_statement (string))) (else_clause (compound_statement (echo_statement (string))))))
