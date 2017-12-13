==========
Static variables in functions
==========

<?php
function blah()
{
  static $hey=0,$yo=0;

  echo "hey=".$hey++.", ",$yo--."\n";
}

blah();
blah();
blah();
if (isset($hey) || isset($yo)) {
  echo "Local variables became global :(\n";
}

---

(program (script_section (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (float)) (static_variable_declaration (variable_name (name)) (float))) (echo_statement (sequence_expression (binary_expression (binary_expression (string) (postfix_increment_expression (simple_variable (variable_name (name))))) (string)) (binary_expression (postfix_decrement_expression (simple_variable (variable_name (name)))) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (if_statement (binary_expression (intrinsic (isset_intrinsic (simple_variable (variable_name (name))))) (intrinsic (isset_intrinsic (simple_variable (variable_name (name)))))) (compound_statement (echo_statement (string))))))
