#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_kProgram = 1,
  sym_kUnit = 2,
  sym_kUses = 3,
  sym_kBegin = 4,
  sym_kEnd = 5,
  sym_kVar = 6,
  sym_kConst = 7,
  sym_kType = 8,
  sym_kClass = 9,
  sym_kRecord = 10,
  sym_kArray = 11,
  sym_kOf = 12,
  sym_kFunction = 13,
  sym_kProcedure = 14,
  sym_kConstructor = 15,
  sym_kDestructor = 16,
  sym_kInterface = 17,
  sym_kImplementation = 18,
  sym_kPublished = 19,
  sym_kPublic = 20,
  sym_kProtected = 21,
  sym_kPrivate = 22,
  sym_kStrict = 23,
  sym_kStatic = 24,
  sym_kVirtual = 25,
  sym_kAbstract = 26,
  sym_kOverride = 27,
  sym_kStdcall = 28,
  sym_kCdecl = 29,
  sym_kPascal = 30,
  sym_identifier = 31,
  aux_sym_literalString__token1 = 32,
  anon_sym_POUND = 33,
  aux_sym_literalInt__token1 = 34,
  aux_sym_literalInt__token2 = 35,
  sym_literalFloat = 36,
  anon_sym_SEMI = 37,
  anon_sym_COLON_EQ = 38,
  anon_sym_EQ = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_COLON = 42,
  sym_comment = 43,
  sym_space = 44,
  sym_root = 45,
  sym_statement = 46,
  sym_statements = 47,
  sym_block = 48,
  sym_type = 49,
  sym_declarations = 50,
  sym_declaration = 51,
  sym_declType = 52,
  sym_declType_ = 53,
  sym_declTypedef = 54,
  sym_declClass = 55,
  sym_declRecord = 56,
  sym_declClass_ = 57,
  sym_declProc = 58,
  sym_declFunc = 59,
  sym_arguments = 60,
  sym_procAttributes = 61,
  sym_declVar = 62,
  sym_declVar_ = 63,
  sym_declConst = 64,
  sym_declConst_ = 65,
  sym_program = 66,
  sym_unit = 67,
  sym_interface = 68,
  sym_interface_ = 69,
  sym_implementation = 70,
  sym_implementation_ = 71,
  aux_sym_statement_repeat1 = 72,
  aux_sym_statements_repeat1 = 73,
  aux_sym_declarations_repeat1 = 74,
  aux_sym_declType_repeat1 = 75,
  aux_sym_declClass__repeat1 = 76,
  aux_sym_procAttributes_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_kProgram] = "kProgram",
  [sym_kUnit] = "kUnit",
  [sym_kUses] = "kUses",
  [sym_kBegin] = "kBegin",
  [sym_kEnd] = "kEnd",
  [sym_kVar] = "kVar",
  [sym_kConst] = "kConst",
  [sym_kType] = "kType",
  [sym_kClass] = "kClass",
  [sym_kRecord] = "kRecord",
  [sym_kArray] = "kArray",
  [sym_kOf] = "kOf",
  [sym_kFunction] = "kFunction",
  [sym_kProcedure] = "kProcedure",
  [sym_kConstructor] = "kConstructor",
  [sym_kDestructor] = "kDestructor",
  [sym_kInterface] = "kInterface",
  [sym_kImplementation] = "kImplementation",
  [sym_kPublished] = "kPublished",
  [sym_kPublic] = "kPublic",
  [sym_kProtected] = "kProtected",
  [sym_kPrivate] = "kPrivate",
  [sym_kStrict] = "kStrict",
  [sym_kStatic] = "kStatic",
  [sym_kVirtual] = "kVirtual",
  [sym_kAbstract] = "kAbstract",
  [sym_kOverride] = "kOverride",
  [sym_kStdcall] = "kStdcall",
  [sym_kCdecl] = "kCdecl",
  [sym_kPascal] = "kPascal",
  [sym_identifier] = "identifier",
  [aux_sym_literalString__token1] = "literalString__token1",
  [anon_sym_POUND] = "#",
  [aux_sym_literalInt__token1] = "literalInt__token1",
  [aux_sym_literalInt__token2] = "literalInt__token2",
  [sym_literalFloat] = "literalFloat",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_space] = "space",
  [sym_root] = "root",
  [sym_statement] = "statement",
  [sym_statements] = "statements",
  [sym_block] = "block",
  [sym_type] = "type",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_declType] = "declType",
  [sym_declType_] = "declType_",
  [sym_declTypedef] = "declTypedef",
  [sym_declClass] = "declClass",
  [sym_declRecord] = "declRecord",
  [sym_declClass_] = "declClass_",
  [sym_declProc] = "declProc",
  [sym_declFunc] = "declFunc",
  [sym_arguments] = "arguments",
  [sym_procAttributes] = "procAttributes",
  [sym_declVar] = "declVar",
  [sym_declVar_] = "declVar_",
  [sym_declConst] = "declConst",
  [sym_declConst_] = "declConst_",
  [sym_program] = "program",
  [sym_unit] = "unit",
  [sym_interface] = "interface",
  [sym_interface_] = "interface_",
  [sym_implementation] = "implementation",
  [sym_implementation_] = "implementation_",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_declType_repeat1] = "declType_repeat1",
  [aux_sym_declClass__repeat1] = "declClass__repeat1",
  [aux_sym_procAttributes_repeat1] = "procAttributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_kProgram] = sym_kProgram,
  [sym_kUnit] = sym_kUnit,
  [sym_kUses] = sym_kUses,
  [sym_kBegin] = sym_kBegin,
  [sym_kEnd] = sym_kEnd,
  [sym_kVar] = sym_kVar,
  [sym_kConst] = sym_kConst,
  [sym_kType] = sym_kType,
  [sym_kClass] = sym_kClass,
  [sym_kRecord] = sym_kRecord,
  [sym_kArray] = sym_kArray,
  [sym_kOf] = sym_kOf,
  [sym_kFunction] = sym_kFunction,
  [sym_kProcedure] = sym_kProcedure,
  [sym_kConstructor] = sym_kConstructor,
  [sym_kDestructor] = sym_kDestructor,
  [sym_kInterface] = sym_kInterface,
  [sym_kImplementation] = sym_kImplementation,
  [sym_kPublished] = sym_kPublished,
  [sym_kPublic] = sym_kPublic,
  [sym_kProtected] = sym_kProtected,
  [sym_kPrivate] = sym_kPrivate,
  [sym_kStrict] = sym_kStrict,
  [sym_kStatic] = sym_kStatic,
  [sym_kVirtual] = sym_kVirtual,
  [sym_kAbstract] = sym_kAbstract,
  [sym_kOverride] = sym_kOverride,
  [sym_kStdcall] = sym_kStdcall,
  [sym_kCdecl] = sym_kCdecl,
  [sym_kPascal] = sym_kPascal,
  [sym_identifier] = sym_identifier,
  [aux_sym_literalString__token1] = aux_sym_literalString__token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_literalInt__token1] = aux_sym_literalInt__token1,
  [aux_sym_literalInt__token2] = aux_sym_literalInt__token2,
  [sym_literalFloat] = sym_literalFloat,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_space] = sym_space,
  [sym_root] = sym_root,
  [sym_statement] = sym_statement,
  [sym_statements] = sym_statements,
  [sym_block] = sym_block,
  [sym_type] = sym_type,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_declType] = sym_declType,
  [sym_declType_] = sym_declType_,
  [sym_declTypedef] = sym_declTypedef,
  [sym_declClass] = sym_declClass,
  [sym_declRecord] = sym_declRecord,
  [sym_declClass_] = sym_declClass_,
  [sym_declProc] = sym_declProc,
  [sym_declFunc] = sym_declFunc,
  [sym_arguments] = sym_arguments,
  [sym_procAttributes] = sym_procAttributes,
  [sym_declVar] = sym_declVar,
  [sym_declVar_] = sym_declVar_,
  [sym_declConst] = sym_declConst,
  [sym_declConst_] = sym_declConst_,
  [sym_program] = sym_program,
  [sym_unit] = sym_unit,
  [sym_interface] = sym_interface,
  [sym_interface_] = sym_interface_,
  [sym_implementation] = sym_implementation,
  [sym_implementation_] = sym_implementation_,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_declType_repeat1] = aux_sym_declType_repeat1,
  [aux_sym_declClass__repeat1] = aux_sym_declClass__repeat1,
  [aux_sym_procAttributes_repeat1] = aux_sym_procAttributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_kProgram] = {
    .visible = true,
    .named = true,
  },
  [sym_kUnit] = {
    .visible = true,
    .named = true,
  },
  [sym_kUses] = {
    .visible = true,
    .named = true,
  },
  [sym_kBegin] = {
    .visible = true,
    .named = true,
  },
  [sym_kEnd] = {
    .visible = true,
    .named = true,
  },
  [sym_kVar] = {
    .visible = true,
    .named = true,
  },
  [sym_kConst] = {
    .visible = true,
    .named = true,
  },
  [sym_kType] = {
    .visible = true,
    .named = true,
  },
  [sym_kClass] = {
    .visible = true,
    .named = true,
  },
  [sym_kRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_kArray] = {
    .visible = true,
    .named = true,
  },
  [sym_kOf] = {
    .visible = true,
    .named = true,
  },
  [sym_kFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_kProcedure] = {
    .visible = true,
    .named = true,
  },
  [sym_kConstructor] = {
    .visible = true,
    .named = true,
  },
  [sym_kDestructor] = {
    .visible = true,
    .named = true,
  },
  [sym_kInterface] = {
    .visible = true,
    .named = true,
  },
  [sym_kImplementation] = {
    .visible = true,
    .named = true,
  },
  [sym_kPublished] = {
    .visible = true,
    .named = true,
  },
  [sym_kPublic] = {
    .visible = true,
    .named = true,
  },
  [sym_kProtected] = {
    .visible = true,
    .named = true,
  },
  [sym_kPrivate] = {
    .visible = true,
    .named = true,
  },
  [sym_kStrict] = {
    .visible = true,
    .named = true,
  },
  [sym_kStatic] = {
    .visible = true,
    .named = true,
  },
  [sym_kVirtual] = {
    .visible = true,
    .named = true,
  },
  [sym_kAbstract] = {
    .visible = true,
    .named = true,
  },
  [sym_kOverride] = {
    .visible = true,
    .named = true,
  },
  [sym_kStdcall] = {
    .visible = true,
    .named = true,
  },
  [sym_kCdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_kPascal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literalString__token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literalInt__token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literalInt__token2] = {
    .visible = false,
    .named = false,
  },
  [sym_literalFloat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declType] = {
    .visible = true,
    .named = true,
  },
  [sym_declType_] = {
    .visible = true,
    .named = true,
  },
  [sym_declTypedef] = {
    .visible = true,
    .named = true,
  },
  [sym_declClass] = {
    .visible = true,
    .named = true,
  },
  [sym_declRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_declClass_] = {
    .visible = true,
    .named = true,
  },
  [sym_declProc] = {
    .visible = true,
    .named = true,
  },
  [sym_declFunc] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_procAttributes] = {
    .visible = true,
    .named = true,
  },
  [sym_declVar] = {
    .visible = true,
    .named = true,
  },
  [sym_declVar_] = {
    .visible = true,
    .named = true,
  },
  [sym_declConst] = {
    .visible = true,
    .named = true,
  },
  [sym_declConst_] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_] = {
    .visible = true,
    .named = true,
  },
  [sym_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_implementation_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declClass__repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procAttributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(51);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(288);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '.' ||
          lookahead == '^') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '.' ||
          lookahead == '^') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 71:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 148:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 153:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_kProgram);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_kUnit);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_kUses);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_kBegin);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_kBegin);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_kEnd);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_kEnd);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_kVar);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_kVar);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_kConst);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_kConst);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_kType);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_kType);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_kClass);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_kClass);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_kRecord);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_kRecord);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_kArray);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_kOf);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_kFunction);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_kFunction);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_kProcedure);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_kProcedure);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_kConstructor);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_kConstructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_kDestructor);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_kDestructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_kInterface);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_kImplementation);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_kImplementation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_kPublished);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_kPublished);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_kPublic);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_kPublic);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_kProtected);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_kProtected);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_kPrivate);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_kPrivate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_kStrict);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_kStrict);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_kStatic);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_kVirtual);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_kAbstract);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_kOverride);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_kStdcall);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_kCdecl);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_kPascal);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_literalString__token1);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '.' ||
          lookahead == '^') ADVANCE(6);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_literalInt__token1);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_literalInt__token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_literalFloat);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(302);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '.' ||
          lookahead == '^') ADVANCE(13);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 155},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 155},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 155},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 155},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 155},
  [62] = {.lex_state = 155},
  [63] = {.lex_state = 155},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_kProgram] = ACTIONS(1),
    [sym_kUnit] = ACTIONS(1),
    [sym_kUses] = ACTIONS(1),
    [sym_kBegin] = ACTIONS(1),
    [sym_kEnd] = ACTIONS(1),
    [sym_kVar] = ACTIONS(1),
    [sym_kConst] = ACTIONS(1),
    [sym_kType] = ACTIONS(1),
    [sym_kClass] = ACTIONS(1),
    [sym_kRecord] = ACTIONS(1),
    [sym_kArray] = ACTIONS(1),
    [sym_kOf] = ACTIONS(1),
    [sym_kFunction] = ACTIONS(1),
    [sym_kProcedure] = ACTIONS(1),
    [sym_kConstructor] = ACTIONS(1),
    [sym_kDestructor] = ACTIONS(1),
    [sym_kInterface] = ACTIONS(1),
    [sym_kImplementation] = ACTIONS(1),
    [sym_kPublished] = ACTIONS(1),
    [sym_kPublic] = ACTIONS(1),
    [sym_kProtected] = ACTIONS(1),
    [sym_kPrivate] = ACTIONS(1),
    [sym_kStrict] = ACTIONS(1),
    [sym_kStatic] = ACTIONS(1),
    [sym_kVirtual] = ACTIONS(1),
    [sym_kAbstract] = ACTIONS(1),
    [sym_kOverride] = ACTIONS(1),
    [sym_kStdcall] = ACTIONS(1),
    [sym_kCdecl] = ACTIONS(1),
    [sym_kPascal] = ACTIONS(1),
    [aux_sym_literalString__token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_literalInt__token1] = ACTIONS(1),
    [aux_sym_literalInt__token2] = ACTIONS(1),
    [sym_literalFloat] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_space] = ACTIONS(3),
  },
  [1] = {
    [sym_root] = STATE(114),
    [sym_program] = STATE(112),
    [sym_unit] = STATE(112),
    [sym_kProgram] = ACTIONS(5),
    [sym_kUnit] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_space] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      sym_kEnd,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_declClass__repeat1,
    STATE(48), 1,
      sym_declarations,
    STATE(87), 1,
      sym_declClass_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [57] = 15,
    ACTIONS(9), 1,
      sym_kEnd,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_declClass__repeat1,
    STATE(48), 1,
      sym_declarations,
    STATE(82), 1,
      sym_declClass_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [114] = 14,
    ACTIONS(9), 1,
      sym_kEnd,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(23), 1,
      sym_kStrict,
    STATE(47), 1,
      aux_sym_declClass__repeat1,
    STATE(48), 1,
      sym_declarations,
    STATE(96), 1,
      sym_declClass_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [168] = 14,
    ACTIONS(9), 1,
      sym_kEnd,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(23), 1,
      sym_kStrict,
    STATE(47), 1,
      aux_sym_declClass__repeat1,
    STATE(48), 1,
      sym_declarations,
    STATE(97), 1,
      sym_declClass_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [222] = 6,
    ACTIONS(31), 1,
      sym_kConst,
    STATE(11), 1,
      aux_sym_procAttributes_repeat1,
    STATE(33), 1,
      sym_procAttributes,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(33), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(29), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [260] = 6,
    ACTIONS(37), 1,
      sym_kConst,
    STATE(11), 1,
      aux_sym_procAttributes_repeat1,
    STATE(26), 1,
      sym_procAttributes,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(33), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(35), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [298] = 6,
    ACTIONS(41), 1,
      sym_kConst,
    STATE(11), 1,
      aux_sym_procAttributes_repeat1,
    STATE(29), 1,
      sym_procAttributes,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(33), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(39), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [336] = 6,
    ACTIONS(45), 1,
      sym_kConst,
    STATE(11), 1,
      aux_sym_procAttributes_repeat1,
    STATE(25), 1,
      sym_procAttributes,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(33), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(43), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [374] = 5,
    ACTIONS(49), 1,
      sym_kConst,
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(51), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(47), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [409] = 5,
    ACTIONS(56), 1,
      sym_kConst,
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(33), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(54), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [444] = 3,
    ACTIONS(49), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(47), 20,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
  [474] = 9,
    ACTIONS(60), 1,
      sym_kVar,
    ACTIONS(63), 1,
      sym_kConst,
    ACTIONS(66), 1,
      sym_kType,
    ACTIONS(69), 1,
      sym_kFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(13), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(72), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
    ACTIONS(58), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [515] = 9,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(13), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
    ACTIONS(75), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [556] = 11,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(77), 1,
      sym_kVar,
    ACTIONS(79), 1,
      sym_kConst,
    ACTIONS(81), 1,
      sym_kType,
    ACTIONS(83), 1,
      sym_kImplementation,
    STATE(103), 1,
      sym_interface_,
    STATE(104), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(18), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [598] = 4,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(17), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(85), 13,
      sym_kEnd,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [625] = 4,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(17), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(89), 13,
      sym_kEnd,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [652] = 9,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(75), 1,
      sym_kImplementation,
    ACTIONS(77), 1,
      sym_kVar,
    ACTIONS(79), 1,
      sym_kConst,
    ACTIONS(81), 1,
      sym_kType,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(22), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [688] = 9,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    STATE(54), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [724] = 9,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    STATE(53), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [760] = 4,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(30), 1,
      sym_declVar_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(94), 13,
      sym_kEnd,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [786] = 9,
    ACTIONS(58), 1,
      sym_kImplementation,
    ACTIONS(69), 1,
      sym_kFunction,
    ACTIONS(98), 1,
      sym_kVar,
    ACTIONS(101), 1,
      sym_kConst,
    ACTIONS(104), 1,
      sym_kType,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(22), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(72), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(31), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [822] = 4,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(28), 1,
      sym_declConst_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(107), 13,
      sym_kEnd,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [848] = 3,
    ACTIONS(113), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(111), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [871] = 3,
    ACTIONS(117), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(115), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [894] = 3,
    ACTIONS(45), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(43), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [917] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(119), 14,
      sym_kEnd,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
      sym_identifier,
  [938] = 3,
    ACTIONS(123), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(121), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [961] = 3,
    ACTIONS(127), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(125), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [984] = 3,
    ACTIONS(131), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(129), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1007] = 3,
    ACTIONS(135), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(133), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1030] = 3,
    ACTIONS(139), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(137), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1053] = 3,
    ACTIONS(41), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(39), 13,
      sym_kEnd,
      sym_kVar,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1076] = 4,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(35), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(85), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1098] = 4,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(35), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(89), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1120] = 9,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_kBegin,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_statement_repeat1,
    STATE(102), 1,
      sym_implementation_,
    STATE(109), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(43), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1151] = 4,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(30), 1,
      sym_declVar_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(94), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1172] = 4,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(28), 1,
      sym_declConst_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(107), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(119), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1209] = 8,
    ACTIONS(154), 1,
      sym_kBegin,
    ACTIONS(156), 1,
      sym_kEnd,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_statement_repeat1,
    STATE(106), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(46), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1237] = 8,
    ACTIONS(148), 1,
      sym_kBegin,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_statement_repeat1,
    STATE(108), 1,
      sym_implementation_,
    STATE(109), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(43), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1265] = 8,
    ACTIONS(154), 1,
      sym_kBegin,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      sym_kEnd,
    STATE(71), 1,
      aux_sym_statement_repeat1,
    STATE(113), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(46), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1293] = 7,
    ACTIONS(148), 1,
      sym_kBegin,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(45), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1318] = 7,
    ACTIONS(166), 1,
      sym_kBegin,
    ACTIONS(169), 1,
      sym_kEnd,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(44), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1343] = 7,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym_kBegin,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(45), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1368] = 7,
    ACTIONS(154), 1,
      sym_kBegin,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym_kEnd,
    STATE(71), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(44), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1393] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(190), 1,
      sym_kEnd,
    STATE(52), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1413] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(190), 1,
      sym_kEnd,
    STATE(51), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1433] = 6,
    ACTIONS(192), 1,
      sym_kType,
    ACTIONS(194), 1,
      sym_kClass,
    ACTIONS(196), 1,
      sym_kRecord,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(91), 3,
      sym_declTypedef,
      sym_declClass,
      sym_declRecord,
  [1455] = 6,
    ACTIONS(192), 1,
      sym_kType,
    ACTIONS(194), 1,
      sym_kClass,
    ACTIONS(196), 1,
      sym_kRecord,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(115), 3,
      sym_declTypedef,
      sym_declClass,
      sym_declRecord,
  [1477] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(200), 1,
      sym_kEnd,
    STATE(52), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1497] = 5,
    ACTIONS(202), 1,
      sym_kEnd,
    ACTIONS(207), 1,
      sym_kStrict,
    STATE(52), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(204), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1517] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(210), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1530] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(202), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [1543] = 3,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(212), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [1556] = 3,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(216), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [1569] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(212), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1582] = 3,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(220), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [1595] = 3,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(224), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [1608] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(228), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1619] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(224), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1632] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(220), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(216), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1658] = 5,
    ACTIONS(230), 1,
      sym_kInterface,
    ACTIONS(232), 1,
      sym_kImplementation,
    STATE(75), 1,
      sym_interface,
    STATE(107), 1,
      sym_implementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1675] = 3,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(16), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
  [1687] = 3,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(34), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
  [1699] = 4,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1713] = 4,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1727] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1741] = 4,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1755] = 4,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1769] = 3,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(77), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1780] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1789] = 3,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(78), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1800] = 3,
    ACTIONS(232), 1,
      sym_kImplementation,
    STATE(101), 1,
      sym_implementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1811] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1819] = 2,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1827] = 2,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1835] = 2,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1843] = 2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1851] = 2,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1859] = 2,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1867] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1875] = 2,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1883] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1891] = 2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1899] = 2,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1907] = 2,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1915] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1923] = 2,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1931] = 2,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1939] = 2,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1947] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1955] = 2,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1963] = 2,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1971] = 2,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1979] = 2,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1987] = 2,
    ACTIONS(303), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [1995] = 2,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2003] = 2,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2011] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2019] = 2,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2027] = 2,
    ACTIONS(313), 1,
      sym_kImplementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2035] = 2,
    ACTIONS(315), 1,
      sym_kImplementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2043] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2051] = 2,
    ACTIONS(319), 1,
      sym_kEnd,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2059] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2067] = 2,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2075] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2083] = 2,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2091] = 2,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2099] = 2,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2107] = 2,
    ACTIONS(333), 1,
      sym_kEnd,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2115] = 2,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2123] = 2,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2131] = 2,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2139] = 2,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 298,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 598,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 688,
  [SMALL_STATE(20)] = 724,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 822,
  [SMALL_STATE(24)] = 848,
  [SMALL_STATE(25)] = 871,
  [SMALL_STATE(26)] = 894,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1007,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1053,
  [SMALL_STATE(34)] = 1076,
  [SMALL_STATE(35)] = 1098,
  [SMALL_STATE(36)] = 1120,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1172,
  [SMALL_STATE(39)] = 1193,
  [SMALL_STATE(40)] = 1209,
  [SMALL_STATE(41)] = 1237,
  [SMALL_STATE(42)] = 1265,
  [SMALL_STATE(43)] = 1293,
  [SMALL_STATE(44)] = 1318,
  [SMALL_STATE(45)] = 1343,
  [SMALL_STATE(46)] = 1368,
  [SMALL_STATE(47)] = 1393,
  [SMALL_STATE(48)] = 1413,
  [SMALL_STATE(49)] = 1433,
  [SMALL_STATE(50)] = 1455,
  [SMALL_STATE(51)] = 1477,
  [SMALL_STATE(52)] = 1497,
  [SMALL_STATE(53)] = 1517,
  [SMALL_STATE(54)] = 1530,
  [SMALL_STATE(55)] = 1543,
  [SMALL_STATE(56)] = 1556,
  [SMALL_STATE(57)] = 1569,
  [SMALL_STATE(58)] = 1582,
  [SMALL_STATE(59)] = 1595,
  [SMALL_STATE(60)] = 1608,
  [SMALL_STATE(61)] = 1619,
  [SMALL_STATE(62)] = 1632,
  [SMALL_STATE(63)] = 1645,
  [SMALL_STATE(64)] = 1658,
  [SMALL_STATE(65)] = 1675,
  [SMALL_STATE(66)] = 1687,
  [SMALL_STATE(67)] = 1699,
  [SMALL_STATE(68)] = 1713,
  [SMALL_STATE(69)] = 1727,
  [SMALL_STATE(70)] = 1741,
  [SMALL_STATE(71)] = 1755,
  [SMALL_STATE(72)] = 1769,
  [SMALL_STATE(73)] = 1780,
  [SMALL_STATE(74)] = 1789,
  [SMALL_STATE(75)] = 1800,
  [SMALL_STATE(76)] = 1811,
  [SMALL_STATE(77)] = 1819,
  [SMALL_STATE(78)] = 1827,
  [SMALL_STATE(79)] = 1835,
  [SMALL_STATE(80)] = 1843,
  [SMALL_STATE(81)] = 1851,
  [SMALL_STATE(82)] = 1859,
  [SMALL_STATE(83)] = 1867,
  [SMALL_STATE(84)] = 1875,
  [SMALL_STATE(85)] = 1883,
  [SMALL_STATE(86)] = 1891,
  [SMALL_STATE(87)] = 1899,
  [SMALL_STATE(88)] = 1907,
  [SMALL_STATE(89)] = 1915,
  [SMALL_STATE(90)] = 1923,
  [SMALL_STATE(91)] = 1931,
  [SMALL_STATE(92)] = 1939,
  [SMALL_STATE(93)] = 1947,
  [SMALL_STATE(94)] = 1955,
  [SMALL_STATE(95)] = 1963,
  [SMALL_STATE(96)] = 1971,
  [SMALL_STATE(97)] = 1979,
  [SMALL_STATE(98)] = 1987,
  [SMALL_STATE(99)] = 1995,
  [SMALL_STATE(100)] = 2003,
  [SMALL_STATE(101)] = 2011,
  [SMALL_STATE(102)] = 2019,
  [SMALL_STATE(103)] = 2027,
  [SMALL_STATE(104)] = 2035,
  [SMALL_STATE(105)] = 2043,
  [SMALL_STATE(106)] = 2051,
  [SMALL_STATE(107)] = 2059,
  [SMALL_STATE(108)] = 2067,
  [SMALL_STATE(109)] = 2075,
  [SMALL_STATE(110)] = 2083,
  [SMALL_STATE(111)] = 2091,
  [SMALL_STATE(112)] = 2099,
  [SMALL_STATE(113)] = 2107,
  [SMALL_STATE(114)] = 2115,
  [SMALL_STATE(115)] = 2123,
  [SMALL_STATE(116)] = 2131,
  [SMALL_STATE(117)] = 2139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 6),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procAttributes_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procAttributes_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procAttributes_repeat1, 2), SHIFT_REPEAT(81),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procAttributes, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procAttributes, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(65),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(105),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declType, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declType_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declType_repeat1, 2), SHIFT_REPEAT(117),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(37),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(38),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(66),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declConst_, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst_, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 7),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declType_, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declConst, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declVar, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declVar_, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar_, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declType_repeat1, 2), SHIFT_REPEAT(100),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(42),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(71),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(56),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(40),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(69),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(63),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2), SHIFT_REPEAT(19),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2), SHIFT_REPEAT(60),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(67),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declTypedef, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declRecord, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declTypedef, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declRecord, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation_, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pascal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
