; NOTE: Order of highlight queries matters, as Tree-sitter uses last-wins strategy
; NOTE: Therefore, narrow highlight queries should be placed after broad captures.
; --------------------------------------------------------------------------------

; variable
; --------

(identifier) @variable

; variable.builtin
; ----------------

(self) @variable.builtin

; variable.parameter
; ------------------

(parameter
  name: (identifier) @variable.parameter)

; punctuation.delimiter
; ---------------------

[
  ";"
  ","
  "."
  ":"
  "?"
] @punctuation.delimiter

; punctuation.bracket
; -------------------

[
  "(" ")"
  "{" "}"
] @punctuation.bracket

; operator
; --------

[
  "-" "-="
  "+" "+="
  "*" "*="
  "/" "/="
  "%" "%="
  "=" "=="
  "!" "!=" "!!"
  "<" "<=" "<<"
  ">" ">=" ">>"
  "&" "|" "^"
  "&&" "||"
] @operator

; constructor
; -----------

(instance_expression
  name: (identifier) @constructor)

(initOf
  name: (identifier) @constructor)

; type
; ----

(type_identifier) @type

; type.builtin
; ------------

(tlb_serialization
  "as" @keyword
  type: (identifier) @type.builtin
  (#match? @type.builtin
    "^(int8|int16|int32|int64|int128|int256|int257|uint8|uint16|uint32|uint64|uint128|uint256|coins|remaining|bytes32|bytes64)$"))

((type_identifier) @type.builtin
  (#match? @type.builtin "^(Address|Bool|Builder|Cell|Int|Slice|String|StringBuilder)$"))

(map_type
  "map" @type.builtin
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

(bounced_type
  "bounced" @type.builtin
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

((identifier) @type.builtin
  (#eq? @type.builtin "SendParameters")
  (#is-not? local))

; string
; ------

(string) @string

; string.special
; --------------

(import_statement
  library: (string) @string.special)

(escape_sequence) @string.special

; constant
; --------

(constant
  name: (identifier) @constant)

; constant.builtin
; ----------------

[
  (boolean)
  (null)
] @constant.builtin

((identifier) @constant.builtin
  (#match? @constant.builtin
    "^(SendBounceIfActionFail|SendPayGasSeparately|SendIgnoreErrors|SendDestroyIfZero|SendRemainingValue|SendRemainingBalance|ReserveExact|ReserveAllExcept|ReserveAtMost|ReserveAddOriginalBalance|ReserveInvertSign|ReserveBounceIfActionFail)$")
  (#is-not? local))

; property
; --------

(instance_argument
  name: (identifier) @property)

(lvalue (_) (_) @property)

(field_access_expression
  name: (identifier) @property)

(trait_body
  (constant
    name: (identifier) @property))

(contract_body
  (constant
    name: (identifier) @property))

(field
  name: (identifier) @property)

; number
; ------

(integer) @number

; keyword
; -------

(foreach_statement
  . (_)
  . (_)
  . "in" @keyword)

[
  "get" "mutates" "extends" "virtual" "override" "inline" "abstract"
  "contract" "trait" "struct" "message" "with"
  "const" "let" "fun" "native"
  "primitive" "import"
  "if" "else" "while" "repeat" "do" "until" "foreach"
  "try" "catch"
  "return" "initOf"
  ; "public" ; -- not used, but declared in grammar.ohm
  ; "extend" ; -- not used, but declared in grammar.ohm
] @keyword

; function
; --------

(function
  name: (identifier) @function)

(native_function
  name: (identifier) @function)

(static_function
  name: (identifier) @function)

(static_call_expression
  name: (identifier) @function)

(init_function
  "init" @function)

(receive_function
  "receive" @function)

(bounced_function
  "bounced" @function)

(external_function
  "external" @function)

(func_identifier) @function

(method_call_expression
  name: (identifier) @function)

; function.builtin
; ----------------

(static_call_expression
  name: (identifier) @function.builtin
  (#match? @function.builtin
     "^(log|log2|send|sender|require|now|myBalance|myAddress|newAddress|contractAddress|contractAddressExt|emit|cell|ton|dump|dumpStack|beginString|beginComment|beginTailString|beginStringFromBuilder|beginCell|emptyCell|randomInt|random|checkSignature|checkDataSignature|sha256|min|max|abs|pow|pow2|throw|nativeThrowWhen|nativeThrowUnless|getConfigParam|nativeRandomize|nativeRandomizeLt|nativePrepareRandom|nativeRandom|nativeRandomInterval|nativeReserve)$")
  (#is-not? local))

; comment
; -------

(comment) @comment

; attribute
; ---------

[
  "@name"
  "@interface"
] @attribute
