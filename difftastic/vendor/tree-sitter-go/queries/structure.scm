(import_declaration
  "import" @structure.anchor
  (import_spec_list
    "(" @structure.open
    ")" @structure.close
  )
)

(function_declaration
  "func" @structure.anchor
  body: (block
    "{" @structure.open
    "}" @structure.close
  )
)

(function_declaration
  (identifier) @structure.anchor
  (parameter_list
    "(" @structure.open
    ("," @structure.separator (_))*
    ")" @structure.close
  )
)

(method_declaration
  "func" @structure.anchor
  body: (block
    "{" @structure.open
    "}" @structure.close
  )
)

(call_expression
  function: (_) @structure.anchor
  (argument_list
    "(" @structure.open
    ("," @structure.separator (_))*
    ","? @structure.separator
    ")" @structure.close
  )
)

(composite_literal
  type: (_) @structure.anchor
  body: (literal_value
    "{" @structure.open
    ("," @structure.separator (_)?)*
    "}" @structure.close
  )
)

(literal_value
 "{" @structure.anchor
 ("," @structure.separator (_)?)*
 "}" @structure.close
)

(if_statement
  ["if" "else"] @structure.anchor
  (block
    "{" @structure.open
    "}" @structure.close
  )
)

(if_statement
  "else" @structure.anchor
  (if_statement
    "if"
    (block
      "{" @structure.open
      "}" @structure.close
    )
  )
)

(expression_switch_statement
  "switch" @structure.anchor
  "{" @structure.open
  "}" @structure.close
)

(expression_switch_statement
  (expression_case
    "case" @structure.anchor
    ":" @structure.open
  )
  .
  [
    (expression_case "case" @structure.limit)
    (default_case "default" @structure.limit)
  ]
)

 (expression_switch_statement
   (default_case "default" @structure.anchor)
   "}" @structure.limit
 )

(type_switch_statement
  "switch" @structure.anchor
  "{" @structure.open
  "}" @structure.close
)

(type_switch_statement
  (type_case
    "case" @structure.anchor
    ":" @structure.open
  )
  .
  [
    (type_case "case" @structure.limit)
    (default_case "default" @structure.limit)
  ]
)

(select_statement
  "select" @structure.anchor
  "{" @structure.open
  "}" @structure.close
)

(func_literal
  "func" @structure.anchor
  (block
    "{" @structure.open
    "}" @structure.close
  )
)

(for_statement
  "for" @structure.anchor
  (block
    "{" @structure.open
    "}" @structure.close
  )
)

(type_declaration
  "type" @structure.anchor
  (type_spec
    (struct_type
      (field_declaration_list
        "{" @structure.open
        "}" @structure.close
      )
    )
  )
)

(struct_type
  "struct" @structure.anchor
  (field_declaration_list
    "{" @structure.open
    "}" @structure.close
  )
)

(type_declaration
  "type" @structure.anchor
  (type_spec
    (interface_type
      "{" @structure.open
      "}" @structure.close
    )
  )
)

(interface_type
  "interface" @structure.anchor
  "{" @structure.open
  "}" @structure.close
)
