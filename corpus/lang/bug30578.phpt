==========
Bug #30578 (Output buffers flushed before calling __desctruct functions)
==========

<?php

error_reporting(E_ALL);

class Example
{
    function __construct()
    {
        ob_start();
        echo "This should be displayed last.\n";
    }

    function __destruct()
    {
        $buffered_data = ob_get_contents();
        ob_end_clean();

        echo "This should be displayed first.\n";
        echo "Buffered data: $buffered_data";
    }
}

$obj = new Example;

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))) (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (echo_statement (string)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))))

