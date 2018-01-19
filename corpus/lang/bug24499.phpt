==========
Bug #24499 (bogus handling of a public property as a private one)
==========

<?php
class Id {
        private $id="priv";

        public function tester($obj)
        {
	        	$obj->id = "bar";
        }
}

$id = new Id();
@$obj->foo = "bar";
$id->tester($obj);
print_r($obj);
?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (unary_op_expression (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string)))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))))) 
