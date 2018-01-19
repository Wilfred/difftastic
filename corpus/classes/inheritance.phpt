==========
Classes inheritance test
==========

<?php

/* Inheritance test.  Pretty nifty if I do say so myself! */

class foo {
  public $a;
  public $b;
  function display() {
  	echo "This is class foo\n";
    echo "a = ".$this->a."\n";
    echo "b = ".$this->b."\n";
  }
  function mul() {
    return $this->a*$this->b;
  }
};

class bar extends foo {
  public $c;
  function display() {  /* alternative display function for class bar */
    echo "This is class bar\n";
    echo "a = ".$this->a."\n";
    echo "b = ".$this->b."\n";
    echo "c = ".$this->c."\n";
  }
};


$foo1 = new foo;
$foo1->a = 2;
$foo1->b = 5;
$foo1->display();
echo $foo1->mul()."\n";

echo "-----\n";

$bar1 = new bar;
$bar1->a = 4;
$bar1->b = 3;
$bar1->c = 12;
$bar1->display();
echo $bar1->mul()."\n";

---

(program  (comment) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (echo_statement (string)) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (string)))))) (method_declaration (function_definition (name) (compound_statement (return_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (comment) (echo_statement (string)) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (string))) (echo_statement (binary_expression (binary_expression (string) (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (string)))))))  (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (float))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (float))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (echo_statement (binary_expression (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (string))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (float))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (float))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (echo_statement (binary_expression (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (string))))
