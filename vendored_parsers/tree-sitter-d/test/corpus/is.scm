================================================================================
Is expression
================================================================================

void f() {
	return is(int);
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
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (int)))))))))

================================================================================
Is expression specialization
================================================================================

void f() {
	return is(int: shared);
	return is(mytype == enum);
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
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (int))
              (type_specialization
                (shared)))))
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (identifier))
              (type_specialization
                (enum)))))))))

================================================================================
Is expression identifier
================================================================================

void f() {
	return is(int x: shared);
	return is(mytype == enum);
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
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (int))
              (identifier)
              (type_specialization
                (shared)))))
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (identifier))
              (type_specialization
                (enum)))))))))

================================================================================
Is expression templated
================================================================================

void f() {
	return is(int x: shared, X);
	return is(mytype == enum);
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
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (int))
              (identifier)
              (type_specialization
                (shared))
              (template_parameter
                (identifier)))))
        (return_statement
          (return)
          (expression
            (is_expression
              (is)
              (type
                (identifier))
              (type_specialization
                (enum)))))))))

================================================================================
Is identity expression
================================================================================

void f() {
	return x is null;
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
        (return_statement
          (return)
          (expression
            (binary_expression
              (identity_expression
                (identifier)
                (is)
                (null)))))))))

================================================================================
Is not identity expression
================================================================================

void f() {
	return x !is null;
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
        (return_statement
          (return)
          (expression
            (binary_expression
              (identity_expression
                (identifier)
                (not_is)
                (null)))))))))
