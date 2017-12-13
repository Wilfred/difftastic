==========
Class method registration
==========

<?php
class A {
	function foo() {}
}

class B extends A {
	function foo() {}
}

class C extends B {
	function foo() {}
}

class D extends A {
}

class F extends D {
	function foo() {}
}

// Following class definition should fail, but cannot test
/*
class X {
	function foo() {}
	function foo() {}
}
*/

echo "OK\n";
?>

---

(program (script_section (class_declaration (name) (method_declaration (function_definition (name) (compound_statement)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (method_declaration (function_definition (name) (compound_statement)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (method_declaration (function_definition (name) (compound_statement)))) (class_declaration (name) (class_base_clause (qualified_name (name)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (method_declaration (function_definition (name) (compound_statement)))) (comment) (comment) (echo_statement (string))))

