==========
Bug #22592 (Cascading assignments to strings with curly braces broken)
==========

<?php
$wrong = $correct = 'abcdef';

$t = $x[] = 'x';

var_dump($correct);
var_dump($wrong);

$correct[1] = '*';
$correct[3] = '*';
$correct[5] = '*';

// This produces the
$wrong[1] = $wrong[3] = $wrong[5] = '*';

var_dump($correct);
var_dump($wrong);

?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (variable_name (name)) (string)))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name)))) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (string))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (string))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (string))) (comment) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

