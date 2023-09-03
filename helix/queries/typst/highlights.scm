["if" "else"] @keyword.control.conditional
"while" @keyword.control.repeat
(for ["for" "in"] @keyword.control.repeat)
(in ["in" "not"] @keyword.operator)
(and "and" @keyword.operator)
(or "or" @keyword.operator)
(not "not" @keyword.operator)
["let"] @keyword.storage.type
["import" "include"] @keyword.control.import
["show" "set"] @keyword.control
(number) @constant.numeric
(string) @string
(escape) @constant.character.escape
("#") @constant.character.escape
(call
  item: (ident) @function)
(call
  item: (field field: (ident) @function.method))
(raw_blck) @markup.raw.block
(raw_span) @markup.raw.block
(raw_blck
  lang: (ident) @label)
(emph) @markup.italic
(strong) @markup.bold
(bool) @constant.builtin.boolean
(builtin) @constant.builtin
(call
  item: (builtin) @function.builtin)
(return) @keyword.control
(flow) @keyword.control
(tagged
  field: (ident) @attribute)
(heading) @markup.heading
(comment) @comment
(label) @label