================================================================================
Interpolated Raw Strings
================================================================================
auto s1 = i`Hello, $(name)`;
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (interpolated_raw_string
        (interpolation_expression
          (expression
            (identifier)))))))

================================================================================
Interpolated Raw Strings Tail $
================================================================================
auto s1 = i`Hello, $(name)$`;
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (interpolated_raw_string
        (interpolation_expression
          (expression
            (identifier)))))))

================================================================================
Interpolated Quoted String
================================================================================
auto s1 = i"Hello, $(salutation ~ name)";
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (interpolated_quoted_string
        (interpolation_expression
          (expression
            (binary_expression
              (add_expression
                (identifier)
                (identifier)))))))))

================================================================================
Interpolated Token String
================================================================================
auto s1 = iq{"Good "~$(timeofday), salutation ~ name};
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (interpolated_token_string
        (string_literal
          (quoted_string))
        (interpolation_expression
          (expression
            (identifier)))
        (identifier)
        (identifier)))))

================================================================================
Interpolated Quoted String With Escape
================================================================================
auto s1 = i"Good $(timeofday), \$ $(salutation ~ name)";
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (interpolated_quoted_string
        (interpolation_expression
          (expression
            (identifier)))
        (interpolated_escape)
        (interpolation_expression
          (expression
            (binary_expression
              (add_expression
                (identifier)
                (identifier)))))))))
