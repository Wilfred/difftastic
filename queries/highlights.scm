
[
	(kProgram)
	(kUnit)
	(kUses)

	(kBegin)
	(kEnd)

	(kVar)
	(kConst)
	(kOut)
	(kType)
	(kLabel)

	(kProperty)
	(kRead)
	(kWrite)
	(kDefault)
	(kIndex)

	(kClass)
	(kInterface)
	(kObject)
	(kRecord)
	(kArray)
	(kString)
	(kSet)
	(kOf)
	(kHelper)
	(kPacked)

	(kFunction)
	(kProcedure)
	(kConstructor)
	(kDestructor)

	(kInterface)
	(kImplementation)
	(kInitialization)
	(kFinalization)

	(kPublished)
	(kPublic)
	(kProtected)
	(kPrivate)
	(kStrict)

	(kForward)

	(kStatic)
	(kVirtual)
	(kAbstract)
	(kOverride)
	(kInherited)
	(kInline)

	(kStdcall)
	(kCdecl)
	(kPascal)

	(kFor)
	(kTo)
	(kIf)
	(kThen)
	(kElse)
	(kDo)
	(kWhile)
	(kRepeat)
	(kUntil)
	(kTry)
	(kExcept)
	(kFinally)
	(kCase)
	(kGoto)
	(kBreak)
	(kContinue)
	(kExit)
] @keyword

[
	(genericType)
	(qualifiedType)
	(type)
] @type

(genericProc)     @function
;(genericProc)     @method

(literalNumber)   @number
(literalString)   @string

(comment)         @comment

(defProc)         @local.scope

(declArg          (identifier) @variable.parameter)
(genericParam     (identifier) @type.parameter)
(specializedParam (identifier) @type)
(declVar          (identifier) @variable)
(declConst        (identifier) @constant)
;(declProp   name: (identifier) @property)
(declProp   name: (identifier) @function)

(reference ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
(declEnumValue ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
(defaultValue ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))

(identifier)      @identifier


[
	"("
	")"
	"["
	"]"
	(kAngleOpen) 
	(kAngleClose)
] @punctuation.bracket

[
	";"
	","
	":"
	".."
	(kEndDot)
] @punctuation.delimiter

[
	(kDot)
	(kAdd)
	(kSub)
	(kMul)
	(kFdiv)
	(kAssign)
	(kEq)
	(kLt)
	(kLte)
	(kGt)
	(kGte)
	(kNeq)
	(kAt)
	(kDeref)
] @operator

; technically operators, but better to render as reserved words
[
	(kOr)
	(kXor)
	(kDiv)
	(kMod)
	(kAnd)
	(kShl)
	(kShr)
	(kNot)
	(kIs)
	(kAs)
	(kIn)
] @keyword

[
	(kTrue)
	(kFalse)
	(caseLabel)
	(label)
] @constant;

; arguably a constant, but...
[
	(kNil)
] @keyword
