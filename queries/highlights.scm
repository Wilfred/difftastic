(IDENTIFIER) @variable

"return" @keyword.return

"fn" @keyword.function

(STRINGLITERAL) @string
(ContainerField
  (IDENTIFIER) @field
)
[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

[
  "continue"
  "else"
  "if"
  "switch"
] @conditional

[
  "for"
  "while"
] @repeat
[
  "align"
  "allowzero"
  "and"
  "anyframe"
  "anytype"
  "asm"
  "await"
  "break"
  "callconv"
  "catch"
  "comptime"
  "const"
  "continue"
  "defer"
  "else"
  "enum"
  "errdefer"
  "error"
  "export"
  "extern"
  "for"
  "if"
  "inline"
  "noalias"
  "nosuspend"
  "noinline"
  "null"
  "opaque"
  "or"
  "orelse"
  "packed"
  "pub"
  "resume"
  "linksection"
  "struct"
  "suspend"
  "switch"
  "test"
  "threadlocal"
  "try"
  "undefined"
  "union"
  "unreachable"
  "usingnamespace"
  "var"
  "volatile"
  "while"
] @keyword

[
  "&"
  "&="
  "*"
  "*="
  ;"*%"
  "*%="
  ;"^"
  "^="
  ":"
  ","
  "."
  ".."
  "..."
  ".*"
  ".?"
  "="
  ;"=="
  "=>"
  "!"
  ;"!="
  ;"<"
  ;"<<"
  "<<="
  ; "<="
  "-"
  "-="
  "-%"
  "-%="
  ;"->"
  ;"%"
  "%="
  "|"
  ;"||"
  "|="
  ;"+"
  ;"++"
  "+="
  ;"+%"
  "+%="
  "?"
  ;">"
  ;">>"
  ">>="
  ;">="
  ;"/"
  "/="
  "~"
] @operator

[
  ";"
  "."
  ","
] @punctuation.delimiter
