
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
] @keyword

[
	;(genericType)
	(specializedType)
] @type

;(genericProc)     @function
(genericProc)     @method

(literalNumber)   @number
(literalString)   @string

(comment)         @comment

(defProc)         @local.scope

(declArg          (identifier) @variable.parameter)
(genericParam     (identifier) @type.parameter)
(declVar          (identifier) @variable)
;(declProp   name: (identifier) @property)

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
	(kOr)
	(kXor)
	(kDiv)
	(kMod)
	(kAnd)
	(kShl)
	(kShr)
	(kAssign)
	(kEq)
	(kLt)
	(kLte)
	(kGt)
	(kGte)
	(kNeq)
	(kNot)
	(kIs)
	(kAs)
	(kIn)
	(kAt)
	(kDeref)
] @operator

[
	(kNil)
	(kTrue)
	(kFalse)
	(label)
	;(caseCase)
] @constant;
