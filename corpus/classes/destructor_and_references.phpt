==========
ZE2 Destructing and references
==========

<?php

class test1 {public $x;};
class test2 {public $x;};
class test3 {public $x;};
class test4 {public $x;};

$o1 = new test1;
$o2 = new test2;
$o3 = new test3;
$o4 = new test4;

$o3->x = &$o4;

$r1 = &$o1;

class once {}

$o = new once;
echo "Done\n";
?>

---

(program (script_section (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))))  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))))  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))))  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))))  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))) (class_declaration (name)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (echo_statement (string))))
