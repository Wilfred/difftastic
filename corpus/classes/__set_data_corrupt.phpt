==========
ZE2 Data corruption in __set
==========

<?php
$f = 'c="foo"';
class foo {
        const foobar=1;
        public $pp = array('t'=>null);

        function bar() {
                echo $this->t ='f';
        }
        function __get($prop)
        {
                return $this->pp[$prop];
        }
        function __set($prop, $val)
        {
                echo "__set";
                $this->pp[$prop] = '';
        }
}
$f = new foo;
$f->bar();
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (string))) (class_declaration (name) (class_const_declaration (const_element (name) (integer))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (string) (qualified_name (name))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string)))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (variable_name (name))))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (variable_name (name))) (string))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))
