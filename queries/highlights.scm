
(kProgram)        @keyword
(kUnit)           @keyword
(kUses)           @keyword

(kBegin)          @keyword
(kEnd)            @keyword

(kVar)            @keyword
(kConst)          @keyword
(kOut)            @keyword
(kType)           @keyword

(kClass)          @keyword
(kInterface)      @keyword
(kObject)         @keyword
(kRecord)         @keyword
(kArray)          @keyword
(kOf)             @keyword
(kHelper)         @keyword



(kFunction)       @keyword
(kProcedure)      @keyword
(kConstructor)    @keyword
(kDestructor)     @keyword

(kInterface)      @keyword
(kImplementation) @keyword

(kPublished)      @keyword
(kPublic)         @keyword
(kProtected)      @keyword
(kPrivate)        @keyword
(kStrict)         @keyword

(kForward)        @keyword

(kStatic)         @keyword
(kVirtual)        @keyword
(kAbstract)       @keyword
(kOverride)       @keyword

(kStdcall)        @keyword
(kCdecl)          @keyword
(kPascal)         @keyword

(genericType)     @type
(specializedType) @type

(genericProc)     @function

(literalNumber)   @number
(literalString)   @string

(comment)         @comment

(defProc)         @local.scope

(declArg          (identifier) @variable.parameter)
(genericParam     (identifier) @type.parameter)
(declVar          (identifier) @variable)

(identifier)      @identifier

["(" ")"]         @punctuation.bracket
(kAngleOpen)      @punctuation.bracket
(kAngleClose)     @punctuation.bracket
[";" "," ":"]     @punctuation.delimiter

;["=" "." "+" "-" "*" "/" ":="]         @operator
(kDot)            @operator
(kAdd)            @operator
(kSub)            @operator
(kMul)            @operator
(kFdiv)           @operator
(kOr)             @operator
(kXor)            @operator
(kDiv)            @operator
(kMod)            @operator
(kAnd)            @operator
(kShl)            @operator
(kShr)            @operator
(kAssign)         @operator
(kEq)             @operator
;(kLt)             @operator
;(kLte)            @operator
;(kGt)             @operator
;(kGte)            @operator
;(kNe)             @operator
