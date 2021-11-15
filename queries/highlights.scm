
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

	(kClass)
	(kInterface)
	(kObject)
	(kRecord)
	(kArray)
	(kSet)
	(kOf)
	(kHelper)

	(kFunction)
	(kProcedure)
	(kConstructor)
	(kDestructor)

	(kInterface)
	(kImplementation)

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
] @keyword

[
	(genericType)
	(specializedType)
] @type

(genericProc)     @function

(literalNumber)   @number
(literalString)   @string

(comment)         @comment

(defProc)         @local.scope

(declArg          (identifier) @variable.parameter)
(genericParam     (identifier) @type.parameter)
(declVar          (identifier) @variable)

(identifier)      @identifier

[
	"("
	")"
	(kAngleOpen) 
	(kAngleClose)
] @punctuation.bracket

[
	";"
	","
	":"
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
	(kIs)
	(kAs)
	(kIn)
] @operator
