(number) @number
(character) @character
(boolean) @constant.builtin

[(string)
 (character)] @string

(escape_sequence) @string.escape

[(comment)
 (block_comment)
 (directive)] @comment

[(boolean)
 (character)] @constant

(list
  .
  (symbol) @keyword
  (#match? @keyword
   "^((define)|(let)|(let\\*)|(lambda)|(if)|(cond)|(case)|(else)|(and)|(or)|(not)|(set!)|(begin)|(when))$"))

(list
  .
  (symbol) @operator
  (#match? @operator "^([+*/<>=-]|(<=)|(>=))$"))

(list
  .
  (symbol) @function)

(abbreviation
  "'" (symbol)) @constant

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

