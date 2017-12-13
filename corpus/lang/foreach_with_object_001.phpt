==========
foreach() with foreach($o->mthd()->arr)
==========

<?php
class Test {
   public $a = array(1,2,3,4,5); // removed, crash too
   function c() {
      return new Test();
   }

}
$obj = new Test();
foreach ($obj->c()->a as $value) {
    print "$value\n";
}

?>
===DONE===

---

(program (script_section (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)))))) (comment) (method_declaration (function_definition (name) (compound_statement (return_statement (object_creation_expression (qualified_name (name)) (arguments))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (foreach_statement (member_access_expression (dereferencable_expression (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (name)) (simple_variable (variable_name (name))) (compound_statement (expression_statement (intrinsic (print_intrinsic (string))))))) (text))

