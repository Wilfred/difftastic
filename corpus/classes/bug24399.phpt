==========
Bug #24399 (is_subclass_of() crashes when parent class doesn't exist)
==========

<?php
class dooh {
    public $blah;
}
$d = new dooh;
var_dump(is_subclass_of($d, 'dooh'));
?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string)))))))
