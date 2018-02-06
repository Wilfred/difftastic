===
module
===

module com.foo { }
open module com.foo { }

---

(program
  (module_declaration (module_identifier (identifier) (identifier)))
  (module_declaration (module_identifier (identifier) (identifier))))

===
module with normal annotation
===

@RequestForEnhancement(
    id       = 2868724,
    synopsis = "Provide time-travel functionality",
    engineer = "Mr. Peabody",
    date     = "4/1/2004"
)
module com.foo { }

---

(program
  (module_declaration
    (normal_annotation
      (package_or_type_name
        (identifier))
      (element_value_pair_list
        (element_value_pair (identifier) (element_value (integer_literal (decimal_integer_literal))))
        (element_value_pair (identifier) (element_value (string_literal)))
        (element_value_pair (identifier) (element_value (string_literal)))
        (element_value_pair (identifier) (element_value (string_literal)))))
    (module_identifier (identifier) (identifier))))

===
module with marker annotation
===

@Preliminary module com.foo { }
@Preliminary open module com.foo { }

---

(program
  (module_declaration (marker_annotation (package_or_type_name (identifier))) (module_identifier (identifier) (identifier)))
  (module_declaration (marker_annotation (package_or_type_name (identifier))) (module_identifier (identifier) (identifier))))

===
module with single element annotation
===

@Copyright("a") module com.foo { }

---

(program
  (module_declaration
    (single_element_annotation
      (package_or_type_name (identifier))
      (string_literal))
    (module_identifier (identifier) (identifier))))

===
package_declaration
===

package myVector;

---

(program (package_declaration (identifier)))

===
module directive
===

module com.example.foo {
    requires com.example.foo.http;
}

---

(program
  (module_declaration
  (module_identifier (identifier) (identifier) (identifier))
  (module_directive
    (module_name
      (module_name
        (module_name
          (module_name (identifier)) (identifier)) (identifier)) (identifier)))))

===
module directive with requires, exports, opens, uses and provides
===

module com.example.foo {
    requires com.example.foo.http;
    requires java.logging;

    requires transitive com.example.foo.network;

    exports com.example.foo.bar;
    exports com.example.foo.internal to com.example.foo.probe;

    opens com.example.foo.quux;
    opens com.example.foo.internal to com.example.foo.network,
                                      com.example.foo.probe;

    uses com.example.foo.spi.Intf;
    provides com.example.foo.spi.Intf with com.example.foo.Impl;
}
---

(program
  (module_declaration (module_identifier (identifier) (identifier) (identifier))
    (module_directive (module_name (module_name (module_name (module_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (module_name (module_name (identifier)) (identifier)))
    (module_directive (requires_modifier) (module_name (module_name (module_name (module_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)) (module_name (module_name (module_name (module_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)) (module_name (module_name (module_name (module_name (identifier)) (identifier)) (identifier)) (identifier)) (module_name (module_name (module_name (module_name (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)) (identifier)))
    (module_directive (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)) (identifier)) (package_or_type_name (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)) (identifier)))))

===
single type import declaration
===

import java.util.Vector;

---

(program
  (import_statement
    (single_type_import_declaration (package_or_type_name (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier)))))

===
type_import_on_declaraction
===

import java.util.*;

---

(program
  (import_statement
    (type_import_on_declaraction (package_or_type_name (package_or_type_name (identifier)) (identifier)))))

===
single static import declaration
===

import static java.util.Vector;

---

(program
  (import_statement (single_static_import_declaration (package_or_type_name (package_or_type_name (identifier)) (identifier)) (identifier))))

===
static import on demand declaration
===

import static java.util.*;

---

(program
  (import_statement (static_import_on_demand_declaration (package_or_type_name (package_or_type_name (identifier)) (identifier)))))

===
class declaration
===

class Point {
}

---

(program
  (class_declaration
    (normal_class_declaration (identifier) (class_body))))

===
class declaration involving public, private, abstract and superclass
===

public class Point {
}

private class Point {
}

abstract class ColoredPoint extends Point {
}

---

(program
  (class_declaration
    (normal_class_declaration
      (modifier) (identifier) (class_body)))
  (class_declaration
    (normal_class_declaration
      (modifier) (identifier) (class_body)))
    (class_declaration
      (normal_class_declaration
        (modifier) (identifier) (superclass (class_or_interface_type (identifier))) (class_body))))

===
class declaration with implements
===

public class Dog implements ISpeak {
}

---

(program
  (class_declaration
    (normal_class_declaration
     (modifier) (identifier) (super_interfaces (interface_type_list (class_or_interface_type (identifier)))) (class_body))))

===
class declaration with body
===

class Point {
  x;
}

---

===
interface declaration
===

interface Top {
}

---

(program
  (interface_declaration
    (normal_interface_declaration (identifier) (interface_body))))

===
interface declaration with extends
===

interface Left extends Top {
}

interface Bottom extends Left, Right {}

---

(program
  (interface_declaration
    (normal_interface_declaration (identifier)
      (extends_interfaces (interface_type_list (class_or_interface_type (identifier)))) (interface_body)))
  (interface_declaration
    (normal_interface_declaration (identifier)
      (extends_interfaces (interface_type_list (class_or_interface_type (identifier)) (class_or_interface_type (identifier)))) (interface_body))))

===
interface with annotation type declaration
===

@interface SelfRef {}

---

(program
  (interface_declaration (annotation_type_declaration (identifier) (annotation_type_body))))

===
method declaration
===

void calculateAnswer(double wingSpan, int numberOfEngines,
                              double length, double grossTons) {
    //do the calculation here
}

---

(program
  (method_declaration
    (method_header
      (unann_type (unann_primitive_type))
      (method_declarator
        (identifier)
        (formal_parameter (unann_type (unann_primitive_type (floating_point_type))) (variable_declarator_id (identifier)))
        (formal_parameter (unann_type (unann_primitive_type (integral_type))) (variable_declarator_id (identifier)))
        (formal_parameter (unann_type (unann_primitive_type (floating_point_type))) (variable_declarator_id (identifier)))
        (last_formal_parameter (formal_parameter (unann_type (unann_primitive_type (floating_point_type))) (variable_declarator_id (identifier))))))
      (method_body (block (comment)))))

===
constructor declaration
===

class Point {
    int x, y;
    Point(int x, int y) { this.x = x; this.y = y; }
}

---

(program
  (class_declaration
    (normal_class_declaration (identifier)
      (class_body (class_body_declaration
        (class_member_declaration
          (field_declaration
            (unann_type (unann_primitive_type (integral_type)))
              (variable_declarator_list
                (variable_declarator (variable_declarator_id (identifier)))
                (variable_declarator (variable_declarator_id (identifier)))))))
                (class_body_declaration
                  (constructor_declaration
                    (constructor_declarator (identifier)
                      (formal_parameter
                        (unann_type (unann_primitive_type (integral_type))) (variable_declarator_id (identifier))) (last_formal_parameter
                      (formal_parameter
                        (unann_type (unann_primitive_type (integral_type))) (variable_declarator_id (identifier)))))
                          (constructor_body
                            (assignment_expression (lhs (field_access (primary (primary_no_new_array)) (identifier))) (ambiguous_name (identifier)))
                            (assignment_expression (lhs (field_access (primary (primary_no_new_array)) (identifier))) (ambiguous_name (identifier))))))))))
