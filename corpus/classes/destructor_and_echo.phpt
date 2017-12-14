==========
ZE2 Destructors and echo
==========

<?php

class Test
{
    function __construct() {
        echo __METHOD__ . "\n";
    }

    function __destruct() {
        echo __METHOD__ . "\n";
    }
}

$o = new Test;

?>
===DONE===

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (text))
