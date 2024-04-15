; See: https://docs.helix-editor.com/master/themes.html#syntax-highlighting
; -------------------------------------------------------------------------

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

; variable.other.member
; ---------------------

(field
  name: (identifier) @variable.other.member)

(contract_body
  (constant
    name: (identifier) @variable.other.member))

(trait_body
  (constant
    name: (identifier) @variable.other.member))

(field_access_expression
  name: (identifier) @variable.other.member)

(lvalue (_) (_) @variable.other.member)

(instance_argument
  name: (identifier) @variable.other.member)

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
  "&" "|"
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
  (#any-of? @type.builtin
    "int8" "int16" "int32" "int64" "int128" "int256" "int257"
    "uint8" "uint16" "uint32" "uint64" "uint128" "uint256"
    "coins" "remaining" "bytes32" "bytes64"))

((type_identifier) @type.builtin
  (#any-of? @type.builtin
    "Address" "Bool" "Builder" "Cell" "Int" "Slice" "String" "StringBuilder"))

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

; string.special.path
; -------------------

(import_statement
  library: (string) @string.special.path)

; constant
; --------

(constant
  name: (identifier) @constant)

; constant.character.escape
; -------------------------

(escape_sequence) @constant.character.escape

; constant.numeric.integer
; ------------------------

(integer) @constant.numeric.integer

; constant.builtin
; ----------------

((identifier) @constant.builtin
  (#any-of? @constant.builtin
    "SendBounceIfActionFail"
    "SendPayGasSeparately"
    "SendIgnoreErrors"
    "SendDestroyIfZero"
    "SendRemainingValue"
    "SendRemainingBalance"
    "ReserveExact"
    "ReserveAllExcept"
    "ReserveAtMost"
    "ReserveAddOriginalBalance"
    "ReserveInvertSign"
    "ReserveBounceIfActionFail")
  (#is-not? local))

(null) @constant.builtin

; constant.builtin.boolean
; ------------------------

(boolean) @constant.builtin.boolean

; keyword
; -------

[
  "with"
  ; "public" ; -- not used, but declared in grammar.ohm
  ; "extend" ; -- not used, but declared in grammar.ohm
] @keyword

; keyword.storage.modifier
; ------------------------

[
  "get" "mutates" "extends" "virtual" "override" "inline" "abstract"
] @keyword.storage.modifier

; keyword.storage.type
; --------------------

[
  "contract" "trait" "struct" "message" "with"
  "const" "let"
] @keyword.storage.type

; keyword.function
; ----------------

[
  "fun"
  "native"
] @keyword.function

; keyword.directive
; -----------------

"primitive" @keyword.directive

; keyword.operator
; ----------------

"initOf" @keyword.operator

; keyword.control.return
; ----------------------

"return" @keyword.control.return

; keyword.control.import
; ----------------------

"import" @keyword.control.import

; keyword.control.repeat
; ----------------------

[
  "while" "repeat" "do" "until"
] @keyword.control.repeat

; keyword.control.conditional
; ---------------------------

[
  "if" "else"
] @keyword.control.conditional

; function
; --------

(func_identifier) @function

(native_function
  name: (identifier) @function)

(static_function
  name: (identifier) @function)

(static_call_expression
  name: (identifier) @function)

(init_function
  "init" @function.method)

(receive_function
  "receive" @function.method)

(bounced_function
  "bounced" @function.method)

(external_function
  "external" @function.method)

(function
  name: (identifier) @function.method)

; function.method
; ---------------

(method_call_expression
  name: (identifier) @function.method)

; function.builtin
; ----------------

(static_call_expression
  name: (identifier) @function.builtin
  (#any-of? @function.builtin
    "send" "sender" "require" "now"
    "myBalance" "myAddress" "newAddress"
    "contractAddress" "contractAddressExt"
    "emit" "cell" "ton"
    "beginString" "beginComment" "beginTailString" "beginStringFromBuilder" "beginCell" "emptyCell"
    "randomInt" "random"
    "checkSignature" "checkDataSignature" "sha256"
    "min" "max" "abs" "pow" "log" "log2"
    "throw" "dump" "getConfigParam"
    "nativeThrowWhen" "nativeThrowUnless" "nativeReserve"
    "nativeRandomize" "nativeRandomizeLt" "nativePrepareRandom" "nativeRandom" "nativeRandomInterval")
  (#is-not? local))

; comment.block
; -------------

(comment) @comment.block

; comment.line
; ------------

((comment) @comment.line
  (#match? @comment.line "^//"))

; attribute
; ---------

[
  "@name"
  "@interface"
] @attribute
