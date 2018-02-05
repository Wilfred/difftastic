==========
Bug #23951 (Defines not working in inherited classes)
==========

<?php

define('FOO1', 1);
define('FOO2', 2);

class A {

    public $a_var = array(FOO1=>'foo1_value', FOO2=>'foo2_value');

}

class B extends A {

    public $b_var = 'foo';

}

$a = new A;
$b = new B;

print_r($a);
print_r($b->a_var);
print_r($b->b_var);

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (qualified_name (name)) (string)) (array_element_initializer (qualified_name (name)) (string))))))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))
