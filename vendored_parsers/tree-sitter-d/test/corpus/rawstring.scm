================================================================================
Backquoted String
================================================================================

auto s4 = `abc def
`;
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))))

================================================================================
Empty Backquoted String
================================================================================

auto s4 = ``;
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))))

================================================================================
Backquoted String With Suffix
================================================================================

auto s4 = `abc def`c;
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))))

================================================================================
Raw String
================================================================================

auto s5 = r"
this is some text
";
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))))

================================================================================
Raw String Suffix w
================================================================================

auto s = r"something"w;
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))))

================================================================================
Raw String Suffix Invalid (whitespace)
================================================================================

auto s = r"something" w;
---

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (raw_string))
    (ERROR
      (identifier))))
