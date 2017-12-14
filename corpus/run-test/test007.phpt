==========
dirname test
==========

<?php

// Allow for either Win32 or Unix.
$s = dirname("/foo");
// $s should be either / (Unix) or \ (Win32)

function check_dirname($path) {
    global $s;
    $path1 = str_replace("%",$s,$path);
    $path2 = dirname($path1);
    $path3 = str_replace($s,"%",$path2);
    print "dirname($path) == $path3\n";
}

check_dirname("%foo%");
check_dirname("%foo");
check_dirname("%foo%bar");
check_dirname("%");
check_dirname("...%foo");
check_dirname(".%foo");
check_dirname("foobar%%%");
check_dirname("%\0%\0%\0.%\0.");

function same($a,$b) {
    if ($a == $b) {
        print "OK\n";
    } else {
        print "FAIL  $a == $b\n";
    }
}

if ('/' == $s) {
    same(".",dirname("d:\\foo\\bar.inc"));
    same(".",dirname("c:\\foo"));
    same(".",dirname("c:\\"));
    same(".",dirname("c:"));
} else {
    same("d:\\foo",dirname("d:\\foo\\bar.inc"));
    same("c:\\",dirname("c:\\foo"));
    same("c:\\",dirname("c:\\"));
    same("c:",dirname("c:"));
}

?>

---

(program  (comment) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string))))) (comment) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (global_declaration (simple_variable (variable_name (name)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string) (simple_variable (variable_name (name))))))) (expression_statement (intrinsic (print_intrinsic (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (compound_statement (expression_statement (intrinsic (print_intrinsic (string))))) (else_clause (compound_statement (expression_statement (intrinsic (print_intrinsic (string))))))))) (if_statement (binary_expression (string) (simple_variable (variable_name (name)))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string))))))) (else_clause (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (function_call_expression (qualified_name (name)) (arguments (string))))))))))

