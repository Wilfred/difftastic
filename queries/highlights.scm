;; A highlight query can override the highlights queries before it.
;; So the order is important.
;; We should highlight general rules, then highlight special forms.

(number) @number
(character) @character
(boolean) @boolean
(string) @string
(comment) @comment

(escape_sequence) @string.escape

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

;; variables

(symbol) @variable
((symbol) @variable.builtin
 (#any-of? @variable.builtin "..." "."))

;; procedure

(list
 .
 (symbol) @function)

;; special structures

(list
 "["
 (symbol)+ @variable
 "]")

(list
 .
 (symbol) @f
 .
 (list
  (symbol)* @variable)
 (#eq? @f "lambda"))

;; operators

((symbol) @operator
 (#any-of? @operator
  "+" "-" "*" "/" "=" "<=" ">=" "<" ">"))

;; keyword

((symbol) @keyword
 (#any-of? @keyword
  "define" "lambda" "begin" "do" "define-syntax"
  "and" "or"
  "if" "cond" "case" "when" "unless" "else" "=>"
  "let" "let*" "let-syntax" "let-values" "let*-values" "letrec" "letrec*" "letrec-syntax"
  "set!"
  "syntax-rules"
  "quote" "unquote" "quote-splicing" "quasiquote"
  "delay"))

((symbol) @conditional
 (#any-of? @conditional "if" "cond" "case" "when" "unless"))

;; quote

(abbreviation
 "'"
 (symbol)) @symbol

(list
 .
 (symbol) @f
 (#eq? @f "quote")) @symbol

;; builtin procedures

((symbol) @function.builtin
 (#any-of? @function.builtin
  ;; number
  "eqv?" "eq?" "equal?"
  "number?" "complex?" "real?" "rational?" "integer?"
  "exact?" "inexact?"
  "zero?" "positive?" "negative?" "odd?" "even?"
  "abs" "quotient" "remainder" "modulo"
  "gcd" "lcm" "numerator" "denominator"
  "floor" "ceiling" "truncate" "round"
  "rationalize"
  "exp" "log" "sin" "cos" "tan" "asin" "acos" "atan"
  "sqrt" "expt"
  "make-rectangular" "make-polar" "real-part" "imag-part" "magnitude" "angle"
  "exact->inexact" "inexact->exact"
  "number->string" "string->number"
  "boolean?"
  ;; pair
  "pair?" "cons" "car" "cdr" "caar" "cadr"
  "set-car!" "set-cdr!"
  ;; list
  "null?" "list?"
  "list" "length" "append" "reverse" "list-tail" "list-ref" 
  "memq" "memv" "member" "assq" "assv" "assoc"
  ;; symbol
  "symbol?" "symbol->string" "string->symbol"
  ;; char
  "char?" "char=?" "char<?" "char>?" "char<=?" "char>=?"
  "char-ci=?" "char-ci<?" "char-ci>?" "char-ci<=?" "char-ci>=?"
  "char-alphabetic?" "char-numeric?" "char-whitespace?" "char-upper-case?" "char-lower-case?"
  "char->integer" "integer->char"
  "char-upcase" "char-downcase"
  ;; string
  "string?" "make-string" "string" "string-length" "string-ref" "string-set!"
  "string=?" "string-ci=?" "string<?" "string>?" "string<=?" "string>=?"
  "string-ci<?" "string-ci>?" "string-ci<=?" "string-ci>=?"
  "substring" "string-append" "string->list" "list->string"
  "string-copy" "string-fill!"
  ;; vector
  "vector?" "make-vector" "vector" "vector-length" "vector-ref" "vector-set!"
  "vector->list" "list->vector" "vector-fill!"
  ;; control
  "procedure?" "apply" "map" "for-each" "force"
  "call-with-current-continuation" "call/cc"
  "values" "call-with-values" "dynamic-wind" 
  "eval" "scheme-report-environment" "null-environment" "interaction-environment"
  ;; IO
  "call-with-input-file" "call-with-output-file" "input-port?" "output-port?"
  "current-input-port" "current-output-port" "with-input-from-file" "with-output-to-file"
  "open-input-file" "open-output-file" "close-input-port" "close-output-port"
  ;; input
  "read" "read-char" "peek-char" "eof-object?" "char-ready?"
  ;; output
  "write" "display" "newline" "write-char"
  ;; system
  "load" "transcript-on" "transcript-off"))
