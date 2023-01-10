// Feature flags

// Support fpc's "public name" declaration hint, e.g.
//     procedure foo; public name '_FOO';
const public_name = true;
// Support extended RTTI attributes, e.g.
//     [MyAttr(42)]
//     procedure Foo;
const rtti        = true;
// Support Delphi's anonymous procedures & functions.
const lambda      = true;
// Support fpc-specific features.
const fpc         = true;
// Support delphi-specific features.
const delphi      = true;
// Support FPC PasCocoa extensions (for objective c interopability)
const objc        = true;
// Support generic types.
const templates   = delphi || fpc;
// Try to support preprocessor better.
const use_pp      = true;

// Helpers

const op = {
	infix:   (prio, lhs, op, rhs)      => prec.left(prio, seq(
		field('lhs',      lhs),
		field('operator', op),
		field('rhs',      rhs)
	)),
	prefix:  (prio, operator, operand) => prec.left(prio, seq(
		field('operator', operator),
		field('operand',  operand)
	)),
	postfix: (prio, operand, operator) => prec.left(prio, seq(
		field('operand',  operand),
		field('operator', operator)
	)),

	args: (prio, entity, open, args, close) => prec.left(prio, seq(
		field('entity', entity), open, field('args', args), close
	))
}

function delimited1(rule, delimiter = ',', precedence=0) {
	return seq(
		optional(repeat1(prec(precedence,seq(rule, delimiter)))),
		rule
	);
}

function delimited(rule, delimiter = ',') {
	return optional(delimited1(rule, delimiter));
}

// Preprocessor wrapper.
// This just supports a single `if[def] ... [else[if] ...]* endif` right now.
// It is inteded for code like this:
//
//   procedure foo;
//   {$ifdef bla}
//   var i: integer;
//   begin
//     inc(i);
//   end;
//   {$else}
//   var j: integer;
//   begin
//     dec(j);
//   end;
//   {$endif}
//
// If we don't handle this case explicitly, tree-sitter produces a completely
// broken AST, which severely messes up the syntax highlighting.
//
// Ideally, we would want to support nested ifdefs as well, but that will be
// more complex.
//
// A word of caution: It is tempting to sprinkle this macro in many more
// places, but unfortunately tihs results in a significant performance penalty.
// Use it sparingly! A general rule of thumb is to use it only in situations
// where otherwise a severly broken parse tree would be generated. For small
// errors that TreeSitter can recover from automatically, it is better not to
// use it.
function pp($, ...rule) {
	if (!use_pp)
		return seq(...rule);
	return (
		choice(
			seq(...rule),
			seq(
				alias(/\{\$[iI][fF][^}]*\}/, $.pp),
				...rule,
				repeat(seq(
					alias(/\{\$[eE][lL][sS][eE][^}]*\}/, $.pp),
					...rule
				)),
				alias(/\{\$[eE][nN][dD][^}]*\}/, $.pp)
			),
		)
	);
}

// tr = Trailing
// Return the trailing equivalent of a rule, aliased to the non-trailing version.
const tr = ($,rule) =>
	rule[0] == '_' ? $[rule+'Tr'] : alias($[rule+'Tr'], $[rule])


function enable_if(cond, ...args) {
	return cond ? args : [];
}

// Generate rules for trailing & non-trailing statements
function statements(trailing) {
	let rn            = x => trailing ? x + 'Tr' : x
	let lastStatement = $ => trailing ? optional(tr($,'_statement')) : $._statement;
	let lastStatement1= $ => trailing ? tr($,'_statement') : $._statement;
	let semicolon     = trailing ? [] : [';'];
	
	return Object.fromEntries([
		[rn('if'),          $ => seq(
			$.kIf, field('condition', $._expr), $.kThen,
			field('then', lastStatement($))
		)],

		[rn('nestedIf'),    $ => prec(1,$.if)],

		[rn('ifElse'),      $ => prec.right(1, seq(
			$.kIf, field('condition', $._expr), $.kThen,
			field('then', optional(choice(tr($,'_statement'), $.if))),
			$.kElse,
			field('else', lastStatement($))
		))],

		[rn('while'),       $ => seq(
			$.kWhile, field('condition', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('repeat'),      $ => prec(2,seq(
			$.kRepeat,
			field('body', optional(tr($,'statements'))),
			$.kUntil, field('condition', $._expr),
			...semicolon
		))],

		[rn('for'),         $ => seq(
			$.kFor,
			field('start', $.assignment),
			choice($.kTo, $.kDownto),
			field('end', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('foreach'),     $ => seq(
			$.kFor,
			field('iterator', $._expr), $.kIn,
			field('iterable', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('exceptionHandler'), $ => seq(
			$.kOn,
			field('variable', optional(seq($.identifier, ':'))),
			field('exception', $.typeref), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('exceptionElse'), $ => seq(
			$.kElse, repeat($._statement), lastStatement($)
		)],

		[rn('_exceptionHandlers'), $ => seq(
			repeat($.exceptionHandler),
			choice($.exceptionHandler, tr($,'exceptionHandler')),
			optional($.exceptionElse)
		)],

		[rn('try'),         $ => prec(2,seq(
			$.kTry,
			field('try', optional(tr($,'statements'))),
			choice(
				field('except', seq(
					$.kExcept,
					optional(
						choice(tr($,'statements'),
						tr($,'_exceptionHandlers'))
					)
				)),
				field('finally', seq(
					$.kFinally,
					optional(tr($,'statements'))
				))
			),
			$.kEnd, ...semicolon
		))],

		[rn('caseCase'),    $ => seq(
			field('label', $.caseLabel),
			field('body', lastStatement($))
		)],

		[rn('case'),        $ => prec(2,seq(
			$.kCase, $._expr, $.kOf,
			repeat($.caseCase),
			optional(tr($,'caseCase')),
			optional(seq(
				$.kElse,
				optional(':'),
				optional(tr($,'_statements'))
			)),
			$.kEnd, ...semicolon
		))],

		[rn('block'),       $ => seq(
			$.kBegin,
			optional(tr($,'_statements')),
			$.kEnd, ...semicolon
		)],

		[rn('asm'),         $ => seq(
			$.kAsm,
			optional($.asmBody),
			$.kEnd, ...semicolon
		)],

		[rn('with'),        $ => seq(
			$.kWith, delimited1(field('entity', $._expr)), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('raise'),       $ => seq(
			$.kRaise,
			field('exception', $._expr),
			...semicolon
		)],

		[rn('statement'),   $ => choice(
			seq($._expr, ...semicolon),
		)],

		[rn('goto'),        $ => seq($.kGoto, $.identifier, ...semicolon)],

		[rn('_statement'),   $ => choice(
			...semicolon,
			seq($.assignment, ...semicolon),
			alias($[rn('statement')], $.statement),
			alias($[rn('if')],        $.if),
			alias($[rn('ifElse')],    $.ifElse),
			alias($[rn('while')],     $.while),
			alias($[rn('repeat')],    $.repeat),
			alias($[rn('for')],       $.for),
			alias($[rn('foreach')],   $.foreach),
			alias($[rn('try')],       $.try),
			alias($[rn('case')],      $.case),
			alias($[rn('block')],     $.block),
			alias($[rn('with')],      $.with),
			alias($[rn('raise')],     $.raise),
			alias($[rn('goto')],      $.goto),
			alias($[rn('asm')],       $.asm),
		)],

	]);
}

module.exports = grammar({
	name: "pascal",
	
	extras: $ => [$._space, $.comment, $.pp],

	word: $ => $.identifier,

	conflicts: $ => [
		// The following conflict rules are only needed because "public" can be
		// a visibility or an attribute. *sigh*
		// TODO: We would probably avoid this by having separate decl* clauses
		// for use inside classes and at unit scope, since the "public"
		// attribute seems to only be valid for standalone routines.
		...enable_if(public_name,
			[$._declProc ], [ $._declOperator], [$.declConst], [$.declVar],
			[$.declType], [$.declProp]
		),
		// RTTI attributes clash with fpc declaration hints syntax since both
		// are surrounded by brackets.
		...enable_if(rtti,
			[ $.declProcFwd ], [ $.declVars], [ $.declConsts ], [ $.declTypes]
		),
		// `procedure (` could be a declaration of an anonymous procedure or
		// the call of a function named "procedure" (which doesn't actually
		// make sense, but for Treesitter it does), so we need another conflict
		// here.
		...enable_if(lambda, [ $.lambda ]),
	],
	
	rules: {
		root:               $ => choice(
			$.program,
			$.library,
			$.unit,
			$._definitions // For include files
		),

		// HIGH LEVEL ----------------------------------------------------------

		program:            $ => seq(
			$.kProgram, $.moduleName, ';',
			optional($._definitions),
			tr($,'block'),
			$.kEndDot
		),

		library:            $ => seq(
			$.kLibrary, $.moduleName, ';',
			optional($._definitions),
			choice(tr($,'block'), $.kEnd),
			$.kEndDot
		),

		unit:               $ => seq(
			$.kUnit, $.moduleName, ';',
			repeat(choice(
				$.interface,
				$.implementation,
				$.initialization,
				$.finalization,
			)),
			$.kEnd, $.kEndDot
		),

		interface:       $ => seq($.kInterface, optional($._declarations)),
		implementation:  $ => seq($.kImplementation, optional($._definitions)),
		initialization:  $ => seq($.kInitialization, optional(tr($,'_statements'))),
		finalization:    $ => seq($.kFinalization, optional(tr($,'_statements'))),

		moduleName:      $ => delimited1($.identifier, $.kDot),

		// STATEMENTS ---------------------------------------------------------

		...statements(false),
		...statements(true),

		assignment:      $ => op.infix(1,
			$._expr,
			choice(
				$.kAssign,
				...enable_if(fpc,
					$.kAssignAdd, $.kAssignSub, $.kAssignMul, $.kAssignDiv
				)
			),
			$._expr
		),

		label:           $ => seq($.identifier, ':'),
		caseLabel:       $ => seq(delimited1(choice($._expr, $.range)), ':'),

		_statements:     $ => repeat1(choice($._statement, $.label)),
		_statementsTr:   $ => seq(
			repeat(choice($._statement, $.label)),
			choice(tr($,'_statement'), $._statement)
		),

		statements:      $ => $._statements,
		statementsTr:    $ => $._statementsTr,

		asmBody: $ => repeat1(choice(
			///([a-zA-Z0-9_]+([eE][nN][dD])|[eE][nN][dD][a-zA-Z0-9_]+|([^eE]|[eE][^nN]|[eE][nN][^dD]))+/,
			$.identifier,       // Identifiers
			/[0-9a-fA-F]/,      // Numbers
			/[.,:;+\-*\[\]<>&%$]/, // Punctuation
			/\([^*]|\)/         // Parentheses that are not comments
		)),

		// EXPRESSIONS ---------------------------------------------------------

		_expr:           $ => choice(
			$._ref, $.exprBinary, $.exprUnary
		),

		_ref:            $ => choice(
			...enable_if(templates && fpc,
				// TODO: Ideally, the kSpecialize should be part of exprTpl,
				// but for some reason this leads to a rule conflict, so for
				// now we just put it here.
				//
				// Also, we have to write the rule in this weird weird way,
				// because if we just do
				//
				//   seq(optional($.kSpecialize), $.identifier)
				//
				// then we can't have a standalone identifier named
				// "specialize". (Bug in tree-sitter?)
				prec.left(choice(
					seq($.kSpecialize, $.identifier),
					seq(alias($.kSpecialize, $.identifier)),
				))
			),
			$.identifier,
			$._literal,  $.inherited, $.exprDot,
			$.exprBrackets, $.exprParens, $.exprSubscript, $.exprCall,
			alias($.exprDeref, $.exprUnary),
			alias($.exprAs, $.exprBinary),
			...enable_if(templates, $.exprTpl),
			...enable_if(lambda, $.lambda)
		),

		lambda:          $ => seq(
			choice($.kProcedure, $.kFunction),
			field('args', optional($.declArgs)),
			optional(seq(
				':',
				field('type', $.typeref),
			)),
			field('local', optional($._definitions)),
			field('body', choice(tr($, 'block'), tr($, 'asm'))),
		),

		inherited:       $ => prec.right(seq($.kInherited, optional($.identifier))),

		exprDot:         $ => op.infix(5, $._ref, $.kDot, $._ref),
		exprDeref:       $ => op.postfix(4, $._expr, $.kHat),

		exprAs:          $ => op.infix(3, $._expr, $.kAs,  $._expr),

		// Unfortunately, we can't use $.exprArgs for $.exprTpl because the
		// parser cannot handle it.
		//
		// There are two conflicting rules:
		//
		//   0. Binary comparison: a < b
		//   1. Template use:      a < b >
		//                         ^^^^^
		//                         prefix
		//
		// In order for this to work, the prefix must produce the same nodes in
		// both cases. This is not the case when we introduce a wrapper node.
		//
		// Example:
		//
		//   exprBinary
		//     identifier
		//     <
		//     identifier
		//
		//   vs.
		//
		//   exprTpl
		//     exprArgs <-- extra node
		//       identifier
		//       <
		//       identifier
		//       >
		//
		// Basically the way this works is that there is a tentative node like
		// "exprTplOrBinary", which looks like this:
		//
		//   exprTplOrBinary
		//     identifier
		//     <
		//     identifier
		//
		// At this point we don't yet know what we are dealing with.  The next
		// token will determine whether we are dealing with a comparison or a
		// template. Then the existing node is simply "renamed". Because of
		// this, we can't have an extra node in only one of the branches.
		//
		exprTpl:         $ => op.args(5, $._ref, $.kLt, delimited1($._expr, ',', 5),  $.kGt),
		exprSubscript:   $ => op.args(5, $._ref, '[',   $.exprArgs,  ']'  ),
		exprCall:        $ => op.args(5, $._ref, '(',   optional($.exprArgs), ')'  ),

		// Pascal legacy string formatting for WriteLn(foo:4:3) etc.
		legacyFormat:    $ => repeat1(seq(':', $._expr)),

		exprArgs:        $ => delimited1(seq($._expr, optional($.legacyFormat))),

		exprBinary:      $ => choice(
			op.infix(1, $._expr, $.kLt,  $._expr),
			op.infix(1, $._ref,  $.kLt,  $._expr),
			op.infix(1, $._expr, $.kEq,  $._expr),
			op.infix(1, $._expr, $.kNeq, $._expr),
			op.infix(1, $._expr, $.kGt,  $._expr),
			op.infix(1, $._expr, $.kLte, $._expr),
			op.infix(1, $._expr, $.kGte, $._expr),
			op.infix(1, $._expr, $.kIn,  $._expr),
			op.infix(1, $._expr, $.kIs,  $._expr),

			op.infix(2, $._expr, $.kAdd, $._expr),
			op.infix(2, $._expr, $.kSub, $._expr),
			op.infix(2, $._expr, $.kOr,  $._expr),
			op.infix(2, $._expr, $.kXor, $._expr),

			op.infix(3, $._expr, $.kMul, $._expr),
			op.infix(3, $._expr, $.kFdiv,$._expr),
			op.infix(3, $._expr, $.kDiv, $._expr),
			op.infix(3, $._expr, $.kMod, $._expr),
			op.infix(3, $._expr, $.kAnd, $._expr),
			op.infix(3, $._expr, $.kShl, $._expr),
			op.infix(3, $._expr, $.kShr, $._expr),
		),

		exprUnary:       $ => choice(
			op.prefix(4,  $.kNot,  $._expr),
			op.prefix(4,  $.kAdd,  $._expr),
			op.prefix(4,  $.kSub,  $._expr),
			op.prefix(4,  $.kAt,   $._expr),
		),

		exprParens:      $ => prec.left(5,seq('(', $._expr, ')')),

		// Set or array literal
		exprBrackets:       $ => seq(
			'[', delimited(choice($._expr, $.range)), ']'
		),

		// TYPES ---------------------------------------------------------------

		type:            $ => pp($,choice(
			$.typeref,
			$.declMetaClass,
			$.declEnum,
			$.declSet,
			$.declArray,
			$.declFile,
			$.declString,
			$.declProcRef,
		)),
		
		typeref:         $ => seq(
			...enable_if(fpc, field('_dummy', optional($.kSpecialize))),
			$._typeref
		),

		_typeref:        $ => choice(
			$.identifier, $.typerefDot,
			...enable_if(templates, $.typerefTpl),
			$.typerefPtr,
		),

		typerefDot:      $ => op.infix(1,$._typeref, $.kDot, $._typeref),
		typerefTpl:      $ => op.args(1, $._typeref, $.kLt, $.typerefArgs, $.kGt),
		typerefPtr:      $ => op.prefix(1,$.kHat, $._typeref),
		typerefArgs:     $ => delimited1($._typeref),

		// GENERIC TYPE DECLARATION --------------------------------------------
		//
		// E.g. Foo<A: B, C: D<E>>.XYZ<T>
		//           ^     ^
		//     Note the optional constraints, which makes this different from a
		//     specialization
		//
		// We treat regular names as a special case of generic names. I.e. if
		// you see $._genericName somewhere, it doesn't mean that the name HAS
		// to be generic, it could just be a regular name like "TFoobar" or
		// "MyUnit.Foo".

		genericDot:      $ => op.infix(1,$._genericName, $.kDot, $._genericName),
		genericTpl:      $ => op.args(2,$._genericName, $.kLt, $.genericArgs, $.kGt),

		_genericName:    $ => choice(
			$.identifier, $.genericDot, ...enable_if(templates, $.genericTpl)
		),
		genericArgs:     $ => delimited1($.genericArg, ';'),
		genericArg:      $ => seq(
			field('name', delimited1($.identifier)),
			field('type', optional(seq(':', $.typeref))),
			field('defaultValue', optional($.defaultValue))
		),

		// LITERALS -----------------------------------------------------------

		_literal:        $ => choice(
			$.literalString,
			$.literalNumber,
			$.kNil, $.kTrue, $.kFalse
		),
		literalString:   $ => repeat1($._literalString),
		_literalString:  $ => choice(/'[^']*'/, $.literalChar),
		literalChar:     $ => seq('#', $._literalInt),
		literalNumber:   $ => choice($._literalInt, $._literalFloat),
		_literalInt:     $ => choice(
			token.immediate(/[-+]?[0-9]+/),
			token.immediate(/\$[a-fA-F0-9]+/)
		),
		_literalFloat:   $ => prec(10, /[-+]?[0-9]*\.?[0-9]+(e[+-]?[0-9]+)?/),

		range:           $ => seq(
			$._expr, '..', $._expr
		),

		// DEFINITIONS --------------------------------------------------------

		_definitions:    $ => repeat1($._definition),
		_definition:     $ => choice(
			$.declTypes, $.declVars, $.declConsts, $.defProc,
			alias($.declProcFwd, $.declProc),
			$.declLabels, $.declUses, $.declExports,

			// Include files may consist solely of preprocessor directives
			// (e.g. to include other files)
			$.pp,

			// Not actually valid syntax, but helps the parser recover:
			prec(-1,$.blockTr)
		),

		defProc:         $ => seq(
			/*pp($,*/ field('header', $.declProc)/*)*/,
			pp(
			 	$,
				field('local', optional($._definitions)),
				field('body', choice(tr($, 'block'), tr($, 'asm'))),
				';'
			)
		),

		declProcFwd:     $ => seq(
			$._declProc,
			choice(seq($.kForward, ';'), $.procExternal),
			repeat($._procAttribute)
		),

		// DECLARATIONS -------------------------------------------------------

		_visibility:     $ => choice(
			$.kPublished, $.kPublic, $.kProtected, $.kPrivate
		),

		_declarations:   $ => repeat1(choice(
			$.declTypes, $.declVars, $.declConsts, $.declProc, $.declProp,
			alias($.declProcFwd, $.declProc),
			$.declUses, $.declLabels, $.declExports
		)),
		_classDeclarations: $ => repeat1(choice(
			$.declTypes, $.declVars, $.declConsts, $.declProc, $.declProp
		)),

		defaultValue:    $ => seq($.kEq, $._initializer),

		// Declaration sections

		declUses:        $ => seq($.kUses, delimited($.moduleName), ';'),
		declExports:     $ => seq($.kExports, delimited($.declExport), ';'),

		declTypes:       $ => seq(
			$.kType,
			repeat($.declType)
		),

		declVars:        $ => seq(
			optional($.kClass),
			choice($.kVar, $.kThreadvar),
			repeat($.declVar)
		),

		declConsts:      $ => seq(
			optional($.kClass),
			choice($.kConst, $.kResourcestring),
			repeat($.declConst),
		),

		// Declarations

		declType:        $ => seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			...enable_if(fpc, optional($.kGeneric)),
			field('name', $._genericName), $.kEq,
			field('type',
				choice(
					seq(optional($.kType), $.type),
					choice($.type),
					$.declClass,
					$.declIntf,
					$.declHelper,
				)
			),
			';',
			repeat($._procAttribute)
		),

		declProc:        $ => seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			choice($._declProc, $._declOperator),
		),

		declVar:         $ => seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			field('name', delimited1($.identifier)),
			':',
			field('type', $.type),
			optional(choice(
				seq($.kAbsolute, $._ref),
				field('defaultValue', $.defaultValue)
			)),
			';',
			repeat(choice($._procAttribute, $.procExternal))
		),

		declConst:       $ => seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			field('name', $.identifier),
			optional(seq(':', field('type', $.type))),
			field('defaultValue', $.defaultValue),
			';',
			repeat($._procAttribute)
		),

		declLabels:      $ => seq($.kLabel, delimited1($.declLabel), ';'),
		declLabel:       $ => field('name', $.identifier),

		declExport:      $ => seq($._genericName, repeat(seq(choice($.kName, $.kIndex), $._expr))),

		// Type declarations

		declEnum:        $ => seq('(', delimited1($.declEnumValue), ')'),
		declEnumValue:   $ => seq(field('name', $.identifier), field('value', optional($.defaultValue))),
		declSet:         $ => seq($.kSet, $.kOf, $.type),
		declArray:       $ => seq(
			optional($.kPacked),
			$.kArray,
			optional(seq('[', delimited(choice($.range, $._expr)), ']')),
			$.kOf, $.type
		),
		declFile:        $ => seq($.kFile, optional(seq($.kOf, $.type))),
		declString:      $ => prec.left(seq(
			$.kString,
			optional(seq('[', choice($._expr), ']'))
		)),

		declProcRef:     $ => prec.right(1,seq(
			optional(seq($.kReference, $.kTo)),
			choice($.kProcedure, $.kFunction),
			field('args', optional($.declArgs)),
			optional(seq(
				':',
				field('type', $.typeref),
			)),
			optional(seq($.kOf, $.kObject))
		)),

		declMetaClass:   $ => seq($.kClass, $.kOf, $.typeref),

		declClass:       $ => seq(
			optional($.kPacked),
			choice(
				$.kClass, $.kRecord, $.kObject,
				...enable_if(objc,
					$.kObjcclass, $.kObjccategory, $.kObjcprotocol
				)
			),
			optional(choice(
				$.kAbstract, $.kSealed,
				...enable_if(objc,
					seq($.kExternal, optional(seq($.kName, $._expr)))
				)
			)),
			field('parent', optional(seq('(',delimited($.typeref),')'))),
			optional($._declClass)
		),

		declIntf:        $ => seq(
			optional($.kPacked),
			$.kInterface,
			field('parent', optional(seq('(',delimited($.typeref),')'))),
			field('guid', optional($.guid)),
			optional($._declClass)
		),

		declHelper:      $ => seq(
			choice($.kClass, $.kRecord, $.kType), $.kHelper,
			field('parent', optional(seq('(',delimited($.typeref),')'))),
			$.kFor, $.typeref,
			$._declClass
		),

		// Stuff for class/record/interface declarations

		guid:            $ => prec(1,seq('[', $._ref, ']')),

		_declClass:      $ => seq(
			optional($._declFields),
			optional($._classDeclarations),
			repeat($.declSection),
			optional($.declVariant),
			$.kEnd
		),

		declSection:     $ => seq(
			optional($.kStrict),
			choice($._visibility, ...enable_if(objc, $.kRequired, $.kOptional)),
			optional($._declFields),
			optional($._classDeclarations)
		),

		_declFields:     $ => repeat1($.declField),

		declField:       $ =>  seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			field('name', delimited1($.identifier)),
			':',
			field('type', $.type),
			field('defaultValue', optional($.defaultValue)),
			';'
		),

		declProp:        $ => seq(
			...enable_if(rtti, optional($.rttiAttributes)),
			optional($.kClass),
			$.kProperty,
			field('name', $.identifier),
			field('args', optional($.declPropArgs)),
			':',
			field('type', $.type),
			repeat(choice(
				field('index', seq($.kIndex, $._expr)),
				field('getter', seq($.kRead, $.identifier)),
				field('setter', seq($.kWrite, $.identifier)),
				field('implements', seq($.kImplements, delimited($._expr))),
				field('defaultValue', seq($.kDefault, $._expr)),
				field('stored', seq($.kStored, $._expr)),
				$.kNodefault,
			)),
			';',
			repeat($._procAttribute)
		),

		declPropArgs:    $ => seq('[', delimited($.declArg, ';'), ']'),

		// Variant records

		declVariant:     $ => prec.right(seq(
			$.kCase,
			field('name', optional(seq($.identifier, ':'))),
			field('type', $.typeref), $.kOf,
			delimited1($.declVariantClause, ';'),
			optional(';'),
		)),

		declVariantClause: $ => seq(
			$.caseLabel,
			'(',
			choice(
				seq(delimited(alias($.declVariantField, $.declField), ';'), optional(seq(';', $.declVariant))),
				seq($.declVariant),
			),
			optional(';'),
			')',
		),

		declVariantField: $ => seq(
			field('name', delimited1($.identifier)),
			':',
			field('type', $.type),
			field('defaultValue', optional($.defaultValue))
		),

		// Stuff for procedure / function / operator declarations

		_declProc:       $ => seq(
			...enable_if(fpc, optional($.kGeneric)),
			optional($.kClass),
			choice($.kProcedure, $.kFunction, $.kConstructor, $.kDestructor),
			field('name', $._genericName),
			field('args', optional($.declArgs)),
			optional(seq(
				':',
				field('type', $.typeref),
			)),
			field('assign', optional($.defaultValue)),
			';',
			repeat($._procAttributeNoExt)
		),

		_declOperator:   $ => seq(
			optional($.kClass),
			$.kOperator,
			field('name', $._operatorName),
			field('args', optional($.declArgs)),
			...enable_if(fpc, field('resultName', optional($.identifier))),
			':',
			field('type', $.type),
			field('assign', optional($.defaultValue)),
			';',
			repeat($._procAttributeNoExt)
		),

		operatorDot:     $ => op.infix(0, $._genericName, $.kDot, $.operatorName),
		_operatorName:   $ => seq(
			choice(
				$._genericName,
				...enable_if(fpc,
					$.operatorName,
					alias($.operatorDot, $.genericDot)
				)
			)
		),
		operatorName:    $ => choice(
			$.kDot, $.kLt, $.kEq, $.kNeq, $.kGt, $.kLte, $.kGte,
			$.kAdd, $.kSub, $.kMul, $.kFdiv, $.kDiv, $.kMod,
			$.kAssign,
			$.kOr, $.kXor, $.kAnd, $.kShl, $.kShr, $.kNot,
			$.kIn,
		),

		declArgs:        $ => seq('(', delimited($.declArg, ';'), ')'),

		declArg:         $ => choice(
			seq(
				choice($.kVar, $.kConst, $.kOut, $.kConstref),
				field('name', delimited1($.identifier)),
				optional(seq(
					':', field('type', $.type),
					field('defaultValue', optional($.defaultValue))
				))
			),
			seq(
				field('name', delimited1($.identifier)), ':',
				field('type', $.type),
				field('defaultValue', optional($.defaultValue))
			)
		),

		// Attributes & declaration hints

		_procAttribute:  $ => /*pp($,*/choice(
			seq(field('attribute', $.procAttribute), ';'),
			// FPC-specific syntax, e.g. procedure myproc; [public; alias:'bla'; cdecl];
			...enable_if(fpc, seq(
				'[',
				delimited(field('attribute', choice($.procAttribute, $.procExternal))),
				']', ';'
			))
		)/*)*/,
		_procAttributeNoExt: $ => /*pp($,*/ choice(
			seq(field('attribute', $.procAttribute), ';'),
			// FPC-specific syntax, e.g. procedure myproc; [public; alias:'bla'; cdecl];
			...enable_if(fpc, seq('[', delimited(field('attribute', choice($.procAttribute)), ';'), ']', ';'))
		)/*)*/,

		procAttribute:   $ => choice(
			$.kStatic, $.kVirtual, $.kDynamic, $.kAbstract, $.kOverride,
			$.kOverload, $.kReintroduce, $.kInline, $.kStdcall,
			$.kCdecl, $.kPascal, $.kRegister, $.kSafecall, $.kAssembler,
			$.kNoreturn, $.kLocal,  $.kFar, $.kNear,
			$.kDefault, $.kNodefault, $.kDeprecated, $.kExperimental,

			seq(
				choice(
					seq($.kMessage, optional($.kName)),
					$.kDeprecated
				),
				$._expr
			),

			...enable_if(fpc,
				$.kPlatform, $.kUnimplemented,
				$.kCppdecl, $.kCvar, $.kMwpascal, $.kNostackframe,
				$.kInterrupt, $.kIocheck, $.kHardfloat,
				$.kSoftfloat, $.kMs_abi_default, $.kMs_abi_cdecl,
				$.kSaveregisters, $.kSysv_abi_default, $.kSysv_abi_cdecl,
				$.kVectorcall, $.kVarargs, $.kWinapi,
				...enable_if(public_name, $.kPublic),
				seq(
					choice(
						$.kExport,
						seq($.kAlias, ':'),
						...enable_if(public_name, seq($.kPublic, $.kName)),
					),
					$._expr
				)
			),
		),

		rttiAttributes:  $ => repeat1(seq(
			// Note: "Identifier:" is for tagging parameters of procedures (Delphi)
			'[', optional(seq($.identifier, ':')), delimited($._ref), ']'
		)),

		procExternal:    $ => seq(
			$.kExternal,
			optional($._expr),
			optional(seq(choice($.kName, $.kIndex), $._expr)),
			...enable_if(delphi, optional($.kDelayed)),
			';'
		),

		// INITIALIZERS --------------------------------------------------------

		_initializer:    $ => prec(2,seq(
			choice($._expr, $.recInitializer, $.arrInitializer)
		)),

		// record initializer
		recInitializer:  $ => seq(
			'(',
			delimited1( $.recInitializerField, ';'),
			')'
		),

		recInitializerField: $ => choice(
			seq(field('name',$.identifier), ':', field('value', $._initializer)),
			field('value', $._initializer)
		),

		// array initializer
		arrInitializer:  $ => prec(1,seq('(', delimited1($._initializer), ')')),

		// TERMINAL SYMBOLS ----------------------------------------------------

		kProgram:          $ => /[pP][rR][oO][gG][rR][aA][mM]/,
		kLibrary:          $ => /[lL][iI][bB][rR][aA][rR][yY]/,
		kUnit:             $ => /[uU][nN][iI][tT]/,
		kUses:             $ => /[uU][sS][eE][sS]/,
		kInterface:        $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kImplementation:   $ => /[iI][mM][pP][lL][eE][mM][eE][nN][tT][aA][tT][iI][oO][nN]/,
		kInitialization:   $ => /[iI][nN][iI][tT][iI][aA][lL][iI][zZ][aA][tT][iI][oO][nN]/,
		kFinalization:     $ => /[fF][iI][nN][aA][lL][iI][zZ][aA][tT][iI][oO][nN]/,
		kEndDot:           $ => '.',

		kBegin:            $ => /[bB][eE][gG][iI][nN]/,
		kEnd:              $ => /[eE][nN][dD]/,
		kAsm:              $ => /[aA][sS][mM]/,

		kVar:              $ => /[vV][aA][rR]/,
		kThreadvar:        $ => /[tT][hH][rR][eE][aA][dD][vV][aA][rR]/,
		kConst:            $ => /[cC][oO][nN][sS][tT]/,
		kConstref:         $ => /[cC][oO][nN][sS][tT][rR][eE][fF]/,
		kResourcestring:   $ => /[rR][eE][sS][oO][uU][rR][cC][eE][sS][tT][rR][iI][nN][gG]/,
		kOut:              $ => /[oO][uU][tT]/,
		kType:             $ => /[tT][yY][pP][eE]/,
		kLabel:            $ => /[lL][aA][bB][eE][lL]/,
		kExports:          $ => /[eE][xX][pP][oO][rR][tT][sS]/,

		kAbsolute:         $ => /[aA][bB][sS][oO][lL][uU][tT][eE]/,

		kProperty:         $ => /[pP][rR][oO][pP][eE][rR][tT][yY]/,
		kRead:             $ => /[rR][eE][aA][dD]/,
		kWrite:            $ => /[wW][rR][iI][tT][eE]/,
		kImplements:       $ => /[iI][mM][pP][lL][eE][mM][eE][nN][tT][sS]/,
		kDefault:          $ => /[dD][eE][fF][aA][uU][lL][tT]/,
		kNodefault:        $ => /[nN][oO][dD][eE][fF][aA][uU][lL][tT]/,
		kStored:           $ => /[sS][tT][oO][rR][eE][dD]/,
		kIndex:            $ => /[iI][nN][dD][eE][xX]/,

		kClass:            $ => /[cC][lL][aA][sS][sS]/,
		kInterface:        $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kObject:           $ => /[oO][bB][jJ][eE][cC][tT]/,
		kRecord:           $ => /[rR][eE][cC][oO][rR][dD]/,
		kObjcclass:        $ => /[oO][bB][jJ][cC][cC][lL][aA][sS][sS]/,
		kObjccategory:     $ => /[oO][bB][jJ][cC][cC][aA][tT][eE][gG][oO][rR][yY]/,
		kObjcprotocol:     $ => /[oO][bB][jJ][cC][pP][rR][oO][tT][oO][cC][oO][lL]/,
		kArray:            $ => /[aA][rR][rR][aA][yY]/,
		kFile:             $ => /[fF][iI][lL][eE]/,
		kString:           $ => /[sS][tT][rR][iI][nN][gG]/,
		kSet:              $ => /[sS][eE][tT]/,
		kOf:               $ => /[oO][fF]/,
		kHelper:           $ => /[hH][eE][lL][pP][eE][rR]/,
		kPacked:           $ => /[pP][aA][cC][kK][eE][dD]/,

		kGeneric:          $ => /[gG][eE][nN][eE][rR][iI][cC]/,
		kSpecialize:       $ => /[sS][pP][eE][cC][iI][aA][lL][iI][zZ][eE]/,

		kDot:              $ => '.',
		kLt:               $ => '<',
		kEq:               $ => '=',
		kNeq:              $ => '<>',
		kGt:               $ => '>',
		kLte:              $ => '<=',
		kGte:              $ => '>=',
		kAdd:              $ => '+',
		kSub:              $ => '-',
		kMul:              $ => '*',
		kFdiv:             $ => '/',
		kAt:               $ => '@',
		kHat:              $ => '^',
		kAssign:           $ => ':=',
		kAssignAdd:        $ => '+=', // Freepascal
		kAssignSub:        $ => '-=', // Freepascal
		kAssignMul:        $ => '*=', // Freepascal
		kAssignDiv:        $ => '/=', // Freepascal
		kOr:               $ => /[oO][rR]/,
		kXor:              $ => /[xX][oO][rR]/,
		kDiv:              $ => /[dD][iI][vV]/,
		kMod:              $ => /[mM][oO][dD]/,
		kAnd:              $ => /[aA][nN][dD]/,
		kShl:              $ => /[sS][hH][lL]/,
		kShr:              $ => /[sS][hH][rR]/,
		kNot:              $ => /[nN][oO][tT]/,
		kIs:               $ => /[iI][sS]/,
		kAs:               $ => /[aA][sS]/,
		kIn:               $ => /[iI][nN]/,

		kFor:              $ => /[fF][oO][rR]/,
		kTo:               $ => /[tT][oO]/,
		kDownto:           $ => /[dD][oO][wW][nN][tT][oO]/,
		kIf:               $ => /[iI][fF]/,
		kThen:             $ => /[tT][hH][eE][nN]/,
		kElse:             $ => /[eE][lL][sS][eE]/,
		kDo:               $ => /[dD][oO]/,
		kWhile:            $ => /[wW][hH][iI][lL][eE]/,
		kRepeat:           $ => /[rR][eE][pP][eE][aA][tT]/,
		kUntil:            $ => /[uU][nN][tT][iI][lL]/,
		kTry:              $ => /[tT][rR][yY]/,
		kExcept:           $ => /[eE][xX][cC][eE][pP][tT]/,
		kFinally:          $ => /[fF][iI][nN][aA][lL][lL][yY]/,
		kRaise:            $ => /[rR][aA][iI][sS][eE]/,
		kOn:               $ => /[oO][nN]/,
		kCase:             $ => /[cC][aA][sS][eE]/,
		kWith:             $ => /[wW][iI][tT][hH]/,
		kGoto:             $ => /[gG][oO][tT][oO]/,

		kFunction:         $ => /[fF][uU][nN][cC][tT][iI][oO][nN]/,
		kProcedure:        $ => /[pP][rR][oO][cC][eE][dD][uU][rR][eE]/,
		kConstructor:      $ => /[cC][oO][nN][sS][tT][rR][uU][cC][tT][oO][rR]/,
		kDestructor:       $ => /[dD][eE][sS][tT][rR][uU][cC][tT][oO][rR]/,
		kOperator:         $ => /[oO][pP][eE][rR][aA][tT][oO][rR]/,
		kReference:        $ => /[rR][eE][fF][eE][rR][eE][nN][cC][eE]/,

		kPublished:        $ => /[pP][uU][bB][lL][iI][sS][hH][eE][dD]/,
		kPublic:           $ => /[pP][uU][bB][lL][iI][cC]/,
		kProtected:        $ => /[pP][rR][oO][tT][eE][cC][tT][eE][dD]/,
		kPrivate:          $ => /[pP][rR][iI][vV][aA][tT][eE]/,
		kStrict:           $ => /[sS][tT][rR][iI][cC][tT]/,
		kRequired:         $ => /[rR][eE][qQ][uU][iI][rR][eE][dD]/,
		kOptional:         $ => /[oO][pP][tT][iI][oO][nN][aA][lL]/,

		kForward:          $ => /[fF][oO][rR][wW][aA][rR][dD]/,

		kStatic:           $ => /[sS][tT][aA][tT][iI][cC]/,
		kVirtual:          $ => /[vV][iI][rR][tT][uU][aA][lL]/,
		kAbstract:         $ => /[aA][bB][sS][tT][rR][aA][cC][tT]/,
		kSealed:           $ => /[sS][eE][lL][eE][dD]/,
		kDynamic:          $ => /[dD][yY][nN][aA][mM][iI][cC]/,
		kOverride:         $ => /[oO][vV][eE][rR][rR][iI][dD][eE]/,
		kOverload:         $ => /[oO][vV][eE][rR][lL][oO][aA][dD]/,
		kReintroduce:      $ => /[rR][eE][iI][nN][tT][rR][oO][dD][uU][cC][eE]/,
		kInherited:        $ => /[iI][nN][hH][eE][rR][iI][tT][eE][dD]/,
		kInline:           $ => /[iI][nN][lL][iI][nN][eE]/,

		kStdcall:          $ => /[sS][tT][dD][cC][aA][lL][lL]/,
		kCdecl:            $ => /[cC][dD][eE][cC][lL]/,
		kCppdecl:          $ => /[cC][pP][pP][dD][eE][cC][lL]/,
		kPascal:           $ => /[pP][aA][sS][cC][aA][lL]/,
		kRegister:         $ => /[rR][eE][gG][iI][sS][tT][eE][rR]/,
		kMwpascal:         $ => /[mM][wW][pP][aA][sS][cC][aA][lL]/,
		kExternal:         $ => /[eE][xX][tT][eE][rR][nN][aA][lL]/,
		kName:             $ => /[nN][aA][mM][eE]/,
		kMessage:          $ => /[mM][eE][sS][sS][aA][gG][eE]/,
		kDeprecated:       $ => /[dD][eE][pP][rR][eE][cC][aA][tT][eE][dD]/,
		kExperimental:     $ => /[eE][xX][pP][eE][rR][iI][mM][eE][nN][tT][aA][lL]/,
		kPlatform:         $ => /[pP][lL][aA][tT][fF][oO][rR][mM]/,
		kUnimplemented:    $ => /[uU][nN][iI][mM][pP][lL][eE][mM][eE][nN][tT][eE][dD]/,
		kCvar:             $ => /[cC][vV][aA][rR]/,
		kExport:           $ => /[eE][xX][pP][oO][rR][tT]/,
		kFar:              $ => /[fF][aA][rR]/,
		kNear:             $ => /[nN][eE][aA][rR]/,
		kSafecall:         $ => /[sS][aA][fF][eE][cC][aA][lL]/,
		kAssembler:        $ => /[aA][sS][sS][eE][mM][bB][lL][eE][rR]/,
		kNostackframe:     $ => /[nN][oO][sS][tT][aA][cC][kK][fF][rR][aA][mM][eE]/,
		kInterrupt:        $ => /[iI][nN][tT][eE][rR][rR][uU][pP][tT]/,
		kNoreturn:         $ => /[nN][oO][rR][eE][tT][uU][rR][nN]/,
		kIocheck:          $ => /[iI][oO][cC][hH][eE][cC][kK]/,
		kLocal:            $ => /[lL][oO][cC][aA][lL]/,
		kHardfloat:        $ => /[hH][aA][rR][dD][fF][lL][oO][aA][tT]/,
		kSoftfloat:        $ => /[sS][oO][fF][tT][fF][lL][oO][aA][tT]/,
		kMs_abi_default:   $ => /[mM][sS]_[aA][bB][iI]_[dD][eE][fF][aA][uU][lL][tT]/,
		kMs_abi_cdecl:     $ => /[mM][sS]_[aA][bB][iI]_[cC][dD][eE][cC][lL]/,
		kSaveregisters:    $ => /[sS][aA][vV][eE][rR][eE][gG][iI][sS][tT][eE][rR][sS]/,
		kSysv_abi_default: $ => /[sS][yY][sS][vV]_[aA][bB][iI]_[dD][eE][fF][aA][uU][lL][tT]/,
		kSysv_abi_cdecl:   $ => /[sS][yY][sS][vV]_[aA][bB][iI]_[cC][dD][eE][cC][lL]/,
		kVectorcall:       $ => /[vV][eE][cC][tT][oO][rR][cC][aA][lL][lL]/,
		kVarargs:          $ => /[vV][aA][rR][aA][rR][gG][sS]/,
		kWinapi:           $ => /[wW][iI][nN][aA][pP][iI]/,
		kAlias:            $ => /[aA][lL][iI][aA][sS]/,
		// Delphi
		kDelayed:          $ => /[dD][eE][lL][aA][yY][eE][dD]/,

		kNil:              $ => /[nN][iI][lL]/,
		kTrue:             $ => /[tT][rR][uU][eE]/,
		kFalse:            $ => /[fF][aA][lL][sS][eE]/,

		kIfdef:            $ => /[iI][fF][dD][eE][fF]/,
		kIfndef:           $ => /[iI][fF][nN][dD][eE][fF]/,
		kEndif:            $ => /[eE][nN][dD][iI][fF]/,
		
		identifier:        $ => /[&]?[a-zA-Z_]+[0-9_a-zA-Z]*/,

	  	_space:            $ => /[\s\r\n\t]+/,
		pp:                $ => /\{\$[^}]*\}/,
		comment:           $ => token(choice(
			seq('//', /.*/),
			seq('{', /([^$}][^}]*)?/, '}'),
			seq(/[(][*]([^*]*[*]+[^)*])*[^*]*[*]+[)]/)
		)),
	}
});
