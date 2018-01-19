==========
Bug #30638 (localeconv returns wrong LC_NUMERIC settings) (ok to fail on MacOS X)
==========

<?php
# activate the german locale
setlocale(LC_NUMERIC, "de_DE.UTF-8", "de_DE", "de", "german", "ge", "de_DE.ISO-8859-1");

$lc = localeconv();
printf("decimal_point: %s\n", $lc['decimal_point']);
printf("thousands_sep: %s\n", $lc['thousands_sep']);
?>

---

(program  (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)) (string) (string) (string) (string) (string) (string)))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (subscript_expression (dereferencable_expression (variable_name (name))) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (subscript_expression (dereferencable_expression (variable_name (name))) (string))))))

