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

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (if_statement (isset_intrinsic (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (compound_statement (comment))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

