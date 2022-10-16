================================================================================
New builtin type
================================================================================
unittest {
    x = new int;
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (assignment_expression
          (identifier)
          (new_expression
            (new)
            (type
              (int))))))))

================================================================================
New array
================================================================================
unittest {
  x = new char[400];
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (assignment_expression
          (identifier)
          (new_expression
            (new)
            (type
              (char)
              (expression
                (int_literal)))))))))

================================================================================
New anonymous class no args
================================================================================
unittest
{
    auto myIota = new class
    {
        int front = 0;
    };
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (auto_declaration
        (storage_class
          (auto))
        (identifier)
        (new_expression
          (new)
          (class)
          (aggregate_body
            (variable_declaration
              (type
                (int))
              (declarator
                (identifier)
                (int_literal)))))))))

================================================================================
New anonymous class args
================================================================================
unittest {
  x = new class(3) { this(int) { }};
}
--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (assignment_expression
          (identifier)
          (new_expression
            (new)
            (class)
            (int_literal)
            (aggregate_body
              (constructor
                (this)
                (parameters
                  (parameter
                    (type
                      (int))))
                (function_body
                  (block_statement))))))))))

================================================================================
Explicit instantiation
================================================================================
void main()
{
    auto c = new C;
    c.new N!(c.m);
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
        (auto_declaration
          (storage_class
            (auto))
          (identifier)
          (new_expression
            (new)
            (type
              (identifier))))
        (expression_list
          (property_expression
            (identifier)
            (new_expression
              (new)
              (type
                (template_instance
                  (identifier)
                  (template_arguments
                    (template_argument
                      (type
                        (identifier)
                        (identifier)))))))))))))
