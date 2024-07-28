================================================================================
Quoted Strings
================================================================================
auto s1 = "abc";
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string))))

================================================================================
Quoted String with Simple Escape
================================================================================
auto s2 = "a\"bc";
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string
        (escape_sequence)))))

================================================================================
Quoted String with Unicode Escape
================================================================================
auto s3 = "a\u1234b\\";

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string
        (escape_sequence)
        (escape_sequence)))))

================================================================================
Quoted String with Character Entity
================================================================================
auto s3 = "a\&trademark;";

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string
        (escape_sequence
          (identifier))))))

================================================================================
Quoted String with Character Entity (with whitespace)
================================================================================
auto s3 = "a\& trademark ;";

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string
        (escape_sequence
          (identifier))))))

================================================================================
Quoted String with Suffix
================================================================================
auto s3 = "asWords"w;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string))))

================================================================================
Quoted String with Unicode Wide
================================================================================

auto s10 = "🥂"w;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (quoted_string))))
