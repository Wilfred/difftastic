==========
Test to catch early assignment of $this
==========

<?php
class first {

   function me() { echo "first"; }

   function who() {
     global $a,$b;
     $this->me();
     $a->me();
     $b->me();
     $b = new second();
     $this->me();
     $a->me();
     $b->me();
   }
}

class second {

   function who() {
      global $a,$b;
      $this->me();
      $a->me();
      $b->me();
   }
   function me() { echo "second"; }
}

$a = new first();
$b = &$a;

$a->who();
$b->who();

echo "\n";
?>
===DONE===

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (echo_statement (string))))) (method_declaration (function_definition (name) (compound_statement (global_declaration (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))))))) (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (global_declaration (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (string)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (echo_statement (string)) (text))
