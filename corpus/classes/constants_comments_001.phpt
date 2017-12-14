==========
Class constants and doc comments
==========

<?php
class X {
	/** comment X1 */
	const X1 = 1;
	const X2 = 2;
	/** comment X3 */
	const X3 = 3;
}
class Y extends X {
	/** comment Y1 */
	const Y1 = 1;
	const Y2 = 2;
	/** comment Y3 */
	const Y3 = 3;
}
$r = new ReflectionClass('Y');
foreach ($r->getReflectionConstants() as $rc) {
	echo $rc->getName() . " : " . $rc->getDocComment() . "\n";
}


?>

---

(program  (class_declaration (name) (comment) (class_const_declaration (const_element (name) (float))) (class_const_declaration (const_element (name) (float))) (comment) (class_const_declaration (const_element (name) (float)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (comment) (class_const_declaration (const_element (name) (float))) (class_const_declaration (const_element (name) (float))) (comment) (class_const_declaration (const_element (name) (float)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (string))))) (foreach_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)) (simple_variable (variable_name (name))) (compound_statement (echo_statement (binary_expression (binary_expression (binary_expression (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)) (string)) (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (string))))))
