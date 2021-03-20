["when" "and" "or" "not" "in" "fn" "do" "end" "catch" "rescue" "after" "else"] @keyword

[(true) (false) (nil)] @constant.builtin

(keyword) @tag
(atom) @tag

(comment) @comment

(escape_sequence) @escape

(call (identifier) @keyword
      (#match? @keyword "^(defmodule|defexception|defp|def|with|case|cond|raise|import|require|use|defmacro|defguard|defstruct|alias)$"))

(call (identifier) @keyword
      [(qualified_call
        (identifier) @function)
       (identifier) @function
       (binary_op
        left:
        [(qualified_call
          name: (identifier) @function)
         (identifier) @function]
        operator: "when")]
      (#match? @keyword "^(defp|def|defmacro|defguard|defdelegate)$"))

(unary_op
 operator: "@"
 (call (identifier) @attribute
       (heredoc) @doc)
 (#match? @attribute "^(doc|moduledoc)$"))

(module) @type

(unary_op
 operator: "@" @attribute
 [(call
   name: (identifier) @attribute)
  (identifier) @attribute])

(unary_op
 operator: _ @operator)

(binary_op
 operator: _ @operator)

(string_start) @string
(string_content) @string
(string_end) @string

(interpolation
 "#{" @punctuation.special
 "}" @punctuation.special)

(ERROR) @warning
