================================================================================
If expression
================================================================================

unittest {
    if (true) { doit; }
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (if_statement
        (if)
        (if_condition
          (true))
        (scope_statement
          (block_statement
            (expression_statement
              (expression_list
                (identifier)))))))))

================================================================================
If-Else expression
================================================================================

unittest {
    if (true) { doit; } else { something; }
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (if_statement
        (if)
        (if_condition
          (true))
        (scope_statement
          (block_statement
            (expression_statement
              (expression_list
                (identifier)))))
        (else)
        (scope_statement
          (block_statement
            (expression_statement
              (expression_list
                (identifier)))))))))

================================================================================
If declaration as conditional
================================================================================

unittest {
    if (auto x = testit) { }
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (if_statement
        (if)
        (if_condition
          (auto)
          (identifier)
          (expression
            (identifier)))
        (scope_statement
          (block_statement))))))
