// TODO:
// - preprocessor
// - objectivec
// - "message"
// - FPCisms: "specialize", "generic", += etc.
// - GUIDs
// asm blocks
module.exports = grammar({
	name: "pascal",
	
	extras: $ => [$._space, $.comment],

	word: $ => $.identifier,

	//conflicts: $ => [ [ $._specializedName ]/*, [$.qualifiedName]*/ ],
	
	rules: {
	  	root:               $ => choice(
	  		$.program,
	  		$.unit
	  	),

		// HIGH LEVEL ----------------------------------------------------------

		program:            $ => seq(
			$.kProgram, $.moduleName, ';',
			//optional($._definitions),
			$.blockTr,
			$.kEndDot
		),


		unit:               $ => seq(
			$.kUnit, $.moduleName, ';',
			optional($.interface),
			$.implementation,
			optional($.initialization),
			optional($.finalization),
			$.kEnd, $.kEndDot
		),

		declUses:           $ => seq($.kUses, delimited($.moduleName), ';'),

		interface:          $ => seq($.kInterface, optional($._declarations)),
		implementation:     $ => seq($.kImplementation/*, optional($._definitions)*/),
		initialization:     $ => seq($.kInitialization/*, optional($._statementsTr)*/),
		finalization:       $ => seq($.kFinalization/*, optional($._statementsTr)*/),
	
		comment:            $ => token(choice(
			seq('//', /.*/),
			seq('{', /[^}]*/, '}'),
			seq(
				'(*',
				/[^*]*\*+([^(*][^*]*\*+)*/,
				')'
			)
		)),

		moduleName:         $ => delimited1($.identifier, '.'),

		// STATEMENTS ---------------------------------------------------------

		...statements(false),
		...statements(true),

		assignment:         $ => seq($.expr, ':=', $.expr),

		label:              $ => seq($.identifier, ':'),
		goto:               $ => seq($.kGoto, alias($.identifier, $.label)),
		caseLabel:          $ => seq(delimited1(choice($.expr, $.range)), ':'),

		_statements:        $ => repeat1(choice($._statement, $.label)),
		_statementsTr:      $ => seq(
			repeat(choice($._statement, $.label)),
			choice($._statementTr, $._statement)
		),


		// EXPRESSIONS ---------------------------------------------------------

		refDot:     $ => prec.left(5,seq($.ref, '.', $.ref)),
		refTpl:     $ => prec.left(5,seq($.ref, '<', delimited1($.expr), '>')),
		refIdx:     $ => prec.left(5,seq($.ref, '[', delimited1($.expr), ']')),
		refCall:    $ => prec.left(5,seq($.ref, '(', delimited($.expr), ')')),
		ref:        $ => choice(
			$.identifier, $.refDot, $.refTpl, $.refIdx, $.refCall
		),

		expr:       $ => choice(
			$.ref, $.literal,
			$.exprParens,

			$.exprLt, $.exprEq, $.exprNeq, $.exprGt, 

			$.exprAdd, $.exprSub, $.exprOr, $.exprXor,

			$.exprMul, $.exprFdiv, $.exprDiv, $.exprMod,
			$.exprAnd, $.exprShl, $.exprShr,

			$.exprNot, $.exprPos, $.exprNeg, $.exprAt, $.exprDeref
		),

		exprLt:     $ => prec.left(1,seq($.expr, '<', $.expr)),
		exprEq:     $ => prec.left(1,seq($.expr, '=', $.expr)),
		exprNeq:    $ => prec.left(1,seq($.expr, '<>', $.expr)),
		exprGt:     $ => prec.left(1,seq($.expr, '>', $.expr)),

		exprAdd:    $ => prec.left(2,seq($.expr, '+',    $.expr)),
		exprSub:    $ => prec.left(2,seq($.expr, '-',    $.expr)),
		exprOr:     $ => prec.left(2,seq($.expr, $.kOr,  $.expr)),
		exprXor:    $ => prec.left(2,seq($.expr, $.kXor, $.expr)),

		exprMul:    $ => prec.left(3,seq($.expr, '*',    $.expr)),
		exprFdiv:   $ => prec.left(3,seq($.expr, '/',    $.expr)),
		exprDiv:    $ => prec.left(3,seq($.expr, $.kDiv, $.expr)),
		exprMod:    $ => prec.left(3,seq($.expr, $.kMod, $.expr)),
		exprAnd:    $ => prec.left(3,seq($.expr, $.kAnd, $.expr)),
		exprShl:    $ => prec.left(3,seq($.expr, $.kShl, $.expr)),
		exprShr:    $ => prec.left(3,seq($.expr, $.kShr, $.expr)),

		exprNot:    $ => prec.left(4,seq($.kNot, $.expr)),
		exprPos:    $ => prec.left(4,seq('+',    $.expr)),
		exprNeg:    $ => prec.left(4,seq('-',    $.expr)),
		exprAt:     $ => prec.left(4,seq('@',    $.expr)),
		exprDeref:  $ => prec.left(4,seq($.expr, '^')),

		exprParens: $ => prec.left(5,seq('(', $.expr, ')')),

		// TYPEs ---------------------------------------------------------------

		_typerefDot: $ => prec.left(1,seq($.typeref, '.', $.typeref)),
		_typerefTpl: $ => prec.left(1,seq($.typeref, '<', delimited($.typeref), '>')),
		_typerefPtr: $ => prec.left(1,seq('^', $.typeref)),
		typeref:     $ => choice(
			$.identifier, $._typerefDot, $._typerefTpl, $._typerefPtr,
		),

		// E.g. Foo<A: B, C: D<E>>
		genericName:        $ => seq($.identifier, optional($.genericParams)),
		genericParams:      $ => seq('<', delimited1($.genericParam, ';'), '>'),
		genericParam:       $ => seq(
			delimited1($.identifier), 
			optional(seq(':', $.typeref)),
			optional($.defaultValue)
		),

		// LITERALS -----------------------------------------------------------

		literal:            $ => choice(
			$.literalString,
			$.literalNumber,
			$.kNil, $.kTrue, $.kFalse
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

		range:              $ => seq(
			$.expr, '..', $.expr
		),

		bracketed:       $ => seq(
			'[', delimited(choice($.expr, $.range)), ']'
		),

		// DEFINITIONS --------------------------------------------------------

		//_definitions:       $ => repeat1($._definition),
		//_definition:        $ => choice(
		//	$.declType, $.declVar, $.declConst, $.defProc, $.declProcFwd,
		//	$.declLabel
		//),

		//defProc:            $ => seq(
		//	choice($.declProc, $.declFunc),
		//	$._body,
		//	';'
		//),

		//declProcFwd:        $ => seq(
		//	choice($.declProc, $.declFunc),
		//	choice($.kForward, $.procExternal),
		//	';'
		//),

		//locals:             $ => $._definitions,

		//_body:              $ => seq(
		//	optional($.locals),
		//	$.blockTr
		//),

		// DECLARATIONS -------------------------------------------------------

		_declarations:      $ => repeat1(choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc, $.declUses,
			$.declLabel
		)),
		_classDeclarations:      $ => repeat1(choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc,
			$.declProp
		)),

		declType:           $ => seq($.kType, repeat1($._declType)),
		_declType:          $ => seq(
			$.genericName, '=', 
			choice(
				seq(optional($.kType), $.type),
				choice($.type, $.kClass, $.kInterface),
				$.declClass,
				$.declHelper,
			),
			';',
			repeat(seq($.procAttribute, ';'))
		),

		type:               $ => choice(
			$.typeref, 
			$.declMetaClass,
			$.declEnum,
			$.declSet,
			$.declArray,
			$.declString,
			$.declProcRef,
			$.declFuncRef
		),


		declEnum:           $ => seq('(', delimited1($.declEnumValue), ')'),
		declEnumValue:      $ => seq($.identifier, optional($.defaultValue)),

		declSet:            $ => seq($.kSet, $.kOf, $.type),

		declClass:          $ => seq(
			optional($.kPacked),
			choice($.kClass, $.kRecord, $.kObject, $.kInterface), 
			optional(seq('(',delimited($.typeref),')')), $._declClass
		),

		declSection:        $ => seq(
			optional($.kStrict),
			choice($.kPublished, $.kPublic, $.kProtected, $.kPrivate),
			optional($._declFields),
			optional($._classDeclarations)
		),

		_declFields:        $ => repeat1($.declField),

		_declClass:         $ => seq(
			optional($._declFields),
			optional($._classDeclarations),
			repeat($.declSection),
			$.kEnd
		),

		declArray:          $ => seq(
			optional($.kPacked),
			$.kArray, 
			optional(seq('[', delimited(choice($.range, $.expr)), ']')),
			$.kOf, $.type
		),
		declString:          $ => seq(
			$.kString, 
			optional(seq('[', choice($.expr), ']'))
		),

		declMetaClass:      $ => seq($.kClass, $.kOf, $.typeref),

		declHelper:         $ => seq(
			choice($.kClass, $.kRecord), $.kHelper, $.kFor, $.typeref
		),

		declProc:           $ => seq(
			optional($.kClass),
			choice($.kProcedure, $.kConstructor, $.kDestructor),
			$.genericName,
			optional($.declArgs),
			optional($.defaultValue),
			repeat(seq(';', $.procAttribute)),
			';',
		),

		declFunc:           $ => seq(
			optional($.kClass),
			$.kFunction,
			$.genericName,
			optional($.declArgs),
			':',
			$.type,
			repeat(seq(';', $.procAttribute)),
			';',
		),

		declProcRef:        $ => prec.right(1,seq(
			$.kProcedure,
			optional($.declArgs),
			optional(seq($.kOf, $.kObject))
		)),

		declFuncRef:        $ => prec.right(1, seq(
			$.kFunction,
			optional($.declArgs),
			':',
			$.type,
			optional(seq($.kOf, $.kObject))
		)),

		declArgs:           $ => seq('(', delimited($.declArg, ';'), ')'),

		procAttribute: $ => choice(
			$.kStatic, $.kVirtual, $.kAbstract, $.kOverride,
			$.kOverload, $.kReintroduce, $.kInline, $.kStdcall,
			$.kCdecl, $.kPascal
		),

		procExternal: $ => seq($.kExternal, $.expr, $.kName, $.expr),

		defaultValue:       $ => seq('=', $._initializer),

		_initializer:       $ => prec(2,seq(
			choice($.expr, $._recInitializer, $._arrInitializer)
		)),

		declVar:            $ => seq(
			$.kVar,
			repeat1(seq(
				delimited1($.identifier), 
				':', 
				$.type, 
				optional($.defaultValue), 
				';',
				repeat(seq($.procAttribute, ';'))
			))
		),
		declConst:          $ => seq(
			$.kConst, 
			repeat1(seq(
				$.identifier, 
				optional(seq(':', $.type)), 
				$.defaultValue, 
				';',
				repeat(seq($.procAttribute, ';'))
			))
		),

		declField:          $ =>  seq(
			delimited1($.identifier),
			':', 
			$.type,
			optional($.defaultValue),
			';'
		),

		declProp:           $ => seq(
			$.kProperty,
			field('name', $.identifier),
			optional($.declPropArgs),
			':',
			$.type,
			optional(seq($.kIndex, $.expr)),
			optional(seq($.kRead, $.identifier)),
			optional(seq($.kWrite, $.identifier)),
			optional(seq($.kDefault, $.expr)),
			';',
			optional(seq($.kDefault, ';'))
		),

		declPropArgs:       $ => seq('[', delimited($.declArg, ';'), ']'),

		declArg:            $ => choice(
			seq(
				choice($.kVar, $.kConst, $.kOut),
				delimited1($.identifier),
				optional(seq(':', $.type, optional($.defaultValue)))
			),
			seq(
				delimited1($.identifier), ':', $.type, optional($.defaultValue)
			)
		),

		declLabel:          $ => seq( $.kLabel, delimited1($.identifier), ';'),

		//// record initializer
		_recInitializer:    $ => seq(
			'(',
			delimited1(
				choice(
					seq($.identifier, ':', $._initializer),
					$._initializer
				),
				';'
			),
			')'
		),

		// array initializer
		_arrInitializer:    $ => prec(1,seq('(', delimited1($._initializer), ')')),

		// TERMINAL SYMBOLS ----------------------------------------------------

		kProgram:           $ => /[pP][rR][oO][gG][rR][aA][mM]/,
		kUnit:              $ => /[uU][nN][iI][tT]/,
		kUses:              $ => /[uU][sS][eE][sS]/,
		kInterface:         $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kImplementation:    $ => /[iI][mM][pP][lL][eE][mM][eE][nN][tT][aA][tT][iI][oO][nN]/,
		kInitialization:    $ => /[iI][nN][iI][tT][iI][aA][lL][iI][zZ][aA][tT][iI][oO][nN]/,
		kFinalization:      $ => /[fF][iI][nN][aA][lL][iI][zZ][aA][tT][iI][oO][nN]/,
		kEndDot:            $ => '.',

		kBegin:             $ => /[bB][eE][gG][iI][nN]/,
		kEnd:               $ => /[eE][nN][dD]/,

		kVar:               $ => /[vV][aA][rR]/,
		kConst:             $ => /[cC][oO][nN][sS][tT]/,
		kOut:               $ => /[oO][uU][tT]/,
		kType:              $ => /[tT][yY][pP][eE]/,
		kLabel:             $ => /[lL][aA][bB][eE][lL]/,

		kProperty:          $ => /[pP][rR][oO][pP][eE][rR][tT][yY]/,
		kRead:              $ => /[rR][eE][aA][dD]/,
		kWrite:             $ => /[wW][rR][iI][tT][eE]/,
		kDefault:           $ => /[dD][eE][fF][aA][uU][lL][tT]/,
		kIndex:             $ => /[iI][nN][dD][eE][xX]/,

		kClass:             $ => /[cC][lL][aA][sS][sS]/,
		kInterface:         $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kObject:            $ => /[oO][bB][jJ][eE][cC][tT]/,
		kRecord:            $ => /[rR][eE][cC][oO][rR][dD]/,
		kArray:             $ => /[aA][rR][rR][aA][yY]/,
		kString:            $ => /[sS][tT][rR][iI][nN][gG]/,
		kSet:               $ => /[sS][eE][tT]/,
		kOf:                $ => /[oO][fF]/,
		kHelper:            $ => /[hH][eE][lL][pP][eE][rR]/,
		kPacked:            $ => /[pP][aA][cC][kK][eE][dD]/,

		kOr:                $ => /[oO][rR]/,
		kXor:               $ => /[xX][oO][rR]/,
		kDiv:               $ => /[dD][iI][vV]/,
		kMod:               $ => /[mM][oO][dD]/,
		kAnd:               $ => /[aA][nN][dD]/,
		kShl:               $ => /[sS][hH][lL]/,
		kShr:               $ => /[sS][hH][rR]/,
		kNot:               $ => /[nN][oO][tT]/,
		kIs:                $ => /[iI][sS]/,
		kAs:                $ => /[aA][sS]/,
		kIn:                $ => /[iI][nN]/,

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
		kRaise:             $ => /[rR][aA][iI][sS][eE]/,
		kOn:                $ => /[oO][nN]/,
		kCase:              $ => /[cC][aA][sS][eE]/,
		kGoto:              $ => /[gG][oO][tT][oO]/,
		kBreak:             $ => /[bB][rR][eE][aA][kK]/,
		kContinue:          $ => /[cC][oO][nN][tT][iI][nN][uU][eE]/,
		kExit:              $ => /[eE][xX][iI][tT]/,

		kFunction:          $ => /[fF][uU][nN][cC][tT][iI][oO][nN]/,
		kProcedure:         $ => /[pP][rR][oO][cC][eE][dD][uU][rR][eE]/,
		kConstructor:       $ => /[cC][oO][nN][sS][tT][rR][uU][cC][tT][oO][rR]/,
		kDestructor:        $ => /[dD][eE][sS][tT][rR][uU][cC][tT][oO][rR]/,

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
		kOverload:          $ => /[oO][vV][eE][rR][lL][oO][aA][dD]/,
		kReintroduce:       $ => /[rR][eE][iI][nN][tT][rR][oO][dD][uU][cC][eE]/,
		kInherited:         $ => /[iI][nN][hH][eE][rR][iI][tT][eE][dD]/,
		kInline:            $ => /[iI][nN][lL][iI][nN][eE]/,

		kStdcall:           $ => /[sS][tT][dD][cC][aA][lL][lL]/,
		kCdecl:             $ => /[cC][dD][eE][cC][lL]/,
		kPascal:            $ => /[pP][aA][sS][cC][aA][lL]/,
		kExternal:          $ => /[eE][xX][tT][eE][rR][nN][aA][lL]/,
		kName:              $ => /[nN][aA][mM][eE]/,

		kNil:               $ => /[nN][iI][lL]/,
		kTrue:              $ => /[tT][rR][uU][eE]/,
		kFalse:             $ => /[fF][aA][lL][sS][eE]/,
		
    	identifier:         $ => /[&]?[a-zA-Z_]+[0-9_a-zA-Z]*/,

	  	_space:             $ => /[\s\r\n\t]+/,
	}
});

function statements(trailing) {
	let rn            = x => trailing ? x + 'Tr' : x
	let lastStatement = $ => trailing ? [optional($._statementTr)] : [$._statement];
	let lastStatement1= $ => trailing ? [$._statementTr] : [$._statement];
	let semicolon     = trailing ? [] : [';'];
	
	return Object.fromEntries([
		[rn('if'),        $ => seq(
			$.kIf, $.expr, $.kThen,
			...lastStatement($)
		)],

		[rn('ifElse'),    $ => prec.right(1, seq(
			$.kIf, $.expr, $.kThen,
			optional(choice($._statementTr, $.if)),
			$.kElse,
			...lastStatement($)
		))],

		[rn('while'),      $ => seq(
			$.kWhile, $.expr, $.kDo,
			...lastStatement($)
		)],

		[rn('repeat'),     $ => prec(2,seq(
			$.kRepeat, optional($._statementsTr), $.kUntil, $.expr, 
			...semicolon
		))],

		[rn('for'),        $ => seq(
			$.kFor, $.assignment, $.kTo, $.expr, $.kDo,
			...lastStatement($)
		)],

		[rn('foreach'),    $ => seq(
			$.kFor, $.expr, $.kIn, $.expr, $.kDo,
			...lastStatement($)
		)],

		[rn('exceptionHandler'), $ => seq(
			$.kOn, optional(seq($.identifier, ':')), $.expr, $.kDo,
			...lastStatement($)
		)],

		[rn('exceptionElse'), $ => seq(
			$.kElse, repeat($._statement), ...lastStatement($)
		)],

		[rn('_exceptionHandlers'), $ => seq(
			repeat($.exceptionHandler),
			choice($.exceptionHandler, $.exceptionHandlerTr),
			optional($.exceptionElse)
		)],

		[rn('try'),        $ => prec(2,seq(
			$.kTry, optional($._statementsTr), 
			choice(
				seq($.kExcept, optional(choice($._statementsTr, $._exceptionHandlersTr))), // todo "On E [:X] do ..."
				seq($.kFinally, optional($._statementsTr))
			),
			$.kEnd, ...semicolon
		))],

		[rn('caseCase'),   $ => seq(
			$.caseLabel,
			...lastStatement($)
		)],

		[rn('case'),       $ => prec(2,seq(
			$.kCase, $.expr, $.kOf,
			repeat($.caseCase),
			optional($.caseCaseTr),
			optional(seq(
				$.kElse,
				optional(':'),
				choice($._statementTr, $._statement)
			)),
			$.kEnd, ...semicolon
		))],

		[rn('block'),      $ => seq(
			$.kBegin,
			optional($._statementsTr),
			$.kEnd, ...semicolon
		)],

		[rn('raise'),      $ => seq(
			$.kRaise,
			$.expr,
			...semicolon
		)],

		[rn('_statement'), $ => choice(
			seq($.expr, ...semicolon),
			seq($.assignment, ...semicolon),
			seq($.goto, ...semicolon),
			seq($.kBreak, ...semicolon),
			seq($.kContinue, ...semicolon),
			seq($.kExit, ...semicolon),
			alias($[rn('if')],      $.if), 
			alias($[rn('ifElse')],  $.ifElse), 
			alias($[rn('while')],   $.while), 
			alias($[rn('repeat')],  $.repeat), 
			alias($[rn('for')],     $.for),
			alias($[rn('foreach')], $.foreach), 
			alias($[rn('try')],     $.try),
			alias($[rn('case')],    $.case),
			alias($[rn('block')],   $.block),
			alias($[rn('raise')],   $.raise), 
		)]
	]);

	return rules;
}


function delimited1(rule, delimiter = ',') {
	return seq(
		optional(repeat1(seq(rule, delimiter))),
		rule
	);
}

function delimited(rule, delimiter = ',') {
	return optional(delimited1(rule, delimiter));
}
