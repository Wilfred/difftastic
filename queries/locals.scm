(symbol) @local.reference

(list
 .
 (symbol) @reference._let
 .
 (list
   .
   (list
     .
      (symbol) @local.definition)+)
 (#match? @reference._let "^(let|let\\*|for|for\\*)$")) @local.scope

(list
  .
  (symbol) @reference._def
  .
  (list
    .
    (symbol)
    .
    (symbol)+ @local.definition)
  (#match? @reference._def "^(define|define/contract|define-syntax-rule)$")) @local.scope

(list
  .
  (symbol) @reference._def
  .
  (symbol) @local.definition
  (#match? @reference._def "^(lambda|λ)$")) @local.scope

