================================================================================
Inline assembler
================================================================================
int f() {
  asm{
        db 5,6,0x83;   // insert bytes 0x05, 0x06, and 0x83 into code
  }
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (asm_statement
          (asm)
          (asm_inline
            (identifier)
            (int_literal)
            (int_literal)
            (int_literal))
          (comment))))))

================================================================================
Inline assember - empty
================================================================================
int f() {
  asm{}
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (asm_statement
          (asm))))))

================================================================================
Inline assember with attributes
================================================================================
int f() {
  asm pure @uda {
    mov EAX,x;
  }
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (asm_statement
          (asm)
          (pure)
          (at_attribute
            (identifier))
          (asm_inline
            (identifier)
            (identifier)
            (identifier)))))))

================================================================================
Inline assembler braces
================================================================================
int f() {
  asm {
    ds "right brace}"; // the } is ignored
  }
}
--------------------------------------------------------------------------------

(source_file
  (function_declaration
    (type
      (int))
    (identifier)
    (parameters)
    (function_body
      (block_statement
        (asm_statement
          (asm)
          (asm_inline
            (identifier)
            (string_literal))
          (comment))))))
