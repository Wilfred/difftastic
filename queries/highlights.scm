["when" "and" "or" "not" "in" "fn" "do" "end" "catch" "rescue" "after" "else"] @keyword
[(true) (false) (nil)] @constant

(comment) @comment

(escape_sequence) @escape

(ERROR) @warning

(call (identifier) @keyword
      (#match? @keyword "^defmodule|defexception|defp|def|with|case|cond|raise|import|require$"))

(call (identifier) @keyword
      (expr
       [(qualified_call
         (identifier) @function)
        (identifier) @function])
      (#match? @keyword "^defp|def$"))

(call (identifier) @keyword
      (expr
       (binary_op
        left:
        (expr
         [(qualified_call
           name: (identifier) @function)
          (identifier) @function])
        operator: "when"))
      (#match? @keyword "^defp|def$"))

(unary_op
 operator: "@"
 (expr (call (identifier) @attribute
             (expr (heredoc) @doc)))
 (#match? @attribute "^doc|moduledoc$"))

(module) @type

(unary_op
 operator: "@" @attribute
 (expr
  (call
   name: (identifier) @attribute)))

(string_start) @string
(string_content) @string
(string_end) @string

(interpolation
 "#{" @punctuation.special
 "}" @punctuation.special)

(keyword) @tag
(atom) @tag
