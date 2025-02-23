;; MIT license: https://github.com/Isopod/tree-sitter-pascal/blob/78426d96bde7114af979e314283e45d087603428/queries/highlights.scm

; -- Keywords
[
	(kProgram)
	(kLibrary)
	(kUnit)
	(kUses)

	(kBegin)
	(kEnd)
	(kAsm)

	(kVar)
	(kThreadvar)
	(kConst)
	(kResourcestring)
	(kConstref)
	(kOut)
	(kType)
	(kLabel)
	(kExports)

	(kAbsolute)

	(kProperty)
	(kRead)
	(kWrite)
	(kImplements)
	(kDefault)
	(kNodefault)
	(kStored)
	(kIndex)
	(kDispId)

	(kClass)
	(kInterface)
	(kDispInterface)
	(kObject)
	(kRecord)
	(kObjcclass)
	(kObjccategory)
	(kObjcprotocol)
	(kArray)
	(kFile)
	(kString)
	(kSet)
	(kOf)
	(kHelper)
	(kPacked)

	(kGeneric)
	(kSpecialize)

	(kFunction)
	(kProcedure)
	(kConstructor)
	(kDestructor)
	(kOperator)
	(kReference)

	(kInterface)
	(kImplementation)
	(kInitialization)
	(kFinalization)

	(kPublished)
	(kPublic)
	(kProtected)
	(kPrivate)
	(kStrict)
	(kRequired)
	(kOptional)

	(kForward)

	(kStatic)
	(kVirtual)
	(kAbstract)
	(kSealed)
	(kDynamic)
	(kOverride)
	(kOverload)
	(kReintroduce)
	(kInherited)
	(kInline)

	(kStdcall)
	(kCdecl)
	(kCppdecl)
	(kPascal)
	(kRegister)
	(kMwpascal)
	(kExternal)
	(kName)
	(kMessage)
	(kDeprecated)
	(kExperimental)
	(kPlatform)
	(kUnimplemented)
	(kCvar)
	(kExport)
	(kFar)
	(kNear)
	(kSafecall)
	(kAssembler)
	(kNostackframe)
	(kInterrupt)
	(kNoreturn)
	(kIocheck)
	(kLocal)
	(kHardfloat)
	(kSoftfloat)
	(kMs_abi_default)
	(kMs_abi_cdecl)
	(kSaveregisters)
	(kSysv_abi_default)
	(kSysv_abi_cdecl)
	(kVectorcall)
	(kVarargs)
	(kWinapi)
	(kAlias)
	(kDelayed)

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
	(kWith)
	(kGoto)
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
	(kAssignAdd)
	(kAssignSub)
	(kAssignMul)
	(kAssignDiv)
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
(pp)              @keyword

; -- Type declaration

(declType name: (identifier) @type)
(declType name: (genericTpl entity: (identifier) @type))

; -- Procedure & function declarations

; foobar
(declProc name: (identifier) @function)
; foobar<t>
(declProc name: (genericTpl entity: (identifier) @function))
; foo.bar
(declProc name: (genericDot rhs: (identifier) @function))
; foo.bar<t>
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

; -- Exception parameters
(exceptionHandler variable: (identifier) @variable.parameter)

; -- Type usage

(typeref) @type

; -- Constant usage

[
	(caseLabel)
	(label)
] @constant;


;;; ---------------------------------------------- ;;;
;;; EVERYTHING BELOW THIS IS OF QUESTIONABLE VALUE ;;;
;;; ---------------------------------------------- ;;;

; -- Break, Continue & Exit
; (Not ideal: ideally, there would be a way to check if these special
; identifiers are shadowed by a local variable)
(statement ((identifier) @keyword
 (#match? @keyword "^[eE][xX][iI][tT]$")))
(statement (exprCall entity: ((identifier) @keyword
 (#match? @keyword "^[eE][xX][iI][tT]$"))))
(statement ((identifier) @keyword
 (#match? @keyword "^[bB][rR][eE][aA][kK]$")))
(statement ((identifier) @keyword
 (#match? @keyword "^[cC][oO][nN][tT][iI][nN][uU][eE]$")))

; -- Procedure name in calls with parentheses
; (Pascal doesn't require parentheses for procedure calls, so this will not
; detect all calls)

; foobar
(exprCall entity: (identifier) @function)
; foobar<t>
(exprCall entity: (exprTpl entity: (identifier) @function))
; foo.bar
(exprCall entity: (exprDot rhs: (identifier) @function))
; foo.bar<t>
(exprCall entity: (exprDot rhs: (exprTpl entity: (identifier) @function)))

; -- Heuristic for procedure/function calls without parentheses
; (If a statement consists only of an identifier, assume it's a procedure)
; (This will still not match all procedure calls, and also may produce false
; positives in rare cases, but only for nonsensical code)

(statement (identifier) @function)
(statement (exprDot rhs: (identifier) @function))
(statement (exprTpl entity: (identifier) @function))
(statement (exprDot rhs: (exprTpl entity: (identifier) @function)))

; -- Variable & constant declarations
; (This is only questionable because we cannot detect types of identifiers
; declared in other units, so the results will be inconsistent)

(declVar name: (identifier) @variable)
(declField name: (identifier) @variable)
(declConst name: (identifier) @constant)
(declEnumValue name: (identifier) @constant)

; -- Identifier type inferrence

; vERY QUESTIONABLE: Highlighting of identifiers based on spelling
(exprBinary ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
(exprUnary ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
(assignment rhs: ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
(exprBrackets ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
(exprParens ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
;(exprDot rhs: ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
(exprTpl args: ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
(exprArgs ((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{2}[A-Z].+$")))
;(declEnumValue ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))
;(defaultValue ((identifier) @constant
; (#match? @constant "^[A-Z][A-Z0-9_]+$|^[a-z]{1,2}[A-Z].+$")))

; -- Use scoping information for additional highlighting. THIS NEED TO BE LAST.
; FIXME: Right now this is buggy, because in case of something like this:
;   procedure (x: integer);
;   begin
;     a.x;
;   end;
; The x in a.x would be highlighted as a parameter. Not what we want! We have to
; come up with a more specific rule. Only the left-most identifier should be
; matched.
(identifier)      @identifier
