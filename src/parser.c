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
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  sym_kOut = 8,
  sym_kType = 9,
  sym_kClass = 10,
  sym_kRecord = 11,
  sym_kArray = 12,
  sym_kOf = 13,
  sym_kFunction = 14,
  sym_kProcedure = 15,
  sym_kConstructor = 16,
  sym_kDestructor = 17,
  sym_kInterface = 18,
  sym_kImplementation = 19,
  sym_kPublished = 20,
  sym_kPublic = 21,
  sym_kProtected = 22,
  sym_kPrivate = 23,
  sym_kStrict = 24,
  sym_kStatic = 25,
  sym_kVirtual = 26,
  sym_kAbstract = 27,
  sym_kOverride = 28,
  sym_kStdcall = 29,
  sym_kCdecl = 30,
  sym_kPascal = 31,
  sym_identifier = 32,
  aux_sym_literalString__token1 = 33,
  anon_sym_POUND = 34,
  aux_sym_literalInt__token1 = 35,
  aux_sym_literalInt__token2 = 36,
  sym_literalFloat = 37,
  anon_sym_SEMI = 38,
  anon_sym_COLON_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_COLON = 42,
  anon_sym_EQ = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_COMMA = 46,
  sym_comment = 47,
  sym_space = 48,
  sym_root = 49,
  sym_literal = 50,
  sym_literalString = 51,
  sym_literalString_ = 52,
  sym_literalChar = 53,
  sym_literalNumber = 54,
  sym_literalInt = 55,
  sym_literalInt_ = 56,
  sym_statement = 57,
  sym_statements = 58,
  sym_block = 59,
  sym_type = 60,
  sym_specializedName = 61,
  sym_genericName = 62,
  sym_genericParams = 63,
  sym_constant = 64,
  sym_declarations = 65,
  sym_declaration = 66,
  sym_declType = 67,
  sym_declType_ = 68,
  sym_declTypedef = 69,
  sym_declClass = 70,
  sym_declRecord = 71,
  sym_declClass_ = 72,
  sym_declProc = 73,
  sym_declFunc = 74,
  sym_arguments = 75,
  sym_arguments_ = 76,
  sym_procAttributes = 77,
  sym_identifiers = 78,
  sym_defaultValue = 79,
  sym_declVar = 80,
  sym_declVar_ = 81,
  sym_declConst = 82,
  sym_declConst_ = 83,
  sym_declParam = 84,
  sym_program = 85,
  sym_unit = 86,
  sym_interface = 87,
  sym_interface_ = 88,
  sym_implementation = 89,
  sym_implementation_ = 90,
  aux_sym_literalString_repeat1 = 91,
  aux_sym_statement_repeat1 = 92,
  aux_sym_statements_repeat1 = 93,
  aux_sym_genericParams_repeat1 = 94,
  aux_sym_declarations_repeat1 = 95,
  aux_sym_declType_repeat1 = 96,
  aux_sym_declClass__repeat1 = 97,
  aux_sym_arguments__repeat1 = 98,
  aux_sym_procAttributes_repeat1 = 99,
  aux_sym_identifiers_repeat1 = 100,
  aux_sym_declVar__repeat1 = 101,
  aux_sym_declConst__repeat1 = 102,
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
  [sym_kOut] = "kOut",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_comment] = "comment",
  [sym_space] = "space",
  [sym_root] = "root",
  [sym_literal] = "literal",
  [sym_literalString] = "literalString",
  [sym_literalString_] = "literalString_",
  [sym_literalChar] = "literalChar",
  [sym_literalNumber] = "literalNumber",
  [sym_literalInt] = "literalInt",
  [sym_literalInt_] = "literalInt_",
  [sym_statement] = "statement",
  [sym_statements] = "statements",
  [sym_block] = "block",
  [sym_type] = "type",
  [sym_specializedName] = "specializedName",
  [sym_genericName] = "genericName",
  [sym_genericParams] = "genericParams",
  [sym_constant] = "constant",
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
  [sym_arguments_] = "arguments_",
  [sym_procAttributes] = "procAttributes",
  [sym_identifiers] = "identifiers",
  [sym_defaultValue] = "defaultValue",
  [sym_declVar] = "declVar",
  [sym_declVar_] = "declVar_",
  [sym_declConst] = "declConst",
  [sym_declConst_] = "declConst_",
  [sym_declParam] = "declParam",
  [sym_program] = "program",
  [sym_unit] = "unit",
  [sym_interface] = "interface",
  [sym_interface_] = "interface_",
  [sym_implementation] = "implementation",
  [sym_implementation_] = "implementation_",
  [aux_sym_literalString_repeat1] = "literalString_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_genericParams_repeat1] = "genericParams_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_declType_repeat1] = "declType_repeat1",
  [aux_sym_declClass__repeat1] = "declClass__repeat1",
  [aux_sym_arguments__repeat1] = "arguments__repeat1",
  [aux_sym_procAttributes_repeat1] = "procAttributes_repeat1",
  [aux_sym_identifiers_repeat1] = "identifiers_repeat1",
  [aux_sym_declVar__repeat1] = "declVar__repeat1",
  [aux_sym_declConst__repeat1] = "declConst__repeat1",
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
  [sym_kOut] = sym_kOut,
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_comment] = sym_comment,
  [sym_space] = sym_space,
  [sym_root] = sym_root,
  [sym_literal] = sym_literal,
  [sym_literalString] = sym_literalString,
  [sym_literalString_] = sym_literalString_,
  [sym_literalChar] = sym_literalChar,
  [sym_literalNumber] = sym_literalNumber,
  [sym_literalInt] = sym_literalInt,
  [sym_literalInt_] = sym_literalInt_,
  [sym_statement] = sym_statement,
  [sym_statements] = sym_statements,
  [sym_block] = sym_block,
  [sym_type] = sym_type,
  [sym_specializedName] = sym_specializedName,
  [sym_genericName] = sym_genericName,
  [sym_genericParams] = sym_genericParams,
  [sym_constant] = sym_constant,
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
  [sym_arguments_] = sym_arguments_,
  [sym_procAttributes] = sym_procAttributes,
  [sym_identifiers] = sym_identifiers,
  [sym_defaultValue] = sym_defaultValue,
  [sym_declVar] = sym_declVar,
  [sym_declVar_] = sym_declVar_,
  [sym_declConst] = sym_declConst,
  [sym_declConst_] = sym_declConst_,
  [sym_declParam] = sym_declParam,
  [sym_program] = sym_program,
  [sym_unit] = sym_unit,
  [sym_interface] = sym_interface,
  [sym_interface_] = sym_interface_,
  [sym_implementation] = sym_implementation,
  [sym_implementation_] = sym_implementation_,
  [aux_sym_literalString_repeat1] = aux_sym_literalString_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_genericParams_repeat1] = aux_sym_genericParams_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_declType_repeat1] = aux_sym_declType_repeat1,
  [aux_sym_declClass__repeat1] = aux_sym_declClass__repeat1,
  [aux_sym_arguments__repeat1] = aux_sym_arguments__repeat1,
  [aux_sym_procAttributes_repeat1] = aux_sym_procAttributes_repeat1,
  [aux_sym_identifiers_repeat1] = aux_sym_identifiers_repeat1,
  [aux_sym_declVar__repeat1] = aux_sym_declVar__repeat1,
  [aux_sym_declConst__repeat1] = aux_sym_declConst__repeat1,
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
  [sym_kOut] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literalString] = {
    .visible = true,
    .named = true,
  },
  [sym_literalString_] = {
    .visible = true,
    .named = true,
  },
  [sym_literalChar] = {
    .visible = true,
    .named = true,
  },
  [sym_literalNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_literalInt] = {
    .visible = true,
    .named = true,
  },
  [sym_literalInt_] = {
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
  [sym_specializedName] = {
    .visible = true,
    .named = true,
  },
  [sym_genericName] = {
    .visible = true,
    .named = true,
  },
  [sym_genericParams] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
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
  [sym_arguments_] = {
    .visible = true,
    .named = true,
  },
  [sym_procAttributes] = {
    .visible = true,
    .named = true,
  },
  [sym_identifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_defaultValue] = {
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
  [sym_declParam] = {
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
  [aux_sym_literalString_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_genericParams_repeat1] = {
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
  [aux_sym_arguments__repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procAttributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declVar__repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declConst__repeat1] = {
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
      if (eof) ADVANCE(158);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(52);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(271);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '.' ||
          lookahead == '^') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 29:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 90:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 92:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 150:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 155:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 157:
      if (eof) ADVANCE(158);
      if (lookahead == '&') ADVANCE(155);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_kProgram);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_kUnit);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_kUses);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_kBegin);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_kBegin);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_kEnd);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_kEnd);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_kVar);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_kVar);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_kConst);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_kConst);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_kConst);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_kOut);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_kOut);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_kType);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_kType);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_kClass);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_kClass);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_kRecord);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_kRecord);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_kArray);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_kOf);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_kFunction);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_kFunction);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_kProcedure);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_kProcedure);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_kConstructor);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_kConstructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_kDestructor);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_kDestructor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_kInterface);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_kImplementation);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_kImplementation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_kPublished);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_kPublished);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_kPublic);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_kPublic);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_kProtected);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_kProtected);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_kPrivate);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_kPrivate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_kStrict);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_kStrict);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_kStatic);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_kVirtual);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_kAbstract);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_kOverride);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_kStdcall);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_kCdecl);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_kPascal);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_literalString__token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_literalInt__token1);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_literalInt__token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_literalFloat);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '.' ||
          lookahead == '^') ADVANCE(14);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
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
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 157},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 157},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 157},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 157},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 157},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 157},
  [89] = {.lex_state = 157},
  [90] = {.lex_state = 157},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
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
    [sym_kOut] = ACTIONS(1),
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_space] = ACTIONS(3),
  },
  [1] = {
    [sym_root] = STATE(185),
    [sym_program] = STATE(182),
    [sym_unit] = STATE(182),
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
    STATE(70), 1,
      sym_declarations,
    STATE(71), 1,
      aux_sym_declClass__repeat1,
    STATE(165), 1,
      sym_declClass_,
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
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(32), 5,
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
    STATE(70), 1,
      sym_declarations,
    STATE(71), 1,
      aux_sym_declClass__repeat1,
    STATE(194), 1,
      sym_declClass_,
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
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(32), 5,
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
    STATE(70), 1,
      sym_declarations,
    STATE(71), 1,
      aux_sym_declClass__repeat1,
    STATE(159), 1,
      sym_declClass_,
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
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [168] = 6,
    ACTIONS(31), 1,
      sym_kConst,
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    STATE(31), 1,
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
  [206] = 14,
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
    STATE(70), 1,
      sym_declarations,
    STATE(71), 1,
      aux_sym_declClass__repeat1,
    STATE(160), 1,
      sym_declClass_,
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
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [260] = 6,
    ACTIONS(37), 1,
      sym_kConst,
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    STATE(34), 1,
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
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    STATE(40), 1,
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
    STATE(10), 1,
      aux_sym_procAttributes_repeat1,
    STATE(30), 1,
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
    STATE(11), 1,
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
    ACTIONS(53), 1,
      sym_kConst,
    STATE(11), 1,
      aux_sym_procAttributes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(55), 7,
      sym_kStatic,
      sym_kVirtual,
      sym_kAbstract,
      sym_kOverride,
      sym_kStdcall,
      sym_kCdecl,
      sym_kPascal,
    ACTIONS(51), 13,
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
    ACTIONS(53), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(51), 20,
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
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(32), 5,
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
    ACTIONS(62), 1,
      sym_kVar,
    ACTIONS(65), 1,
      sym_kConst,
    ACTIONS(68), 1,
      sym_kType,
    ACTIONS(71), 1,
      sym_kFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(14), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(74), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
    ACTIONS(60), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [556] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym_declVar__repeat1,
    STATE(36), 1,
      sym_declVar_,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(195), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(77), 13,
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
  [591] = 5,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(196), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(17), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(81), 13,
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
  [621] = 5,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(196), 1,
      sym_genericName,
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
  [651] = 11,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(90), 1,
      sym_kVar,
    ACTIONS(92), 1,
      sym_kConst,
    ACTIONS(94), 1,
      sym_kType,
    ACTIONS(96), 1,
      sym_kImplementation,
    STATE(169), 1,
      sym_interface_,
    STATE(170), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(23), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [693] = 6,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_declVar__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(195), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(98), 13,
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
  [725] = 6,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_declVar__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(195), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(100), 13,
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
  [757] = 14,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      aux_sym_literalString__token1,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_literalInt__token1,
    ACTIONS(113), 1,
      aux_sym_literalInt__token2,
    ACTIONS(115), 1,
      sym_literalFloat,
    STATE(95), 1,
      sym_literalChar,
    STATE(136), 1,
      sym_constant,
    STATE(137), 1,
      sym_literalInt_,
    STATE(141), 1,
      sym_literalInt,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(72), 2,
      sym_literalString_,
      aux_sym_literalString_repeat1,
    STATE(138), 2,
      sym_literalString,
      sym_literalNumber,
    STATE(140), 2,
      sym_literal,
      sym_specializedName,
  [804] = 5,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_declConst__repeat1,
    STATE(39), 1,
      sym_declConst_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(117), 13,
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
  [833] = 9,
    ACTIONS(17), 1,
      sym_kFunction,
    ACTIONS(58), 1,
      sym_kImplementation,
    ACTIONS(90), 1,
      sym_kVar,
    ACTIONS(92), 1,
      sym_kConst,
    ACTIONS(94), 1,
      sym_kType,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(25), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [869] = 9,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    STATE(76), 1,
      sym_declarations,
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
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [905] = 9,
    ACTIONS(60), 1,
      sym_kImplementation,
    ACTIONS(71), 1,
      sym_kFunction,
    ACTIONS(121), 1,
      sym_kVar,
    ACTIONS(124), 1,
      sym_kConst,
    ACTIONS(127), 1,
      sym_kType,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(25), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    ACTIONS(74), 3,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [941] = 9,
    ACTIONS(11), 1,
      sym_kVar,
    ACTIONS(13), 1,
      sym_kConst,
    ACTIONS(15), 1,
      sym_kType,
    ACTIONS(17), 1,
      sym_kFunction,
    STATE(75), 1,
      sym_declarations,
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
    STATE(32), 5,
      sym_declType,
      sym_declProc,
      sym_declFunc,
      sym_declVar,
      sym_declConst,
  [977] = 4,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_declConst__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(130), 13,
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
  [1003] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_declConst__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(135), 13,
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
  [1029] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(137), 14,
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
  [1050] = 3,
    ACTIONS(31), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
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
  [1073] = 3,
    ACTIONS(141), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(139), 13,
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
  [1096] = 3,
    ACTIONS(145), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(143), 13,
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
  [1119] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(147), 14,
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
  [1140] = 3,
    ACTIONS(151), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(149), 13,
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
  [1163] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(153), 14,
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
  [1184] = 3,
    ACTIONS(157), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(155), 13,
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
  [1207] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(159), 14,
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
  [1228] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(161), 14,
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
  [1249] = 3,
    ACTIONS(165), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(163), 13,
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
  [1272] = 3,
    ACTIONS(37), 1,
      sym_kConst,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
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
  [1295] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(36), 1,
      sym_declVar_,
    STATE(44), 1,
      aux_sym_declVar__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(166), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(77), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1325] = 5,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(163), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(42), 2,
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
  [1350] = 6,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_declVar__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(166), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(100), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1377] = 6,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_declVar__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(166), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(98), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1404] = 5,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(163), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(42), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
    ACTIONS(81), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1429] = 5,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(39), 1,
      sym_declConst_,
    STATE(48), 1,
      aux_sym_declConst__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(117), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1453] = 4,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_declConst__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(130), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1474] = 4,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_declConst__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(135), 8,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
  [1495] = 9,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_kBegin,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_statement_repeat1,
    STATE(168), 1,
      sym_implementation_,
    STATE(179), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(59), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1526] = 9,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_arguments__repeat1,
    STATE(129), 1,
      sym_declParam,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(149), 1,
      sym_arguments_,
    STATE(183), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(180), 3,
      sym_kVar,
      sym_kConst,
      sym_kOut,
  [1557] = 8,
    ACTIONS(184), 1,
      sym_kBegin,
    ACTIONS(186), 1,
      sym_kEnd,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_statement_repeat1,
    STATE(184), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(61), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1585] = 8,
    ACTIONS(174), 1,
      sym_kBegin,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_statement_repeat1,
    STATE(178), 1,
      sym_implementation_,
    STATE(179), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(59), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1613] = 8,
    ACTIONS(184), 1,
      sym_kBegin,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      sym_kEnd,
    STATE(108), 1,
      aux_sym_statement_repeat1,
    STATE(174), 1,
      sym_statements,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(61), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(153), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(147), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1673] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(159), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1689] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(161), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1705] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(137), 9,
      sym_kVar,
      sym_kConst,
      sym_kType,
      sym_kFunction,
      sym_kProcedure,
      sym_kConstructor,
      sym_kDestructor,
      sym_kImplementation,
      sym_identifier,
  [1721] = 7,
    ACTIONS(174), 1,
      sym_kBegin,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(65), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1746] = 7,
    ACTIONS(196), 1,
      sym_kBegin,
    ACTIONS(199), 1,
      sym_kEnd,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(60), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1771] = 7,
    ACTIONS(184), 1,
      sym_kBegin,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym_kEnd,
    STATE(108), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(60), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1796] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_arguments__repeat1,
    STATE(133), 1,
      sym_declParam,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(183), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(180), 3,
      sym_kVar,
      sym_kConst,
      sym_kOut,
  [1821] = 7,
    ACTIONS(209), 1,
      sym_kType,
    ACTIONS(211), 1,
      sym_kClass,
    ACTIONS(213), 1,
      sym_kRecord,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(187), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(161), 3,
      sym_declTypedef,
      sym_declClass,
      sym_declRecord,
  [1846] = 7,
    ACTIONS(209), 1,
      sym_kType,
    ACTIONS(211), 1,
      sym_kClass,
    ACTIONS(213), 1,
      sym_kRecord,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(187), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(188), 3,
      sym_declTypedef,
      sym_declClass,
      sym_declRecord,
  [1871] = 7,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      sym_kBegin,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(65), 3,
      sym_statement,
      sym_block,
      aux_sym_statements_repeat1,
  [1896] = 7,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_arguments__repeat1,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(152), 1,
      sym_declParam,
    STATE(183), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(228), 3,
      sym_kVar,
      sym_kConst,
      sym_kOut,
  [1921] = 5,
    ACTIONS(234), 1,
      sym_kEnd,
    ACTIONS(239), 1,
      sym_kStrict,
    STATE(67), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(236), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1941] = 6,
    ACTIONS(242), 1,
      aux_sym_literalString__token1,
    ACTIONS(245), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_literalChar,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(248), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(68), 2,
      sym_literalString_,
      aux_sym_literalString_repeat1,
  [1963] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(250), 1,
      sym_kEnd,
    STATE(67), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [1983] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(252), 1,
      sym_kEnd,
    STATE(69), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [2003] = 5,
    ACTIONS(23), 1,
      sym_kStrict,
    ACTIONS(252), 1,
      sym_kEnd,
    STATE(67), 1,
      aux_sym_declClass__repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(21), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [2023] = 6,
    ACTIONS(107), 1,
      aux_sym_literalString__token1,
    ACTIONS(109), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_literalChar,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(254), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(68), 2,
      sym_literalString_,
      aux_sym_literalString_repeat1,
  [2045] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(256), 5,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2060] = 3,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(260), 5,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2075] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(234), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [2088] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(264), 6,
      sym_kEnd,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
      sym_kStrict,
  [2101] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(266), 5,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2116] = 6,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_GT,
    STATE(80), 1,
      aux_sym_genericParams_repeat1,
    STATE(119), 1,
      sym_identifiers,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2136] = 6,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(78), 1,
      aux_sym_genericParams_repeat1,
    STATE(119), 1,
      sym_identifiers,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(177), 1,
      sym_genericParams,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2156] = 6,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(80), 1,
      aux_sym_genericParams_repeat1,
    STATE(119), 1,
      sym_identifiers,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2176] = 4,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [2192] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(283), 5,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2204] = 3,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(285), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [2217] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(291), 2,
      sym_kBegin,
      sym_identifier,
  [2230] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(293), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(297), 4,
      sym_kVar,
      sym_kConst,
      sym_kOut,
      sym_identifier,
  [2256] = 3,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(299), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [2269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(305), 2,
      sym_kBegin,
      sym_identifier,
  [2282] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(285), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2295] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(299), 2,
      sym_kBegin,
      sym_identifier,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(307), 4,
      sym_kPublished,
      sym_kPublic,
      sym_kProtected,
      sym_kPrivate,
  [2319] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(309), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2334] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(311), 4,
      aux_sym_literalString__token1,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2345] = 3,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [2358] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(317), 4,
      aux_sym_literalString__token1,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2369] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(319), 4,
      aux_sym_literalString__token1,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2380] = 4,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(163), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(45), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
  [2395] = 5,
    ACTIONS(323), 1,
      sym_kInterface,
    ACTIONS(325), 1,
      sym_kImplementation,
    STATE(134), 1,
      sym_interface,
    STATE(175), 1,
      sym_implementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2412] = 3,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(305), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [2425] = 3,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(291), 3,
      sym_kBegin,
      sym_kEnd,
      sym_identifier,
  [2438] = 4,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(196), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    STATE(16), 2,
      sym_declType_,
      aux_sym_declType_repeat1,
  [2453] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(121), 1,
      sym_specializedName,
    STATE(176), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2467] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(92), 1,
      sym_type,
    STATE(121), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2481] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(121), 1,
      sym_specializedName,
    STATE(127), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2495] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(107), 1,
      sym_type,
    STATE(121), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2509] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2523] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2537] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2551] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2565] = 4,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2579] = 4,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    STATE(172), 1,
      sym_identifiers,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2593] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(342), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2607] = 4,
    ACTIONS(344), 1,
      anon_sym_COLON,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2621] = 4,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2635] = 4,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(124), 1,
      sym_identifiers,
    STATE(139), 1,
      aux_sym_identifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2649] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(121), 1,
      sym_specializedName,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2663] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(121), 1,
      sym_specializedName,
    STATE(143), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2677] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(85), 1,
      sym_type,
    STATE(121), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2691] = 3,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(350), 2,
      sym_identifier,
      anon_sym_GT,
  [2703] = 3,
    STATE(96), 1,
      sym_literalInt_,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(113), 2,
      aux_sym_literalInt__token1,
      aux_sym_literalInt__token2,
  [2715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2725] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(121), 1,
      sym_specializedName,
    STATE(157), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2739] = 4,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2753] = 3,
    ACTIONS(360), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(358), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2765] = 3,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(114), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2776] = 3,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_identifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2787] = 3,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2798] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(150), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2809] = 3,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2820] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(142), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2831] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(171), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(369), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2851] = 3,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2862] = 3,
    ACTIONS(325), 1,
      sym_kImplementation,
    STATE(167), 1,
      sym_implementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2873] = 3,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(113), 1,
      sym_genericName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2884] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(373), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2893] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(375), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2902] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(377), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2911] = 3,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_identifiers_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(381), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(383), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2940] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(385), 2,
      sym_identifier,
      anon_sym_GT,
  [2949] = 3,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_defaultValue,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2960] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(387), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2969] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(148), 1,
      sym_specializedName,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [2980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(389), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2989] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
    ACTIONS(309), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2998] = 2,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3006] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3014] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3022] = 2,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3030] = 2,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3038] = 2,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3046] = 2,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3054] = 2,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3062] = 2,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3070] = 2,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3078] = 2,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3086] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3094] = 2,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3102] = 2,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3110] = 2,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3118] = 2,
    ACTIONS(419), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3126] = 2,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3134] = 2,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3142] = 2,
    ACTIONS(425), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3150] = 2,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3158] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3166] = 2,
    ACTIONS(431), 1,
      sym_kImplementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3174] = 2,
    ACTIONS(433), 1,
      sym_kImplementation,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3182] = 2,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3190] = 2,
    ACTIONS(437), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3198] = 2,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3206] = 2,
    ACTIONS(439), 1,
      sym_kEnd,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3214] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3222] = 2,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3230] = 2,
    ACTIONS(445), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3238] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3246] = 2,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3254] = 2,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3262] = 2,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3270] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3278] = 2,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3286] = 2,
    ACTIONS(459), 1,
      sym_kEnd,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3294] = 2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3302] = 2,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3310] = 2,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3318] = 2,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3326] = 2,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3334] = 2,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3342] = 2,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3350] = 2,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3358] = 2,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3366] = 2,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3374] = 2,
    ACTIONS(481), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3382] = 2,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
  [3390] = 2,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 298,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 621,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 693,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 757,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 833,
  [SMALL_STATE(24)] = 869,
  [SMALL_STATE(25)] = 905,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 977,
  [SMALL_STATE(28)] = 1003,
  [SMALL_STATE(29)] = 1029,
  [SMALL_STATE(30)] = 1050,
  [SMALL_STATE(31)] = 1073,
  [SMALL_STATE(32)] = 1096,
  [SMALL_STATE(33)] = 1119,
  [SMALL_STATE(34)] = 1140,
  [SMALL_STATE(35)] = 1163,
  [SMALL_STATE(36)] = 1184,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1228,
  [SMALL_STATE(39)] = 1249,
  [SMALL_STATE(40)] = 1272,
  [SMALL_STATE(41)] = 1295,
  [SMALL_STATE(42)] = 1325,
  [SMALL_STATE(43)] = 1350,
  [SMALL_STATE(44)] = 1377,
  [SMALL_STATE(45)] = 1404,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1453,
  [SMALL_STATE(48)] = 1474,
  [SMALL_STATE(49)] = 1495,
  [SMALL_STATE(50)] = 1526,
  [SMALL_STATE(51)] = 1557,
  [SMALL_STATE(52)] = 1585,
  [SMALL_STATE(53)] = 1613,
  [SMALL_STATE(54)] = 1641,
  [SMALL_STATE(55)] = 1657,
  [SMALL_STATE(56)] = 1673,
  [SMALL_STATE(57)] = 1689,
  [SMALL_STATE(58)] = 1705,
  [SMALL_STATE(59)] = 1721,
  [SMALL_STATE(60)] = 1746,
  [SMALL_STATE(61)] = 1771,
  [SMALL_STATE(62)] = 1796,
  [SMALL_STATE(63)] = 1821,
  [SMALL_STATE(64)] = 1846,
  [SMALL_STATE(65)] = 1871,
  [SMALL_STATE(66)] = 1896,
  [SMALL_STATE(67)] = 1921,
  [SMALL_STATE(68)] = 1941,
  [SMALL_STATE(69)] = 1963,
  [SMALL_STATE(70)] = 1983,
  [SMALL_STATE(71)] = 2003,
  [SMALL_STATE(72)] = 2023,
  [SMALL_STATE(73)] = 2045,
  [SMALL_STATE(74)] = 2060,
  [SMALL_STATE(75)] = 2075,
  [SMALL_STATE(76)] = 2088,
  [SMALL_STATE(77)] = 2101,
  [SMALL_STATE(78)] = 2116,
  [SMALL_STATE(79)] = 2136,
  [SMALL_STATE(80)] = 2156,
  [SMALL_STATE(81)] = 2176,
  [SMALL_STATE(82)] = 2192,
  [SMALL_STATE(83)] = 2204,
  [SMALL_STATE(84)] = 2217,
  [SMALL_STATE(85)] = 2230,
  [SMALL_STATE(86)] = 2245,
  [SMALL_STATE(87)] = 2256,
  [SMALL_STATE(88)] = 2269,
  [SMALL_STATE(89)] = 2282,
  [SMALL_STATE(90)] = 2295,
  [SMALL_STATE(91)] = 2308,
  [SMALL_STATE(92)] = 2319,
  [SMALL_STATE(93)] = 2334,
  [SMALL_STATE(94)] = 2345,
  [SMALL_STATE(95)] = 2358,
  [SMALL_STATE(96)] = 2369,
  [SMALL_STATE(97)] = 2380,
  [SMALL_STATE(98)] = 2395,
  [SMALL_STATE(99)] = 2412,
  [SMALL_STATE(100)] = 2425,
  [SMALL_STATE(101)] = 2438,
  [SMALL_STATE(102)] = 2453,
  [SMALL_STATE(103)] = 2467,
  [SMALL_STATE(104)] = 2481,
  [SMALL_STATE(105)] = 2495,
  [SMALL_STATE(106)] = 2509,
  [SMALL_STATE(107)] = 2523,
  [SMALL_STATE(108)] = 2537,
  [SMALL_STATE(109)] = 2551,
  [SMALL_STATE(110)] = 2565,
  [SMALL_STATE(111)] = 2579,
  [SMALL_STATE(112)] = 2593,
  [SMALL_STATE(113)] = 2607,
  [SMALL_STATE(114)] = 2621,
  [SMALL_STATE(115)] = 2635,
  [SMALL_STATE(116)] = 2649,
  [SMALL_STATE(117)] = 2663,
  [SMALL_STATE(118)] = 2677,
  [SMALL_STATE(119)] = 2691,
  [SMALL_STATE(120)] = 2703,
  [SMALL_STATE(121)] = 2715,
  [SMALL_STATE(122)] = 2725,
  [SMALL_STATE(123)] = 2739,
  [SMALL_STATE(124)] = 2753,
  [SMALL_STATE(125)] = 2765,
  [SMALL_STATE(126)] = 2776,
  [SMALL_STATE(127)] = 2787,
  [SMALL_STATE(128)] = 2798,
  [SMALL_STATE(129)] = 2809,
  [SMALL_STATE(130)] = 2820,
  [SMALL_STATE(131)] = 2831,
  [SMALL_STATE(132)] = 2842,
  [SMALL_STATE(133)] = 2851,
  [SMALL_STATE(134)] = 2862,
  [SMALL_STATE(135)] = 2873,
  [SMALL_STATE(136)] = 2884,
  [SMALL_STATE(137)] = 2893,
  [SMALL_STATE(138)] = 2902,
  [SMALL_STATE(139)] = 2911,
  [SMALL_STATE(140)] = 2922,
  [SMALL_STATE(141)] = 2931,
  [SMALL_STATE(142)] = 2940,
  [SMALL_STATE(143)] = 2949,
  [SMALL_STATE(144)] = 2960,
  [SMALL_STATE(145)] = 2969,
  [SMALL_STATE(146)] = 2980,
  [SMALL_STATE(147)] = 2989,
  [SMALL_STATE(148)] = 2998,
  [SMALL_STATE(149)] = 3006,
  [SMALL_STATE(150)] = 3014,
  [SMALL_STATE(151)] = 3022,
  [SMALL_STATE(152)] = 3030,
  [SMALL_STATE(153)] = 3038,
  [SMALL_STATE(154)] = 3046,
  [SMALL_STATE(155)] = 3054,
  [SMALL_STATE(156)] = 3062,
  [SMALL_STATE(157)] = 3070,
  [SMALL_STATE(158)] = 3078,
  [SMALL_STATE(159)] = 3086,
  [SMALL_STATE(160)] = 3094,
  [SMALL_STATE(161)] = 3102,
  [SMALL_STATE(162)] = 3110,
  [SMALL_STATE(163)] = 3118,
  [SMALL_STATE(164)] = 3126,
  [SMALL_STATE(165)] = 3134,
  [SMALL_STATE(166)] = 3142,
  [SMALL_STATE(167)] = 3150,
  [SMALL_STATE(168)] = 3158,
  [SMALL_STATE(169)] = 3166,
  [SMALL_STATE(170)] = 3174,
  [SMALL_STATE(171)] = 3182,
  [SMALL_STATE(172)] = 3190,
  [SMALL_STATE(173)] = 3198,
  [SMALL_STATE(174)] = 3206,
  [SMALL_STATE(175)] = 3214,
  [SMALL_STATE(176)] = 3222,
  [SMALL_STATE(177)] = 3230,
  [SMALL_STATE(178)] = 3238,
  [SMALL_STATE(179)] = 3246,
  [SMALL_STATE(180)] = 3254,
  [SMALL_STATE(181)] = 3262,
  [SMALL_STATE(182)] = 3270,
  [SMALL_STATE(183)] = 3278,
  [SMALL_STATE(184)] = 3286,
  [SMALL_STATE(185)] = 3294,
  [SMALL_STATE(186)] = 3302,
  [SMALL_STATE(187)] = 3310,
  [SMALL_STATE(188)] = 3318,
  [SMALL_STATE(189)] = 3326,
  [SMALL_STATE(190)] = 3334,
  [SMALL_STATE(191)] = 3342,
  [SMALL_STATE(192)] = 3350,
  [SMALL_STATE(193)] = 3358,
  [SMALL_STATE(194)] = 3366,
  [SMALL_STATE(195)] = 3374,
  [SMALL_STATE(196)] = 3382,
  [SMALL_STATE(197)] = 3390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 5),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procAttributes, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procAttributes, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procAttributes_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procAttributes_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procAttributes_repeat1, 2), SHIFT_REPEAT(155),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(101),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(135),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(125),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declType, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declType_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declType_repeat1, 2), SHIFT_REPEAT(81),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar_, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declVar__repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declVar__repeat1, 2), SHIFT_REPEAT(73),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(41),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(46),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(97),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declConst__repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declConst__repeat1, 2), SHIFT_REPEAT(106),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst_, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declVar__repeat1, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declProc, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declProc, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declConst__repeat1, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declFunc, 7),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declFunc, 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declType_, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declVar, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declVar, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declVar__repeat1, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declConst__repeat1, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declConst, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declConst, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declConst__repeat1, 2), SHIFT_REPEAT(112),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(51),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(108),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(99),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(53),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(109),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(88),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments__repeat1, 2), SHIFT_REPEAT(115),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments__repeat1, 2), SHIFT_REPEAT(73),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2), SHIFT_REPEAT(26),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 2), SHIFT_REPEAT(91),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literalString_repeat1, 2), SHIFT_REPEAT(95),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literalString_repeat1, 2), SHIFT_REPEAT(120),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literalString_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalString, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specializedName, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declClass__repeat1, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genericParams, 1),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_genericParams_repeat1, 2), SHIFT_REPEAT(73),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_genericParams_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genericName, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genericName, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specializedName, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declParam, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments__repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declParam, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalInt_, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genericName, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genericName, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalString_, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalChar, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(110),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_genericParams_repeat1, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declParam, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifiers_repeat1, 2), SHIFT_REPEAT(173),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defaultValue, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalInt, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literalNumber, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_genericParams_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declParam, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifiers_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declRecord, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass_, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declClass, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declTypedef, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation_, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declTypedef, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declRecord, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
