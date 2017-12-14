==========
Bug #26182 (Object properties created redundantly)
==========

<?php

class A {
    function NotAConstructor ()
    {
        if (isset($this->x)) {
            //just for demo
        }
    }
}

$t = new A ();

print_r($t);

?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (if_statement (intrinsic (isset_intrinsic (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))) (compound_statement (comment))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))

