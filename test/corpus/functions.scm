================================================================================
Basic Function
================================================================================

int f() { return 0; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal)))))))

================================================================================
Single Parameter Function
================================================================================

int f(int c) { return c; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters
      (parameter
        (type
          (int))
        (identifier)))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier)))))))

================================================================================
Var Args Parameter Function
================================================================================

int f(int c, ...) { return c; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters
      (parameter
        (type
          (int))
        (identifier))
      (ellipses))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier)))))))

================================================================================
Var Args Only Function
================================================================================

int f(...) { return c; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters
      (ellipses))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier)))))))

================================================================================
Var Args Type-Safe Function
================================================================================

int f(int...) { return c; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters
      (parameter
        (type
          (int))
        (ellipses)))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier)))))))

================================================================================
Member Function Attributes
================================================================================

int f(int a, int b) @safe pure @myattr { return a+b; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters
      (parameter
        (type
          (int))
        (identifier))
      (parameter
        (type
          (int))
        (identifier)))
    (member_function_attribute
      (at_attribute
        (identifier)))
    (member_function_attribute
      (pure))
    (member_function_attribute
      (at_attribute
        (identifier)))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (binary_expression
              (add_expression
                (identifier)
                (identifier)))))))))

================================================================================
Function literal no parameters
================================================================================

unittest {
	f({return 1;});
}

--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (call_expression
          (type
            (identifier))
          (arguments
            (function_literal
              (block_statement
                (return_statement
                  (return)
                  (expression
                    (int_literal)))))))))))

================================================================================
Function literal anonymous parameter
================================================================================

unittest {
	f((int){return 1;});
}

--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (call_expression
          (type
            (identifier))
          (arguments
            (function_literal
              (type
                (int))
              (block_statement
                (return_statement
                  (return)
                  (expression
                    (int_literal)))))))))))

================================================================================
Function literal named parameter
================================================================================

unittest {
	f((bool b){return 1;});
}

--------------------------------------------------------------------------------

(source_file
  (unittest_declaration
    (unittest)
    (block_statement
      (expression_list
        (call_expression
          (type
            (identifier))
          (arguments
            (function_literal
              (type
                (bool))
              (identifier)
              (block_statement
                (return_statement
                  (return)
                  (expression
                    (int_literal)))))))))))

================================================================================
Function literal auto ref
================================================================================
auto a = auto ref (int x) => x;
auto b = auto ref (int x) { return x; };
auto c = function auto ref (int x) { return x; };
auto d = delegate auto ref (int x) { return x; };

__EOF__
alias e = auto ref (int x) => x;
alias f = auto ref (int x) { return x; };
alias g = function auto ref (int x) { return x; };
alias h = delegate auto ref (int x) { return x; };
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (auto)
      (ref)
      (type
        (int))
      (identifier)
      (identifier)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (auto)
      (ref)
      (type
        (int))
      (identifier)
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier))))))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (function)
      (auto)
      (ref)
      (type
        (int))
      (identifier)
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier))))))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (delegate)
      (auto)
      (ref)
      (type
        (int))
      (identifier)
      (block_statement
        (return_statement
          (return)
          (expression
            (identifier))))))
  (end_file))

================================================================================
Auto functions
================================================================================
    auto foo1() pure immutable { return 0; }
    auto foo2() pure const { return 0; }
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (storage_class
      (auto))
    (identifier)
    (parameters)
    (member_function_attribute
      (pure))
    (member_function_attribute
      (immutable))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal))))))
  (function_declaration
    (storage_class
      (auto))
    (identifier)
    (parameters)
    (member_function_attribute
      (pure))
    (member_function_attribute
      (const))
    (function_body
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal)))))))

================================================================================
Qualified lambda functions
================================================================================
    auto lambda1 = () pure immutable { return 0; };
    auto lambda2 = () pure const { return 0; };
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (member_function_attribute
        (pure))
      (member_function_attribute
        (immutable))
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal))))))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (member_function_attribute
        (pure))
      (member_function_attribute
        (const))
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal)))))))

================================================================================
Qualifeid delegates
================================================================================
    auto dg1 = delegate () pure immutable { return 0; };
    auto dg2 = delegate () pure const { return 0; };
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (delegate)
      (member_function_attribute
        (pure))
      (member_function_attribute
        (immutable))
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal))))))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (function_literal
      (delegate)
      (member_function_attribute
        (pure))
      (member_function_attribute
        (const))
      (block_statement
        (return_statement
          (return)
          (expression
            (int_literal)))))))
