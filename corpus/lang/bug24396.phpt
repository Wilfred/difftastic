==========
Bug #24396 (global $$variable broken)
==========

<?php

$arr = array('a' => 1, 'b' => 2, 'c' => 3);

foreach($arr as $k=>$v)  {
    global $$k; // comment this out and it works in PHP 7 too..

    echo "($k => $v)\n";

    $$k = $v;
}
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string) (float)) (array_element_initializer (string) (float)) (array_element_initializer (string) (float))))) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (global_declaration (simple_variable (variable_name (name)))) (comment) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (variable_name (name)))))))
