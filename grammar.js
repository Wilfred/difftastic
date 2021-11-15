module.exports = grammar({
	name: "pascal",
	
	extras: $ => [$._space, $.comment],

	inline: $ => [
		$.declarations,
		$.declaration,
		$.definitions,
		$.definition,
		$.identifiers,
		$.genericName,
		$.genericParams_,
		$.specializedName,
		$.specializedParams_,
		$.constant,
		$.literalString_,
		$.literalInt_,
		$.literalInt,
		$.literalFloat,
		$.declType_,
		$.declClass_,
		$.declArgs_,
		$.declVar_,
		$.declConst_,
		$.interface_,
		$.implementation_,
		$.body,
		$.decProcFwd,
		$.namespace,
		$.calls,
		$.statements,
		//$.path,
		//$.expr
	],

	word: $ => $.identifier,
	
	rules: {
	  	root:           $ => choice(
	  		$.program,
	  		$.unit
	  	),

		// HIGH LEVEL ----------------------------------------------------------

		program:         $ => seq(
			$.kProgram, $.identifier, ';',
			$.implementation_
		),

		unit:            $ => seq(
			$.kUnit, $.identifier, ';',
			optional($.interface),
			$.implementation
		),

		interface:       $ => seq($.kInterface, optional($.interface_)),
		interface_:      $ => $.declarations,
		implementation:  $ => seq($.kImplementation, optional($.implementation_)),
		implementation_: $ => $.definitions,
	
		comment:         $ => token(choice(
			seq('//', /.*/),
			seq('{', /[^}]*/, '}'),
			seq(
				'(*',
				/[^*]*\*+([^(*][^*]*\*+)*/,
				')'
			)
		)),


		// STATEMENTS & EXPRESSIONS -------------------------------------------

		block:           $ => seq(
			$.kBegin,
			optional($.statements),
			$.kEnd,
		),

		statements:      $ => repeat1(choice($.statement, $.block)),

		statement:       $ => choice(seq($.expr, ';'), $.assignment),

		assignment:      $ => seq($.expr, $.kAssign, $.expr, ';'),

		call:            $ => seq($.identifier, optional(seq('(',optional($.callArgs),')'))),

		callArgs:        $ => seq(
			optional(repeat1(seq($.expr, ','))),
			$.expr
		),

		_exprDot:         $ => prec.left(4, seq($.expr, $.kDot,  $.expr)),

		_exprParens:      $ => seq('(', $.expr, ')'),

		_exprAdd:         $ => prec.left(2,seq($.expr, $.kAdd, $.expr)),
		_exprSub:         $ => prec.left(2,seq($.expr, $.kSub, $.expr)),
		_exprOr:          $ => prec.left(2,seq($.expr, $.kOr,  $.expr)),
		_exprXor:         $ => prec.left(2,seq($.expr, $.kXor, $.expr)),

		_exprMul:         $ => prec.left(3,seq($.expr, $.kMul, $.expr)),
		_exprFdiv:        $ => prec.left(3,seq($.expr, $.kFdiv,$.expr)),
		_exprDiv:         $ => prec.left(3,seq($.expr, $.kDiv, $.expr)),
		_exprMod:         $ => prec.left(3,seq($.expr, $.kMod, $.expr)),
		_exprAnd:         $ => prec.left(3,seq($.expr, $.kAnd, $.expr)),
		_exprShl:         $ => prec.left(3,seq($.expr, $.kShl, $.expr)),
		_exprShr:         $ => prec.left(3,seq($.expr, $.kShr, $.expr)),

		expr:            $ => choice(
			$.literal,
			prec.left(4,$.call),
			$._exprDot,
			$._exprParens,
			$._exprAdd,
			$._exprSub,
			$._exprMul,
			$._exprFdiv,
			$._exprDiv,
			$._exprMod,
			$._exprAnd,
			$._exprOr,
			$._exprXor,
			$._exprShl,
			$._exprShr,
		),

		// E.g. Foo<Bar<A,B>, C>
		specializedName: $ => seq(
			$.identifier, 
			optional($.specializedParams)
		),
		specializedParams: $ => seq( $.kAngleOpen, $.specializedParams_, $.kAngleClose),
		specializedParams_: $ => seq(
			optional(repeat1(seq($.specializedParam, ','))),
			$.specializedParam
		),

		specializedParam: $ => $.constant,

		// E.g. Foo<A: B, C: D<E>>
		genericName:       $ => seq($.identifier, optional($.genericParams)),
		genericParams:     $ => seq($.kAngleOpen, $.genericParams_, $.kAngleClose),
		genericParams_:    $ => seq(
			optional(repeat1(seq($.genericParam, ';'))),
			$.genericParam
		),
		genericParam:    $ => seq(
			$.identifiers, 
			optional(seq(':', $.specializedType)), 
			optional($.defaultValue)
		),
		constant:        $ => choice($.literal, $.specializedName),


		genericType:     $ => $.genericName,
		specializedType: $ => $.specializedName,

		genericProc:     $ => $.genericName,

		// DEFINITIONS --------------------------------------------------------

		definitions:     $ => repeat1($.definition),
		definition:      $ => choice(
			$.declType, $.declVar, $.declConst, $.defProc, $.declProcFwd
		),

		defProc:         $ => seq(
			choice($.declProc, $.declFunc),
			$.body,
			';'
		),

		declProcFwd:     $ => seq(
			choice($.declProc, $.declFunc),
			$.kForward,
			';'
		),

		locals:          $ => $.definitions,

		body:            $ => seq(
			optional($.locals),
			$.block
		),

		// DECLARATIONS -------------------------------------------------------

		declarations:    $ => repeat1($.declaration),
		declaration:     $ => choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc
		),

		declType:        $ => seq($.kType, repeat1($.declType_)),
		declType_:       $ => seq(
			$.genericType, $.kEq, choice(
				$.declTypedef,
				$.declClass,
				$.declMetaClass,
				$.declHelper,
			),
			';'
		),
		declTypedef:     $ => seq(optional($.kType), $.specializedType),
		declClass:       $ => seq(
			choice($.kClass, $.kRecord, $.kObject, $.kInterface), 
			optional(seq('(',$.specializedType,')')), $.declClass_
		),

		declSectionDef:  $ => $.declarations,

		declSection: $ => seq(
			optional($.kStrict),
			choice($.kPublished, $.kPublic, $.kProtected, $.kPrivate),
			$.declarations
		),

		declClass_:      $ => seq(
			optional($.declSectionDef),
			repeat($.declSection),
			$.kEnd
		),
		declArray:       $ => seq($.kArray, $.kOf, $.specializedType),

		declMetaClass:   $ => seq(
			$.kClass, $.kOf, $.specializedType
		),

		declHelper:      $ => seq(
			choice($.kClass, $.kRecord), $.kHelper, $.kFor, $.specializedType,
			$.declClass_
		),

		declProc:        $ => seq(
			optional($.kClass),
			choice($.kProcedure, $.kConstructor, $.kDestructor),
			optional($.namespace),
			$.genericProc,
			optional($.declArgs),
			';',
			optional($.procAttributes)
		),

		declFunc:        $ => seq(
			$.kFunction,
			optional($.namespace),
			$.genericProc,
			optional($.declArgs),
			':',
			$.specializedType,
			';',
			optional($.procAttributes)
		),

		declArgs:       $ => seq(
			'(', optional($.declArgs_), ')'
		),
		declArgs_:      $ => seq(
			optional( repeat1( seq($.declArg, ';'))),
			$.declArg
		),

		procAttributes:  $ => repeat1(
			seq(
				choice(
					$.kStatic, $.kVirtual, $.kAbstract, $.kOverride, 
					$.kStdcall, $.kCdecl, $.kPascal
				),
				';'
			)
		),

		identifiers:     $ => seq(
			optional(repeat1(seq($.identifier, ','))),
			$.identifier
		),

		namespace:       $ => repeat1(seq($.genericType, '.')),

		defaultValue:    $ => seq($.kEq, $.constant),

		declVar:         $ => seq($.kVar, optional($.declVar_)),
		declVar_:        $ => repeat1(seq(
			$.identifiers, ':', $.specializedType, optional($.defaultValue), ';'
		)),
		declConst:       $ => seq($.kConst, optional($.declConst_)),
		declConst_:      $ => repeat1(seq(
			$.identifier, optional(seq(':', $.specializedType)), $.defaultValue, ';'
		)),

		declArg:         $ => seq(
			choice(
				seq(
					choice($.kVar, $.kConst, $.kOut),
					$.identifiers,
					optional(seq(':', $.specializedType, optional($.defaultValue)))
				),
				seq(
					$.identifiers, ':', $.specializedType, optional($.defaultValue)
				)
			),
		),

		// BASIC TOKENS -------------------------------------------------------

		kProgram:        $ => /[pP][rR][oO][gG][rR][aA][mM]/,
		kUnit:           $ => /[uU][nN][iI][tT]/,
		kUses:           $ => /[uU][sS][eE][sS]/,

		kBegin:          $ => /[bB][eE][gG][iI][nN]/,
		kEnd:            $ => /[eE][nN][dD]/,

		kVar:            $ => /[vV][aA][rR]/,
		kConst:          $ => /[cC][oO][nN][sS][tT]/,
		kOut:            $ => /[oO][uU][tT]/,
		kType:           $ => /[tT][yY][pP][eE]/,

		kClass:          $ => /[cC][lL][aA][sS][sS]/,
		kInterface:      $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kObject:         $ => /[oO][bB][jJ][eE][cC][tT]/,
		kRecord:         $ => /[rR][eE][cC][oO][rR][dD]/,
		kArray:          $ => /[aA][rR][aA][yY]/,
		kOf:             $ => /[oO][fF]/,
		kHelper:         $ => /[hH][eE][lL][pP][eE][rR]/,

		kDot:            $ => '.',
		kAdd:            $ => '+',
		kSub:            $ => '-',
		kMul:            $ => '*',
		kFdiv:           $ => '/',
		kOr:             $ => /[oO][rR]/,
		kXor:            $ => /[xX][oO][rR]/,
		kDiv:            $ => /[dD][iI][vV]/,
		kMod:            $ => /[mM][oO][dD]/,
		kAnd:            $ => /[aA][nN][dD]/,
		kShl:            $ => /[sS][hH][lL]/,
		kShr:            $ => /[sS][hH][rR]/,
		kAssign:         $ => ':=',
		kEq:             $ => '=',
		kLt:             $ => '<',
		kLte:            $ => '<=',
		kGt:             $ => '>',
		kGte:            $ => '>=',
		kNe:             $ => '<>',

		kAngleOpen:      $ => '<',
		kAngleClose:     $ => '>',

		//kIs:             $ => /[iI][sS]/,
		//kAs:             $ => /[aA][sS]/,
		//kIn:             $ => /[iI][nN]/,

		kFor:            $ => /[fF][oO][rR]/,
		//kIf:             $ => /[iI][fF]/,
		//kDo:             $ => /[dD][oO]/,
		//kWhile:          $ => /[wW][hH][iI][lL][eE]/,
		//kRepeat:         $ => /[rR][eE][pP][eE][aA][tT]/,
		//kUntil:          $ => /[uU][nN][tT][iI][lL]/,

		kFunction:       $ => /[fF][uU][nN][cC][tT][iI][oO][nN]/,
		kProcedure:      $ => /[pP][rR][oO][cC][eE][dD][uU][rR][eE]/,
		kConstructor:    $ => /[cC][oO][nN][sS][tT][rR][uU][cC][tT][oO][rR]/,
		kDestructor:     $ => /[dD][eE][sS][tT][rR][uU][cC][tT][oO][rR]/,

		kInterface:      $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kImplementation: $ => /[iI][mM][pP][lL][eE][mM][eE][nN][tT][aA][tT][iI][oO][nN]/,

		kPublished:      $ => /[pP][uU][bB][lL][iI][sS][hH][eE][dD]/,
		kPublic:         $ => /[pP][uU][bB][lL][iI][cC]/,
		kProtected:      $ => /[pP][rR][oO][tT][eE][cC][tT][eE][dD]/,
		kPrivate:        $ => /[pP][rR][iI][vV][aA][tT][eE]/,
		kStrict:         $ => /[sS][tT][rR][iI][cC][tT]/,

		kForward:        $ => /[fF][oO][rR][wW][aA][rR][dD]/,

		kStatic:         $ => /[sS][tT][aA][tT][iI][cC]/,
		kVirtual:        $ => /[vV][iI][rR][tT][uU][aA][lL]/,
		kAbstract:       $ => /[aA][bB][sS][tT][rR][aA][cC][tT]/,
		kOverride:       $ => /[oO][vV][eE][rR][rR][iI][dD][eE]/,

		kStdcall:        $ => /[sS][tT][dD][cC][aA][lL][lL]/,
		kCdecl:          $ => /[cC][dD][eE][cC][lL]/,
		kPascal:         $ => /[pP][aA][sS][cC][aA][lL]/,
		
    	identifier:      $ => /[&]?[a-zA-Z_]+[0-9_a-zA-Z]*/,

		literal:         $ => choice(
			$.literalString,
			$.literalNumber
		),
		literalString:   $ => repeat1($.literalString_),
		literalString_:  $ => choice(/'[^']*'/, $.literalChar),
		literalChar:     $ => seq('#', $.literalInt_),
		literalNumber:   $ => choice($.literalInt, $.literalFloat),
		literalInt:      $ => $.literalInt_,
		literalInt_:     $ => choice(
			token.immediate(/-?[0-9]+/),
			token.immediate(/\$[a-fA-F0-9]+/)
		),
		literalFloat:    $ => prec(10, /-?[0-9]*\.?[0-9]+(e[+-]?[0-9]+)?/),

	  	_space:          $ => /[\s\r\n\t]+/,
	}
});
