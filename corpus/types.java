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
  (class_declaration (identifier)
    (class_body (class_body_declaration (class_member_declaration
      (method_declaration (method_header (unann_type (unann_primitive_type (integral_type))) (method_declarator (identifier)))
        (method_body
          (block 
            (constant_declaration (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
            (constant_declaration (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
            (constant_declaration (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
            (constant_declaration (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
            (constant_declaration (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))))))))))

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

(program
  (class_declaration (identifier)
    (class_body
      (class_body_declaration
        (class_member_declaration
          (method_declaration (method_header (unann_type (unann_primitive_type (integral_type))) (method_declarator (identifier)))
            (method_body
              (block
                (constant_declaration
                  (unann_type (unann_primitive_type (floating_point_type)))
                    (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))
                (constant_declaration
                  (unann_type (unann_primitive_type (floating_point_type)))
                    (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))))))))))
