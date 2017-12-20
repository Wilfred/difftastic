==========
Bug #60768 Output buffer not discarded
==========

<?php

global $storage;

ob_start(function($buffer) use (&$storage) { $storage .= $buffer; }, 20);

echo str_repeat("0", 20); // fill in the buffer

for($i = 0; $i < 10; $i++) {
    echo str_pad($i, 9, ' ', STR_PAD_LEFT) . "\n"; // full buffer dumped every time
}

ob_end_flush();

printf("Output size: %d, expected %d\n", strlen($storage), 20 + 10 * 10);

?>
DONE

---

(program  (global_declaration (simple_variable (variable_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (anonymous_function_creation_expression (simple_parameter (variable_name (name))) (anonymous_function_use_clause (variable_name (name))) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (integer)))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (comment) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (float) (string) (qualified_name (name)))) (string))) (comment))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))) (binary_expression (integer) (binary_expression (integer) (integer)))))) (text))
