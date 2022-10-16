================================================================================
Function contracts
================================================================================
class C
{
    int foo() out{} in{} out(r){} in(true) out(; true) out(r; true)
    {
        return 2;
    }
}
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (aggregate_body
      (function_declaration
        (type
          (int))
        (identifier)
        (parameters)
        (function_body
          (out_statement
            (out)
            (block_statement))
          (in_statement
            (in)
            (block_statement))
          (out_statement
            (out)
            (identifier)
            (block_statement))
          (in_contract_expression
            (in)
            (true))
          (out_contract_expression
            (out)
            (true))
          (out_contract_expression
            (out)
            (identifier)
            (true))
          (block_statement
            (return_statement
              (return)
              (expression
                (int_literal)))))))))
