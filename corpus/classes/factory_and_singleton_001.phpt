==========
ZE2 factory and singleton, test 1
==========

<?php
class test {
  protected $x;

  static private $test = NULL;
  static private $cnt = 0;

  static function factory($x) {
    if (test::$test) {
      return test::$test;
    } else {
      test::$test = new test($x);
      return test::$test;
    }
  }

  protected function __construct($x) {
    test::$cnt++;
    $this->x = $x;
  }

  static function destroy() {
    test::$test = NULL;
  }

  protected function __destruct() {
  	test::$cnt--;
  }

  public function get() {
    return $this->x;
  }

  static public function getX() {
    if (test::$test) {
      return test::$test->x;
    } else {
      return NULL;
    }
  }

  static public function count() {
    return test::$cnt;
  }
}

echo "Access static members\n";
var_dump(test::getX());
var_dump(test::count());

echo "Create x and y\n";
$x = test::factory(1);
$y = test::factory(2);
var_dump(test::getX());
var_dump(test::count());
var_dump($x->get());
var_dump($y->get());

echo "Destruct x\n";
$x = NULL;
var_dump(test::getX());
var_dump(test::count());
var_dump($y->get());

echo "Destruct y\n";
$y = NULL;
var_dump(test::getX());
var_dump(test::count());

echo "Destruct static\n";
test::destroy();
var_dump(test::getX());
var_dump(test::count());

echo "Done\n";
?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (static_modifier) (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (qualified_name (name))))) (property_declaration (property_modifier (static_modifier) (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (float)))) (method_declaration (static_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (if_statement (scoped_property_access_expression (qualified_name (name)) (variable_name (name))) (compound_statement (return_statement (scoped_property_access_expression (qualified_name (name)) (variable_name (name))))) (else_clause (compound_statement (expression_statement (assignment_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (variable_name (name)))))) (return_statement (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))))))) (constructor_declaration (visibility_modifier) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (update_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name)))))) (method_declaration (static_modifier) (function_definition (name) (compound_statement (expression_statement (assignment_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name))) (qualified_name (name))))))) (destructor_declaration (visibility_modifier) (compound_statement (expression_statement (update_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (method_declaration (static_modifier) (visibility_modifier) (function_definition (name) (compound_statement (if_statement (scoped_property_access_expression (qualified_name (name)) (variable_name (name))) (compound_statement (return_statement (member_access_expression (dereferencable_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))) (name)))) (else_clause (compound_statement (return_statement (qualified_name (name))))))))) (method_declaration (static_modifier) (visibility_modifier) (function_definition (name) (compound_statement (return_statement (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (scoped_call_expression (qualified_name (name)) (name) (arguments (float))))) (expression_statement (assignment_expression (variable_name (name)) (scoped_call_expression (qualified_name (name)) (name) (arguments (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (echo_statement (string)) (expression_statement (scoped_call_expression (qualified_name (name)) (name) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_call_expression (qualified_name (name)) (name) (arguments))))) (echo_statement (string)))
