[
    "/delete-node/"
    "/delete-property"
    "#define"
    "#else"
    "#endif"
    "#if"
    "#ifdef"
    "#ifndef"
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

(labeled_definition
    label: (dt_identifier) @label)

(dt_identifier) @variable
(identifier) @variable

(comment) @comment