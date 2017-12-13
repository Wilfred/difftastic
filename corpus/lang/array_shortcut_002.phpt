==========
Square bracket associative array shortcut test
==========

<?php
print_r(["foo" => "orange", "bar" => "apple", "baz" => "lemon"]);
?>

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (string) (string)) (array_element_initializer (string) (string)) (array_element_initializer (string) (string))))))))

