==========
Testing calling user-level functions from C
==========

<?php

error_reporting(1023);

function print_stuff($stuff)
{
	print $stuff;
}


function still_working()
{
	return "I'm still alive";
}

function dafna()
{
	static $foo = 0;

	print "Dafna!\n";
	print call_user_func("still_working")."\n";
	$foo++;
	return (string) $foo;
}


class dafna_class {
	function __construct() {
		$this->myname = "Dafna";
	}
	function GetMyName() {
		return $this->myname;
	}
	function SetMyName($name) {
		$this->myname = $name;
	}
};

for ($i=0; $i<200; $i++):
	print "$i\n";
	call_user_func("dafna");
	call_user_func("print_stuff","Hey there!!\n");
	print "$i\n";
endfor;


$dafna = new dafna_class();

print $name=call_user_func(array(&$dafna,"GetMyName"));
print "\n";

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (integer)))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (print_intrinsic (variable_name (name)))))) (function_definition (name) (compound_statement (return_statement (string)))) (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (float))) (expression_statement (print_intrinsic (string))) (expression_statement (print_intrinsic (binary_expression (function_call_expression (qualified_name (name)) (arguments (string))) (string)))) (expression_statement (update_expression (variable_name (name)))) (return_statement (cast_expression (cast_type) (variable_name (name)))))) (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string)))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name)))))))) (for_statement (assignment_expression (variable_name (name)) (float)) (binary_expression (variable_name (name)) (integer)) (update_expression (variable_name (name))) (expression_statement (print_intrinsic (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (print_intrinsic (string)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (print_intrinsic (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (variable_name (name))) (array_element_initializer (string)))))))) (expression_statement (print_intrinsic (string))))

