==========
ZE2 Do not call destructors if constructor fails
==========

<?php

class Test
{
    function __construct($msg) {
        echo __METHOD__ . "($msg)\n";
        throw new Exception($msg);
    }

    function __destruct() {
        echo __METHOD__ . "\n";
    }
}

try
{
    $o = new Test('Hello');
    unset($o);
}
catch (Exception $e)
{
    echo 'Caught ' . get_class($e) . '(' . $e->getMessage() . ")\n";
}

?>
===DONE===

---

(program (script_section (class_declaration (name) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))))) (try_statement (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (string))))) (unset_statement (simple_variable (variable_name (name))))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (binary_expression (binary_expression (string) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (string)) (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (string))))))) (text))
