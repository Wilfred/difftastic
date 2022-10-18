================================================================================
Extern C++
================================================================================
extern(C++) class Foo{}
--------------------------------------------------------------------------------

(source_file
  (linkage_attribute
    (extern))
  (class_declaration
    (class)
    (identifier)
    (aggregate_body)))

================================================================================
Extern C++ empty namespaces
================================================================================
extern(C++,) class Foo{}
--------------------------------------------------------------------------------

(source_file
  (linkage_attribute
    (extern))
  (class_declaration
    (class)
    (identifier)
    (aggregate_body)))

================================================================================
Extern C++ namespaces
================================================================================
extern(C++, class)
extern(C++, __traits(getCppNamespaces,C))
extern(C++, (ns))
class ScopeClass { }
--------------------------------------------------------------------------------

(source_file
  (linkage_attribute
    (extern)
    (class))
  (linkage_attribute
    (extern)
    (namespace_list
      (expression
        (traits_expression
          (traits)
          (identifier)
          (template_argument
            (identifier))))))
  (linkage_attribute
    (extern)
    (namespace_list
      (expression
        (primary_expression
          (expression_list
            (identifier))))))
  (class_declaration
    (class)
    (identifier)
    (aggregate_body)))
