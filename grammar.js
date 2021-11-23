// TODO:
// - GUIDs
// - asm blocks
// - variant records

var op = {
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

function delimited1(rule, delimiter = ',') {
	return seq(
		optional(repeat1(seq(rule, delimiter))),
		rule
	);
}

function delimited(rule, delimiter = ',') {
	return optional(delimited1(rule, delimiter));
}

// Preprocessor wrapper. 
// This just supports a single `if[def] ... [else ...] endif` right now.
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
// broken AST, which messes up the syntax highlighting.
//
// Ideally, we would want to support nested ifdefs, as well, but that will be
// more complex.
function pp($, ...rule) {
	return (
		choice(
			seq(...rule),
			seq(
				alias(/\{\$[iI][fF][^}]*\}/, $.pp), 
				...rule, 
				optional(seq(
					alias(/\{\$[eE][lL][sS][eE][^}]*\}/, $.pp),
					...rule
				)), 
				alias(/\{\$[eE][nN][dD][^}]*\}/, $.pp)
			),
		)
	);
}

// tr = Trailing
var tr = ($,rule) => 
	rule[0] == '_' ? $[rule+'Tr'] : alias($[rule+'Tr'], $[rule])


module.exports = grammar({
	name: "pascal",
	
	extras: $ => [$._space, $.comment, $.pp],

	word: $ => $.identifier,

	//conflicts: $ => [ [ $._specializedName ]/*, [$.qualifiedName]*/ ],
	//conflicts: $ => [ [ $.declProc ], [$.declFunc] ],
	
	rules: {
	  	root:               $ => choice(
	  		$.program,
	  		$.unit
	  	),

		// HIGH LEVEL ----------------------------------------------------------

		program:            $ => seq(
			$.kProgram, $.moduleName, ';',
			optional($._definitions),
			tr($,'block'),
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

		interface:          $ => seq($.kInterface, optional($._declarations)),
		implementation:     $ => seq($.kImplementation, optional($._definitions)),
		initialization:     $ => seq($.kInitialization, optional(tr($,'_statements'))),
		finalization:       $ => seq($.kFinalization, optional(tr($,'_statements'))),
	
		comment:            $ => token(choice(
			seq('//', /.*/),
			seq('{', /([^$}][^}]*)?/, '}'),
			seq(/\(\*([^*]*[*][^)])*[^*]*\*\)/)
		)),

		moduleName:         $ => delimited1($.identifier, $.kDot),

		// STATEMENTS ---------------------------------------------------------

		...statements(false),
		...statements(true),

		assignment:      $ => op.infix(1, 
			$._expr, 
			choice(
				$.kAssign, 
				$.kAssignAdd, $.kAssignSub, $.kAssignMul, $.kAssignDiv
			), 
			$._expr
		),

		label:           $ => seq($.identifier, ':'),
		goto:            $ => seq($.kGoto, alias($.identifier, $.label)),
		caseLabel:       $ => seq(delimited1(choice($._expr, $.range)), ':'),

		_statements:     $ => repeat1(choice($.statement, $.label)),
		_statementsTr:   $ => seq(
			repeat(choice($.statement, $.label)),
			choice(tr($,'statement'), $.statement)
		),

		statements:      $ => $._statements,
		statementsTr:    $ => $._statementsTr,


		// EXPRESSIONS ---------------------------------------------------------

		_expr:           $ => choice(
			$._ref, $.exprBinary, $.exprUnary
		),

		_ref:            $ => choice(
			$.identifier,
			$._literal,  $.inherited,
			$.exprDot, $.exprTpl, $.exprSubscript, $.exprCall,
			alias($.exprDeref, $.exprUnary),
			alias($.exprAs, $.exprBinary),
			$.exprBrackets,
			$.exprParens, 
		),

		inherited:       $ => seq($.kInherited, optional($.identifier)), 

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
		exprTpl:         $ => op.args(5, $._ref, $.kLt, delimited1($._expr),  $.kGt),
		exprSubscript:   $ => op.args(5, $._ref, '[',   $.exprArgs,  ']'  ),
		exprCall:        $ => op.args(5, $._ref, '(',   optional($.exprArgs), ')'  ),

		// Pascal legacy formatting for WriteLn(foo:4:3) etc.
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
			//op.postfix(4, $._expr, $.kHat),
		),

		exprParens:      $ => prec.left(5,seq('(', $._expr, ')')),

		// Set or array literal
		exprBrackets:       $ => seq(
			'[', delimited(choice($._expr, $.range)), ']'
		),

		// TYPES ---------------------------------------------------------------
		
		typeref:           $ => seq(
			field('_dummy', optional($.kSpecialize)), 
			$._typeref
		),

		_typeref:           $ => choice(
			$.identifier, $.typerefDot, $.typerefTpl, $.typerefPtr,
		),

		typerefDot:        $ => op.infix(1,$._typeref, $.kDot, $._typeref),
		typerefTpl:        $ => op.args(1, $._typeref, $.kLt, $.typerefArgs, $.kGt),
		typerefPtr:        $ => op.prefix(1,$.kHat, $._typeref),
		typerefArgs:       $ => delimited1($._typeref),

		// GENERIC TYPE DECLARATION --------------------------------------------
		//
		// E.g. Foo<A: B, C: D<E>>.XYZ<T>
		genericDot:     $ => op.infix(1,$._genericName, $.kDot, $._genericName),
		genericTpl:     $ => op.args(2,$._genericName, $.kLt, $.genericArgs, $.kGt),

		_genericName:      $ => choice(
			$.identifier, $.genericDot, $.genericTpl
		),
		genericArgs:      $ => delimited1($.genericArg, ';'),
		genericArg:       $ => seq(
			field('name', delimited1($.identifier)), 
			field('type', optional(seq(':', $.typeref))),
			field('defaultValue', optional($.defaultValue))
		),

		// LITERALS -----------------------------------------------------------

		_literal:           $ => choice(
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
			$._expr, '..', $._expr
		),

		// DEFINITIONS --------------------------------------------------------

		_definitions:       $ => repeat1($._definition),
		_definition:        $ => choice(
			$.declTypes, $.declVars, $.declConsts, $.defProc, $.declProcFwd,
			$.declLabel, $.declUses, 

			// Not actually valid syntax, but helps the parser recover:
			prec(-1,$.blockTr)
		),

		defProc:            $ => seq(
			field('header', choice($.declProc, $.declFunc)),
			pp(
				$,
				field('local', optional($._definitions)),
				field('body', tr($, 'block')),
				';'
			)
		),

		declProcFwd:        $ => seq(
			choice($.declProc, $.declFunc),
			choice($.kForward, $.procExternal),
			';'
		),

		// DECLARATIONS -------------------------------------------------------

		_declarations:      $ => repeat1(choice(
			$.declTypes, $.declVars, $.declConsts, $.declProc, $.declProcFwd,
			$.declFunc, $.declUses, $.declLabel
		)),
		_classDeclarations:  $ => repeat1(choice(
			$.declTypes, $.declVars, $.declConsts, $.declProc, $.declProcFwd,
			$.declFunc, $.declProp
		)),

		_visibility:         $ => choice(
			$.kPublished, $.kPublic, $.kProtected, $.kPrivate
		),

		declUses:            $ => seq($.kUses, delimited($.moduleName), ';'),

		declTypes:           $ => seq(
			$.kType, 
			optional($._visibility),
			repeat1($.declType)
		),
		declType:          $ => seq(
			optional($.kGeneric),
			field('name', $._genericName), $.kEq, 
			field('type',
				choice(
					seq(optional($.kType), $.type),
					choice($.type/*, $.kClass, $.kInterface*/),
					$.declClass,
					$.declHelper,
				)
			),
			';',
			field('attribute', repeat($.procAttribute))
		),

		type:               $ => pp($,choice(
			$.typeref, 
			$.declMetaClass,
			$.declEnum,
			$.declSet,
			$.declArray,
			$.declString,
			$.declProcRef,
			$.declFuncRef
		)),


		declEnum:           $ => seq('(', delimited1($.declEnumValue), ')'),
		declEnumValue:      $ => seq(field('name', $.identifier), field('value', optional($.defaultValue))),

		declSet:            $ => seq($.kSet, $.kOf, $.type),

		declClass:          $ => seq(
			optional($.kPacked),
			choice($.kClass, $.kRecord, $.kObject, $.kInterface, $.kObjcclass, $.kObjccategory), 
			optional($.kAbstract),
			field('parent', optional(seq('(',delimited($.typeref),')'))), 
			optional($._declClass)
		),

		declSection:        $ => seq(
			optional($.kStrict),
			$._visibility,
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
			optional(seq('[', delimited(choice($.range, $._expr)), ']')),
			$.kOf, $.type
		),
		declString:          $ => seq(
			$.kString, 
			optional(seq('[', choice($._expr), ']'))
		),

		declMetaClass:      $ => seq($.kClass, $.kOf, $.typeref),

		declHelper:         $ => seq(
			choice($.kClass, $.kRecord, $.kType), $.kHelper, 
			field('parent', optional(seq('(',delimited($.typeref),')'))), 
			$.kFor, $.typeref,
			$._declClass
		),

		declProc:           $ => seq(
			optional($.kClass),
			choice($.kProcedure, $.kConstructor, $.kDestructor),
			field('name', $._genericName),
			field('args', optional($.declArgs)),
			field('assign', optional($.defaultValue)),
			';',
			repeat($.procAttribute),
		),

		declFunc:           $ => seq(
			optional($.kClass),
			$.kFunction,
			field('name', $._genericName),
			field('args', optional($.declArgs)),
			':',
			field('type', $.type),
			';',
			repeat($.procAttribute),
		),

		declProcRef:        $ => prec.right(1,seq(
			$.kProcedure,
			field('args', optional($.declArgs)),
			optional(seq($.kOf, $.kObject))
		)),

		declFuncRef:        $ => prec.right(1, seq(
			$.kFunction,
			field('args', optional($.declArgs)),
			':',
			field('type', $.type),
			field('ofObject', optional(seq($.kOf, $.kObject)))
		)),

		declArgs:           $ => seq('(', delimited($.declArg, ';'), ')'),

		procAttribute: $ => seq(
			choice(
				$.kStatic, $.kVirtual, $.kAbstract, $.kOverride,
				$.kOverload, $.kReintroduce, $.kInline, $.kStdcall,
				$.kCdecl, $.kPascal, $.kMwpascal,
				$.kDefault,
				seq(choice($.kMessage, $.kDeprecated, $.kExperimental, $.kPlatform, $.kUnimplemented), $._expr),
			),
			';'
		),

		procExternal: $ => seq($.kExternal, $._expr, choice($.kName, $.kIndex), $._expr),

		defaultValue:       $ => seq($.kEq, $._initializer),

		declVars:            $ => seq(
			$.kVar, 
			optional($._visibility),
			repeat1($.declVar)
		),
		declVar:           $ => seq(
			field('name', delimited1($.identifier)),
			':', 
			field('type', $.type), 
			optional(choice(
				seq($.kAbsolute, $._ref),
				field('defaultValue', $.defaultValue)
			)),
			';',
			repeat($.procAttribute)
		),

		declConsts:          $ => seq(
			choice($.kConst, $.kResourcestring), 
			optional($._visibility),
			repeat1($.declConst)
		),
		declConst:         $ => seq(
			field('name', $.identifier), 
			optional(seq(':', field('type', $.type))), 
			field('defaultValue', $.defaultValue),
			';',
			repeat($.procAttribute)
		),

		declField:          $ =>  seq(
			field('name', delimited1($.identifier)),
			':', 
			field('type', $.type),
			field('defaultValue', optional($.defaultValue)),
			';'
		),

		declProp:           $ => seq(
			$.kProperty,
			field('name', $.identifier),
			field('args', optional($.declPropArgs)),
			':',
			field('type', $.type),
			field('index', optional(seq($.kIndex, $._expr))),
			field('getter', optional(seq($.kRead, $.identifier))),
			field('setter', optional(seq($.kWrite, $.identifier))),
			field('defaultValue', optional(seq($.kDefault, $._expr))),
			';',
			//field('default', optional(seq($.kDefault, ';')))
			repeat($.procAttribute)
		),

		declPropArgs:       $ => seq('[', delimited($.declArg, ';'), ']'),

		declArg:            $ => choice(
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

		declLabel:          $ => seq($.kLabel, field('name', delimited1($.identifier)), ';'),

		// INITIALIZERS --------------------------------------------------------

		_initializer:       $ => prec(2,seq(
			choice($._expr, $.recInitializer, $.arrInitializer)
		)),

		// record initializer
		recInitializer:    $ => seq(
			'(',
			delimited1( $.recInitializerField, ';'),
			')'
		),

		recInitializerField: $ => choice(
			seq(field('name',$.identifier), ':', $._initializer),
			$._initializer
		),

		// array initializer
		arrInitializer:    $ => prec(1,seq('(', delimited1($._initializer), ')')),

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
		kConstref:          $ => /[cC][oO][nN][sS][tT][rR][eE][fF]/,
		kResourcestring:    $ => /[rR][eE][sS][oO][uU][rR][cC][eE][sS][tT][rR][iI][nN][gG]/,
		kOut:               $ => /[oO][uU][tT]/,
		kType:              $ => /[tT][yY][pP][eE]/,
		kLabel:             $ => /[lL][aA][bB][eE][lL]/,
		kAbsolute:          $ => /[aA][bB][sS][oO][lL][uU][tT][eE]/,

		kProperty:          $ => /[pP][rR][oO][pP][eE][rR][tT][yY]/,
		kRead:              $ => /[rR][eE][aA][dD]/,
		kWrite:             $ => /[wW][rR][iI][tT][eE]/,
		kDefault:           $ => /[dD][eE][fF][aA][uU][lL][tT]/,
		kIndex:             $ => /[iI][nN][dD][eE][xX]/,

		kClass:             $ => /[cC][lL][aA][sS][sS]/,
		kInterface:         $ => /[iI][nN][tT][eE][rR][fF][aA][cC][eE]/,
		kObject:            $ => /[oO][bB][jJ][eE][cC][tT]/,
		kRecord:            $ => /[rR][eE][cC][oO][rR][dD]/,
		kObjcclass:         $ => /[oO][bB][jJ][cC][cC][lL][aA][sS][sS]/,
		kObjccategory:      $ => /[oO][bB][jJ][cC][cC][aA][tT][eE][gG][oO][rR][yY]/,
		kArray:             $ => /[aA][rR][rR][aA][yY]/,
		kString:            $ => /[sS][tT][rR][iI][nN][gG]/,
		kSet:               $ => /[sS][eE][tT]/,
		kOf:                $ => /[oO][fF]/,
		kHelper:            $ => /[hH][eE][lL][pP][eE][rR]/,
		kPacked:            $ => /[pP][aA][cC][kK][eE][dD]/,

		kGeneric:           $ => /[gG][eE][nN][eE][rR][iI][cC]/,
		kSpecialize:        $ => /[sS][pP][eE][cC][iI][aA][lL][iI][zZ][eE]/,

		kDot:               $ => '.',
		kLt:                $ => '<',
		kEq:                $ => '=',
		kNeq:               $ => '<>',
		kGt:                $ => '>',
		kLte:               $ => '<=',
		kGte:               $ => '>=',
		kAdd:               $ => '+',
		kSub:               $ => '-',
		kMul:               $ => '*',
		kFdiv:              $ => '/',
		kAt:                $ => '@',
		kHat:               $ => '^',
		kAssign:            $ => ':=',
		kAssignAdd:         $ => '+=', // Freepascal
		kAssignSub:         $ => '-=', // Freepascal
		kAssignMul:         $ => '*=', // Freepascal
		kAssignDiv:         $ => '/=', // Freepascal
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
		kDownto:            $ => /[dD][oO][wW][nN][tT][oO]/,
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
		kWith:              $ => /[wW][iI][tT][hH]/,
		kGoto:              $ => /[gG][oO][tT][oO]/,

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
		kMwpascal:          $ => /[mM][wW][pP][aA][sS][cC][aA][lL]/,
		kExternal:          $ => /[eE][xX][tT][eE][rR][nN][aA][lL]/,
		kName:              $ => /[nN][aA][mM][eE]/,
		kMessage:           $ => /[mM][eE][sS][sS][aA][gG][eE]/,
		kDeprecated:        $ => /[dD][eE][pP][rR][eE][cC][aA][tT][eE][dD]/,
		kExperimental:      $ => /[eE][xX][pP][eE][rR][iI][mM][eE][nN][tT][aA][lL]/,
		kPlatform:          $ => /[pP][lL][aA][tT][fF][oO][rR][mM]/,
		kUnimplemented:     $ => /[uU][nN][iI][mM][pP][lL][eE][mM][eE][nN][tT][eE][dD]/,

		kIfdef:             $ => /[iI][fF][dD][eE][fF]/,
		kIfndef:            $ => /[iI][fF][nN][dD][eE][fF]/,
		kEndif:             $ => /[eE][nN][dD][iI][fF]/,

		kNil:               $ => /[nN][iI][lL]/,
		kTrue:              $ => /[tT][rR][uU][eE]/,
		kFalse:             $ => /[fF][aA][lL][sS][eE]/,
		
    	identifier:         $ => /[&]?[a-zA-Z_]+[0-9_a-zA-Z]*/,

	  	_space:             $ => /[\s\r\n\t]+/,

		pp:                 $ => /\{\$[^}]*\}/
	}
});

function statements(trailing) {
	let rn            = x => trailing ? x + 'Tr' : x
	let lastStatement = $ => trailing ? optional(tr($,'statement')) : $.statement;
	let lastStatement1= $ => trailing ? tr($,'statement') : $.statement;
	let semicolon     = trailing ? [] : [';'];
	
	return Object.fromEntries([
		[rn('if'),        $ => seq(
			$.kIf, field('condition', $._expr), $.kThen,
			field('then', lastStatement($))
		)],

		[rn('ifElse'),    $ => prec.right(1, seq(
			$.kIf, field('condition', $._expr), $.kThen,
			field('then', optional(choice(tr($,'statement'), $.if))),
			$.kElse,
			field('else', lastStatement($))
		))],

		[rn('while'),      $ => seq(
			$.kWhile, field('condition', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('repeat'),     $ => prec(2,seq(
			$.kRepeat, 
			field('body', optional(tr($,'statements'))), 
			$.kUntil, field('condition', $._expr), 
			...semicolon
		))],

		[rn('for'),        $ => seq(
			$.kFor, field('start', $.assignment), choice($.kTo, $.kDownto), field('end', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('foreach'),    $ => seq(
			$.kFor, field('iterator', $._expr), $.kIn, field('iterable', $._expr), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('exceptionHandler'), $ => seq(
			$.kOn, field('variable', optional(seq($.identifier, ':'))), field('exception', $.typeref), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('exceptionElse'), $ => seq(
			$.kElse, repeat($.statement), lastStatement($)
		)],

		[rn('_exceptionHandlers'), $ => seq(
			repeat($.exceptionHandler),
			choice($.exceptionHandler, tr($,'exceptionHandler')),
			optional($.exceptionElse)
		)],

		[rn('try'),        $ => prec(2,seq(
			$.kTry, 
			field('try', optional(tr($,'statements'))),
			choice(
				field('except', seq($.kExcept, optional(choice(tr($,'statements'), tr($,'_exceptionHandlers'))))),
				field('finally', seq($.kFinally, optional(tr($,'statements'))))
			),
			$.kEnd, ...semicolon
		))],

		[rn('caseCase'),   $ => seq(
			field('label', $.caseLabel),
			field('body', lastStatement($))
		)],

		[rn('case'),       $ => prec(2,seq(
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

		[rn('block'),      $ => seq(
			$.kBegin,
			optional(tr($,'_statements')),
			$.kEnd, ...semicolon
		)],

		[rn('with'),      $ => seq(
			$.kWith, delimited1(field('entity', $._expr)), $.kDo,
			field('body', lastStatement($))
		)],

		[rn('raise'),      $ => seq(
			$.kRaise,
			field('exception', $._expr),
			...semicolon
		)],

		[rn('statement'), $ => choice(
			...trailing?[]:[';'],
			seq($._expr, ...semicolon),
			seq($.assignment, ...semicolon),
			seq($.goto, ...semicolon),
			alias($[rn('if')],      $.if), 
			alias($[rn('ifElse')],  $.ifElse), 
			alias($[rn('while')],   $.while), 
			alias($[rn('repeat')],  $.repeat), 
			alias($[rn('for')],     $.for),
			alias($[rn('foreach')], $.foreach), 
			alias($[rn('try')],     $.try),
			alias($[rn('case')],    $.case),
			alias($[rn('block')],   $.block),
			alias($[rn('with')],    $.with),
			alias($[rn('raise')],   $.raise), 
		)]
	]);

	return rules;
}
