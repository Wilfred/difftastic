; Functions

(call_expression
  function: (scoped_identifier
    name: (identifier) @function))

(template_function
  name: (identifier) @function)

(template_method
  name: (field_identifier) @function)

(template_function
  name: (scoped_identifier
    name: (identifier) @function))

(destructor_name (identifier) @function)

; Types

((namespace_identifier) @type
 (match? @type "^[A-Z]"))

(auto) @type

; Constants

(this) @variable.builtin
(nullptr) @constant

; Keywords

"catch" @keyword
"class" @keyword
"constexpr" @keyword
"delete" @keyword
"explicit" @keyword
"final" @keyword
"friend" @keyword
"mutable" @keyword
"namespace" @keyword
"noexcept" @keyword
"new" @keyword
"override" @keyword
"private" @keyword
"protected" @keyword
"public" @keyword
"template" @keyword
"throw" @keyword
"try" @keyword
"typename" @keyword
"using" @keyword
"virtual" @keyword
