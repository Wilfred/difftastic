(num_lit) @number

[
 (buf_lit)
 (long_buf_lit)
 (long_str_lit)
 (str_lit)
] @string

[
 (bool_lit)
 (nil_lit)
] @constant.builtin

(kwd_lit) @constant

(comment) @comment

;; Treat quasiquotation as operators for the purpose of highlighting.

[
 "'"
 "~"
 ","
] @operator
