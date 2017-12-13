==========
ZE2 accessing globals from destructor in shutdown
==========

<?php
$test_cnt = 0;
$test_num = 0;

function Show() {
  global $test_cnt;
  echo "Count: $test_cnt\n";
}

class counter {
  protected $id;

  public function __construct() {
    global $test_cnt, $test_num;
    $test_cnt++;
    $this->id = $test_num++;
  }

  public function Show() {
    echo 'Id: '.$this->id."\n";
  }

  // try protected here
  public function __destruct() {
    global $test_cnt;
    $test_cnt--;
  }

  static public function destroy(&$obj) {
  	$obj = NULL;
  	}
}
Show();
$obj1 = new counter;
$obj1->Show();
Show();
$obj2 = new counter;
$obj2->Show();
Show();
counter::destroy($obj1);
Show();
// or uncomment this line and it works
//counter::destroy($obj2);
echo "Done\n";
?>

---

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (function_definition (name) (compound_statement (global_declaration (simple_variable (variable_name (name)))) (echo_statement (string)))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (constructor_declaration (visibility_modifier) (compound_statement (global_declaration (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (postfix_increment_expression (simple_variable (variable_name (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (string)))))) (comment) (destructor_declaration (visibility_modifier) (compound_statement (global_declaration (simple_variable (variable_name (name)))) (expression_statement (postfix_decrement_expression (simple_variable (variable_name (name))))))) (method_declaration (static_modifier) (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (qualified_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (scoped_call_expression (qualified_name (name)) (name) (arguments (simple_variable (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (comment) (comment) (echo_statement (string))))
