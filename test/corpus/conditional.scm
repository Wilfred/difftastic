================================================================================
Nested conditional declaration
================================================================================
unittest
{
    static if (x == 0)
        enum y = 1;
    else static if (x == 1)
        static if (z == 0)
            char z = 'a';
        else
            char z = 0;
    else static if (x == 2)
        int y = 5;
    else static if (x == 3)
        enum y = 6;
    else
        enum y = 7;
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (conditional_declaration
        (condition
          (static_if_condition
            (static)
            (if)
            (binary_expression
              (equal_expression
                (identifier)
                (int_literal)))))
        (manifest_constant
          (enum)
          (identifier)
          (int_literal))
        (else)
        (conditional_declaration
          (condition
            (static_if_condition
              (static)
              (if)
              (binary_expression
                (equal_expression
                  (identifier)
                  (int_literal)))))
          (conditional_declaration
            (condition
              (static_if_condition
                (static)
                (if)
                (binary_expression
                  (equal_expression
                    (identifier)
                    (int_literal)))))
            (variable_declaration
              (type
                (char))
              (declarator
                (identifier)
                (char_literal)))
            (else)
            (variable_declaration
              (type
                (char))
              (declarator
                (identifier)
                (int_literal))))
          (else)
          (conditional_declaration
            (condition
              (static_if_condition
                (static)
                (if)
                (binary_expression
                  (equal_expression
                    (identifier)
                    (int_literal)))))
            (variable_declaration
              (type
                (int))
              (declarator
                (identifier)
                (int_literal)))
            (else)
            (conditional_declaration
              (condition
                (static_if_condition
                  (static)
                  (if)
                  (binary_expression
                    (equal_expression
                      (identifier)
                      (int_literal)))))
              (manifest_constant
                (enum)
                (identifier)
                (int_literal))
              (else)
              (manifest_constant
                (enum)
                (identifier)
                (int_literal)))))))))
