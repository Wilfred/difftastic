================================================================================
Class with template, constaint, then base class
================================================================================
class C(T)
if (isTrue(T))
: Base
{
}
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (template_parameters
      (template_parameter
        (identifier)))
    (constraint
      (if)
      (expression
        (call_expression
          (type
            (identifier))
          (named_arguments
            (named_argument
              (expression
                (identifier)))))))
    (base_class
      (identifier))
    (aggregate_body)))

================================================================================
Base class can start with dot
================================================================================
class X : Y, .Z { 
}
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (base_class
      (identifier))
    (base_class
      (identifier))
    (aggregate_body)))

================================================================================
Base class primitive types
================================================================================
class U : int, float , __vector(int[3]) {}
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (base_class
      (int))
    (base_class
      (float))
    (base_class
      (vector_type
        (vector)
        (type
          (int)
          (expression
            (int_literal)))))
    (aggregate_body)))

================================================================================
Base class extended types
================================================================================

class T : typeof(new A), .B, const(C), D!int {}
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (base_class
      (typeof_expression
        (typeof)
        (expression
          (new_expression
            (new)
            (type
              (identifier))))))
    (base_class
      (identifier))
    (base_class
      (type_ctor
        (const))
      (type
        (identifier)))
    (base_class
      (template_instance
        (identifier)
        (template_arguments
          (int))))
    (aggregate_body)))

================================================================================
Template class, no body
================================================================================
class Test(T = MyT);
--------------------------------------------------------------------------------

(source_file
  (class_declaration
    (class)
    (identifier)
    (template_parameters
      (template_parameter
        (identifier)
        (type
          (identifier))))))
