const AMPERSAND = "&",
  AMPERSANDEQUAL = "&=",
  ASTERISK = "*",
  ASTERISK2 = "**",
  ASTERISKEQUAL = "*=",
  ASTERISKPERCENT = "*%",
  ASTERISKPERCENTEQUAL = "*%=",
  CARET = "^",
  CARETEQUAL = "^=",
  COLON = ":",
  COMMA = ",",
  DOT = ".",
  DOT2 = "..",
  DOT3 = "...",
  DOTASTERISK = ".*",
  DOTQUESTIONMARK = ".?",
  EQUAL = "=",
  EQUALEQUAL = "==",
  EQUALRARROW = "=>",
  EXCLAMATIONMARK = "!",
  EXCLAMATIONMARKEQUAL = "!=",
  LARROW = "<",
  LARROW2 = "<<",
  LARROW2EQUAL = "<<=",
  LARROWEQUAL = "<=",
  LBRACE = "{",
  LBRACKET = "[",
  LPAREN = "(",
  MINUS = "-",
  MINUSEQUAL = "-=",
  MINUSPERCENT = "-%",
  MINUSPERCENTEQUAL = "-%=",
  MINUSRARROW = "->",
  PERCENT = "%",
  PERCENTEQUAL = "%=",
  PIPE = "|",
  PIPE2 = "||",
  PIPEEQUAL = "|=",
  PLUS = "+",
  PLUS2 = "++",
  PLUSEQUAL = "+=",
  PLUSPERCENT = "+%",
  PLUSPERCENTEQUAL = "+%=",
  LETTERC = "c",
  QUESTIONMARK = "?",
  RARROW = ">",
  RARROW2 = ">>",
  RARROW2EQUAL = ">>=",
  RARROWEQUAL = ">=",
  RBRACE = "}",
  RBRACKET = "]",
  RPAREN = ")",
  SEMICOLON = ";",
  SLASH = "/",
  SLASHEQUAL = "/=",
  TILDE = "~",
  bin = /[01]/,
  bin_ = seq(optional("_"), bin),
  oct = /[0-7]/,
  oct_ = seq(optional("_"), oct),
  hex = /[0-9a-fA-F]/,
  hex_one_or_more = /[0-9a-fA-F]+/,
  hex_ = seq(optional("_"), hex),
  dec = /[0-9]/,
  dec_ = seq(optional("_"), dec),
  bin_int = seq(bin, repeat(bin_)),
  oct_int = seq(oct, repeat(oct_)),
  dec_int = seq(dec, repeat(dec_)),
  hex_int = seq(hex, repeat(hex_)),
  // ox80_oxBF = /[\200-\277]/,
  // oxF4 = "\364",
  // ox80_ox8F = /[\200-\217]/,
  // oxF1_oxF3 = /[\361-\363]/,
  // oxF0 = "\360",
  // ox90_0xBF = /[\220-\277]/,
  // oxEE_oxEF = /[\356-\357]/,
  // oxED = "\355",
  // oxE1_oxEC = /[\341-\354]/,
  // ox80_ox9F = /[\200-\237]/,
  // oxE0 = "\340",
  // oxA0_oxBF = /[\240-\277]/,
  // oxC2_oxDF = /[\302-\337]/,
  // mb_utf8_literal = choice(
  //   seq(oxF4, ox80_ox8F, ox80_oxBF, ox80_oxBF),
  //   seq(oxF1_oxF3, ox80_oxBF, ox80_oxBF, ox80_oxBF),
  //   seq(oxF0, ox90_0xBF, ox80_oxBF, ox80_oxBF),
  //   seq(oxEE_oxEF, ox80_oxBF, ox80_oxBF),
  //   seq(oxED, ox80_ox9F, ox80_oxBF),
  //   seq(oxE1_oxEC, ox80_oxBF, ox80_oxBF),
  //   seq(oxE0, oxA0_oxBF, ox80_oxBF),
  //   seq(oxC2_oxDF, ox80_oxBF)
  // ),
  // ascii_char_not_nl_slash_squote = /[\000-\011\013-\046-\050-\133\135-\177]/,
  char_escape = choice(
    seq("\\x", hex, hex),
    seq("\\u{", hex_one_or_more, "}"),
    seq("\\", /[nr\\t'"]/)
  ),
  char_char = choice(
    //   mb_utf8_literal,
    char_escape,
    /./
    // ascii_char_not_nl_slash_squote
  ),
  // char_char = char_escape,
  string_char = choice(char_escape, /[^\\"\n]/),
  line_string = repeat1(seq("\\\\", /[^\n]*/, /[ \n]*/));

module.exports = grammar({
  name: "zig",

  externals: (_) => [],
  // word: ($) => $._identifier_text,

  extras: ($) => [/[ \n]/, $.line_comment],
  conflicts: ($) => [
    [$.PrimaryExpr, $.LabeledStatement],
    [$.Statement, $.PrimaryTypeExpr],
    [$.CurlySuffixExpr, $.PrimaryTypeExpr],
    [$.CurlySuffixExpr, $.IfTypeExpr],
    [$.CurlySuffixExpr, $.WhileTypeExpr],
    [$.CurlySuffixExpr, $.ForTypeExpr],
    [$.AssignExpr, $.PrimaryExpr],
    [$.BlockExpr, $.PrimaryExpr],
    [$.LabeledStatement, $.LabeledTypeExpr],
    [$.AssignExpr, $.IfExpr],
    [$.AssignExpr, $.WhileExpr],
    [$.AssignExpr, $.ForExpr],
    [$.ParamType, $.PrimaryTypeExpr],
    [$.BlockExpr, $.LabeledTypeExpr],
  ],

  rules: {
    source_file: ($) =>
      seq(optional($.container_doc_comment), $.ContainerMembers),

    // *** Top level ***
    ContainerMembers: ($) =>
      seq(
        $.ContainerDeclarations,
        repeat(seq($.ContainerField, COMMA)),
        choice($.ContainerField, $.ContainerDeclarations)
      ),

    ContainerDeclarations: ($) =>
      choice(
        seq($.TestDecl, $.ContainerDeclarations),
        seq($.TopLevelComptime, $.ContainerDeclarations),
        seq(
          optional($.doc_comment),
          keyword("pub", $),
          $.TopLevelDecl,
          $.ContainerDeclarations
        )
      ),

    TestDecl: ($) =>
      seq(
        optional($.doc_comment),
        keyword("test", $),
        optional($.STRINGLITERALSINGLE),
        $.Block
      ),

    TopLevelComptime: ($) =>
      seq(optional($.doc_comment), keyword("comptime", $), $.BlockExpr),

    TopLevelDecl: ($) =>
      choice(
        seq(
          optional(
            choice(
              keyword("export", $),
              seq(keyword("extern", $), optional($.STRINGLITERALSINGLE)),
              keyword(choice("inline", "no_inline"), $)
            )
          ),
          $.FnProto,
          choice(SEMICOLON, $.Block)
        ),
        seq(
          optional(
            choice(
              keyword("export", $),
              seq(keyword("extern", $), optional($.STRINGLITERALSINGLE))
            )
          ),
          optional(keyword("threadlocal", $)),
          $.VarDecl
        ),
        seq(keyword("usingnamespace", $), $.Expr, SEMICOLON)
      ),

    FnProto: ($) =>
      seq(
        keyword("fn", $),
        optional($.IDENTIFIER),
        $.ParamDeclList,
        optional($.ByteAlign),
        optional($.LinkSection),
        optional($.CallConv),
        optional(EXCLAMATIONMARK),
        $.TypeExpr
      ),

    VarDecl: ($) =>
      seq(
        keyword(choice("const", "var"), $),
        $.IDENTIFIER,
        optional(seq(COLON, $.TypeExpr)),
        optional($.ByteAlign),
        optional($.LinkSection),
        optional(seq(EQUAL, $.Expr)),
        SEMICOLON
      ),

    ContainerField: ($) =>
      seq(
        optional($.doc_comment),
        optional(keyword("comptime", $)),
        $.IDENTIFIER,
        optional(
          seq(
            COLON,
            choice(keyword("anytype", $), $.TypeExpr),
            optional($.ByteAlign)
          )
        ),
        optional(seq(EQUAL, $.Expr))
      ),

    // *** Block Level ***

    Statement: ($) =>
      choice(
        seq(keyword("comptime", $), $.VarDecl),
        seq(
          choice(
            keyword(choice("comptime", "nosuspend", "defer"), $),
            seq(keyword("errdefer", $), optional($.Payload))
          ),
          $.BlockExprStatement
        ),
        $.IfStatement,
        $.LabeledStatement,
        $.SwitchExpr,
        seq($.AssignExpr, SEMICOLON)
      ),

    IfStatement: ($) =>
      choice(
        seq($.IfPrefix, $.BlockExpr, optional($._ElseStatementTail)),
        seq($.IfPrefix, $.AssignExpr, choice(SEMICOLON, $._ElseStatementTail))
      ),
    _ElseStatementTail: ($) =>
      seq(keyword("else", $), optional($.Payload), $.Statement),

    LabeledStatement: ($) =>
      seq(optional($.BlockLabel), choice($.Block, $.LoopStatement)),

    LoopStatement: ($) =>
      seq(
        optional(keyword("inline", $)),
        choice($.ForStatement, $.WhileStatement)
      ),

    ForStatement: ($) =>
      choice(
        seq($.ForPrefix, $.BlockExpr, optional($._ElseStatementTail)),
        seq($.ForPrefix, $.AssignExpr, choice(SEMICOLON, $._ElseStatementTail))
      ),

    WhileStatement: ($) =>
      choice(
        seq($.WhilePrefix, $.BlockExpr, optional($._ElseStatementTail)),
        seq(
          $.WhilePrefix,
          $.AssignExpr,
          choice(SEMICOLON, $._ElseStatementTail)
        )
      ),

    BlockExprStatement: ($) =>
      choice($.BlockExpr, seq($.AssignExpr, SEMICOLON)),

    BlockExpr: ($) => seq(optional($.BlockLabel), $.Block),

    // *** Expression Level ***

    AssignExpr: ($) => seq($.Expr, optional(seq($.AssignOp, $.Expr))),

    Expr: ($) => $.BoolOrExpr,

    BoolOrExpr: ($) => prec.left(sepBy1(keyword("or", $), $.BoolAndExpr)),

    BoolAndExpr: ($) => prec.left(sepBy1(keyword("and", $), $.CompareExpr)),

    CompareExpr: ($) =>
      prec.left(seq($.BitwiseExpr, optional(seq($.CompareOp, $.BitwiseExpr)))),

    BitwiseExpr: ($) => prec.left(sepBy1($.BitwiseOp, $.BitShiftExpr)),

    BitShiftExpr: ($) => prec.left(sepBy1($.BitShiftOp, $.AdditionExpr)),

    AdditionExpr: ($) => prec.left(sepBy1($.AdditionOp, $.MultiplyExpr)),

    MultiplyExpr: ($) => prec.left(sepBy1($.MultiplyOp, $.PrefixExpr)),

    PrefixExpr: ($) => seq(repeat($.PrefixOp), $.PrimaryExpr),

    PrimaryExpr: ($) =>
      prec.left(
        choice(
          $.AsmExpr,
          $.IfExpr,
          seq(keyword("break", $), optional($.BreakLabel), optional($.Expr)),
          seq(keyword("continue", $), optional($.BreakLabel)),
          seq(keyword(choice("comptime", "nosespend", "resume"), $), $.Expr),
          seq(keyword("return", $), optional($.Expr)),
          seq(optional($.BlockLabel), $.LoopExpr),
          $.Block,
          $.CurlySuffixExpr
        )
      ),

    IfExpr: ($) =>
      prec.left(seq($.IfPrefix, $.Expr, optional($._ElseExprTail))),

    _ElseExprTail: ($) => seq(keyword("else", $), optional($.Payload), $.Expr),

    Block: ($) => seq(LBRACE, repeat($.Statement), RBRACE),

    LoopExpr: ($) =>
      seq(optional(keyword("inline", $)), choice($.ForExpr, $.WhileExpr)),

    ForExpr: ($) =>
      prec.left(seq($.ForPrefix, $.Expr, optional($._ElseExprTail))),

    WhileExpr: ($) =>
      prec.left(seq($.WhilePrefix, $.Expr, optional($._ElseExprTail))),

    CurlySuffixExpr: ($) => seq($.TypeExpr, optional($.InitList)),

    InitList: ($) =>
      choice(
        seq(LBRACE, sepBy1(COMMA, $.FieldInit), RBRACE),
        seq(LBRACE, sepBy1(COMMA, $.Expr), RBRACE),
        seq(LBRACE, RBRACE)
      ),

    TypeExpr: ($) => seq(repeat($.PrefixTypeOp), $.ErrorUnionExpr),

    ErrorUnionExpr: ($) =>
      prec.left(seq($.SuffixExpr, optional(seq(EXCLAMATIONMARK, $.TypeExpr)))),

    SuffixExpr: ($) =>
      prec.left(
        choice(
          seq(
            keyword("async", $),
            $.PrimaryTypeExpr,
            repeat($.SuffixOp),
            $.FnCallArguments
          ),
          seq($.PrimaryTypeExpr, repeat(choice($.SuffixOp, $.FnCallArguments)))
        )
      ),

    PrimaryTypeExpr: ($) =>
      prec.left(
        choice(
          seq($.BUILTINIDENTIFIER, $.FnCallArguments),
          $.CHAR_LITERAL,
          $.ContainerDecl,
          seq(DOT, $.IDENTIFIER),
          seq(DOT, $.InitList),
          $.ErrorSetDecl,
          $.FLOAT,
          $.FnProto,
          $.GroupedExpr,
          $.LabeledTypeExpr,
          $.IDENTIFIER,
          $.IfTypeExpr,
          $.INTEGER,
          seq(keyword("comptime", $), $.TypeExpr),
          seq(keyword("error", $), DOT, $.IDENTIFIER),
          keyword("false", $),
          keyword("null", $),
          keyword("anyframe", $),
          keyword("true", $),
          keyword("undefined", $),
          keyword("unreachable", $),
          $.STRINGLITERAL,
          $.SwitchExpr
        )
      ),

    ContainerDecl: ($) =>
      seq(
        optional(keyword(choice("extern", "packed"), $)),
        $.ContainerDeclAuto
      ),

    ErrorSetDecl: ($) =>
      seq(keyword("error", $), LBRACE, $.IdentifierList, RBRACE),

    GroupedExpr: ($) => seq(LPAREN, $.Expr, RPAREN),

    IfTypeExpr: ($) =>
      prec.left(seq($.IfPrefix, $.TypeExpr, optional($._ElseTypeExprTail))),

    _ElseTypeExprTail: ($) =>
      seq(keyword("else", $), optional($.Payload), $.TypeExpr),

    LabeledTypeExpr: ($) =>
      choice(
        seq($.BlockLabel, $.Block),
        seq(optional($.BlockLabel), $.LoopTypeExpr)
      ),

    LoopTypeExpr: ($) =>
      seq(
        optional(keyword("inline", $)),
        choice($.ForTypeExpr, $.WhileTypeExpr)
      ),

    ForTypeExpr: ($) =>
      prec.left(seq($.ForPrefix, $.TypeExpr, optional($._ElseTypeExprTail))),

    WhileTypeExpr: ($) =>
      prec.left(seq($.WhilePrefix, $.TypeExpr, optional($._ElseTypeExprTail))),

    SwitchExpr: ($) =>
      seq(
        keyword("switch", $),
        LPAREN,
        $.Expr,
        RPAREN,
        LBRACE,
        $.SwitchProngList,
        RBRACE
      ),

    // *** Assembly ***

    AsmExpr: ($) =>
      seq(
        keyword("asm", $),
        optional(keyword("volatile", $)),
        LPAREN,
        $.Expr,
        optional($.AsmOutput),
        RPAREN
      ),

    AsmOutput: ($) => seq(COLON, $.AsmOutputList, optional($.AsmInput)),

    AsmOutputItem: ($) =>
      seq(
        LBRACKET,
        $.IDENTIFIER,
        RBRACKET,
        $.STRINGLITERAL,
        LPAREN,
        choice(seq("->", $.TypeExpr), $.IDENTIFIER),
        RPAREN
      ),

    AsmInput: ($) => seq(COLON, $.AsmInputList, optional($.AsmClobbers)),

    AsmInputItem: ($) =>
      seq(
        LBRACKET,
        $.IDENTIFIER,
        RBRACKET,
        $.STRINGLITERAL,
        LPAREN,
        $.Expr,
        RPAREN
      ),

    AsmClobbers: ($) => seq(COLON, $.StringList),

    // *** Helper grammar ***
    BreakLabel: ($) => seq(COLON, $.IDENTIFIER),

    BlockLabel: ($) => prec.left(seq($.IDENTIFIER, COLON)),

    FieldInit: ($) => seq(DOT, $.IDENTIFIER, EQUAL, $.Expr),

    WhileContinueExpr: ($) => seq(COLON, LPAREN, $.AssignExpr, RPAREN),

    LinkSection: ($) => seq(keyword("linksection", $), LPAREN, $.Expr, RPAREN),

    // Fn specific
    CallConv: ($) => seq(keyword("callconv", $), LPAREN, $.Expr, RPAREN),

    ParamDecl: ($) =>
      choice(
        seq(
          optional($.doc_comment),
          optional(keyword(choice("noalias", "comptime"), $)),
          optional(seq($.IDENTIFIER, COLON)),
          $.ParamType
        ),
        DOT3
      ),

    ParamType: ($) => choice(keyword("anytype", $), $.TypeExpr),

    // Control flow prefixes
    IfPrefix: ($) =>
      seq(keyword("if", $), LPAREN, $.Expr, RPAREN, optional($.PtrPayload)),

    WhilePrefix: ($) =>
      seq(
        keyword("while", $),
        LPAREN,
        $.Expr,
        RPAREN,
        optional($.PtrPayload),
        optional($.WhileContinueExpr)
      ),

    ForPrefix: ($) =>
      seq(keyword("for", $), LPAREN, $.Expr, RPAREN, $.PtrIndexPayload),

    // Payloads
    Payload: ($) => seq(PIPE, $.IDENTIFIER, PIPE),

    PtrPayload: ($) => seq(PIPE, optional(ASTERISK), $.IDENTIFIER, PIPE),

    PtrIndexPayload: ($) =>
      seq(
        PIPE,
        optional(ASTERISK),
        $.IDENTIFIER,
        optional(seq(COMMA, $.IDENTIFIER)),
        PIPE
      ),

    // Switch specific
    SwitchProng: ($) =>
      seq($.SwitchCase, EQUALRARROW, optional($.PtrPayload), $.AssignExpr),

    SwitchCase: ($) => choice(sepBy1(COMMA, $.SwitchItem), keyword("else", $)),

    SwitchItem: ($) => seq($.Expr, optional(seq(DOT3, $.Expr))),
    AssignOp: (_) =>
      choice(
        ASTERISKEQUAL,
        SLASHEQUAL,
        PERCENTEQUAL,
        PLUSEQUAL,
        MINUSEQUAL,
        LARROW2EQUAL,
        RARROW2EQUAL,
        AMPERSANDEQUAL,
        CARETEQUAL,
        PIPEEQUAL,
        ASTERISKPERCENTEQUAL,
        PLUSPERCENTEQUAL,
        MINUSPERCENTEQUAL,
        EQUAL
      ),
    CompareOp: (_) =>
      choice(
        EQUALEQUAL,
        EXCLAMATIONMARKEQUAL,
        LARROW,
        RARROW,
        LARROWEQUAL,
        RARROWEQUAL
      ),
    BitwiseOp: ($) =>
      prec.left(
        choice(
          AMPERSAND,
          CARET,
          PIPE,
          keyword("orelse", $),
          seq(keyword("catch", $), optional($.Payload))
        )
      ),

    BitShiftOp: (_) => choice(LARROW2, RARROW2),

    AdditionOp: (_) => choice(PLUS, MINUS, PLUS2, PLUSPERCENT, MINUSPERCENT),

    MultiplyOp: (_) =>
      choice(PIPE2, ASTERISK, SLASH, PERCENT, ASTERISK2, ASTERISKPERCENT),

    PrefixOp: ($) =>
      choice(
        EXCLAMATIONMARK,
        MINUS,
        TILDE,
        MINUSPERCENT,
        AMPERSAND,
        keyword("try", $),
        keyword("await", $)
      ),
    PrefixTypeOp: ($) =>
      choice(
        QUESTIONMARK,
        seq(keyword("anyframe", $), MINUSRARROW),
        seq(
          $.SliceTypeStart,
          repeat(
            choice(
              $.ByteAlign,
              keyword(choice("const", "volatile", "allowzero"), $)
            )
          )
        ),
        seq(
          $.PtrTypeStart,
          repeat(
            choice(
              seq(
                keyword("align", $),
                LPAREN,
                $.Expr,
                optional(seq(COLON, $.INTEGER, COLON, $.INTEGER)),
                RPAREN
              ),
              keyword(choice("const", "volatile", "allowzero"), $)
            )
          )
        ),
        $.ArrayTypeStart
      ),

    SuffixOp: ($) =>
      choice(
        seq(
          LBRACKET,
          $.Expr,
          optional(
            seq(DOT2, optional(seq($.Expr, optional(seq(COLON, $.Expr)))))
          ),
          RBRACKET
        ),
        seq(DOT, $.IDENTIFIER),
        DOTASTERISK,
        DOTQUESTIONMARK
      ),

    FnCallArguments: ($) => seq(LPAREN, $.ExprList, RPAREN),

    // Ptr specific
    SliceTypeStart: ($) =>
      seq(LBRACKET, optional(seq(COLON, $.Expr)), RBRACKET),

    PtrTypeStart: ($) =>
      choice(
        ASTERISK,
        ASTERISK2,
        seq(
          LBRACKET,
          ASTERISK,
          optional(choice(LETTERC, seq(COLON, $.Expr))),
          RBRACKET
        )
      ),

    ArrayTypeStart: ($) =>
      seq(LBRACKET, $.Expr, optional(seq(COLON, $.Expr)), RBRACKET),

    // ContainerDecl specific
    ContainerDeclAuto: ($) =>
      seq(
        $.ContainerDeclType,
        LBRACE,
        optional($.container_doc_comment),
        $.ContainerMembers,
        RBRACE
      ),

    ContainerDeclType: ($) =>
      choice(
        keyword("struct", $),
        keyword("opaque", $),
        seq(keyword("enum", $), optional(seq(LPAREN, $.Expr, RPAREN))),
        seq(
          keyword("union", $),
          optional(
            seq(
              LPAREN,
              choice(
                seq(keyword("enum", $), optional(seq(LPAREN, $.Expr, RPAREN))),
                $.Expr
              ),
              RPAREN
            )
          )
        )
      ),

    // Alignment
    ByteAlign: ($) => seq(keyword("align", $), LPAREN, $.Expr, RPAREN),

    // Lists
    IdentifierList: ($) =>
      sepBy1(COMMA, seq(optional($.doc_comment), $.IDENTIFIER)),

    SwitchProngList: ($) => sepBy1(COMMA, $.SwitchProng),

    AsmOutputList: ($) => sepBy1(COMMA, $.AsmOutputItem),

    AsmInputList: ($) => sepBy1(COMMA, $.AsmInputItem),

    StringList: ($) => sepBy1(COMMA, $.STRINGLITERAL),

    ParamDeclList: ($) => seq(LPAREN, sepBy(COMMA, $.ParamDecl), RPAREN),

    ExprList: ($) => sepBy1(COMMA, $.Expr),

    // *** Tokens ***
    container_doc_comment: (_) => repeat1(seq("//!", /[^\n]*/, /[ \n]*/)),
    doc_comment: (_) => repeat1(seq("///", /[^\n]*/, /[ \n]*/)),
    line_comment: (_) =>
      choice(seq("//", /![!/][^\n]*/), seq("////", /[^\n]*/)),

    CHAR_LITERAL: (_) => seq("'", char_char, "'"),

    FLOAT: (_) =>
      choice(
        token(
          seq("0x", hex_int, ".", hex_int, optional(seq(/[pP][-+]?/, dec_int)))
        ),
        token(seq(dec_int, ".", dec_int, optional(seq(/[eE][-+]?/, dec_int)))),
        token(seq("0x", hex_int, /[pP][-+]?/, dec_int)),
        token(seq(dec_int, /[eE][-+]?/, dec_int))
      ),

    INTEGER: (_) =>
      choice(
        token(seq("0b", bin_int)),
        token(seq("0o", oct_int)),
        token(seq("0x", hex_int)),
        token(dec_int)
      ),

    STRINGLITERALSINGLE: (_) => token(seq('"', repeat(string_char), '"')),

    STRINGLITERAL: ($) =>
      choice($.STRINGLITERALSINGLE, token(repeat1(seq(line_string)))),

    IDENTIFIER: (_) =>
      choice(/[A-Za-z_][A-Za-z0-9_]*/, seq('@"', repeat(string_char), '"')),
    BUILTINIDENTIFIER: (_) => seq("@", /[A-Za-z_][A-Za-z0-9_]*/),
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep));
}
function keyword(rule, $) {
  return alias(rule, $.keyword);
}
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
