; NOTE: Order of highlight queries matters, as Tree-sitter uses the first it finds.
; NOTE: Therefore, narrow highlight queries should be placed before broad captures.
; ---------------------------------------------------------------------------------

; attribute
; ---------

[
  "@name"
  "@interface"
] @attribute

; comment
; -------

(comment) @comment

; function.builtin
; ----------------

((identifier) @function.builtin
  (#match? @function.builtin
     "^(send|sender|require|now|myBalance|myAddress|newAddress|contractAddress|contractAddressExt|emit|cell|ton|dump|beginString|beginComment|beginTailString|beginStringFromBuilder|beginCell|emptyCell|randomInt|random|checkSignature|checkDataSignature|sha256|min|max|abs|pow|throw|nativeThrowWhen|nativeThrowUnless|getConfigParam|nativeRandomize|nativeRandomizeLt|nativePrepareRandom|nativeRandom|nativeRandomInterval|nativeReserve)$")
  (#is-not? local))

; function.method
; ---------------

(method_call_expression
  name: (identifier) @function.method)

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

; keyword
; -------

[
  "get" "mutates" "extends" "virtual" "override" "inline" "abstract"
  "contract" "trait" "struct" "message" "with"
  "const" "let" "fun" "native"
  "primitive" "import"
  "if" "else" "while" "repeat" "do" "until"
  "return" "initOf"
  ; "public" ; -- not used, but declared in grammar.ohm
  ; "extend" ; -- not used, but declared in grammar.ohm
] @keyword

; number
; ------

(integer) @number

; property
; --------

(field
  name: (identifier) @property)

(contract_body
  (constant
    name: (identifier) @property))

(trait_body
  (constant
    name: (identifier) @property))

(field_access_expression
  name: (identifier) @property)

(lvalue (_) (_) @property)

(instance_argument
  name: (identifier) @property)

; constant.builtin
; ----------------

((identifier) @constant.builtin
  (#match? @constant.builtin
    "^(SendPayGasSeparately|SendIgnoreErrors|SendDestroyIfZero|SendRemainingValue|SendRemainingBalance)$")
  (#is-not? local))

[
  (boolean)
  (null)
] @constant.builtin

; constant
; --------

(constant
  name: (identifier) @constant)

; string
; ------

(string) @string

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

; type
; ----

(type_identifier) @type

(instance_expression
  name: (identifier) @type)

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

; punctuation.bracket
; -------------------

[
  "(" ")"
  "{" "}"
] @punctuation.bracket

; punctuation.delimiter
; ---------------------

[
  ";"
  ","
  "."
  ":"
  "?"
] @punctuation.delimiter

; variable.parameter
; ------------------

(parameter
  name: (identifier) @variable.parameter)

; variable.builtin
; ----------------

(self) @variable.builtin

; variable
; --------

(identifier) @variable
