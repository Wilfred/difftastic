===
integral types
===

class Beyonce {
  int formation() {
    int x;
    byte x;
    short x;
    long x;
    char x;
  }
}

---

(program
  (class_declaration (identifier) (class_body
    (method_declaration
      (method_header (integral_type) (method_declarator (identifier)))
      (method_body (block
        (constant_declaration (integral_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
        (constant_declaration (integral_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
        (constant_declaration (integral_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
        (constant_declaration (integral_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
        (constant_declaration (integral_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))))))))

===
floating point type
===

class Beyonce {
  int formation() {
    float x;
    double x;
  }
}

---

(program (class_declaration (identifier) (class_body (method_declaration (method_header (integral_type) (method_declarator (identifier))) (method_body (block (constant_declaration (floating_point_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))) (constant_declaration (floating_point_type) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))))))))) 
