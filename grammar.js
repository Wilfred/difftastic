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
  buildin_type = [
    "bool",
    "f16",
    "f32",
    "f64",
    "f128",
    "void",
    "type",
    "anytype",
    "anyerror",
    "anyframe",
    "volatile",
    "linksection",
    "noreturn",
    "allowzero",
    "isize",
    "usize",
    "comptime_int",
    "comptime_float",
    "c_short",
    "c_ushort",
    "c_int",
    "c_uint",
    "c_long",
    "c_ulong",
    "c_longlong",
    "c_ulonglong",
    "c_longdouble",
    "c_void",
    /(i|u)[0-9]+/,
  ],
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
  string_char = choice(char_escape, /[^\\"\n]/),
  line_string = token(seq("\\\\", /[^\n]*/));

module.exports = grammar({
  name: "zig",

  externals: (_) => [],
  // word: ($) => $._identifier_text,

  extras: ($) => [/\s/, $.line_comment],
  conflicts: ($) => [
    [$._PrimaryExpr, $.LabeledStatement],
    [$._Statement, $._PrimaryTypeExpr],
    [$._CurlySuffixExpr, $._PrimaryTypeExpr],
    [$._CurlySuffixExpr, $.IfTypeExpr],
    [$._CurlySuffixExpr, $.WhileTypeExpr],
    [$._CurlySuffixExpr, $.ForTypeExpr],
    [$.AssignExpr, $._PrimaryExpr],
    [$.BlockExpr, $._PrimaryExpr],
    [$.LabeledStatement, $.LabeledTypeExpr],
    [$.AssignExpr, $.IfExpr],
    [$.AssignExpr, $.WhileExpr],
    [$.AssignExpr, $.ForExpr],
    [$.ParamType, $._PrimaryTypeExpr],
    [$.BlockExpr, $.LabeledTypeExpr],
  ],

  rules: {
    source_file: ($) =>
      seq(optional($.container_doc_comment), repeat($._ContainerMembers)),

    // *** Top level ***
    _ContainerMembers: ($) =>
      prec.left(
        choice($._ContainerDeclarations, sepBy1(COMMA, $.ContainerField))
      ),

    _ContainerDeclarations: ($) =>
      choice(
        $.TestDecl,
        $.TopLevelComptime,
        seq(
          optional($.doc_comment),
          optional(keyword("pub", $)),
          $._TopLevelDecl
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

    _TopLevelDecl: ($) =>
      prec.left(
        choice(
          keyword("export", $),
          seq(keyword("extern", $), optional($.STRINGLITERALSINGLE)),
          seq(
            optional(keyword(choice("inline", "noinline"), $)),
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
          seq(keyword("usingnamespace", $), $._Expr, SEMICOLON)
        )
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
        $._TypeExpr
      ),

    VarDecl: ($) =>
      seq(
        keyword(choice("const", "var"), $),
        $.IDENTIFIER,
        field("type", optional(seq(COLON, $._TypeExpr))),
        optional($.ByteAlign),
        optional($.LinkSection),
        optional(seq(EQUAL, $._Expr)),
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
            choice(keyword("anytype", $), $._TypeExpr),
            optional($.ByteAlign)
          )
        ),
        optional(seq(EQUAL, $._Expr))
      ),

    // *** Block Level ***

    _Statement: ($) =>
      choice(
        seq(optional(keyword("comptime", $)), $.VarDecl),
        seq(
          choice(
            keyword(choice("comptime", "nosuspend", "defer", "suspend"), $),
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
      seq(keyword("else", $), optional($.Payload), $._Statement),

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

    AssignExpr: ($) => seq($._Expr, optional(seq($.AssignOp, $._Expr))),

    _Expr: ($) => choice($.BinaryExpr, $.UnaryExpr, $._PrimaryExpr),

    BinaryExpr: ($) => {
      const PREC = {
        or: 1,
        and: 2,
        comparative: 3,
        bitwise: 4,
        bitshift: 5,
        addition: 6,
        multiply: 7,
        prefix: 8,
      };
      const table = [
        [PREC.or, "or"],
        [PREC.and, "and"],
        [PREC.comparative, $.CompareOp],
        [PREC.bitwise, $.BitwiseOp],
        [PREC.bitshift, $.BitShiftOp],
        [PREC.addition, $.AdditionOp],
        [PREC.multiply, $.MultiplyOp],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._Expr),
              field("operator", operator),
              field("right", $._Expr)
            )
          )
        )
      );
    },
    UnaryExpr: ($) =>
      prec.left(8, seq(field("operator", $.PrefixOp), field("left", $._Expr))),

    _PrimaryExpr: ($) =>
      prec.left(
        choice(
          $.AsmExpr,
          $.IfExpr,
          seq(keyword("break", $), optional($.BreakLabel), optional($._Expr)),
          seq(keyword("continue", $), optional($.BreakLabel)),
          seq(keyword(choice("comptime", "nosespend", "resume"), $), $._Expr),
          seq(keyword("return", $), optional($._Expr)),
          seq(optional($.BlockLabel), $.LoopExpr),
          $.Block,
          $._CurlySuffixExpr
        )
      ),

    IfExpr: ($) =>
      prec.left(seq($.IfPrefix, $._Expr, optional($._ElseExprTail))),

    _ElseExprTail: ($) => seq(keyword("else", $), optional($.Payload), $._Expr),

    Block: ($) => seq(LBRACE, repeat($._Statement), RBRACE),

    LoopExpr: ($) =>
      seq(optional(keyword("inline", $)), choice($.ForExpr, $.WhileExpr)),

    ForExpr: ($) =>
      prec.left(seq($.ForPrefix, $._Expr, optional($._ElseExprTail))),

    WhileExpr: ($) =>
      prec.left(seq($.WhilePrefix, $._Expr, optional($._ElseExprTail))),

    _CurlySuffixExpr: ($) =>
      choice(seq(field("constructor", $._TypeExpr), $.InitList), $._TypeExpr),

    InitList: ($) =>
      choice(
        seq(LBRACE, sepBy1(COMMA, $.FieldInit), RBRACE),
        seq(LBRACE, sepBy1(COMMA, $._Expr), RBRACE),
        seq(LBRACE, RBRACE)
      ),

    _TypeExpr: ($) => seq(repeat($.PrefixTypeOp), $._ErrorUnionExpr),

    _ErrorUnionExpr: ($) =>
      prec.left(seq($.SuffixExpr, optional(seq(EXCLAMATIONMARK, $._TypeExpr)))),

    SuffixExpr: ($) =>
      prec.left(
        seq(
          optional(keyword("async", $)),
          choice(
            seq(field("function", $._PrimaryTypeExpr), $.FnCallArguments),
            $._PrimaryTypeExpr,
          ),
          repeat(
            choice(
              field("field", $.SuffixOp),
              seq(field("function", $.SuffixOp), $.FnCallArguments)
            )
          )
        )
      ),

    _PrimaryTypeExpr: ($) =>
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
          seq(keyword("comptime", $), $._TypeExpr),
          seq(keyword("error", $), DOT, $.IDENTIFIER),
          keyword("false", $),
          keyword("null", $),
          keyword("anyframe", $),
          keyword("true", $),
          keyword("undefined", $),
          keyword("unreachable", $),
          $.STRINGLITERAL,
          $.SwitchExpr,
          $.BuildinTypeExpr
        )
      ),
    BuildinTypeExpr: (_) => token(choice(...buildin_type)),
    ContainerDecl: ($) =>
      seq(
        optional(keyword(choice("extern", "packed"), $)),
        $._ContainerDeclAuto
      ),

    ErrorSetDecl: ($) =>
      seq(keyword("error", $), LBRACE,
        sepBy(COMMA, seq(optional($.doc_comment), $.IDENTIFIER)),
        RBRACE
      ),

    GroupedExpr: ($) => seq(LPAREN, $._Expr, RPAREN),

    IfTypeExpr: ($) =>
      prec.left(seq($.IfPrefix, $._TypeExpr, optional($._ElseTypeExprTail))),

    _ElseTypeExprTail: ($) =>
      seq(keyword("else", $), optional($.Payload), $._TypeExpr),

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
      prec.left(seq($.ForPrefix, $._TypeExpr, optional($._ElseTypeExprTail))),

    WhileTypeExpr: ($) =>
      prec.left(seq($.WhilePrefix, $._TypeExpr, optional($._ElseTypeExprTail))),

    SwitchExpr: ($) =>
      seq(
        keyword("switch", $),
        LPAREN,
        $._Expr,
        RPAREN,
        LBRACE,
        sepBy(COMMA, $.SwitchProng),
        RBRACE
      ),

    // *** Assembly ***

    AsmExpr: ($) =>
      seq(
        keyword("asm", $),
        optional(keyword("volatile", $)),
        LPAREN,
        $._Expr,
        optional($.AsmOutput),
        RPAREN
      ),

    AsmOutput: ($) => seq(COLON,
      sepBy(COMMA, $.AsmOutputItem),
      optional($.AsmInput)),

    AsmOutputItem: ($) =>
      seq(
        LBRACKET,
        $.IDENTIFIER,
        RBRACKET,
        $.STRINGLITERAL,
        LPAREN,
        choice(seq("->", $._TypeExpr), $.IDENTIFIER),
        RPAREN
      ),

    AsmInput: ($) => seq(COLON,
      sepBy(COMMA, $.AsmInputItem), optional($.AsmClobbers)),

    AsmInputItem: ($) =>
      seq(
        LBRACKET,
        $.IDENTIFIER,
        RBRACKET,
        $.STRINGLITERAL,
        LPAREN,
        $._Expr,
        RPAREN
      ),

    AsmClobbers: ($) => seq(COLON, sepBy(COMMA, $.STRINGLITERAL)),


    // *** Helper grammar ***
    BreakLabel: ($) => seq(COLON, $.IDENTIFIER),

    BlockLabel: ($) => prec.left(seq($.IDENTIFIER, COLON)),

    FieldInit: ($) => seq(DOT, $.IDENTIFIER, EQUAL, $._Expr),

    WhileContinueExpr: ($) => seq(COLON, LPAREN, $.AssignExpr, RPAREN),

    LinkSection: ($) => seq(keyword("linksection", $), LPAREN, $._Expr, RPAREN),

    // Fn specific
    CallConv: ($) => seq(keyword("callconv", $), LPAREN, $._Expr, RPAREN),

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

    ParamType: ($) => choice(keyword("anytype", $), $._TypeExpr),

    // Control flow prefixes
    IfPrefix: ($) =>
      seq(keyword("if", $), LPAREN, $._Expr, RPAREN, optional($.PtrPayload)),

    WhilePrefix: ($) =>
      seq(
        keyword("while", $),
        LPAREN,
        $._Expr,
        RPAREN,
        optional($.PtrPayload),
        optional($.WhileContinueExpr)
      ),

    ForPrefix: ($) =>
      seq(keyword("for", $), LPAREN, $._Expr, RPAREN, $.PtrIndexPayload),

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

    SwitchItem: ($) => seq($._Expr, optional(seq(DOT3, $._Expr))),
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
      choice(
        AMPERSAND,
        CARET,
        PIPE,
        keyword("orelse", $),
        seq(keyword("catch", $), optional($.Payload))
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
        // PtrTypeStart (KEYWORD_align LPAREN Expr (COLON INTEGER COLON INTEGER)? RPAREN 
        // / KEYWORD_const / KEYWORD_volatile / KEYWORD_allowzero)*
        seq(
          $.PtrTypeStart,
          repeat(
            choice(
              seq(
                keyword("align", $),
                LPAREN,
                $._Expr,
                optional(seq(COLON, $.INTEGER, COLON, $.INTEGER)),
                RPAREN,
              ),
              keyword(choice("const", "volatile", "allowzero"), $))
          )
        ),
        $.ArrayTypeStart
      ),

    SuffixOp: ($) =>
      choice(
        seq(
          LBRACKET,
          $._Expr,
          optional(
            seq(DOT2, optional($._Expr), optional(seq(COLON, $._Expr)))
          ),
          RBRACKET
        ),
        seq(DOT, $.IDENTIFIER),
        DOTASTERISK,
        DOTQUESTIONMARK
      ),

    FnCallArguments: ($) => seq(LPAREN,
      sepBy(COMMA, $._Expr),
      RPAREN
    ),

    // Ptr specific
    SliceTypeStart: ($) =>
      seq(LBRACKET, optional(seq(COLON, $._Expr)), RBRACKET),

    PtrTypeStart: ($) =>
      choice(
        ASTERISK,
        ASTERISK2,
        seq(
          LBRACKET,
          ASTERISK,
          optional(choice(LETTERC, seq(COLON, $._Expr))),
          RBRACKET
        )
      ),

    ArrayTypeStart: ($) =>
      seq(LBRACKET, $._Expr, optional(seq(COLON, $._Expr)), RBRACKET),

    // ContainerDecl specific
    _ContainerDeclAuto: ($) =>
      seq(
        $.ContainerDeclType,
        LBRACE,
        optional($.container_doc_comment),
        repeat($._ContainerMembers),
        RBRACE
      ),

    ContainerDeclType: ($) =>
      choice(
        keyword("struct", $),
        keyword("opaque", $),
        seq(keyword("enum", $), optional(seq(LPAREN, $._Expr, RPAREN))),
        seq(
          keyword("union", $),
          optional(
            seq(
              LPAREN,
              choice(
                seq(keyword("enum", $), optional(seq(LPAREN, $._Expr, RPAREN))),
                $._Expr
              ),
              RPAREN
            )
          )
        )
      ),

    // Alignment
    ByteAlign: ($) => seq(keyword("align", $), LPAREN, $._Expr, RPAREN),

    // Lists
    ParamDeclList: ($) => seq(LPAREN, sepBy(COMMA, $.ParamDecl), RPAREN),

    // *** Tokens ***
    container_doc_comment: (_) =>
      token(repeat1(seq("//!", /[^\n]*/, /[ \n]*/))),
    doc_comment: (_) => token(repeat1(seq("///", /[^\n]*/, /[ \n]*/))),
    line_comment: (_) => token(seq("//", /.*/)),

    CHAR_LITERAL: (_) => token(seq("'", char_char, "'")),

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
      choice($.STRINGLITERALSINGLE, repeat1(line_string)),

    IDENTIFIER: (_) =>
      choice(/[A-Za-z_][A-Za-z0-9_]*/, seq('@"', repeat(string_char), '"')),
    BUILTINIDENTIFIER: (_) => seq("@", /[A-Za-z_][A-Za-z0-9_]*/),
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep));
}
function keyword(rule, _) {
  return rule;
  // return alias(rule, $.keyword);
}
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
