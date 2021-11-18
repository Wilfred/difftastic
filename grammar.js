// TODO:
// - except on E: XYZ do ...
// - raise
// - preprocessor
// - objectivec
// - "message"
// - "external" bla name bla...
// - FPCisms: "specialize", "generic", += etc.
// - GUIDs
// asm blocks
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
			$.kProgram, $.moduleName, ';',
			optional($._definitions),
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

		uses:               $ => seq($.kUses, delimited($.moduleName), ';'),

		interface:          $ => seq($.kInterface, optional($._declarations)),
		implementation:     $ => seq($.kImplementation, optional($._definitions)),
		initialization:     $ => seq($.kInitialization, optional($._statementsTr)),
		finalization:       $ => seq($.kFinalization, optional($._statementsTr)),
	
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

		assignment:         $ => seq($.expr, $.kAssign, $.expr),

		label:              $ => seq($.identifier, ':'),
		goto:               $ => seq($.kGoto, alias($.identifier, $.label)),
		caseLabel:          $ => seq(delimited1(choice($.expr, $.range)), ':'),

		_statements:        $ => repeat1(choice($._statement, $.label)),
		_statementsTr:      $ => seq(
			repeat(choice($._statement, $.label)),
			choice($._statementTr, $._statement)
		),


		// EXPRESSIONS ---------------------------------------------------------

		// TODO: Should also support generics, e.g. Foo<XYZ>
		call:               $ => seq(
			optional($.kInherited),
			$.identifier, optional(seq('(',optional($.callArgs),')'))
		),

		callArgs:           $ => delimited1($.expr),

		_exprDot:           $ => prec.left(5, seq($.expr, $.kDot,  $.expr)),
		_exprIdx:           $ => prec.left(5, seq($.expr, '[', $.callArgs, ']')),

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

		_exprNot:           $ => prec.left(4,seq($.kNot, $.expr)),
		_exprPos:           $ => prec.left(4,seq($.kAdd, $.expr)),
		_exprNeg:           $ => prec.left(4,seq($.kSub, $.expr)),
		_exprAt:            $ => prec.left(4,seq($.kAt,  $.expr)),
		_exprDeref:         $ => prec.left(4,seq($.expr, $.kDeref)),

		expr:               $ => choice(
			$.literal,
			$.bracketed, // set or array
			prec.left(4,$.call),
			$._exprDot,  $._exprIdx,

			$._exprParens, 

			$._exprEq, $._exprNeq, $._exprLt, $._exprGt, $._exprLte,
			$._exprGte, $._exprIn, $._exprIs,

			$._exprAdd, $._exprSub, $._exprOr, $._exprXor,

			$._exprMul, $._exprFdiv, $._exprDiv, $._exprMod, 
			$._exprAnd, $._exprShl, $._exprShr,

			$._exprNot, $._exprPos, $._exprNeg, $._exprAt, $._exprDeref
		),

		range:              $ => seq(
			$.expr, '..', $.expr
		),

		bracketed:       $ => seq(
			'[', delimited(choice($.expr, $.range)), ']'
		),

		// E.g. Foo<Bar<A,B>, C>
		_specializedName:   $ => seq(
			$.identifier, 
			optional($.specializedParams)
		),
		specializedParams:  $ => seq( $.kAngleOpen, delimited1($.specializedParam), $.kAngleClose),
		specializedParam:   $ => $.expr,

		// E.g. Foo<A: B, C: D<E>>
		_genericName:       $ => seq($.identifier, optional($.genericParams)),
		genericParams:      $ => seq($.kAngleOpen, delimited1($.genericParam, ';'), $.kAngleClose),
		genericParam:       $ => seq(
			delimited1($.identifier), 
			optional(seq(':', $.qualifiedType)), 
			optional($.defaultValue)
		),
		// We can't determine whether an expression is a constant at this stage.
		// We would need type checking for that.
		// TODO: We should use $.expr after adding support for generics to
		// $.expr. Right now we can't do this because it leads to a conflict.
		// Have to fix that first.
		//_constant:          $ => $.expr, /*choice($.literal, $._specializedName)*/

		genericType:        $ => $._genericName,
		qualifiedType:      $ => delimited1($._specializedName, $.kDot),

		genericProc:        $ => $._genericName,

		type:               $ => choice($.qualifiedType, $.defType),

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


		// DEFINITIONS --------------------------------------------------------

		_definitions:       $ => repeat1($._definition),
		_definition:        $ => choice(
			$.declType, $.declVar, $.declConst, $.defProc, $.declProcFwd,
			$.declLabel
		),

		defProc:            $ => seq(
			choice($.declProc, $.declFunc),
			$._body,
			';'
		),

		declProcFwd:        $ => seq(
			choice($.declProc, $.declFunc),
			choice($.kForward, $.procExternal),
			';'
		),

		locals:             $ => $._definitions,

		_body:              $ => seq(
			optional($.locals),
			$.blockTr
		),

		// DECLARATIONS -------------------------------------------------------

		_declarations:      $ => repeat1(choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc, $.uses,
			$.declLabel
		)),
		_classDeclarations:      $ => repeat1(choice(
			$.declType, $.declVar, $.declConst, $.declProc, $.declFunc,
			$.declProp
		)),

		declType:           $ => seq($.kType, repeat1($._declType)),
		_declType:          $ => seq(
			$.genericType, $.kEq, choice( $.declTypedef, $.defType),
			repeat(seq(';', $.procAttribute)),
			';'
		),

		defType:            $ => choice(
			$.declClass,
			$.declMetaClass,
			$.declHelper,
			$.declEnum,
			$.declSet,
			$.declArray,
			$.declString,
			$.declProcRef,
			$.declFuncRef
		),

		declTypedef:        $ => seq(
			optional($.kType), 
			choice($.qualifiedType, $.kClass, $.kInterface)
		),

		declEnum:           $ => seq('(', delimited1($.declEnumValue), ')'),
		declEnumValue:      $ => seq($.identifier, optional($.defaultValue)),

		declSet:            $ => seq($.kSet, $.kOf, $.type),

		declClass:          $ => seq(
			optional($.kPacked),
			choice($.kClass, $.kRecord, $.kObject, $.kInterface), 
			optional(seq('(',delimited($.qualifiedType),')')), $._declClass
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
			optional(seq('[', delimited(choice($.range, $.expr/*$.qualifiedType*/)), ']')),
			$.kOf, $.type
		),
		declString:          $ => seq(
			$.kString, 
			optional(seq('[', choice($.expr), ']'))
		),


		declMetaClass:      $ => seq(
			$.kClass, $.kOf, $.qualifiedType
		),

		declHelper:         $ => seq(
			choice($.kClass, $.kRecord), $.kHelper, $.kFor, $.qualifiedType,
			$._declClass
		),

		declProc:           $ => seq(
			optional($.kClass),
			choice($.kProcedure, $.kConstructor, $.kDestructor),
			repeat(seq($.genericType, $.kDot)),
			$.genericProc,
			optional($.declArgs),
			optional($.defaultValue),
			repeat(seq(';', $.procAttribute)),
			';',
		),

		declFunc:           $ => seq(
			optional($.kClass),
			$.kFunction,
			repeat(seq($.genericType, $.kDot)),
			$.genericProc,
			optional($.declArgs),
			':',
			$.type,
			repeat(seq(';', $.procAttribute)),
			';',
		),

		declProcRef:        $ => prec.right(1,seq(
			$.kProcedure,
			optional($.declArgs),
			optional(seq($.kOf, $.kObject)),
		)),

		declFuncRef:        $ => prec.right(100, seq(
			$.kFunction,
			optional($.declArgs),
			':',
			$.type,
			optional(seq($.kOf, $.kObject)),
		)),

		declArgs:           $ => seq('(', delimited($.declArg, ';'), ')'),

		procAttribute: $ => choice(
			$.kStatic, $.kVirtual, $.kAbstract, $.kOverride,
			$.kOverload, $.kReintroduce, $.kInline, $.kStdcall,
			$.kCdecl, $.kPascal
		),

		procExternal: $ => seq($.kExternal, $.expr, $.kName, $.expr),

		defaultValue:       $ => seq($.kEq, $._initializer),

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
				';'
			))
		),
		declConst:          $ => seq(
			$.kConst, 
			repeat1(seq(
				$.identifier, 
				optional(seq(':', $.type)), 
				$.defaultValue, 
				';'
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

		// record initializer
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
		kNot:               $ => /[nN][oO][tT]/,
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
		kAt:                $ => '@',
		kDeref:             $ => '^',

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

		[rn('try'),        $ => prec(2,seq(
			$.kTry, optional($._statementsTr), 
			choice(
				seq($.kExcept, optional($._statementsTr)), // todo "On E [:X] do ..."
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
			alias($[rn('block')],   $.block)
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
