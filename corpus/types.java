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
  (class_declaration (normal_class_declaration (identifier)
    (class_body (class_body_declaration (class_member_declaration
      (method_declaration (method_header (unann_type (unann_primitive_type (integral_type))) (method_declarator (identifier)))
        (method_body (block
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))))
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))))
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))))
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier))))))
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (integral_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))))))))))))

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
  (class_declaration (normal_class_declaration (identifier)
    (class_body (class_body_declaration (class_member_declaration
      (method_declaration (method_header (unann_type (unann_primitive_type (integral_type))) (method_declarator (identifier)))
        (method_body (block
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (floating_point_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))) 
          (local_variable_declaration_statement (local_variable_declaration
            (unann_type (unann_primitive_type (floating_point_type))) (variable_declarator_list (variable_declarator (variable_declarator_id (identifier)))))))))))))))
