// TODO:
// - case of
// - except on E: XYZ do ...
// - label, goto
// - raise
// - uses
// - array literals
// - set literals
// - record literals
// - ranges ([0..9])
// - static arrays + shortstrings
// - inline declaration of types, e.g.:
//       var foo: array [0..100] of bar;
//       procedure foo(bar: array of string);
// - properties
// - preprocessor
// - objectivec
// - "message"
// - FPCisms: specialize, generic, += etc.
// - GUIDs
module.exports = grammar({
	name: "pascal",
	
	extras: $ => [$._space, $.comment],

	word: $ => $.identifier,
	
	rules: {
	  	root:               $ => choice(
	  		$.program,
	  		$.unit
	  	),

		// HIGH LEVEL ----------------------------------------------------------

		program:            $ => seq(
			$.kProgram, $.identifier, ';',
			optional($._definitions),
			$.block,
			'.'
		),

		unit:               $ => seq(
			$.kUnit, $.identifier, ';',
			optional($.interface),
			$.implementation
		),

		interface:          $ => seq($.kInterface, optional($._declarations)),
		implementation:     $ => seq($.kImplementation, optional($._definitions)),
	
		comment:            $ => token(choice(
			seq('//', /.*/),
			seq('{', /[^}]*/, '}'),
			seq(
				'(*',
				/[^*]*\*+([^(*][^*]*\*+)*/,
				')'
			)
		)),

		// CONTROL STRUCTURES -------------------------------------------------

		if:                 $ => choice($._if, $._ifElse),
		_if:                $ => seq(
			$.kIf, $.expr, $.kThen,
			$._statement
		),
		_ifElse:            $ => prec.right(1, seq(
			$.kIf, $.expr, $.kThen,
			optional($._trailingStatement),
			$.kElse,
			$._statement
		)),

		while:              $ => seq(
			$.kWhile, $.expr, $.kDo,
			$._statement
		),

		repeat:             $ => prec(2,seq(
			$.kRepeat, optional($._trailingStatements), $.kUntil, $.expr, ';'
		)),

		for:                $ => seq(
			$.kFor, $.assignment, $.kTo, $.expr, $.kDo,
			$._statement
		),

		foreach:            $ => seq(
			$.kFor, $.expr, $.kIn, $.expr, $.kDo,
			$._statement
		),

		try:                $ => prec(2,seq(
			$.kTry, optional($._trailingStatements), 
			choice(
				seq($.kExcept, optional($._trailingStatements)), // todo "On E [:X] do ..."
				seq($.kFinally, optional($._trailingStatements))
			),
			$.kEnd, ';'
		)),

		// --
		trailingIf:                 $ => choice($._trailingIf, $._trailingIfElse),
		_trailingIf:                $ => seq(
			$.kIf, $.expr, $.kThen,
			optional($._trailingStatement)
		),
		_trailingIfElse:            $ => prec.right(1, seq(
			$.kIf, $.expr, $.kThen,
			optional($._trailingStatement),
			$.kElse,
			optional($._trailingStatement)
		)),

		trailingWhile:              $ => seq(
			$.kWhile, $.expr, $.kDo,
			optional($._trailingStatement)
		),

		trailingRepeat:             $ => seq(
			$.kRepeat, optional($._trailingStatements), $.kUntil, $.expr
		),

		trailingFor:                $ => seq(
			$.kFor, $.assignment, $.kTo, $.expr, $.kDo,
			optional($._trailingStatement)
		),

		trailingForeach:            $ => seq(
			$.kFor, $.expr, $.kIn, $.expr, $.kDo,
			optional($._trailingStatement)
		),

		trailingTry:                $ => seq(
			$.kTry, optional($._trailingStatements), 
			choice(
				seq($.kExcept, optional($._trailingStatements)), // todo "On E [:X] do ..."
				seq($.kFinally, optional($._trailingStatements))
			),
			$.kEnd
		),

		// STATEMENTS & EXPRESSIONS -------------------------------------------

		block:              $ => seq(
			$.kBegin,
			optional($._trailingStatements),
			$.kEnd,
		),

		_statements:        $ => repeat1($._statement),
		_trailingStatements:$ => seq(
			optional(repeat1($._statement)),
			$._trailingStatement
		),

		_statement:         $ => choice(
			seq($.expr, ';'),
			seq($.assignment, ';'),
			seq($.block, ';'),
			$.if, $.while, $.repeat, $.for, $.foreach, $.try
		),
		_trailingStatement:  $ => prec.left(1,seq(choice(
			$.expr,
			$.assignment,
			$.block,
			$.trailingIf, $.trailingWhile, $.trailingRepeat, $.trailingFor, $.trailingForeach, $.trailingTry
		), optional(';'))),

		assignment:         $ => seq($.expr, $.kAssign, $.expr),

		call:               $ => seq($.identifier, optional(seq('(',optional($.callArgs),')'))),

		callArgs:           $ => seq(
			optional(repeat1(seq($.expr, ','))),
			$.expr
		),

		_exprDot:           $ => prec.left(4, seq($.expr, $.kDot,  $.expr)),
		_exprIdx:           $ => prec.left(4, seq('[', $.callArgs, ']')),

		_exprParens:        $ => seq('(', $.expr, ')'),

		_exprEq:            $ => prec.left(1,seq($.expr, $.kEq,  $.expr)),
		_exprNeq:           $ => prec.left(1,seq($.expr, $.kNeq, $.expr)),
		_exprLt:            $ => prec.left(1,seq($.expr, $.kLt,  $.expr)),
		_exprGt:            $ => prec.left(1,seq($.expr, $.kGt,  $.expr)),
		_exprLte:           $ => prec.left(1,seq($.expr, $.kLte, $.expr)),
		_exprGte:           $ => prec.left(1,seq($.expr, $.kGte, $.expr)),
		_exprIn:            $ => prec.left(1,seq($.expr, $.kIn,  $.expr)),
		_exprIs:            $ => prec.left(1,seq($.expr, $.kIs,  $.expr)),

		_exprAdd:           $ => prec.left(2,seq($.expr, $.kAdd, $.expr)),
		_exprSub:           $ => prec.left(2,seq($.expr, $.kSub, $.expr)),
		_exprOr:            $ => prec.left(2,seq($.expr, $.kOr,  $.expr)),
		_exprXor:           $ => prec.left(2,seq($.expr, $.kXor, $.expr)),

		_exprMul:           $ => prec.left(3,seq($.expr, $.kMul, $.expr)),
		_exprFdiv:          $ => prec.left(3,seq($.expr, $.kFdiv,$.expr)),
		_exprDiv:           $ => prec.left(3,seq($.expr, $.kDiv, $.expr)),
		_exprMod:           $ => prec.left(3,seq($.expr, $.kMod, $.expr)),
		_exprAnd:           $ => prec.left(3,seq($.expr, $.kAnd, $.expr)),
		_exprShl:           $ => prec.left(3,seq($.expr, $.kShl, $.expr)),
		_exprShr:           $ => prec.left(3,seq($.expr, $.kShr, $.expr)),

		expr:               $ => choice(
			$.literal,
			prec.left(4,$.call),
			$._exprDot,  $._exprIdx,

			$._exprParens, 

			$._exprEq, $._exprNeq, $._exprLt, $._exprGt, $._exprLte,
			$._exprGte, $._exprIn, $._exprIs,

			$._exprAdd, $._exprSub, $._exprOr, $._exprXor,

			$._exprMul, $._exprFdiv, $._exprDiv, $._exprMod, 
			$._exprAnd, $._exprShl, $._exprShr
		),

		// E.g. Foo<Bar<A,B>, C>
		_specializedName:   $ => seq(
			$.identifier, 
			optional($.specializedParams)
		),
		specializedParams:  $ => seq( $.kAngleOpen, $._specializedParams, $.kAngleClose),
		_specializedParams: $ => seq(
			optional(repeat1(seq($.specializedParam, ','))),
			$.specializedParam
		),

		specializedParam:   $ => $._constant,

		// E.g. Foo<A: B, C: D<E>>
		_genericName:       $ => seq($.identifier, optional($.genericParams)),
		genericParams:      $ => seq($.kAngleOpen, $._genericParams, $.kAngleClose),
		_genericParams:     $ => seq(
			optional(repeat1(seq($.genericParam, ';'))),
			$.genericParam
		),
		genericParam:       $ => seq(
			$._identifiers, 
			optional(seq(':', $.specializedType)), 
			optional($.defaultValue)
		),
		_constant:          $ => choice($.literal, $._specializedName),


		genericType:        $ => $._genericName,
		specializedType:    $ => $._specializedName,

		genericProc:        $ => $._genericName,

		// LITERALS -----------------------------------------------------------

		literal:            $ => choice(
			$.literalString,
			$.literalNumber
		),
		literalString:      $ => repeat1($._literalString),
		_literalString:     $ => choice(/'[^']*'/, $.literalChar),
		literalChar:        $ => seq('#', $._literalInt),
		literalNumber:      $ => choice($._literalInt, $._literalFloat),
		_literalInt:        $ => choice(
			token.immediate(/-?[0-9]+/),
			token.immediate(/\$[a-fA-F0-9]+/)
		),
		_literalFloat:      $ => prec(10, /-?[0-9]*\.?[0-9]+(e[+-]?[0-9]+)?/),


		// DEFINITIONS --------------------------------------------------------

		_definitions:       $ => repeat1($._definition),
		_definition:        $ => choice(
			$.declType, $.declVar, $.declConst, $.defProc, $.declProcFwd
		),

		defProc:            $ => seq(
			choice($.declProc, $.declFunc),
			$._body,
			';'
		),

		declProcFwd:        $ => seq(
			choice($.declProc, $.declFunc),
			$.kForward,
			';'
		),

		locals:             $ => $._definitions,

		_body:              $ => seq(
			optional($.locals),
			$.block
		),

		// DECLARATIONS -------------------------------------------------------

		_declarations:      $ => repeat1($._declaration),
		_declaration:       $ => choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc
		),

		declType:           $ => seq($.kType, repeat1($._declType)),
		_declType:          $ => seq(
			$.genericType, $.kEq, choice(
				$.declTypedef,
				$.declClass,
				$.declMetaClass,
				$.declHelper,
				$.declEnum,
				$.declSet
			),
			';'
		),
		declTypedef:        $ => seq(optional($.kType), $.specializedType),

		declEnum:           $ => seq( 
			'(', 
			optional(repeat1(seq($._declEnum, ','))),
			$._declEnum,
			')'
		),
		_declEnum:          $ => seq($.identifier, optional($.defaultValue)),

		declSet:            $ => seq($.kSet, $.kOf, $.expr),

		declClass:          $ => seq(
			choice($.kClass, $.kRecord, $.kObject, $.kInterface), 
			optional(seq('(',$.specializedType,')')), $._declClass
		),

		declSection:        $ => seq(
			optional($.kStrict),
			choice($.kPublished, $.kPublic, $.kProtected, $.kPrivate),
			$._declarations
		),

		_declClass:         $ => seq(
			optional($._declarations),
			repeat($.declSection),
			$.kEnd
		),
		declArray:          $ => seq($.kArray, $.kOf, $.specializedType),

		declMetaClass:      $ => seq(
			$.kClass, $.kOf, $.specializedType
		),

		declHelper:         $ => seq(
			choice($.kClass, $.kRecord), $.kHelper, $.kFor, $.specializedType,
			$._declClass
		),

		declProc:           $ => seq(
			optional($.kClass),
			choice($.kProcedure, $.kConstructor, $.kDestructor),
			optional($._namespace),
			$.genericProc,
			optional($.declArgs),
			';',
			optional($.procAttributes)
		),

		declFunc:           $ => seq(
			$.kFunction,
			optional($._namespace),
			$.genericProc,
			optional($.declArgs),
			':',
			$.specializedType,
			';',
			optional($.procAttributes)
		),

		declArgs:           $ => seq(
			'(', optional($._declArgs), ')'
		),
		_declArgs:          $ => seq(
			optional( repeat1( seq($.declArg, ';'))),
			$.declArg
		),

		procAttributes:     $ => repeat1(
			seq(
				choice(
					$.kStatic, $.kVirtual, $.kAbstract, $.kOverride, 
					$.kStdcall, $.kCdecl, $.kPascal
				),
				';'
			)
		),

		_identifiers:       $ => seq(
			optional(repeat1(seq($.identifier, ','))),
			$.identifier
		),

		_namespace:         $ => repeat1(seq($.genericType, '.')),

		defaultValue:       $ => seq($.kEq, $._constant),

		declVar:            $ => seq($.kVar, optional($._declVar)),
		_declVar:           $ => repeat1(seq(
			$._identifiers, ':', $.specializedType, optional($.defaultValue), ';'
		)),
		declConst:          $ => seq($.kConst, optional($._declConst)),
		_declConst:         $ => repeat1(seq(
			$.identifier, optional(seq(':', $.specializedType)), $.defaultValue, ';'
		)),

		declArg:            $ => seq(
			choice(
				seq(
					choice($.kVar, $.kConst, $.kOut),
					$._identifiers,
					optional(seq(':', $.specializedType, optional($.defaultValue)))
				),
				seq(
					$._identifiers, ':', $.specializedType, optional($.defaultValue)
				)
			),
		),

		// TERMINAL SYMBOLS ----------------------------------------------------

		kProgram:           $ => /[pP][rR][oO][gG][rR][aA][mM]/,
		kUnit:              $ => /[uU][nN][iI][tT]/,
		kUses:              $ => /[uU][sS][eE][sS]/,

		kBegin:             $ => /[bB][eE][gG][iI][nN]/,
		kEnd:               $ => /[eE][nN][dD]/,

		kVar:               $ => /[vV][aA][rR]/,
		kConst:             $ => /[cC][oO][nN][sS][tT]/,
		kOut:               $ => /[oO][uU][tT]/,
		kType:              $ => /[tT][yY][pP][eE]/,

		kClass:             $ => /[cC][lL][aA][sS][sS]/,
		kInterface:         $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kObject:            $ => /[oO][bB][jJ][eE][cC][tT]/,
		kRecord:            $ => /[rR][eE][cC][oO][rR][dD]/,
		kArray:             $ => /[aA][rR][aA][yY]/,
		kSet:               $ => /[sS][eE][tT]/,
		kOf:                $ => /[oO][fF]/,
		kHelper:            $ => /[hH][eE][lL][pP][eE][rR]/,

		kDot:               $ => '.',
		kAdd:               $ => '+',
		kSub:               $ => '-',
		kMul:               $ => '*',
		kFdiv:              $ => '/',
		kOr:                $ => /[oO][rR]/,
		kXor:               $ => /[xX][oO][rR]/,
		kDiv:               $ => /[dD][iI][vV]/,
		kMod:               $ => /[mM][oO][dD]/,
		kAnd:               $ => /[aA][nN][dD]/,
		kShl:               $ => /[sS][hH][lL]/,
		kShr:               $ => /[sS][hH][rR]/,
		kAssign:            $ => ':=',
		kEq:                $ => '=',
		kLt:                $ => '<',
		kLte:               $ => '<=',
		kGt:                $ => '>',
		kGte:               $ => '>=',
		kNeq:               $ => '<>',
		kIs:                $ => /[iI][sS]/,
		kAs:                $ => /[aA][sS]/,
		kIn:                $ => /[iI][nN]/,

		kAngleOpen:         $ => '<',
		kAngleClose:        $ => '>',

		kFor:               $ => /[fF][oO][rR]/,
		kTo:                $ => /[tT][oO]/,
		kIf:                $ => /[iI][fF]/,
		kThen:              $ => /[tT][hH][eE][nN]/,
		kElse:              $ => /[eE][lL][sS][eE]/,
		kDo:                $ => /[dD][oO]/,
		kWhile:             $ => /[wW][hH][iI][lL][eE]/,
		kRepeat:            $ => /[rR][eE][pP][eE][aA][tT]/,
		kUntil:             $ => /[uU][nN][tT][iI][lL]/,
		kTry:               $ => /[tT][rR][yY]/,
		kExcept:            $ => /[eE][xX][cC][eE][pP][tT]/,
		kFinally:           $ => /[fF][iI][nN][aA][lL][lL][yY]/,

		kFunction:          $ => /[fF][uU][nN][cC][tT][iI][oO][nN]/,
		kProcedure:         $ => /[pP][rR][oO][cC][eE][dD][uU][rR][eE]/,
		kConstructor:       $ => /[cC][oO][nN][sS][tT][rR][uU][cC][tT][oO][rR]/,
		kDestructor:        $ => /[dD][eE][sS][tT][rR][uU][cC][tT][oO][rR]/,

		kInterface:         $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kImplementation:    $ => /[iI][mM][pP][lL][eE][mM][eE][nN][tT][aA][tT][iI][oO][nN]/,

		kPublished:         $ => /[pP][uU][bB][lL][iI][sS][hH][eE][dD]/,
		kPublic:            $ => /[pP][uU][bB][lL][iI][cC]/,
		kProtected:         $ => /[pP][rR][oO][tT][eE][cC][tT][eE][dD]/,
		kPrivate:           $ => /[pP][rR][iI][vV][aA][tT][eE]/,
		kStrict:            $ => /[sS][tT][rR][iI][cC][tT]/,

		kForward:           $ => /[fF][oO][rR][wW][aA][rR][dD]/,

		kStatic:            $ => /[sS][tT][aA][tT][iI][cC]/,
		kVirtual:           $ => /[vV][iI][rR][tT][uU][aA][lL]/,
		kAbstract:          $ => /[aA][bB][sS][tT][rR][aA][cC][tT]/,
		kOverride:          $ => /[oO][vV][eE][rR][rR][iI][dD][eE]/,

		kStdcall:           $ => /[sS][tT][dD][cC][aA][lL][lL]/,
		kCdecl:             $ => /[cC][dD][eE][cC][lL]/,
		kPascal:            $ => /[pP][aA][sS][cC][aA][lL]/,
		
    	identifier:         $ => /[&]?[a-zA-Z_]+[0-9_a-zA-Z]*/,

	  	_space:             $ => /[\s\r\n\t]+/,
	}
});
