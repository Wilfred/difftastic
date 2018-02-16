===
assignment expression
===

x = 3;

---

(program
  (assignment_expression
    (lhs (identifier))
      (integer_literal (decimal_integer_literal))))

===
binary expression
===

a > b;
a < b;
a == b;
a >= b;
a <= b;
a != b;
a && b;
a || b;
a & b;
a | b;
a ^ b;
a % b;
a << b;
a >> b;
a >>> b;
3 + 2;
3 - 2;
3 * 2;
9 / 3;

---

(program
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (identifier) (identifier))
  (binary_expression (integer_literal (decimal_integer_literal)) (integer_literal (decimal_integer_literal)))
  (binary_expression (integer_literal (decimal_integer_literal)) (integer_literal (decimal_integer_literal)))
  (binary_expression (integer_literal (decimal_integer_literal)) (integer_literal (decimal_integer_literal)))
  (binary_expression (integer_literal (decimal_integer_literal)) (integer_literal (decimal_integer_literal))))

============================
if statements
============================

if (x)
  y;

---

(program
  (if_then_statement
      (identifier) (identifier)))

============================
if statements with braces
============================

if (x) {
  y;
}

---

(program
  (if_then_statement
    (identifier) (block (identifier))))

============================
if statements with assignment without braces
============================

if (x = 3)
  y = 2;

---

(program
  (if_then_statement
    (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal)))
      (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal)))))

============================
if statements with assignment with braces
============================

if (x = 3) {
  y = 2;
}

---

(program
  (if_then_statement
    (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal)))
      (block
        (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal))))))

===
if statement without braces and one assignment in the then
===

if (x)
  y = 3;

---

(program
  (if_then_statement
    (identifier) (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal)))))

===
if then else statement
===

if (x = 3) {
  y = 9;
} else {
  y = 0;
}

---

(program
  (if_then_else_statement
    (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal)))
     (block (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal))))
     (block (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal))))))

===
nested if then else statements
===

if (a)
  if (b)
    c();
  else
    d();

---

(program
  (if_then_statement
    (identifier)
    (if_then_else_statement
      (identifier)
      (method_invocation (identifier))
      (method_invocation (identifier)))))

===
try-with-resources statements
===

try (FileInputStream input = new FileInputStream("file.txt")) {
  int data = input.read();
}

---

(program
  (try_statement (try_with_resources_statement
    (resource_specification
      (resource
        (unann_type (unann_class_or_interface_type (identifier)))
        (variable_declarator_id (identifier))
        (class_instance_creation_expression
          (unqualified_class_instance_creation_expression (unann_class_or_interface_type (identifier)) (argument_list (string_literal))))))
    (block
      (local_variable_declaration_statement (local_variable_declaration
        (unann_type (unann_primitive_type (integral_type)))
        (variable_declarator_list
          (variable_declarator
            (variable_declarator_id (identifier))
            (variable_initializer (method_invocation (identifier) (identifier)))))))))))

===
assignment
===

class Beyonce {
  public void four() {
    x = 1;
  }
}


---

(program
  (class_declaration (normal_class_declaration
    (identifier)
    (class_body
      (class_body_declaration (class_member_declaration
        (method_declaration
          (modifier)
          (method_header (unann_type (unann_primitive_type)) (method_declarator (identifier)))
          (method_body (block (assignment_expression (lhs (identifier)) (integer_literal (decimal_integer_literal))))))))))))


===
return statement
===

return x;
return x * y;
return x + 2;
return fire(x);

---

(program
  (return_statement (identifier))
  (return_statement (binary_expression (identifier) (identifier)))
  (return_statement (binary_expression (identifier) (integer_literal (decimal_integer_literal))))
  (return_statement (method_invocation (identifier) (argument_list (identifier)))))

===
normal_annotation
===

@SuppressWarnings(value = "unchecked")

---

===
marker annotation
===

@Beta

---

===
single element annotation
===

@SuppressWarnings("unchecked")

---
