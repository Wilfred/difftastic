==========
Testing nested array shortcut
==========

<?php
print_r([1, 2, 3, ["foo" => "orange", "bar" => "apple", "baz" => "lemon"]]);
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression (array_element_initializer (string) (string)) (array_element_initializer (string) (string)) (array_element_initializer (string) (string)))))))))

