==========
ZE2 factory objects
==========

<?php

class Circle {
	function draw() {
		echo "Circle\n";
	}
}

class Square {
	function draw() {
		print "Square\n";
	}
}

function ShapeFactoryMethod($shape) {
	switch ($shape) {
		case "Circle":
			return new Circle();
		case "Square":
			return new Square();
	}
}

ShapeFactoryMethod("Circle")->draw();
ShapeFactoryMethod("Square")->draw();

?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (echo_statement (string)))))) (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (expression_statement (print_intrinsic (string))))))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (switch_statement (variable_name (name)) (case_statement (string) (return_statement (object_creation_expression (qualified_name (name)) (arguments)))) (case_statement (string) (return_statement (object_creation_expression (qualified_name (name)) (arguments))))))) (expression_statement (member_call_expression (dereferencable_expression (function_call_expression (qualified_name (name)) (arguments (string)))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (function_call_expression (qualified_name (name)) (arguments (string)))) (name) (arguments))))
