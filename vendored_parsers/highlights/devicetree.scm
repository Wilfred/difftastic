[
    "/delete-node/"
    "/delete-property/"
    "/dts-v1/"
    "/incbin/"
    "/include/"
    "/memreserve/"
    "/omit-if-no-ref/"
    "#define"
    "#undef"
    "#include"
    "#if"
    "#elif"
    "#else"
    "#endif"
    "#ifdef"
    "#ifndef"
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

(node
    label: (identifier) @label)

(property
    label: (identifier) @label)

(memory_reservation
    label: (identifier) @label)

(property
    name: (identifier) @property)

(identifier) @variable

(unit_address) @tag

(reference) @constant

(comment) @comment