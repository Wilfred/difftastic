==========
Bug #24445 (get_parent_class() returns the current class when passed an object)
==========

<?php
class Test { }
var_dump(get_parent_class('Test'));
$t = new Test;
var_dump(get_parent_class($t));
?>

---

(program (script_section (class_declaration (name)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))))
