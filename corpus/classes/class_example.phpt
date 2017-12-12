==========
Classes general test
==========


<?php

/* pretty nifty object oriented code! */

class user {
  public $first_name,$family_name,$address,$phone_num;
  function display()
  {
    echo "User information\n";
    echo "----------------\n\n";
    echo "First name:\t  ".$this->first_name."\n";
    echo "Family name:\t  ".$this->family_name."\n";
    echo "Address:\t  ".$this->address."\n";
    echo "Phone:\t\t  ".$this->phone_num."\n";
    echo "\n\n";
  }
  function initialize($first_name,$family_name,$address,$phone_num)
  {
    $this->first_name = $first_name;
    $this->family_name = $family_name;
    $this->address = $address;
    $this->phone_num = $phone_num;
  }
};


function test($u)
{  /* one can pass classes as arguments */
  $u->display();
  $t = $u;
  $t->address = "New address...";
  return $t;  /* and also return them as return values */
}

$user1 = new user;
$user2 = new user;

$user1->initialize("Zeev","Suraski","Ben Gourion 3, Kiryat Bialik, Israel","+972-4-8713139");
$user2->initialize("Andi","Gutmans","Haifa, Israel","+972-4-8231621");
$user1->display();
$user2->display();

$tmp = test($user2);
$tmp->display();

?>

---

(program (script_section (comment) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))) (property_element (variable_name (name))) (property_element (variable_name (name))) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (echo_statement (string)) (echo_statement (string)) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (string))) (echo_statement (string))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))))))) (ERROR) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (comment) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (return_statement (simple_variable (variable_name (name)))) (comment))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments (string) (string) (string) (string)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments (string) (string) (string) (string)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))
