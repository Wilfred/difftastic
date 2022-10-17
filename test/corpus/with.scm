================================================================================
With statement
================================================================================
unittest { with (x) x++; }
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (with_statement
        (with)
        (expression
          (identifier))
        (expression_statement
          (expression_list
            (postfix_expression
              (identifier))))))))

================================================================================
With statment declaration
================================================================================
unittest { with (x) int y = 0; }
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (with_statement
        (with)
        (expression
          (identifier))
        (variable_declaration
          (type
            (int))
          (declarator
            (identifier)
            (int_literal)))))))
