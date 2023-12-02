================================================================================
Assert Expression
================================================================================

void f() {
	assert(0);
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (void))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (expression_statement
          (expression_list
            (assert_expression
              (assert)
              (assert_arguments
                (expression
                  (int_literal))))))))))

================================================================================
Assert Expression Multiple arguments
================================================================================

void f() {
	assert(0, "xyz");
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (void))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (expression_statement
          (expression_list
            (assert_expression
              (assert)
              (assert_arguments
                (expression
                  (int_literal))
                (expression
                  (string_literal))))))))))

================================================================================
Static Assert Expression Multiple arguments
================================================================================

void f() {
	static assert(0, "xyz");
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (void))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (static_assert
          (static)
          (assert_expression
            (assert)
            (assert_arguments
              (expression
                (int_literal))
              (expression
                (string_literal)))))))))
