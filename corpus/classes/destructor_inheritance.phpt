==========
ZE2 The inherited destructor is called
==========

<?php
class base {
   function __construct() {
      echo __METHOD__ . "\n";
   }

   function __destruct() {
      echo __METHOD__ . "\n";
   }
}

class derived extends base {
}

$obj = new derived;

unset($obj);

echo 'Done';
?>

---

(program (script_section (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))))) (class_declaration (name) (class_base_clause (qualified_name (name)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (unset_statement (simple_variable (variable_name (name)))) (echo_statement (string))))
