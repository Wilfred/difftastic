; Parse the contents of tagged template literals using
; a language inferred from the tag.

(call_expression
  (identifier) @injection.language
  (template_string) @injection.content)

(call_expression
  (member_expression
    (property_identifier) @injection.language)
  (template_string) @injection.content)

; Parse regex syntax within regex literals

((regex_pattern) @injection.content
 (set! injection.language "regex"))

 ; Parse JSDoc annotations in comments

((comment) @injection.content
 (set! injection.language "jsdoc"))
