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
          (arguments
            (identifier)))))
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
