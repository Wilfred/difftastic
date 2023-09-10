(call
  item: (ident) @function)
(call
  item: (field field: (ident) @function.method))
(tagged field: (ident) @tag)
(field field: (ident) @tag)
(comment) @comment

; CONTROL
(let "let" @keyword.storage.type)
(branch ["if" "else"] @keyword.control.conditional)
(while "while" @keyword.control.repeat)
(for ["for" "in"] @keyword.control.repeat)
(import "import" @keyword.control.import)
(include "include" @keyword.control.import)
(show "show" @keyword.control)
(set "set" @keyword.control)
(return "return" @keyword.control)
(flow ["break" "continue"] @keyword.control)

; OPERATOR
(in ["in" "not"] @keyword.operator)
(and "and" @keyword.operator)
(or "or" @keyword.operator)
(not "not" @keyword.operator)
(sign ["+" "-"] @operator)
(add "+" @operator)
(sub "-" @operator)
(mul "*" @operator)
(div "/" @operator)
(cmp ["==" "<=" ">=" "!=" "<" ">"] @operator)
(fraction "/" @operator)
(fac "!" @operator)
(attach ["^" "_"] @operator)

; VALUE
(label) @tag
(ref) @tag
(number) @constant.numeric
(string) @string
; (content ["[" "]"] @ponctuatoin.special)
(content ["[" "]"] @operator)
(bool) @constant.builtin.boolean
(builtin) @constant.builtin
(none) @constant.builtin
(auto) @constant.builtin
(ident) @variable
(raw_blck) @markup.raw.block
(raw_span) @markup.raw.inline
(raw_blck
  lang: (ident) @label)
(call
  item: (builtin) @function.builtin)

; MARKUP
(heading) @markup.heading
(url) @tag
(emph) @markup.italic
(strong) @markup.bold
; (text) @string
(item) @markup.list
(term) @markup.list
(symbol) @tag
(shorthand) @constant.builtin
(quote) @markup.quote
(align) @operator
(letter) @tag
(linebreak) @constant.builtin

(math "$" @operator)
"#" @operator
"end" @operator

(escape) @constant.character.escape
["(" ")" "{" "}"] @ponctuation.bracket
["," ";" ".."] @ponctuation.delimiter
"assign" @ponctuation
(field "." @ponctuation)

