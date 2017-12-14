==========
Bug #23279 (exception handler stops after first function call)
==========

<?php
ob_start();
set_exception_handler('redirect_on_error');
echo "Hello World\n";
throw new Exception;

function redirect_on_error($e) {
    ob_end_clean();
    echo "Goodbye Cruel World\n";
}
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (string)) (throw_statement (object_creation_expression (qualified_name (name)))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string))))) 
