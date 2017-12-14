==========
$this in constructor test
==========

<?php
class foo {
	function __construct($name) {
     	$GLOBALS['List']= &$this;
     	$this->Name = $name;
		$GLOBALS['List']->echoName();
	}

	function echoName() {
     	$GLOBALS['names'][]=$this->Name;
	}
}

function &foo2(&$foo) {
	return $foo;
}


$bar1 =new foo('constructor');
$bar1->Name = 'outside';
$bar1->echoName();
$List->echoName();

$foo = new foo('constructor');
$bar1 =& foo2($foo);
$bar1->Name = 'outside';
$bar1->echoName();

$List->echoName();

print ($names==array('constructor','outside','outside','constructor','outside','outside')) ? 'success':'failure';
?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string)) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string))) (name) (arguments)))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string)))) (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (simple_variable (variable_name (name)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (string))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (string))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (expression_statement (intrinsic (print_intrinsic (assignment_expression (conditional_expression (binary_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)))) (string) (string)))))))

