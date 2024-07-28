================================================================================
Simple character literal
================================================================================
auto c1 = 'a';
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal)))

================================================================================
Hexadecimal character literal
================================================================================
auto c2 = '\x12';
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence))))

================================================================================
Unicode character literals
================================================================================
auto c3 = '\ufeff';
auto c4 = '\U01EF1234';
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence))))

================================================================================
HTML entity character literals
================================================================================
auto c5 = '\&copy;';
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence
        (htmlentity)))))

================================================================================
Escaped character literals
================================================================================
auto c6 = '\r';
auto c7 = '\n';
auto c11 = '\'';
auto c12 = '\\';
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence))))

================================================================================
Octal escaped character literals
================================================================================
auto c8 = '\0';
auto c9 = '\01';
auto c10 = '\012';


--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal
      (escape_sequence))))
