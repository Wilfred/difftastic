[
  ; BUG: why function block not indent
  (Block)
  (ContainerDecl)
  (SwitchExpr)
  (InitList)
] @indent

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @branch

[
  (line_comment)
  (container_doc_comment)
  (doc_comment)
  (STRINGLITERAL)
] @ignore
