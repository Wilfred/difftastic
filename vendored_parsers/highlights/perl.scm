;; Copied from nvim-treesitter, under Apache License.
;; https://github.com/nvim-treesitter/nvim-treesitter/blob/909b5d26fddad5043e354046571e7c7353b53b61/queries/perl/highlights.scm
;;
;; Some items have been removed as upstream tree-sitter-perl has
;; removed some of the node names. The upstream commit is
;; https://github.com/ganezdragon/tree-sitter-perl/commit/a882a928d4930716896039d1c10e91b6d7444c48

; Misc keywords
[
  "my" "our" "local"
  "next" "last" "redo"
  "goto"
  "package"
;  "do"
;  "eval"
] @keyword

; Keywords for including
[ "use" "no" "require" ] @include

; Keywords that mark conditional statements
[ "if" "elsif" "unless" "else" ] @conditional

; Keywords that mark repeating loops
[ "while" "until" "for" "foreach" ] @repeat

; Keyword for return expressions
[ "return" ] @keyword.return

; Keywords for phaser blocks
; TODO: Ideally these would be @keyword.phaser but vim-treesitter doesn't
;   have such a thing yet
[ "BEGIN" "CHECK" "UNITCHECK" "INIT" "END" ] @keyword.function

; Keywords to define a function
[ "sub" ] @keyword.function

; Lots of builtin functions, except tree-sitter-perl doesn't emit most of
;   these yet
;[
;  "print" "printf" "sprintf" "say"
;  "push" "pop" "shift" "unshift" "splice"
;  "exists" "delete" "keys" "values"
;  "each"
;] @function.builtin

; Keywords that are regular infix operators
[
  "and" "or" "not" "xor"
  "eq" "ne" "lt" "le" "ge" "gt" "cmp"
] @keyword.operator

; Variables
[
  (scalar_variable)
  (array_variable)
  (hash_variable)
] @variable

; Integer numbers
[
  (integer)
  (hexadecimal)
] @number

; Float numbers
[
  (floating_point)
  (scientific_notation)
] @float

; version sortof counts as a kind of multipart integer
(version) @constant

; Package names are types
(package_name) @type

; The special SUPER:: could be called a namespace. It isn't really but it
;   should highlight differently and we might as well do it this way
(super) @namespace

; Comments are comments
(comments) @comment

; POD should be handled specially with its own embedded subtype but for now
;   we'll just have to do this.
(pod_statement) @text

(method_invocation
  function_name: (identifier) @method)

;; call_expression for tree-sitter-perl 1.1.2
;; Only call_expression_with_bareword has a function_name field
(call_expression_with_bareword
  function_name: (identifier) @function)

;; ----------

(use_constant_statement
  constant: (identifier) @constant)

;; Hash-style use constant { SEC => 0, MIN => 1, ... }
;; In tree-sitter-perl 1.1.2, the keys are call_expression_with_bareword nodes
;; inside a hash_ref. Capture as @string to match the bright magenta styling
;; that the old vendored grammar produced.
(use_constant_statement
  (hash_ref
    (call_expression_with_bareword
      (identifier) @string)))

;; named_block_statement removed in tree-sitter-perl 1.1.2

(function_definition
  name: (identifier) @function)

[
"("
")"
"["
"]"
"{"
"}"
] @punctuation.bracket
(standard_input_to_variable) @punctuation.bracket

[
"=~"
"!~"
"="
"=="
"+"
"-"
"."
"//"
"||"
(arrow_operator)
(array_dereference)
(hash_dereference)
(to_reference)
(ternary_expression)
] @operator

;; fat_comma (=>) is only styled as an operator inside hash_ref, matching the
;; old vendored grammar's behavior where the single-constant form
;; (use constant FOO => ...) left => unstyled.
(hash_ref
  (fat_comma) @operator)

[
(regex_option)
(regex_option_for_substitution)
(regex_option_for_transliteration)
] @parameter

[
(word_list_qw)
(command_qx_quoted)
(string_single_quoted)
(string_double_quoted)
(string_qq_quoted)
(transliteration_tr_or_y)
] @string

[
(regex_pattern_qr)
(pattern_matcher_m)
(substitution_pattern_s)
] @string.regex

(escape_sequence) @string.escape

[
","
";"
(start_delimiter)
(end_delimiter)
(ellipsis_statement)
] @punctuation.delimiter

(function_attribute) @field

(function_signature) @type
