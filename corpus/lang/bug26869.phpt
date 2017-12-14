==========
Bug #26869 (constant as the key of static array)
==========

<?php
	define("A", "1");
	static $a=array(A => 1);
	var_dump($a);
	var_dump(isset($a[A]));
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (function_static_declaration (static_variable_declaration (variable_name (name)) (array_creation_expression (array_element_initializer (qualified_name (name)) (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (intrinsic (isset_intrinsic (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (qualified_name (name)))))))))

