==========
Test open_basedir configuration for glob
==========

<?php
$dir = "globtest1";
$dir2 = "globtest2";
mkdir($dir);
mkdir($dir2);
chdir($dir);
var_dump(glob("../globtest*"));
?>
--CLEAN--
<?php
$dir = "globtest1";
$dir2 = "globtest2";
rmdir($dir);
rmdir($dir2);
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (text_interpolation)  (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

