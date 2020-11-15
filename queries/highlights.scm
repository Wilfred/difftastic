[
    "/delete-node/"
    "/delete-property/"
    "#define"
    "#include"
] @keyword

[
    "!"
    "~"
    "-"
    "+"
    "*"
    "/"
    "%"
    "||"
    "&&"
    "|"
    "^"
    "&"
    "=="
    "!="
    ">"
    ">="
    "<="
    ">"
    "<<"
    ">>"
] @operator

[
    ","
    ";"
] @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
    "<"
    ">"
] @punctuation.bracket

(call_expression
    function: (identifier) @function)

(labeled_item
    label: (identifier) @label)

(property
    name: (identifier) @property)

(identifier) @variable

(unit_address) @tag

(reference) @constant

(comment) @comment