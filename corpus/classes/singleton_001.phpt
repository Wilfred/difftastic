==========
ZE2 singleton
==========

<?php

class Counter {
	private $counter = 0;

	function increment_and_print() {
		echo ++$this->counter;
		echo "\n";
    }
}


class SingletonCounter {
	private static $m_instance = NULL;

	static function Instance() {
		if (self::$m_instance == NULL) {
			self::$m_instance = new Counter();
		}
		return self::$m_instance;
	}
}

SingletonCounter::Instance()->increment_and_print();
SingletonCounter::Instance()->increment_and_print();
SingletonCounter::Instance()->increment_and_print();

?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (float)))) (method_declaration (function_definition (name) (compound_statement (echo_statement (update_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))) (echo_statement (string)))))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier) (static_modifier)) (property_element (variable_name (name)) (property_initializer (qualified_name (name))))) (method_declaration (static_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (scoped_property_access_expression (relative_scope) (simple_variable (variable_name (name)))) (qualified_name (name))) (compound_statement (expression_statement (assignment_expression (scoped_property_access_expression (relative_scope) (simple_variable (variable_name (name)))) (object_creation_expression (qualified_name (name)) (arguments)))))) (return_statement (scoped_property_access_expression (relative_scope) (simple_variable (variable_name (name))))))))) (expression_statement (member_call_expression (dereferencable_expression (scoped_call_expression (qualified_name (name)) (name) (arguments))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (scoped_call_expression (qualified_name (name)) (name) (arguments))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (scoped_call_expression (qualified_name (name)) (name) (arguments))) (name) (arguments))))
