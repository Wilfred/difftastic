; Parse the contents of tagged template literals using
; a language inferred from the tag.

(call_expression
  (identifier) @injection.language
  (template_string) @injection.content) @injection.site

(call_expression
  (member_expression
    (property_identifier) @injection.language)
  (template_string) @injection.content) @injection.site
