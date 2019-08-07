#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 229
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_POUND_BANG = 1,
  aux_sym_shebang_line_token1 = 2,
  anon_sym_package = 3,
  anon_sym_import = 4,
  anon_sym_DOT_STAR = 5,
  anon_sym_as = 6,
  anon_sym_typealias = 7,
  anon_sym_EQ = 8,
  anon_sym_class = 9,
  anon_sym_interface = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COLON = 13,
  anon_sym_fun = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_object = 17,
  anon_sym_AT = 18,
  anon_sym_for = 19,
  anon_sym_in = 20,
  anon_sym_while = 21,
  anon_sym_SEMI = 22,
  anon_sym_do = 23,
  aux_sym__semi_token1 = 24,
  anon_sym_PLUS_EQ = 25,
  anon_sym_DASH_EQ = 26,
  anon_sym_STAR_EQ = 27,
  anon_sym_SLASH_EQ = 28,
  anon_sym_PERCENT_EQ = 29,
  anon_sym_PLUS_PLUS = 30,
  anon_sym_DASH_DASH = 31,
  anon_sym_DOT = 32,
  anon_sym_QMARK_DOT = 33,
  anon_sym_QMARK = 34,
  anon_sym_DASH = 35,
  anon_sym_PLUS = 36,
  anon_sym_BANG = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_DOT_DOT = 41,
  anon_sym_QMARK_COLON = 42,
  anon_sym_BANGin = 43,
  anon_sym_is = 44,
  anon_sym_BANGis = 45,
  anon_sym_LT = 46,
  anon_sym_GT = 47,
  anon_sym_LT_EQ = 48,
  anon_sym_GT_EQ = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_EQ_EQ_EQ = 52,
  anon_sym_BANG_EQ_EQ = 53,
  anon_sym_AMP_AMP = 54,
  anon_sym_PIPE_PIPE = 55,
  aux_sym__lexical_identifier_token1 = 56,
  aux_sym__lexical_identifier_token2 = 57,
  sym_source_file = 58,
  sym_shebang_line = 59,
  sym_package_header = 60,
  sym_import_header = 61,
  sym_import_alias = 62,
  sym_type_alias = 63,
  sym__declaration = 64,
  sym_class_declaration = 65,
  sym_class_body = 66,
  sym_class_member_declarations = 67,
  sym_variable_declaration = 68,
  sym_function_declaration = 69,
  sym_function_body = 70,
  sym_object_declaration = 71,
  sym__type = 72,
  sym__statements = 73,
  sym__statement = 74,
  sym_label = 75,
  sym_control_structure_body = 76,
  sym__block = 77,
  sym__loop_statement = 78,
  sym_for_statement = 79,
  sym_while_statement = 80,
  sym_do_while_statement = 81,
  sym__semi = 82,
  sym__semis = 83,
  sym_assignment = 84,
  sym__expression = 85,
  sym_unary_expression = 86,
  sym_binary_expression = 87,
  sym_directly_assignable_expression = 88,
  sym_annotation = 89,
  sym_simple_identifier = 90,
  sym_identifier = 91,
  sym__lexical_identifier = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_source_file_repeat2 = 94,
  aux_sym_class_member_declarations_repeat1 = 95,
  aux_sym__statements_repeat1 = 96,
  aux_sym__statement_repeat1 = 97,
  aux_sym_for_statement_repeat1 = 98,
  aux_sym_identifier_repeat1 = 99,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_line_token1] = "shebang_line_token1",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_as] = "as",
  [anon_sym_typealias] = "typealias",
  [anon_sym_EQ] = "=",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_object] = "object",
  [anon_sym_AT] = "@",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_SEMI] = ";",
  [anon_sym_do] = "do",
  [aux_sym__semi_token1] = "_semi_token1",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DOT] = "?.",
  [anon_sym_QMARK] = "?",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_QMARK_COLON] = "?:",
  [anon_sym_BANGin] = "!in",
  [anon_sym_is] = "is",
  [anon_sym_BANGis] = "!is",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym__lexical_identifier_token1] = "_lexical_identifier_token1",
  [aux_sym__lexical_identifier_token2] = "_lexical_identifier_token2",
  [sym_source_file] = "source_file",
  [sym_shebang_line] = "shebang_line",
  [sym_package_header] = "package_header",
  [sym_import_header] = "import_header",
  [sym_import_alias] = "import_alias",
  [sym_type_alias] = "type_alias",
  [sym__declaration] = "_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym_class_member_declarations] = "class_member_declarations",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_object_declaration] = "object_declaration",
  [sym__type] = "_type",
  [sym__statements] = "_statements",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_control_structure_body] = "control_structure_body",
  [sym__block] = "_block",
  [sym__loop_statement] = "_loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym__semi] = "_semi",
  [sym__semis] = "_semis",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_directly_assignable_expression] = "directly_assignable_expression",
  [sym_annotation] = "annotation",
  [sym_simple_identifier] = "simple_identifier",
  [sym_identifier] = "identifier",
  [sym__lexical_identifier] = "_lexical_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_class_member_declarations_repeat1] = "class_member_declarations_repeat1",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shebang_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typealias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
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
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__semi_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGis] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lexical_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lexical_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang_line] = {
    .visible = true,
    .named = true,
  },
  [sym_package_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_member_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_object_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_control_structure_body] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__loop_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__semi] = {
    .visible = false,
    .named = true,
  },
  [sym__semis] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_directly_assignable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__lexical_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_member_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == '|') ADVANCE(137);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_typealias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__semi_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(70);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '.') ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(103);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANGin);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANGis);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'f') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'g') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'j') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'k') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 7},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym__lexical_identifier_token2] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [aux_sym__lexical_identifier_token1] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
  },
  [1] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_import_header] = STATE(16),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym_shebang_line] = STATE(19),
    [sym_package_header] = STATE(20),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym__declaration] = STATE(25),
    [sym_object_declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(23),
    [sym_type_alias] = STATE(25),
    [sym_source_file] = STATE(24),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(37),
  },
  [3] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(28),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [4] = {
    [sym_identifier] = STATE(29),
    [sym__lexical_identifier] = STATE(145),
    [sym_simple_identifier] = STATE(30),
    [aux_sym__lexical_identifier_token2] = ACTIONS(39),
    [aux_sym__lexical_identifier_token1] = ACTIONS(39),
  },
  [5] = {
    [aux_sym_shebang_line_token1] = ACTIONS(41),
  },
  [6] = {
    [sym_binary_expression] = STATE(32),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(32),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(32),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [7] = {
    [sym_binary_expression] = STATE(34),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(34),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(34),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [8] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(35),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
  },
  [9] = {
    [sym_control_structure_body] = STATE(38),
    [sym__block] = STATE(39),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
  },
  [10] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(40),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
  },
  [11] = {
    [sym_identifier] = STATE(41),
    [sym__lexical_identifier] = STATE(197),
    [sym_simple_identifier] = STATE(146),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
  },
  [12] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(42),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [13] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(51),
  },
  [15] = {
    [anon_sym_QMARK_COLON] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_QMARK_DOT] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_DASH_EQ] = ACTIONS(53),
    [anon_sym_DASH_DASH] = ACTIONS(53),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_BANGin] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_BANGis] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(53),
    [anon_sym_STAR_EQ] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_PERCENT_EQ] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_is] = ACTIONS(53),
    [anon_sym_DOT_DOT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SLASH_EQ] = ACTIONS(53),
    [anon_sym_PLUS_EQ] = ACTIONS(53),
    [anon_sym_PLUS_PLUS] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
  },
  [16] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [17] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(83),
  },
  [18] = {
    [anon_sym_QMARK_COLON] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK_DOT] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_DASH_EQ] = ACTIONS(87),
    [anon_sym_DASH_DASH] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(85),
    [anon_sym_BANGin] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_BANGis] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [aux_sym__lexical_identifier_token2] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [aux_sym__lexical_identifier_token1] = ACTIONS(85),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(85),
    [anon_sym_STAR_EQ] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_PERCENT_EQ] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_SLASH_EQ] = ACTIONS(87),
    [anon_sym_PLUS_EQ] = ACTIONS(87),
    [anon_sym_PLUS_PLUS] = ACTIONS(85),
    [aux_sym__semi_token1] = ACTIONS(91),
  },
  [19] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym_package_header] = STATE(60),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [20] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [21] = {
    [sym__loop_statement] = STATE(61),
    [sym_for_statement] = STATE(61),
    [sym_assignment] = STATE(61),
    [sym__expression] = STATE(62),
    [sym_simple_identifier] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(63),
    [sym_type_alias] = STATE(61),
    [sym_function_declaration] = STATE(61),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(61),
    [sym_do_while_statement] = STATE(61),
    [sym_unary_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym__lexical_identifier] = STATE(15),
    [sym__declaration] = STATE(61),
    [sym_class_declaration] = STATE(61),
    [sym_object_declaration] = STATE(61),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(63),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [22] = {
    [anon_sym_DASH_EQ] = ACTIONS(93),
    [anon_sym_STAR_EQ] = ACTIONS(93),
    [anon_sym_PERCENT_EQ] = ACTIONS(93),
    [anon_sym_SLASH_EQ] = ACTIONS(93),
    [anon_sym_PLUS_EQ] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
  },
  [23] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(65),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(95),
  },
  [25] = {
    [sym__semi] = STATE(66),
    [aux_sym__semi_token1] = ACTIONS(97),
  },
  [26] = {
    [sym_binary_expression] = STATE(32),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(32),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(32),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_interface] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_do] = ACTIONS(99),
    [anon_sym_class] = ACTIONS(99),
    [anon_sym_fun] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(99),
    [anon_sym_typealias] = ACTIONS(99),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(99),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [27] = {
    [sym_binary_expression] = STATE(67),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(67),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(67),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [28] = {
    [sym_class_body] = STATE(69),
    [anon_sym_interface] = ACTIONS(111),
    [anon_sym_object] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_typealias] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_class] = ACTIONS(111),
    [anon_sym_fun] = ACTIONS(111),
    [aux_sym__semi_token1] = ACTIONS(115),
  },
  [29] = {
    [sym_import_alias] = STATE(70),
    [sym__semi] = STATE(72),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_interface] = ACTIONS(117),
    [aux_sym__semi_token1] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_class] = ACTIONS(117),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_DOT_STAR] = ACTIONS(123),
    [anon_sym_DASH_DASH] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_object] = ACTIONS(117),
    [anon_sym_typealias] = ACTIONS(117),
    [aux_sym__lexical_identifier_token2] = ACTIONS(117),
    [anon_sym_PLUS_PLUS] = ACTIONS(117),
    [anon_sym_for] = ACTIONS(117),
    [aux_sym__lexical_identifier_token1] = ACTIONS(117),
  },
  [30] = {
    [aux_sym_identifier_repeat1] = STATE(74),
    [anon_sym_while] = ACTIONS(127),
    [anon_sym_interface] = ACTIONS(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_as] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_do] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_fun] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_DOT_STAR] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DASH_DASH] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_object] = ACTIONS(127),
    [anon_sym_typealias] = ACTIONS(127),
    [aux_sym__lexical_identifier_token2] = ACTIONS(127),
    [anon_sym_PLUS_PLUS] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(127),
    [aux_sym__semi_token1] = ACTIONS(131),
  },
  [31] = {
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_interface] = ACTIONS(133),
    [anon_sym_import] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_fun] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_package] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DASH_DASH] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_object] = ACTIONS(133),
    [anon_sym_typealias] = ACTIONS(133),
    [aux_sym__lexical_identifier_token2] = ACTIONS(135),
    [anon_sym_PLUS_PLUS] = ACTIONS(135),
    [anon_sym_for] = ACTIONS(133),
    [aux_sym__lexical_identifier_token1] = ACTIONS(133),
  },
  [32] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_BANGis] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__lexical_identifier_token2] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [33] = {
    [anon_sym_QMARK_COLON] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK_DOT] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DASH_DASH] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(85),
    [anon_sym_BANGin] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_BANGis] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [aux_sym__lexical_identifier_token2] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [aux_sym__lexical_identifier_token1] = ACTIONS(85),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PLUS_PLUS] = ACTIONS(85),
    [aux_sym__semi_token1] = ACTIONS(91),
  },
  [34] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [35] = {
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_interface] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(143),
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_fun] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_DASH_DASH] = ACTIONS(145),
    [anon_sym_object] = ACTIONS(143),
    [anon_sym_typealias] = ACTIONS(143),
    [aux_sym__lexical_identifier_token2] = ACTIONS(145),
    [anon_sym_PLUS_PLUS] = ACTIONS(145),
    [anon_sym_for] = ACTIONS(143),
    [aux_sym__lexical_identifier_token1] = ACTIONS(143),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [37] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__statements] = STATE(77),
    [sym__loop_statement] = STATE(78),
    [sym_for_statement] = STATE(78),
    [sym_assignment] = STATE(78),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(78),
    [sym_class_declaration] = STATE(78),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(78),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [sym_type_alias] = STATE(78),
    [sym_function_declaration] = STATE(78),
    [sym__statement] = STATE(78),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(78),
    [sym_do_while_statement] = STATE(78),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [38] = {
    [anon_sym_while] = ACTIONS(151),
  },
  [39] = {
    [anon_sym_while] = ACTIONS(153),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(155),
  },
  [41] = {
    [sym__semi] = STATE(81),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [aux_sym__semi_token1] = ACTIONS(159),
    [anon_sym_import] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_fun] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_DASH_DASH] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_object] = ACTIONS(157),
    [anon_sym_typealias] = ACTIONS(157),
    [aux_sym__lexical_identifier_token2] = ACTIONS(157),
    [anon_sym_PLUS_PLUS] = ACTIONS(157),
    [anon_sym_for] = ACTIONS(157),
    [aux_sym__lexical_identifier_token1] = ACTIONS(157),
  },
  [42] = {
    [sym_class_body] = STATE(82),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_typealias] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_fun] = ACTIONS(163),
    [aux_sym__semi_token1] = ACTIONS(165),
  },
  [43] = {
    [anon_sym_EQ] = ACTIONS(167),
  },
  [44] = {
    [sym__lexical_identifier] = STATE(200),
    [aux_sym_for_statement_repeat1] = STATE(86),
    [sym_annotation] = STATE(86),
    [sym_variable_declaration] = STATE(84),
    [sym_simple_identifier] = STATE(85),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
  },
  [45] = {
    [sym_import_header] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(173),
    [anon_sym_import] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_fun] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(178),
    [anon_sym_DASH_DASH] = ACTIONS(178),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_object] = ACTIONS(173),
    [anon_sym_typealias] = ACTIONS(173),
    [aux_sym__lexical_identifier_token2] = ACTIONS(178),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_for] = ACTIONS(173),
    [aux_sym__lexical_identifier_token1] = ACTIONS(173),
  },
  [46] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(65),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [47] = {
    [sym_binary_expression] = STATE(87),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(87),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(87),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [48] = {
    [sym_binary_expression] = STATE(88),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(88),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(88),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [49] = {
    [sym_binary_expression] = STATE(89),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(89),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(89),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [50] = {
    [sym_binary_expression] = STATE(90),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(90),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(90),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [51] = {
    [anon_sym_QMARK_COLON] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_BANGis] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__lexical_identifier_token2] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [52] = {
    [sym_binary_expression] = STATE(91),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(91),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(91),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [53] = {
    [sym_binary_expression] = STATE(92),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(92),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(92),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [54] = {
    [sym_binary_expression] = STATE(93),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(93),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(93),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [55] = {
    [sym_binary_expression] = STATE(94),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(94),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(94),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [56] = {
    [sym_binary_expression] = STATE(95),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(95),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(95),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [57] = {
    [sym_binary_expression] = STATE(96),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(96),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(96),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [58] = {
    [anon_sym_while] = ACTIONS(182),
    [anon_sym_interface] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(184),
    [anon_sym_do] = ACTIONS(182),
    [anon_sym_class] = ACTIONS(182),
    [anon_sym_fun] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_DASH_DASH] = ACTIONS(184),
    [anon_sym_object] = ACTIONS(182),
    [anon_sym_typealias] = ACTIONS(182),
    [aux_sym__lexical_identifier_token2] = ACTIONS(184),
    [anon_sym_PLUS_PLUS] = ACTIONS(184),
    [anon_sym_for] = ACTIONS(182),
    [aux_sym__lexical_identifier_token1] = ACTIONS(182),
  },
  [59] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(97),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [60] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(98),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(97),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [aux_sym__semi_token1] = ACTIONS(188),
  },
  [62] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(188),
  },
  [63] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(99),
    [sym_label] = STATE(63),
    [sym_annotation] = STATE(63),
    [aux_sym__statement_repeat1] = STATE(63),
    [anon_sym_while] = ACTIONS(190),
    [anon_sym_interface] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_do] = ACTIONS(190),
    [anon_sym_class] = ACTIONS(190),
    [anon_sym_fun] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_DASH_DASH] = ACTIONS(192),
    [anon_sym_object] = ACTIONS(190),
    [anon_sym_typealias] = ACTIONS(190),
    [aux_sym__lexical_identifier_token2] = ACTIONS(197),
    [anon_sym_PLUS_PLUS] = ACTIONS(192),
    [anon_sym_for] = ACTIONS(190),
    [aux_sym__lexical_identifier_token1] = ACTIONS(200),
  },
  [64] = {
    [sym_binary_expression] = STATE(100),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(100),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(100),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [65] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(65),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(215),
    [anon_sym_do] = ACTIONS(218),
    [anon_sym_class] = ACTIONS(206),
    [anon_sym_fun] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_DASH_DASH] = ACTIONS(224),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_object] = ACTIONS(229),
    [anon_sym_typealias] = ACTIONS(232),
    [aux_sym__lexical_identifier_token2] = ACTIONS(235),
    [anon_sym_PLUS_PLUS] = ACTIONS(224),
    [anon_sym_for] = ACTIONS(238),
    [aux_sym__lexical_identifier_token1] = ACTIONS(241),
  },
  [66] = {
    [anon_sym_while] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_do] = ACTIONS(244),
    [anon_sym_class] = ACTIONS(244),
    [anon_sym_fun] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_DASH_DASH] = ACTIONS(227),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_object] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(244),
    [aux_sym__lexical_identifier_token2] = ACTIONS(227),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_for] = ACTIONS(244),
    [aux_sym__lexical_identifier_token1] = ACTIONS(244),
  },
  [67] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [68] = {
    [sym_object_declaration] = STATE(105),
    [sym_class_member_declarations] = STATE(104),
    [sym_type_alias] = STATE(105),
    [aux_sym_class_member_declarations_repeat1] = STATE(103),
    [sym_function_declaration] = STATE(105),
    [sym__declaration] = STATE(105),
    [sym_class_declaration] = STATE(105),
    [anon_sym_interface] = ACTIONS(278),
    [anon_sym_object] = ACTIONS(280),
    [anon_sym_typealias] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_fun] = ACTIONS(286),
  },
  [69] = {
    [anon_sym_interface] = ACTIONS(288),
    [anon_sym_typealias] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_fun] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(288),
    [aux_sym__semi_token1] = ACTIONS(290),
  },
  [70] = {
    [sym__semi] = STATE(106),
    [anon_sym_while] = ACTIONS(292),
    [anon_sym_interface] = ACTIONS(292),
    [aux_sym__semi_token1] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_AT] = ACTIONS(292),
    [anon_sym_do] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
    [anon_sym_fun] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(292),
    [anon_sym_DASH_DASH] = ACTIONS(292),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_object] = ACTIONS(292),
    [anon_sym_typealias] = ACTIONS(292),
    [aux_sym__lexical_identifier_token2] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_for] = ACTIONS(292),
    [aux_sym__lexical_identifier_token1] = ACTIONS(292),
  },
  [71] = {
    [sym__lexical_identifier] = STATE(197),
    [sym_simple_identifier] = STATE(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
  },
  [72] = {
    [anon_sym_while] = ACTIONS(292),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_import] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(296),
    [anon_sym_do] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
    [anon_sym_fun] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_DASH_DASH] = ACTIONS(296),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_object] = ACTIONS(292),
    [anon_sym_typealias] = ACTIONS(292),
    [aux_sym__lexical_identifier_token2] = ACTIONS(296),
    [anon_sym_PLUS_PLUS] = ACTIONS(296),
    [anon_sym_for] = ACTIONS(292),
    [aux_sym__lexical_identifier_token1] = ACTIONS(292),
  },
  [73] = {
    [sym__lexical_identifier] = STATE(145),
    [sym_simple_identifier] = STATE(108),
    [aux_sym__lexical_identifier_token2] = ACTIONS(39),
    [aux_sym__lexical_identifier_token1] = ACTIONS(39),
  },
  [74] = {
    [aux_sym_identifier_repeat1] = STATE(109),
    [anon_sym_while] = ACTIONS(298),
    [anon_sym_interface] = ACTIONS(298),
    [aux_sym__lexical_identifier_token1] = ACTIONS(298),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_as] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_DOT_STAR] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(298),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_object] = ACTIONS(298),
    [anon_sym_typealias] = ACTIONS(298),
    [aux_sym__lexical_identifier_token2] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_for] = ACTIONS(298),
    [aux_sym__semi_token1] = ACTIONS(300),
  },
  [75] = {
    [sym_binary_expression] = STATE(110),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(110),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(110),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [76] = {
    [anon_sym_while] = ACTIONS(302),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(304),
  },
  [78] = {
    [sym__semis] = STATE(112),
    [aux_sym__statements_repeat1] = STATE(113),
    [aux_sym__semi_token1] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(308),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(310),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(312),
  },
  [81] = {
    [anon_sym_while] = ACTIONS(314),
    [anon_sym_interface] = ACTIONS(314),
    [anon_sym_import] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_do] = ACTIONS(314),
    [anon_sym_class] = ACTIONS(314),
    [anon_sym_fun] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_object] = ACTIONS(314),
    [anon_sym_typealias] = ACTIONS(314),
    [aux_sym__lexical_identifier_token2] = ACTIONS(316),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_for] = ACTIONS(314),
    [aux_sym__lexical_identifier_token1] = ACTIONS(314),
  },
  [82] = {
    [anon_sym_interface] = ACTIONS(318),
    [anon_sym_typealias] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_class] = ACTIONS(318),
    [anon_sym_fun] = ACTIONS(318),
    [anon_sym_object] = ACTIONS(318),
    [aux_sym__semi_token1] = ACTIONS(320),
  },
  [83] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(116),
    [sym__type] = STATE(116),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [84] = {
    [anon_sym_in] = ACTIONS(322),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_in] = ACTIONS(326),
  },
  [86] = {
    [sym__lexical_identifier] = STATE(200),
    [aux_sym_for_statement_repeat1] = STATE(120),
    [sym_annotation] = STATE(120),
    [sym_variable_declaration] = STATE(119),
    [sym_simple_identifier] = STATE(85),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
  },
  [87] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [88] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [89] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [90] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [91] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(328),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [92] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [93] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [94] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [95] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [96] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [97] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(65),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [98] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(121),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [99] = {
    [anon_sym_AT] = ACTIONS(334),
  },
  [100] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [101] = {
    [sym_control_structure_body] = STATE(122),
    [sym__block] = STATE(151),
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(342),
  },
  [102] = {
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_typealias] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_fun] = ACTIONS(344),
    [anon_sym_object] = ACTIONS(344),
    [aux_sym__semi_token1] = ACTIONS(346),
  },
  [103] = {
    [sym_type_alias] = STATE(105),
    [sym_object_declaration] = STATE(105),
    [sym_function_declaration] = STATE(105),
    [aux_sym_class_member_declarations_repeat1] = STATE(123),
    [sym__declaration] = STATE(105),
    [sym_class_declaration] = STATE(105),
    [anon_sym_interface] = ACTIONS(278),
    [anon_sym_typealias] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_fun] = ACTIONS(286),
    [anon_sym_object] = ACTIONS(280),
  },
  [104] = {
    [anon_sym_RBRACE] = ACTIONS(350),
  },
  [105] = {
    [sym__semis] = STATE(125),
    [anon_sym_interface] = ACTIONS(352),
    [anon_sym_typealias] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_fun] = ACTIONS(352),
    [anon_sym_object] = ACTIONS(352),
    [aux_sym__semi_token1] = ACTIONS(354),
  },
  [106] = {
    [anon_sym_while] = ACTIONS(356),
    [anon_sym_interface] = ACTIONS(356),
    [anon_sym_import] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_fun] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_object] = ACTIONS(356),
    [anon_sym_typealias] = ACTIONS(356),
    [aux_sym__lexical_identifier_token2] = ACTIONS(358),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_for] = ACTIONS(356),
    [aux_sym__lexical_identifier_token1] = ACTIONS(356),
  },
  [107] = {
    [anon_sym_while] = ACTIONS(360),
    [anon_sym_interface] = ACTIONS(360),
    [aux_sym__lexical_identifier_token1] = ACTIONS(360),
    [anon_sym_import] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_AT] = ACTIONS(360),
    [anon_sym_do] = ACTIONS(360),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_fun] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_DASH_DASH] = ACTIONS(360),
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(360),
    [anon_sym_typealias] = ACTIONS(360),
    [aux_sym__lexical_identifier_token2] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(360),
    [anon_sym_for] = ACTIONS(360),
    [aux_sym__semi_token1] = ACTIONS(362),
  },
  [108] = {
    [anon_sym_while] = ACTIONS(364),
    [anon_sym_interface] = ACTIONS(364),
    [aux_sym__lexical_identifier_token1] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_as] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_fun] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_DOT_STAR] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DASH_DASH] = ACTIONS(364),
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(364),
    [anon_sym_typealias] = ACTIONS(364),
    [aux_sym__lexical_identifier_token2] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_for] = ACTIONS(364),
    [aux_sym__semi_token1] = ACTIONS(366),
  },
  [109] = {
    [aux_sym_identifier_repeat1] = STATE(109),
    [anon_sym_while] = ACTIONS(364),
    [anon_sym_interface] = ACTIONS(364),
    [aux_sym__lexical_identifier_token1] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_as] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_fun] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_DOT_STAR] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DASH_DASH] = ACTIONS(364),
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(364),
    [anon_sym_typealias] = ACTIONS(364),
    [aux_sym__lexical_identifier_token2] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_for] = ACTIONS(364),
    [aux_sym__semi_token1] = ACTIONS(366),
  },
  [110] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [111] = {
    [anon_sym_while] = ACTIONS(373),
  },
  [112] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(127),
    [sym_for_statement] = STATE(127),
    [sym_assignment] = STATE(127),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(127),
    [sym_class_declaration] = STATE(127),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(127),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [sym_type_alias] = STATE(127),
    [sym_function_declaration] = STATE(127),
    [sym__statement] = STATE(127),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(127),
    [sym_do_while_statement] = STATE(127),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [113] = {
    [sym__semis] = STATE(128),
    [aux_sym__statements_repeat1] = STATE(129),
    [aux_sym__semi_token1] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(379),
  },
  [114] = {
    [sym_binary_expression] = STATE(130),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(130),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(130),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [115] = {
    [sym__block] = STATE(132),
    [sym_function_body] = STATE(133),
    [aux_sym__semi_token1] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_EQ] = ACTIONS(387),
  },
  [116] = {
    [anon_sym_interface] = ACTIONS(389),
    [anon_sym_typealias] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_class] = ACTIONS(389),
    [anon_sym_fun] = ACTIONS(389),
    [anon_sym_object] = ACTIONS(389),
    [aux_sym__semi_token1] = ACTIONS(391),
  },
  [117] = {
    [sym_binary_expression] = STATE(134),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(134),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(134),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [118] = {
    [sym__lexical_identifier] = STATE(200),
    [sym__type] = STATE(135),
    [sym_simple_identifier] = STATE(135),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
  },
  [119] = {
    [anon_sym_in] = ACTIONS(393),
  },
  [120] = {
    [sym_annotation] = STATE(120),
    [aux_sym_for_statement_repeat1] = STATE(120),
    [aux_sym__lexical_identifier_token2] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(397),
    [aux_sym__lexical_identifier_token1] = ACTIONS(395),
  },
  [121] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(25),
    [sym_class_declaration] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(25),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(65),
    [sym_type_alias] = STATE(25),
    [sym_function_declaration] = STATE(25),
    [sym__statement] = STATE(25),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(25),
    [sym_do_while_statement] = STATE(25),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [122] = {
    [anon_sym_RBRACE] = ACTIONS(402),
    [aux_sym__semi_token1] = ACTIONS(404),
  },
  [123] = {
    [sym_type_alias] = STATE(105),
    [sym_object_declaration] = STATE(105),
    [sym_function_declaration] = STATE(105),
    [aux_sym_class_member_declarations_repeat1] = STATE(123),
    [sym__declaration] = STATE(105),
    [sym_class_declaration] = STATE(105),
    [anon_sym_interface] = ACTIONS(406),
    [anon_sym_typealias] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(406),
    [anon_sym_fun] = ACTIONS(414),
    [anon_sym_object] = ACTIONS(417),
  },
  [124] = {
    [anon_sym_interface] = ACTIONS(420),
    [anon_sym_typealias] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_class] = ACTIONS(420),
    [anon_sym_fun] = ACTIONS(420),
    [anon_sym_object] = ACTIONS(420),
    [aux_sym__semi_token1] = ACTIONS(422),
  },
  [125] = {
    [anon_sym_interface] = ACTIONS(412),
    [anon_sym_typealias] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_fun] = ACTIONS(412),
    [anon_sym_object] = ACTIONS(412),
  },
  [126] = {
    [anon_sym_RBRACE] = ACTIONS(424),
    [aux_sym__semi_token1] = ACTIONS(426),
  },
  [127] = {
    [aux_sym__semi_token1] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(430),
  },
  [128] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(127),
    [sym_for_statement] = STATE(127),
    [sym_assignment] = STATE(127),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(127),
    [sym_class_declaration] = STATE(127),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(127),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [sym_type_alias] = STATE(127),
    [sym_function_declaration] = STATE(127),
    [sym__statement] = STATE(127),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(127),
    [sym_do_while_statement] = STATE(127),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [129] = {
    [sym__semis] = STATE(137),
    [aux_sym__statements_repeat1] = STATE(129),
    [aux_sym__semi_token1] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(430),
  },
  [130] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [131] = {
    [sym_binary_expression] = STATE(139),
    [sym__lexical_identifier] = STATE(15),
    [sym__expression] = STATE(139),
    [sym_simple_identifier] = STATE(33),
    [sym_label] = STATE(6),
    [sym_unary_expression] = STATE(139),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
  },
  [132] = {
    [anon_sym_interface] = ACTIONS(439),
    [anon_sym_typealias] = ACTIONS(439),
    [anon_sym_RBRACE] = ACTIONS(439),
    [anon_sym_class] = ACTIONS(439),
    [anon_sym_fun] = ACTIONS(439),
    [anon_sym_object] = ACTIONS(439),
    [aux_sym__semi_token1] = ACTIONS(441),
  },
  [133] = {
    [anon_sym_interface] = ACTIONS(443),
    [anon_sym_typealias] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_class] = ACTIONS(443),
    [anon_sym_fun] = ACTIONS(443),
    [anon_sym_object] = ACTIONS(443),
    [aux_sym__semi_token1] = ACTIONS(445),
  },
  [134] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [135] = {
    [anon_sym_in] = ACTIONS(449),
  },
  [136] = {
    [sym_binary_expression] = STATE(141),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(141),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(141),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [137] = {
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__loop_statement] = STATE(127),
    [sym_for_statement] = STATE(127),
    [sym_assignment] = STATE(127),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [sym__declaration] = STATE(127),
    [sym_class_declaration] = STATE(127),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_object_declaration] = STATE(127),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [sym_type_alias] = STATE(127),
    [sym_function_declaration] = STATE(127),
    [sym__statement] = STATE(127),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(127),
    [sym_do_while_statement] = STATE(127),
    [sym_unary_expression] = STATE(17),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(451),
    [aux_sym__semi_token1] = ACTIONS(453),
  },
  [139] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK_DOT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_DASH_DASH] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_BANGin] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_BANGis] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(65),
    [aux_sym__semi_token1] = ACTIONS(457),
  },
  [140] = {
    [sym_control_structure_body] = STATE(142),
    [sym__block] = STATE(151),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(385),
    [aux_sym__semi_token1] = ACTIONS(461),
  },
  [141] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(465),
    [aux_sym__semi_token1] = ACTIONS(467),
  },
  [143] = {
    [sym_control_structure_body] = STATE(144),
    [sym__block] = STATE(151),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(385),
    [aux_sym__semi_token1] = ACTIONS(467),
  },
  [144] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [aux_sym__semi_token1] = ACTIONS(471),
  },
  [145] = {
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_DOT_STAR] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DASH_DASH] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(53),
    [anon_sym_PLUS_PLUS] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
  },
  [146] = {
    [aux_sym_identifier_repeat1] = STATE(164),
    [anon_sym_while] = ACTIONS(127),
    [anon_sym_interface] = ACTIONS(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_do] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_fun] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DASH_DASH] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_object] = ACTIONS(127),
    [anon_sym_typealias] = ACTIONS(127),
    [aux_sym__lexical_identifier_token2] = ACTIONS(127),
    [anon_sym_PLUS_PLUS] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(127),
    [aux_sym__semi_token1] = ACTIONS(131),
  },
  [147] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_BANGis] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(139),
    [aux_sym__lexical_identifier_token2] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [148] = {
    [anon_sym_QMARK_COLON] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK_DOT] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_DASH_DASH] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(85),
    [anon_sym_BANGin] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_BANGis] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(91),
    [aux_sym__lexical_identifier_token2] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [aux_sym__lexical_identifier_token1] = ACTIONS(85),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(475),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_PLUS_PLUS] = ACTIONS(91),
  },
  [149] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [150] = {
    [aux_sym__lexical_identifier_token2] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym__lexical_identifier_token1] = ACTIONS(145),
  },
  [151] = {
    [anon_sym_RBRACE] = ACTIONS(477),
    [aux_sym__semi_token1] = ACTIONS(153),
  },
  [152] = {
    [sym_binary_expression] = STATE(167),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(167),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(167),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [153] = {
    [sym_binary_expression] = STATE(168),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(168),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(168),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [154] = {
    [sym_binary_expression] = STATE(169),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(169),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(169),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [155] = {
    [sym_binary_expression] = STATE(170),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(170),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(170),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [156] = {
    [anon_sym_QMARK_COLON] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_DASH_DASH] = ACTIONS(139),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_BANGis] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(139),
    [aux_sym__lexical_identifier_token2] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_PLUS_PLUS] = ACTIONS(139),
  },
  [157] = {
    [sym_binary_expression] = STATE(171),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(171),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(171),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [158] = {
    [sym_binary_expression] = STATE(172),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(172),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(172),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [159] = {
    [sym_binary_expression] = STATE(173),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(173),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(173),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [160] = {
    [sym_binary_expression] = STATE(174),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(174),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(174),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [161] = {
    [sym_binary_expression] = STATE(175),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(175),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(175),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [162] = {
    [sym_binary_expression] = STATE(176),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(176),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(176),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [163] = {
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_DASH_DASH] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(184),
    [aux_sym__lexical_identifier_token2] = ACTIONS(184),
    [anon_sym_PLUS_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(182),
    [aux_sym__lexical_identifier_token1] = ACTIONS(184),
  },
  [164] = {
    [aux_sym_identifier_repeat1] = STATE(178),
    [anon_sym_while] = ACTIONS(298),
    [anon_sym_interface] = ACTIONS(298),
    [aux_sym__lexical_identifier_token1] = ACTIONS(298),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(298),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_object] = ACTIONS(298),
    [anon_sym_typealias] = ACTIONS(298),
    [aux_sym__lexical_identifier_token2] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_for] = ACTIONS(298),
    [aux_sym__semi_token1] = ACTIONS(300),
  },
  [165] = {
    [anon_sym_interface] = ACTIONS(479),
    [anon_sym_typealias] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_class] = ACTIONS(479),
    [anon_sym_fun] = ACTIONS(479),
    [anon_sym_object] = ACTIONS(479),
    [aux_sym__semi_token1] = ACTIONS(302),
  },
  [166] = {
    [sym__lexical_identifier] = STATE(201),
    [sym__type] = STATE(116),
    [sym_simple_identifier] = STATE(116),
    [aux_sym__lexical_identifier_token2] = ACTIONS(481),
    [aux_sym__lexical_identifier_token1] = ACTIONS(481),
  },
  [167] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [168] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [169] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [170] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [171] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(330),
    [aux_sym__lexical_identifier_token2] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [172] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [173] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [174] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [175] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_BANGin] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_BANGis] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [anon_sym_BANG_EQ] = ACTIONS(256),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [176] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(162),
    [anon_sym_QMARK_COLON] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_BANGis] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(254),
    [aux_sym__lexical_identifier_token2] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
  },
  [177] = {
    [anon_sym_while] = ACTIONS(364),
    [anon_sym_interface] = ACTIONS(364),
    [aux_sym__lexical_identifier_token1] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_fun] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DASH_DASH] = ACTIONS(364),
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(364),
    [anon_sym_typealias] = ACTIONS(364),
    [aux_sym__lexical_identifier_token2] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_for] = ACTIONS(364),
    [aux_sym__semi_token1] = ACTIONS(366),
  },
  [178] = {
    [aux_sym_identifier_repeat1] = STATE(178),
    [anon_sym_while] = ACTIONS(364),
    [anon_sym_interface] = ACTIONS(364),
    [aux_sym__lexical_identifier_token1] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_fun] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DASH_DASH] = ACTIONS(364),
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(364),
    [anon_sym_typealias] = ACTIONS(364),
    [aux_sym__lexical_identifier_token2] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_for] = ACTIONS(364),
    [aux_sym__semi_token1] = ACTIONS(366),
  },
  [179] = {
    [anon_sym_interface] = ACTIONS(486),
    [anon_sym_typealias] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_class] = ACTIONS(486),
    [anon_sym_fun] = ACTIONS(486),
    [anon_sym_object] = ACTIONS(486),
    [aux_sym__semi_token1] = ACTIONS(373),
  },
  [180] = {
    [sym_binary_expression] = STATE(181),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(181),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(181),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [181] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_class] = ACTIONS(455),
    [anon_sym_fun] = ACTIONS(455),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(455),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(506),
    [anon_sym_interface] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_typealias] = ACTIONS(455),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(457),
  },
  [182] = {
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_DASH_DASH] = ACTIONS(55),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(55),
    [anon_sym_PLUS_PLUS] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
  },
  [183] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_fun] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_object] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_BANGis] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__lexical_identifier_token2] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_typealias] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [184] = {
    [anon_sym_QMARK_COLON] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK_DOT] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_class] = ACTIONS(85),
    [anon_sym_fun] = ACTIONS(85),
    [anon_sym_DASH_DASH] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(85),
    [anon_sym_object] = ACTIONS(85),
    [anon_sym_BANGin] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_BANGis] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [aux_sym__lexical_identifier_token2] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [aux_sym__lexical_identifier_token1] = ACTIONS(85),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(85),
    [anon_sym_interface] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_typealias] = ACTIONS(85),
    [anon_sym_PLUS_PLUS] = ACTIONS(85),
    [aux_sym__semi_token1] = ACTIONS(91),
  },
  [185] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_fun] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(506),
    [anon_sym_interface] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_typealias] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [186] = {
    [anon_sym_QMARK_COLON] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_fun] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_object] = ACTIONS(137),
    [anon_sym_BANGin] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_BANGis] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__lexical_identifier_token2] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [aux_sym__lexical_identifier_token1] = ACTIONS(137),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_typealias] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [aux_sym__semi_token1] = ACTIONS(139),
  },
  [187] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [188] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [189] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [190] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [191] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(328),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [192] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(506),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [193] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [194] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [195] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANGis] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [aux_sym__lexical_identifier_token1] = ACTIONS(77),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(506),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [196] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(222),
    [anon_sym_QMARK_COLON] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DOT] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_fun] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(328),
    [anon_sym_object] = ACTIONS(328),
    [anon_sym_BANGin] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_BANGis] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [aux_sym__lexical_identifier_token2] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [aux_sym__lexical_identifier_token1] = ACTIONS(328),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_is] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(504),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(502),
    [aux_sym__semi_token1] = ACTIONS(330),
  },
  [197] = {
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_DASH_DASH] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_typealias] = ACTIONS(53),
    [anon_sym_PLUS_PLUS] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
  },
  [198] = {
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_DASH_DASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(55),
    [aux_sym__lexical_identifier_token2] = ACTIONS(55),
    [anon_sym_PLUS_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(55),
  },
  [199] = {
    [anon_sym_QMARK_COLON] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_QMARK_DOT] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_DASH_DASH] = ACTIONS(55),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_BANGin] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_BANGis] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [aux_sym__lexical_identifier_token2] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(55),
    [anon_sym_is] = ACTIONS(53),
    [anon_sym_DOT_DOT] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_PLUS_PLUS] = ACTIONS(55),
  },
  [200] = {
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_in] = ACTIONS(55),
  },
  [201] = {
    [anon_sym_interface] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
  },
  [202] = {
    [anon_sym_QMARK_COLON] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_QMARK_DOT] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_DASH_DASH] = ACTIONS(53),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_BANGin] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_BANGis] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_is] = ACTIONS(53),
    [anon_sym_DOT_DOT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [anon_sym_PLUS_PLUS] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
  },
  [203] = {
    [sym__lexical_identifier] = STATE(201),
    [sym_simple_identifier] = STATE(28),
    [aux_sym__lexical_identifier_token2] = ACTIONS(481),
    [aux_sym__lexical_identifier_token1] = ACTIONS(481),
  },
  [204] = {
    [sym_binary_expression] = STATE(147),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(147),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(147),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [205] = {
    [sym_binary_expression] = STATE(149),
    [sym__lexical_identifier] = STATE(199),
    [sym__expression] = STATE(149),
    [sym_simple_identifier] = STATE(148),
    [sym_label] = STATE(204),
    [sym_unary_expression] = STATE(149),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
  },
  [206] = {
    [sym__lexical_identifier] = STATE(198),
    [sym_simple_identifier] = STATE(150),
    [aux_sym__lexical_identifier_token2] = ACTIONS(268),
    [aux_sym__lexical_identifier_token1] = ACTIONS(268),
  },
  [207] = {
    [sym__lexical_identifier] = STATE(201),
    [sym_simple_identifier] = STATE(42),
    [aux_sym__lexical_identifier_token2] = ACTIONS(481),
    [aux_sym__lexical_identifier_token1] = ACTIONS(481),
  },
  [208] = {
    [sym__statements] = STATE(211),
    [sym__loop_statement] = STATE(78),
    [sym_for_statement] = STATE(78),
    [sym_assignment] = STATE(78),
    [sym__expression] = STATE(17),
    [sym_simple_identifier] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(21),
    [sym_type_alias] = STATE(78),
    [sym_function_declaration] = STATE(78),
    [sym__statement] = STATE(78),
    [sym_label] = STATE(26),
    [sym_while_statement] = STATE(78),
    [sym_do_while_statement] = STATE(78),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym__lexical_identifier] = STATE(15),
    [sym__declaration] = STATE(78),
    [sym_class_declaration] = STATE(78),
    [sym_object_declaration] = STATE(78),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(21),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH_DASH] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_typealias] = ACTIONS(29),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(33),
    [aux_sym__lexical_identifier_token1] = ACTIONS(35),
  },
  [209] = {
    [anon_sym_EQ] = ACTIONS(518),
  },
  [210] = {
    [sym__lexical_identifier] = STATE(197),
    [sym_simple_identifier] = STATE(177),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
  },
  [211] = {
    [anon_sym_RBRACE] = ACTIONS(520),
  },
  [212] = {
    [sym__block] = STATE(132),
    [sym_function_body] = STATE(133),
    [anon_sym_EQ] = ACTIONS(522),
    [anon_sym_interface] = ACTIONS(383),
    [anon_sym_object] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_typealias] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_class] = ACTIONS(383),
    [anon_sym_fun] = ACTIONS(383),
    [aux_sym__semi_token1] = ACTIONS(381),
  },
  [213] = {
    [sym_binary_expression] = STATE(187),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(187),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(187),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [214] = {
    [sym_binary_expression] = STATE(188),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(188),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(188),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [215] = {
    [sym_binary_expression] = STATE(189),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(189),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(189),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [216] = {
    [sym_binary_expression] = STATE(190),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(190),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(190),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [217] = {
    [sym_binary_expression] = STATE(191),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(191),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(191),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [218] = {
    [sym_binary_expression] = STATE(192),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(192),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(192),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [219] = {
    [sym_binary_expression] = STATE(193),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(193),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(193),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [220] = {
    [sym_binary_expression] = STATE(194),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(194),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(194),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [221] = {
    [sym_binary_expression] = STATE(195),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(195),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(195),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [222] = {
    [sym_binary_expression] = STATE(196),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(196),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(196),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [223] = {
    [sym_binary_expression] = STATE(183),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(183),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(183),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [224] = {
    [sym_binary_expression] = STATE(185),
    [sym__lexical_identifier] = STATE(202),
    [sym__expression] = STATE(185),
    [sym_simple_identifier] = STATE(184),
    [sym_label] = STATE(223),
    [sym_unary_expression] = STATE(185),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(492),
    [aux_sym__lexical_identifier_token2] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(490),
    [aux_sym__lexical_identifier_token1] = ACTIONS(494),
  },
  [225] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(209),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(524),
  },
  [227] = {
    [anon_sym_LPAREN] = ACTIONS(526),
  },
  [228] = {
    [sym__lexical_identifier] = STATE(182),
    [sym_simple_identifier] = STATE(227),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(27),
  [39] = {.count = 1, .reusable = true}, SHIFT(145),
  [41] = {.count = 1, .reusable = true}, SHIFT(31),
  [43] = {.count = 1, .reusable = true}, SHIFT(182),
  [45] = {.count = 1, .reusable = true}, SHIFT(36),
  [47] = {.count = 1, .reusable = true}, SHIFT(37),
  [49] = {.count = 1, .reusable = true}, SHIFT(197),
  [51] = {.count = 1, .reusable = true}, SHIFT(44),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_simple_identifier, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_simple_identifier, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(48),
  [61] = {.count = 1, .reusable = false}, SHIFT(49),
  [63] = {.count = 1, .reusable = false}, SHIFT(50),
  [65] = {.count = 1, .reusable = false}, SHIFT(51),
  [67] = {.count = 1, .reusable = false}, SHIFT(52),
  [69] = {.count = 1, .reusable = false}, SHIFT(47),
  [71] = {.count = 1, .reusable = false}, SHIFT(53),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(54),
  [77] = {.count = 1, .reusable = false}, SHIFT(198),
  [79] = {.count = 1, .reusable = false}, SHIFT(55),
  [81] = {.count = 1, .reusable = false}, SHIFT(56),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_directly_assignable_expression, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(58),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(64),
  [95] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [97] = {.count = 1, .reusable = true}, SHIFT(66),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(204),
  [105] = {.count = 1, .reusable = false}, SHIFT(204),
  [107] = {.count = 1, .reusable = true}, SHIFT(205),
  [109] = {.count = 1, .reusable = true}, SHIFT(199),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 2),
  [113] = {.count = 1, .reusable = false}, SHIFT(68),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(72),
  [121] = {.count = 1, .reusable = false}, SHIFT(71),
  [123] = {.count = 1, .reusable = false}, SHIFT(70),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [129] = {.count = 1, .reusable = false}, SHIFT(73),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(163),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(76),
  [151] = {.count = 1, .reusable = true}, SHIFT(79),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_control_structure_body, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(80),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(81),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(83),
  [169] = {.count = 1, .reusable = true}, SHIFT(206),
  [171] = {.count = 1, .reusable = true}, SHIFT(200),
  [173] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(8),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(182),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(182),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(13),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(14),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [244] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(153),
  [248] = {.count = 1, .reusable = false}, SHIFT(154),
  [250] = {.count = 1, .reusable = false}, SHIFT(155),
  [252] = {.count = 1, .reusable = true}, SHIFT(156),
  [254] = {.count = 1, .reusable = true}, SHIFT(157),
  [256] = {.count = 1, .reusable = false}, SHIFT(152),
  [258] = {.count = 1, .reusable = true}, SHIFT(158),
  [260] = {.count = 1, .reusable = false}, SHIFT(159),
  [262] = {.count = 1, .reusable = true}, SHIFT(159),
  [264] = {.count = 1, .reusable = true}, SHIFT(154),
  [266] = {.count = 1, .reusable = false}, SHIFT(156),
  [268] = {.count = 1, .reusable = true}, SHIFT(198),
  [270] = {.count = 1, .reusable = true}, SHIFT(152),
  [272] = {.count = 1, .reusable = true}, SHIFT(160),
  [274] = {.count = 1, .reusable = true}, SHIFT(161),
  [276] = {.count = 1, .reusable = true}, SHIFT(101),
  [278] = {.count = 1, .reusable = true}, SHIFT(203),
  [280] = {.count = 1, .reusable = true}, SHIFT(207),
  [282] = {.count = 1, .reusable = true}, SHIFT(225),
  [284] = {.count = 1, .reusable = true}, SHIFT(102),
  [286] = {.count = 1, .reusable = true}, SHIFT(228),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 3),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 3),
  [294] = {.count = 1, .reusable = true}, SHIFT(106),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym__block, 2),
  [304] = {.count = 1, .reusable = true}, SHIFT(111),
  [306] = {.count = 1, .reusable = true}, SHIFT(112),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym__statements, 1),
  [310] = {.count = 1, .reusable = true}, SHIFT(114),
  [312] = {.count = 1, .reusable = true}, SHIFT(115),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 3),
  [322] = {.count = 1, .reusable = true}, SHIFT(117),
  [324] = {.count = 1, .reusable = true}, SHIFT(118),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 1),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [334] = {.count = 1, .reusable = true}, SHIFT(58),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [340] = {.count = 1, .reusable = true}, SHIFT(122),
  [342] = {.count = 1, .reusable = true}, SHIFT(208),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 2),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_class_member_declarations, 1),
  [350] = {.count = 1, .reusable = true}, SHIFT(124),
  [352] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_member_declarations_repeat1, 1),
  [354] = {.count = 1, .reusable = true}, SHIFT(125),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 4),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 4),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_import_alias, 2),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_import_alias, 2),
  [364] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(73),
  [371] = {.count = 1, .reusable = true}, SHIFT(126),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__block, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym__statements, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(128),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__statements, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 4),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 4),
  [385] = {.count = 1, .reusable = false}, SHIFT(208),
  [387] = {.count = 1, .reusable = false}, SHIFT(131),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias, 4),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 4),
  [393] = {.count = 1, .reusable = true}, SHIFT(136),
  [395] = {.count = 1, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(206),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 5),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(203),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(225),
  [412] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(228),
  [417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(207),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 5),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 5),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym__statements_repeat1, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statements_repeat1, 2),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym__statements, 3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(137),
  [437] = {.count = 1, .reusable = true}, SHIFT(138),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 5),
  [447] = {.count = 1, .reusable = true}, SHIFT(140),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 6),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 6),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 6),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 6),
  [463] = {.count = 1, .reusable = true}, SHIFT(143),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 7),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 7),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 8),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 8),
  [473] = {.count = 1, .reusable = false}, SHIFT(210),
  [475] = {.count = 1, .reusable = true}, SHIFT(163),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_control_structure_body, 1),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__block, 2),
  [481] = {.count = 1, .reusable = true}, SHIFT(201),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(210),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym__block, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(223),
  [490] = {.count = 1, .reusable = false}, SHIFT(223),
  [492] = {.count = 1, .reusable = true}, SHIFT(224),
  [494] = {.count = 1, .reusable = true}, SHIFT(202),
  [496] = {.count = 1, .reusable = false}, SHIFT(214),
  [498] = {.count = 1, .reusable = false}, SHIFT(215),
  [500] = {.count = 1, .reusable = false}, SHIFT(216),
  [502] = {.count = 1, .reusable = false}, SHIFT(186),
  [504] = {.count = 1, .reusable = false}, SHIFT(217),
  [506] = {.count = 1, .reusable = false}, SHIFT(213),
  [508] = {.count = 1, .reusable = false}, SHIFT(218),
  [510] = {.count = 1, .reusable = false}, SHIFT(219),
  [512] = {.count = 1, .reusable = false}, SHIFT(220),
  [514] = {.count = 1, .reusable = false}, SHIFT(221),
  [516] = {.count = 1, .reusable = true}, SHIFT(165),
  [518] = {.count = 1, .reusable = true}, SHIFT(166),
  [520] = {.count = 1, .reusable = true}, SHIFT(179),
  [522] = {.count = 1, .reusable = false}, SHIFT(180),
  [524] = {.count = 1, .reusable = true}, SHIFT(212),
  [526] = {.count = 1, .reusable = true}, SHIFT(226),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kotlin(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
