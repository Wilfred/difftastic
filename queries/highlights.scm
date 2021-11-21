; -- Keywords
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
	(kOverload)
	(kReintroduce)
	(kInherited)
	(kInline)

	(kStdcall)
	(kCdecl)
	(kPascal)
	(kExternal)
	(kName)

	(kFor)
	(kTo)
	(kDownto)
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
	(kRaise)
	(kOn)
	(kCase)
	(kGoto)
	(kBreak)
	(kContinue)
	(kExit)
] @keyword

; -- Punctuation & operators

[
	"("
	")"
	"["
	"]"
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
	(kHat)
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

; -- Builtin constants

[
	(kTrue)
	(kFalse)
] @constant;

; arguably a constant, but we highlight it as a keyword
[
	(kNil)
] @keyword

; -- Literals

(literalNumber)   @number
(literalString)   @string

; -- Comments
(comment)         @comment

; -- Type declaration

(declType name: (identifier) @type)
(declType name: (genericTpl entity: (identifier) @type))

; -- Procedure & function declarations

; foobar
(declFunc name: (identifier) @function)
(declProc name: (identifier) @function)
; foobar<t>
(declFunc name: (genericTpl entity: (identifier) @function))
(declProc name: (genericTpl entity: (identifier) @function))
; foo.bar
(declFunc name: (genericDot rhs: (identifier) @function))
(declProc name: (genericDot rhs: (identifier) @function))
; foo.bar<t>
(declFunc name: (genericDot rhs: (genericTpl entity: (identifier) @function)))
(declProc name: (genericDot rhs: (genericTpl entity: (identifier) @function)))

; Treat property declarations like functions

(declProp name: (identifier) @function)

; -- Function parameters

(declArg name: (identifier) @variable.parameter)

; -- Template parameters

(genericArg	name: (identifier) @type.parameter)
(genericArg	type: (typeref) @type)

(genericDot (identifier) @type)
(genericDot (genericTpl entity: (identifier) @type))

; -- Type usage
(typeref) @type

;;; ---------------------------------------------- ;;;
;;; EVERYTHING BELOW THIS IS OF QUESTIONABLE VALUE ;;;
;;; ---------------------------------------------- ;;;

; -- Procedure name in calls with parentheses

; foobar
(exprCall entity: (identifier) @function)
; foobar<t>
(exprCall entity: (exprTpl entity: (identifier) @function))
; foo.bar
(exprCall entity: (exprDot rhs: (identifier) @function))
; foo.bar<t>
(exprCall entity: (exprDot rhs: (exprTpl entity: (identifier) @function)))

; -- Heuristic for procedure/function calls without parentheses

(statement (identifier) @function)
(statement (exprDot rhs: (identifier) @function))
(statement (exprTpl entity: (identifier) @function))
(statement (exprDot rhs: (exprTpl entity: (identifier) @function)))

; -- Variable & constant declarations

(declVar name: (identifier) @variable)
(declField name: (identifier) @variable)
(declConst name: (identifier) @constant)
(declEnumValue name: (identifier) @constant)

; -- Constant usage
[
	(caseLabel)
	(label)
] @constant;

; -- Identifier type inferrence

;(call ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
;(declEnumValue ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
;(defaultValue ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))

; this needs to be last
(identifier)      @identifier
