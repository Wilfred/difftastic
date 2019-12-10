==========
ZE2 object cloning, 4
==========

<?php
abstract class base {
  public $a = 'base';

  // disallow cloning
  private function __clone() {}
}

class test extends base {
  public $b = 'test';

  // reenable cloning
  public function __clone() {}

  public function show() {
	var_dump($this);
  }
}

echo "Original\n";
$o1 = new test;
$o1->a = array(1,2);
$o1->b = array(3,4);
$o1->show();

echo "Clone\n";
$o2 = clone $o1;
$o2->show();

echo "Modify\n";
$o2->a = 5;
$o2->b = 6;
$o2->show();

echo "Done\n";
?>

---

(program (class_declaration (class_modifier) (name) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (string)))) (comment) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters) (compound_statement)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (string)))) (comment) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters) (compound_statement))) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (clone_expression (variable_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (echo_statement (string)) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (echo_statement (string)))
