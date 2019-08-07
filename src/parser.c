#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 143
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_for = 18,
  anon_sym_in = 19,
  anon_sym_while = 20,
  anon_sym_SEMI = 21,
  anon_sym_do = 22,
  aux_sym__semi_token1 = 23,
  anon_sym_AT = 24,
  anon_sym_DOT = 25,
  aux_sym__lexical_identifier_token1 = 26,
  aux_sym__lexical_identifier_token2 = 27,
  sym_source_file = 28,
  sym_shebang_line = 29,
  sym_package_header = 30,
  sym_import_header = 31,
  sym_import_alias = 32,
  sym_type_alias = 33,
  sym__declaration = 34,
  sym_class_declaration = 35,
  sym_class_body = 36,
  sym_class_member_declarations = 37,
  sym_variable_declaration = 38,
  sym_function_declaration = 39,
  sym_function_body = 40,
  sym_object_declaration = 41,
  sym__type = 42,
  sym__statements = 43,
  sym__statement = 44,
  sym_label = 45,
  sym_control_structure_body = 46,
  sym__block = 47,
  sym__loop_statement = 48,
  sym_for_statement = 49,
  sym_while_statement = 50,
  sym_do_while_statement = 51,
  sym__semi = 52,
  sym__semis = 53,
  sym_assignment = 54,
  sym__expression = 55,
  sym_directly_assignable_expression = 56,
  sym_annotation = 57,
  sym_simple_identifier = 58,
  sym_identifier = 59,
  sym__lexical_identifier = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_source_file_repeat2 = 62,
  aux_sym_class_member_declarations_repeat1 = 63,
  aux_sym__statements_repeat1 = 64,
  aux_sym__statement_repeat1 = 65,
  aux_sym_for_statement_repeat1 = 66,
  aux_sym_identifier_repeat1 = 67,
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
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_SEMI] = ";",
  [anon_sym_do] = "do",
  [aux_sym__semi_token1] = "_semi_token1",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(70);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(10);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_typealias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__semi_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'j') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'k') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 9},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [aux_sym__lexical_identifier_token2] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(13),
    [sym_import_header] = STATE(16),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym_shebang_line] = STATE(14),
    [sym_package_header] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym__declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_source_file] = STATE(19),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_type_alias] = STATE(21),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_package] = ACTIONS(15),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [2] = {
    [sym_simple_identifier] = STATE(23),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym__lexical_identifier_token1] = ACTIONS(9),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
  },
  [3] = {
    [sym_simple_identifier] = STATE(24),
    [sym_identifier] = STATE(25),
    [sym__lexical_identifier] = STATE(116),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
  },
  [4] = {
    [aux_sym_shebang_line_token1] = ACTIONS(33),
  },
  [5] = {
    [sym_simple_identifier] = STATE(27),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym__lexical_identifier_token1] = ACTIONS(9),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(35),
  },
  [7] = {
    [sym_control_structure_body] = STATE(31),
    [sym__block] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_while] = ACTIONS(39),
  },
  [8] = {
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [9] = {
    [sym_simple_identifier] = STATE(34),
    [sym__lexical_identifier] = STATE(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [10] = {
    [sym_simple_identifier] = STATE(35),
    [sym__lexical_identifier] = STATE(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [11] = {
    [sym_simple_identifier] = STATE(117),
    [sym_identifier] = STATE(36),
    [sym__lexical_identifier] = STATE(128),
    [aux_sym__lexical_identifier_token1] = ACTIONS(45),
    [aux_sym__lexical_identifier_token2] = ACTIONS(45),
  },
  [12] = {
    [sym_simple_identifier] = STATE(37),
    [sym__lexical_identifier] = STATE(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [13] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [14] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(40),
    [aux_sym_source_file_repeat2] = STATE(39),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_package_header] = STATE(41),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_package] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(29),
  },
  [15] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(40),
    [aux_sym_source_file_repeat2] = STATE(39),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [16] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(42),
    [aux_sym_source_file_repeat2] = STATE(39),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [17] = {
    [anon_sym_interface] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(49),
    [aux_sym__semi_token1] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_fun] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_object] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_typealias] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
  },
  [18] = {
    [anon_sym_interface] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(53),
    [aux_sym__semi_token1] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(59),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [20] = {
    [sym_annotation] = STATE(44),
    [sym__loop_statement] = STATE(43),
    [sym_for_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym__expression] = STATE(43),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_object_declaration] = STATE(43),
    [sym_simple_identifier] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(44),
    [sym_type_alias] = STATE(43),
    [sym_function_declaration] = STATE(43),
    [sym_label] = STATE(44),
    [sym_while_statement] = STATE(43),
    [sym_do_while_statement] = STATE(43),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [21] = {
    [sym__semi] = STATE(45),
    [aux_sym__semi_token1] = ACTIONS(63),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(65),
  },
  [23] = {
    [sym_class_body] = STATE(48),
    [anon_sym_interface] = ACTIONS(67),
    [anon_sym_object] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym__semi_token1] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_typealias] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(67),
    [anon_sym_fun] = ACTIONS(67),
  },
  [24] = {
    [aux_sym_identifier_repeat1] = STATE(50),
    [anon_sym_interface] = ACTIONS(73),
    [anon_sym_import] = ACTIONS(73),
    [anon_sym_as] = ACTIONS(73),
    [aux_sym__lexical_identifier_token2] = ACTIONS(73),
    [anon_sym_for] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(73),
    [anon_sym_fun] = ACTIONS(73),
    [anon_sym_DOT_STAR] = ACTIONS(73),
    [aux_sym__lexical_identifier_token1] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(73),
    [anon_sym_object] = ACTIONS(73),
    [anon_sym_do] = ACTIONS(73),
    [anon_sym_typealias] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(73),
  },
  [25] = {
    [sym_import_alias] = STATE(51),
    [sym__semi] = STATE(53),
    [anon_sym_interface] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(81),
    [aux_sym__lexical_identifier_token2] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(79),
    [aux_sym__semi_token1] = ACTIONS(83),
    [anon_sym_class] = ACTIONS(79),
    [anon_sym_fun] = ACTIONS(79),
    [anon_sym_DOT_STAR] = ACTIONS(85),
    [aux_sym__lexical_identifier_token1] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_object] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(79),
    [anon_sym_typealias] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
  },
  [26] = {
    [anon_sym_interface] = ACTIONS(89),
    [aux_sym__lexical_identifier_token1] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [aux_sym__lexical_identifier_token2] = ACTIONS(91),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_typealias] = ACTIONS(89),
    [anon_sym_class] = ACTIONS(89),
    [anon_sym_fun] = ACTIONS(89),
    [anon_sym_package] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(91),
  },
  [27] = {
    [sym_class_body] = STATE(54),
    [anon_sym_interface] = ACTIONS(93),
    [anon_sym_object] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(69),
    [aux_sym__semi_token1] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_typealias] = ACTIONS(93),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_fun] = ACTIONS(93),
  },
  [28] = {
    [sym__expression] = STATE(55),
    [sym__lexical_identifier] = STATE(127),
    [sym_simple_identifier] = STATE(55),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [29] = {
    [sym_annotation] = STATE(20),
    [sym__statements] = STATE(57),
    [sym__loop_statement] = STATE(58),
    [sym_for_statement] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym__expression] = STATE(58),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(58),
    [sym_class_declaration] = STATE(58),
    [sym_object_declaration] = STATE(58),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(58),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(58),
    [sym__statement] = STATE(58),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(58),
    [sym_do_while_statement] = STATE(58),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(99),
  },
  [31] = {
    [anon_sym_while] = ACTIONS(101),
  },
  [32] = {
    [anon_sym_while] = ACTIONS(103),
  },
  [33] = {
    [sym_annotation] = STATE(63),
    [sym_simple_identifier] = STATE(62),
    [sym_variable_declaration] = STATE(61),
    [sym__lexical_identifier] = STATE(130),
    [aux_sym_for_statement_repeat1] = STATE(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(107),
  },
  [34] = {
    [anon_sym_EQ] = ACTIONS(109),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(111),
  },
  [36] = {
    [sym__semi] = STATE(66),
    [anon_sym_interface] = ACTIONS(113),
    [aux_sym__lexical_identifier_token1] = ACTIONS(113),
    [anon_sym_import] = ACTIONS(113),
    [anon_sym_object] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_do] = ACTIONS(113),
    [aux_sym__lexical_identifier_token2] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_for] = ACTIONS(113),
    [anon_sym_typealias] = ACTIONS(113),
    [aux_sym__semi_token1] = ACTIONS(117),
    [anon_sym_class] = ACTIONS(113),
    [anon_sym_fun] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
  },
  [37] = {
    [anon_sym_interface] = ACTIONS(119),
    [aux_sym__lexical_identifier_token1] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_object] = ACTIONS(119),
    [anon_sym_do] = ACTIONS(119),
    [aux_sym__lexical_identifier_token2] = ACTIONS(121),
    [anon_sym_for] = ACTIONS(119),
    [anon_sym_typealias] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(119),
    [anon_sym_fun] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(121),
  },
  [38] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(123),
    [aux_sym__lexical_identifier_token1] = ACTIONS(126),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_object] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(135),
    [aux_sym__lexical_identifier_token2] = ACTIONS(138),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(143),
    [anon_sym_typealias] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(123),
    [anon_sym_fun] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(152),
  },
  [39] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [40] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(42),
    [aux_sym_source_file_repeat2] = STATE(67),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [41] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(68),
    [aux_sym_source_file_repeat2] = STATE(67),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(68),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [42] = {
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym_import_header] = STATE(42),
    [anon_sym_interface] = ACTIONS(157),
    [aux_sym__lexical_identifier_token1] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [aux_sym__lexical_identifier_token2] = ACTIONS(162),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_typealias] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_fun] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(162),
  },
  [43] = {
    [aux_sym__semi_token1] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(166),
  },
  [44] = {
    [sym_annotation] = STATE(44),
    [aux_sym__statement_repeat1] = STATE(44),
    [sym__lexical_identifier] = STATE(127),
    [sym_label] = STATE(44),
    [sym_simple_identifier] = STATE(69),
    [anon_sym_interface] = ACTIONS(168),
    [aux_sym__lexical_identifier_token1] = ACTIONS(170),
    [anon_sym_while] = ACTIONS(168),
    [anon_sym_object] = ACTIONS(168),
    [anon_sym_do] = ACTIONS(168),
    [aux_sym__lexical_identifier_token2] = ACTIONS(173),
    [anon_sym_for] = ACTIONS(168),
    [anon_sym_typealias] = ACTIONS(168),
    [anon_sym_class] = ACTIONS(168),
    [anon_sym_fun] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(176),
  },
  [45] = {
    [anon_sym_interface] = ACTIONS(179),
    [aux_sym__lexical_identifier_token1] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_object] = ACTIONS(179),
    [anon_sym_do] = ACTIONS(179),
    [aux_sym__lexical_identifier_token2] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(179),
    [anon_sym_typealias] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_fun] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(141),
  },
  [46] = {
    [sym__expression] = STATE(70),
    [sym__lexical_identifier] = STATE(17),
    [sym_simple_identifier] = STATE(70),
    [aux_sym__lexical_identifier_token1] = ACTIONS(9),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
  },
  [47] = {
    [sym_object_declaration] = STATE(74),
    [aux_sym_class_member_declarations_repeat1] = STATE(72),
    [sym_class_member_declarations] = STATE(73),
    [sym_type_alias] = STATE(74),
    [sym_function_declaration] = STATE(74),
    [sym__declaration] = STATE(74),
    [sym_class_declaration] = STATE(74),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_object] = ACTIONS(183),
    [anon_sym_typealias] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_fun] = ACTIONS(189),
  },
  [48] = {
    [anon_sym_interface] = ACTIONS(191),
    [aux_sym__semi_token1] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_typealias] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(191),
    [anon_sym_fun] = ACTIONS(191),
    [anon_sym_object] = ACTIONS(191),
  },
  [49] = {
    [sym_simple_identifier] = STATE(75),
    [sym__lexical_identifier] = STATE(116),
    [aux_sym__lexical_identifier_token1] = ACTIONS(31),
    [aux_sym__lexical_identifier_token2] = ACTIONS(31),
  },
  [50] = {
    [aux_sym_identifier_repeat1] = STATE(76),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_import] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(195),
    [aux_sym__lexical_identifier_token2] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(195),
    [aux_sym__semi_token1] = ACTIONS(197),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_fun] = ACTIONS(195),
    [anon_sym_DOT_STAR] = ACTIONS(195),
    [aux_sym__lexical_identifier_token1] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_object] = ACTIONS(195),
    [anon_sym_do] = ACTIONS(195),
    [anon_sym_typealias] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(195),
  },
  [51] = {
    [sym__semi] = STATE(77),
    [anon_sym_interface] = ACTIONS(199),
    [aux_sym__lexical_identifier_token1] = ACTIONS(199),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_object] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_do] = ACTIONS(199),
    [aux_sym__lexical_identifier_token2] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_for] = ACTIONS(199),
    [anon_sym_typealias] = ACTIONS(199),
    [aux_sym__semi_token1] = ACTIONS(203),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_fun] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
  },
  [52] = {
    [sym_simple_identifier] = STATE(78),
    [sym__lexical_identifier] = STATE(128),
    [aux_sym__lexical_identifier_token1] = ACTIONS(45),
    [aux_sym__lexical_identifier_token2] = ACTIONS(45),
  },
  [53] = {
    [anon_sym_interface] = ACTIONS(199),
    [aux_sym__lexical_identifier_token1] = ACTIONS(199),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_object] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_do] = ACTIONS(199),
    [aux_sym__lexical_identifier_token2] = ACTIONS(201),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_for] = ACTIONS(199),
    [anon_sym_typealias] = ACTIONS(199),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_fun] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(201),
  },
  [54] = {
    [anon_sym_interface] = ACTIONS(205),
    [aux_sym__semi_token1] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_typealias] = ACTIONS(205),
    [anon_sym_class] = ACTIONS(205),
    [anon_sym_fun] = ACTIONS(205),
    [anon_sym_object] = ACTIONS(205),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(209),
  },
  [56] = {
    [anon_sym_while] = ACTIONS(211),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [58] = {
    [sym__semis] = STATE(81),
    [aux_sym__statements_repeat1] = STATE(82),
    [aux_sym__semi_token1] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [59] = {
    [sym__expression] = STATE(83),
    [sym__lexical_identifier] = STATE(127),
    [sym_simple_identifier] = STATE(83),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(219),
  },
  [61] = {
    [anon_sym_in] = ACTIONS(221),
  },
  [62] = {
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_in] = ACTIONS(225),
  },
  [63] = {
    [sym_annotation] = STATE(88),
    [sym_simple_identifier] = STATE(62),
    [sym_variable_declaration] = STATE(87),
    [sym__lexical_identifier] = STATE(130),
    [aux_sym_for_statement_repeat1] = STATE(88),
    [aux_sym__lexical_identifier_token1] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(107),
  },
  [64] = {
    [sym__lexical_identifier] = STATE(17),
    [sym_simple_identifier] = STATE(89),
    [sym__type] = STATE(89),
    [aux_sym__lexical_identifier_token1] = ACTIONS(9),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(227),
  },
  [66] = {
    [anon_sym_interface] = ACTIONS(229),
    [aux_sym__lexical_identifier_token1] = ACTIONS(229),
    [anon_sym_import] = ACTIONS(229),
    [anon_sym_object] = ACTIONS(229),
    [anon_sym_while] = ACTIONS(229),
    [anon_sym_do] = ACTIONS(229),
    [aux_sym__lexical_identifier_token2] = ACTIONS(231),
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_for] = ACTIONS(229),
    [anon_sym_typealias] = ACTIONS(229),
    [anon_sym_class] = ACTIONS(229),
    [anon_sym_fun] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(231),
  },
  [67] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [68] = {
    [sym_annotation] = STATE(20),
    [sym_import_header] = STATE(42),
    [aux_sym_source_file_repeat2] = STATE(91),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [69] = {
    [anon_sym_interface] = ACTIONS(53),
    [aux_sym__lexical_identifier_token1] = ACTIONS(53),
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(53),
    [aux_sym__lexical_identifier_token2] = ACTIONS(235),
    [anon_sym_for] = ACTIONS(53),
    [anon_sym_typealias] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(53),
    [anon_sym_fun] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(235),
  },
  [70] = {
    [aux_sym__semi_token1] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(239),
  },
  [71] = {
    [anon_sym_interface] = ACTIONS(241),
    [aux_sym__semi_token1] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_typealias] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_fun] = ACTIONS(241),
    [anon_sym_object] = ACTIONS(241),
  },
  [72] = {
    [sym_type_alias] = STATE(74),
    [sym_object_declaration] = STATE(74),
    [sym_function_declaration] = STATE(74),
    [aux_sym_class_member_declarations_repeat1] = STATE(92),
    [sym__declaration] = STATE(74),
    [sym_class_declaration] = STATE(74),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_typealias] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_fun] = ACTIONS(189),
    [anon_sym_object] = ACTIONS(183),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [74] = {
    [sym__semis] = STATE(94),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_typealias] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_class] = ACTIONS(249),
    [anon_sym_fun] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [aux_sym__semi_token1] = ACTIONS(251),
  },
  [75] = {
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [aux_sym__lexical_identifier_token2] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [aux_sym__semi_token1] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_fun] = ACTIONS(253),
    [anon_sym_DOT_STAR] = ACTIONS(253),
    [aux_sym__lexical_identifier_token1] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_typealias] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
  },
  [76] = {
    [aux_sym_identifier_repeat1] = STATE(76),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [aux_sym__lexical_identifier_token2] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [aux_sym__semi_token1] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_fun] = ACTIONS(253),
    [anon_sym_DOT_STAR] = ACTIONS(253),
    [aux_sym__lexical_identifier_token1] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_typealias] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(253),
  },
  [77] = {
    [anon_sym_interface] = ACTIONS(260),
    [aux_sym__lexical_identifier_token1] = ACTIONS(260),
    [anon_sym_import] = ACTIONS(260),
    [anon_sym_object] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(260),
    [anon_sym_do] = ACTIONS(260),
    [aux_sym__lexical_identifier_token2] = ACTIONS(262),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_for] = ACTIONS(260),
    [anon_sym_typealias] = ACTIONS(260),
    [anon_sym_class] = ACTIONS(260),
    [anon_sym_fun] = ACTIONS(260),
    [anon_sym_AT] = ACTIONS(262),
  },
  [78] = {
    [anon_sym_interface] = ACTIONS(264),
    [aux_sym__lexical_identifier_token1] = ACTIONS(264),
    [anon_sym_import] = ACTIONS(264),
    [anon_sym_object] = ACTIONS(264),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_do] = ACTIONS(264),
    [aux_sym__lexical_identifier_token2] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_for] = ACTIONS(264),
    [anon_sym_typealias] = ACTIONS(264),
    [aux_sym__semi_token1] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(264),
    [anon_sym_fun] = ACTIONS(264),
    [anon_sym_AT] = ACTIONS(264),
  },
  [79] = {
    [sym_control_structure_body] = STATE(95),
    [sym__block] = STATE(118),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(270),
  },
  [80] = {
    [anon_sym_while] = ACTIONS(272),
  },
  [81] = {
    [sym_annotation] = STATE(20),
    [sym__loop_statement] = STATE(96),
    [sym_for_statement] = STATE(96),
    [sym_assignment] = STATE(96),
    [sym__expression] = STATE(96),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(96),
    [sym_class_declaration] = STATE(96),
    [sym_object_declaration] = STATE(96),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(96),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(96),
    [sym__statement] = STATE(96),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(96),
    [sym_do_while_statement] = STATE(96),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [82] = {
    [sym__semis] = STATE(97),
    [aux_sym__statements_repeat1] = STATE(98),
    [aux_sym__semi_token1] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(278),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(280),
  },
  [84] = {
    [sym__expression] = STATE(100),
    [sym__lexical_identifier] = STATE(127),
    [sym_simple_identifier] = STATE(100),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [85] = {
    [sym__expression] = STATE(101),
    [sym__lexical_identifier] = STATE(127),
    [sym_simple_identifier] = STATE(101),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [86] = {
    [sym_simple_identifier] = STATE(102),
    [sym__type] = STATE(102),
    [sym__lexical_identifier] = STATE(130),
    [aux_sym__lexical_identifier_token1] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(105),
  },
  [87] = {
    [anon_sym_in] = ACTIONS(282),
  },
  [88] = {
    [sym_annotation] = STATE(88),
    [aux_sym_for_statement_repeat1] = STATE(88),
    [aux_sym__lexical_identifier_token1] = ACTIONS(284),
    [aux_sym__lexical_identifier_token2] = ACTIONS(284),
    [anon_sym_AT] = ACTIONS(286),
  },
  [89] = {
    [anon_sym_interface] = ACTIONS(289),
    [aux_sym__semi_token1] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_typealias] = ACTIONS(289),
    [anon_sym_class] = ACTIONS(289),
    [anon_sym_fun] = ACTIONS(289),
    [anon_sym_object] = ACTIONS(289),
  },
  [90] = {
    [sym__block] = STATE(105),
    [sym_function_body] = STATE(106),
    [aux_sym__semi_token1] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(299),
  },
  [91] = {
    [sym_annotation] = STATE(20),
    [aux_sym_source_file_repeat2] = STATE(38),
    [sym__loop_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_assignment] = STATE(21),
    [sym__expression] = STATE(21),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [sym_object_declaration] = STATE(21),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(21),
    [sym_do_while_statement] = STATE(21),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [92] = {
    [sym_type_alias] = STATE(74),
    [sym_object_declaration] = STATE(74),
    [sym_function_declaration] = STATE(74),
    [aux_sym_class_member_declarations_repeat1] = STATE(92),
    [sym__declaration] = STATE(74),
    [sym_class_declaration] = STATE(74),
    [anon_sym_interface] = ACTIONS(303),
    [anon_sym_typealias] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_fun] = ACTIONS(311),
    [anon_sym_object] = ACTIONS(314),
  },
  [93] = {
    [anon_sym_interface] = ACTIONS(317),
    [aux_sym__semi_token1] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_typealias] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_fun] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
  },
  [94] = {
    [anon_sym_interface] = ACTIONS(309),
    [anon_sym_typealias] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_class] = ACTIONS(309),
    [anon_sym_fun] = ACTIONS(309),
    [anon_sym_object] = ACTIONS(309),
  },
  [95] = {
    [aux_sym__semi_token1] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(323),
  },
  [96] = {
    [aux_sym__semi_token1] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [97] = {
    [sym_annotation] = STATE(20),
    [sym__loop_statement] = STATE(96),
    [sym_for_statement] = STATE(96),
    [sym_assignment] = STATE(96),
    [sym__expression] = STATE(96),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(96),
    [sym_class_declaration] = STATE(96),
    [sym_object_declaration] = STATE(96),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(96),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(96),
    [sym__statement] = STATE(96),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(96),
    [sym_do_while_statement] = STATE(96),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [98] = {
    [sym__semis] = STATE(107),
    [aux_sym__statements_repeat1] = STATE(98),
    [aux_sym__semi_token1] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [99] = {
    [aux_sym__semi_token1] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(336),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(338),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(340),
  },
  [102] = {
    [anon_sym_in] = ACTIONS(342),
  },
  [103] = {
    [sym__expression] = STATE(110),
    [sym__lexical_identifier] = STATE(127),
    [sym_simple_identifier] = STATE(110),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [104] = {
    [sym__expression] = STATE(111),
    [sym__lexical_identifier] = STATE(17),
    [sym_simple_identifier] = STATE(111),
    [aux_sym__lexical_identifier_token1] = ACTIONS(9),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
  },
  [105] = {
    [anon_sym_interface] = ACTIONS(344),
    [aux_sym__semi_token1] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_typealias] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_fun] = ACTIONS(344),
    [anon_sym_object] = ACTIONS(344),
  },
  [106] = {
    [anon_sym_interface] = ACTIONS(348),
    [aux_sym__semi_token1] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_typealias] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_fun] = ACTIONS(348),
    [anon_sym_object] = ACTIONS(348),
  },
  [107] = {
    [sym_annotation] = STATE(20),
    [sym__loop_statement] = STATE(96),
    [sym_for_statement] = STATE(96),
    [sym_assignment] = STATE(96),
    [sym__expression] = STATE(96),
    [sym__lexical_identifier] = STATE(17),
    [sym__declaration] = STATE(96),
    [sym_class_declaration] = STATE(96),
    [sym_object_declaration] = STATE(96),
    [sym_simple_identifier] = STATE(18),
    [sym_type_alias] = STATE(96),
    [aux_sym__statement_repeat1] = STATE(20),
    [sym_function_declaration] = STATE(96),
    [sym__statement] = STATE(96),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(96),
    [sym_do_while_statement] = STATE(96),
    [sym_directly_assignable_expression] = STATE(22),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [108] = {
    [aux_sym__semi_token1] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(354),
  },
  [109] = {
    [sym_control_structure_body] = STATE(112),
    [sym__block] = STATE(118),
    [aux_sym__semi_token1] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(297),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [111] = {
    [anon_sym_interface] = ACTIONS(362),
    [aux_sym__semi_token1] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_typealias] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_fun] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
  },
  [112] = {
    [aux_sym__semi_token1] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(368),
  },
  [113] = {
    [sym_control_structure_body] = STATE(114),
    [sym__block] = STATE(118),
    [aux_sym__semi_token1] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(297),
  },
  [114] = {
    [aux_sym__semi_token1] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(372),
  },
  [115] = {
    [sym_simple_identifier] = STATE(27),
    [sym__lexical_identifier] = STATE(129),
    [aux_sym__lexical_identifier_token1] = ACTIONS(374),
    [aux_sym__lexical_identifier_token2] = ACTIONS(374),
  },
  [116] = {
    [anon_sym_interface] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(49),
    [aux_sym__semi_token1] = ACTIONS(51),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_fun] = ACTIONS(49),
    [anon_sym_DOT_STAR] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_object] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_typealias] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
  },
  [117] = {
    [aux_sym_identifier_repeat1] = STATE(120),
    [anon_sym_interface] = ACTIONS(73),
    [anon_sym_import] = ACTIONS(73),
    [aux_sym__lexical_identifier_token2] = ACTIONS(73),
    [anon_sym_for] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(73),
    [anon_sym_fun] = ACTIONS(73),
    [aux_sym__lexical_identifier_token1] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(73),
    [anon_sym_object] = ACTIONS(73),
    [anon_sym_do] = ACTIONS(73),
    [anon_sym_typealias] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(73),
  },
  [118] = {
    [aux_sym__semi_token1] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(378),
  },
  [119] = {
    [aux_sym__lexical_identifier_token1] = ACTIONS(121),
    [aux_sym__lexical_identifier_token2] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
  },
  [120] = {
    [aux_sym_identifier_repeat1] = STATE(124),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_import] = ACTIONS(195),
    [aux_sym__lexical_identifier_token2] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(195),
    [aux_sym__semi_token1] = ACTIONS(197),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_fun] = ACTIONS(195),
    [aux_sym__lexical_identifier_token1] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_object] = ACTIONS(195),
    [anon_sym_do] = ACTIONS(195),
    [anon_sym_typealias] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(195),
  },
  [121] = {
    [anon_sym_interface] = ACTIONS(380),
    [aux_sym__semi_token1] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_typealias] = ACTIONS(380),
    [anon_sym_class] = ACTIONS(380),
    [anon_sym_fun] = ACTIONS(380),
    [anon_sym_object] = ACTIONS(380),
  },
  [122] = {
    [sym_simple_identifier] = STATE(89),
    [sym__type] = STATE(89),
    [sym__lexical_identifier] = STATE(129),
    [aux_sym__lexical_identifier_token1] = ACTIONS(374),
    [aux_sym__lexical_identifier_token2] = ACTIONS(374),
  },
  [123] = {
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [aux_sym__lexical_identifier_token2] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [aux_sym__semi_token1] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_fun] = ACTIONS(253),
    [aux_sym__lexical_identifier_token1] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_typealias] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
  },
  [124] = {
    [aux_sym_identifier_repeat1] = STATE(124),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [aux_sym__lexical_identifier_token2] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [aux_sym__semi_token1] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_fun] = ACTIONS(253),
    [aux_sym__lexical_identifier_token1] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_typealias] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(253),
  },
  [125] = {
    [anon_sym_interface] = ACTIONS(385),
    [aux_sym__semi_token1] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_typealias] = ACTIONS(385),
    [anon_sym_class] = ACTIONS(385),
    [anon_sym_fun] = ACTIONS(385),
    [anon_sym_object] = ACTIONS(385),
  },
  [126] = {
    [sym_simple_identifier] = STATE(111),
    [sym__expression] = STATE(111),
    [sym__lexical_identifier] = STATE(129),
    [aux_sym__lexical_identifier_token1] = ACTIONS(374),
    [aux_sym__lexical_identifier_token2] = ACTIONS(374),
  },
  [127] = {
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_interface] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_object] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_typealias] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_fun] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
  },
  [128] = {
    [anon_sym_interface] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(49),
    [aux_sym__semi_token1] = ACTIONS(51),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_fun] = ACTIONS(49),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_object] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_typealias] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
  },
  [129] = {
    [anon_sym_interface] = ACTIONS(49),
    [anon_sym_object] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_typealias] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_fun] = ACTIONS(49),
    [aux_sym__semi_token1] = ACTIONS(51),
  },
  [130] = {
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(51),
  },
  [131] = {
    [aux_sym__lexical_identifier_token1] = ACTIONS(51),
    [aux_sym__lexical_identifier_token2] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(51),
  },
  [132] = {
    [sym_simple_identifier] = STATE(23),
    [sym__lexical_identifier] = STATE(129),
    [aux_sym__lexical_identifier_token1] = ACTIONS(374),
    [aux_sym__lexical_identifier_token2] = ACTIONS(374),
  },
  [133] = {
    [sym_simple_identifier] = STATE(119),
    [sym__lexical_identifier] = STATE(131),
    [aux_sym__lexical_identifier_token1] = ACTIONS(387),
    [aux_sym__lexical_identifier_token2] = ACTIONS(387),
  },
  [134] = {
    [sym__statements] = STATE(137),
    [sym__loop_statement] = STATE(58),
    [sym_for_statement] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym__expression] = STATE(58),
    [sym__lexical_identifier] = STATE(17),
    [sym_type_alias] = STATE(58),
    [sym_function_declaration] = STATE(58),
    [sym__statement] = STATE(58),
    [sym_label] = STATE(20),
    [sym_while_statement] = STATE(58),
    [sym_do_while_statement] = STATE(58),
    [sym_directly_assignable_expression] = STATE(22),
    [sym_annotation] = STATE(20),
    [sym__declaration] = STATE(58),
    [sym_class_declaration] = STATE(58),
    [sym_object_declaration] = STATE(58),
    [sym_simple_identifier] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(20),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym__lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [135] = {
    [anon_sym_EQ] = ACTIONS(391),
  },
  [136] = {
    [sym_simple_identifier] = STATE(123),
    [sym__lexical_identifier] = STATE(128),
    [aux_sym__lexical_identifier_token1] = ACTIONS(45),
    [aux_sym__lexical_identifier_token2] = ACTIONS(45),
  },
  [137] = {
    [anon_sym_RBRACE] = ACTIONS(393),
  },
  [138] = {
    [sym__block] = STATE(105),
    [sym_function_body] = STATE(106),
    [anon_sym_interface] = ACTIONS(295),
    [anon_sym_object] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_typealias] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(295),
    [anon_sym_fun] = ACTIONS(295),
    [aux_sym__semi_token1] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(395),
  },
  [139] = {
    [sym_simple_identifier] = STATE(135),
    [sym__lexical_identifier] = STATE(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(397),
  },
  [141] = {
    [anon_sym_LPAREN] = ACTIONS(399),
  },
  [142] = {
    [sym_simple_identifier] = STATE(141),
    [sym__lexical_identifier] = STATE(127),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(17),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = false}, SHIFT(10),
  [15] = {.count = 1, .reusable = false}, SHIFT(11),
  [17] = {.count = 1, .reusable = false}, SHIFT(17),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [21] = {.count = 1, .reusable = false}, SHIFT(6),
  [23] = {.count = 1, .reusable = false}, SHIFT(5),
  [25] = {.count = 1, .reusable = false}, SHIFT(7),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(116),
  [33] = {.count = 1, .reusable = true}, SHIFT(26),
  [35] = {.count = 1, .reusable = true}, SHIFT(28),
  [37] = {.count = 1, .reusable = true}, SHIFT(29),
  [39] = {.count = 1, .reusable = true}, SHIFT(30),
  [41] = {.count = 1, .reusable = true}, SHIFT(33),
  [43] = {.count = 1, .reusable = true}, SHIFT(127),
  [45] = {.count = 1, .reusable = true}, SHIFT(128),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_simple_identifier, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_simple_identifier, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_label, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_directly_assignable_expression, 1),
  [61] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, SHIFT(45),
  [65] = {.count = 1, .reusable = true}, SHIFT(46),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 2),
  [69] = {.count = 1, .reusable = false}, SHIFT(47),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(49),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(52),
  [83] = {.count = 1, .reusable = true}, SHIFT(53),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(56),
  [99] = {.count = 1, .reusable = true}, SHIFT(59),
  [101] = {.count = 1, .reusable = true}, SHIFT(60),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_control_structure_body, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(130),
  [107] = {.count = 1, .reusable = true}, SHIFT(133),
  [109] = {.count = 1, .reusable = true}, SHIFT(64),
  [111] = {.count = 1, .reusable = true}, SHIFT(65),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(66),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(127),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(127),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(12),
  [179] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(132),
  [183] = {.count = 1, .reusable = true}, SHIFT(115),
  [185] = {.count = 1, .reusable = true}, SHIFT(139),
  [187] = {.count = 1, .reusable = true}, SHIFT(71),
  [189] = {.count = 1, .reusable = true}, SHIFT(142),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 3),
  [203] = {.count = 1, .reusable = true}, SHIFT(77),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 3),
  [209] = {.count = 1, .reusable = true}, SHIFT(79),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__block, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(80),
  [215] = {.count = 1, .reusable = true}, SHIFT(81),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym__statements, 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(84),
  [221] = {.count = 1, .reusable = true}, SHIFT(85),
  [223] = {.count = 1, .reusable = true}, SHIFT(86),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 1),
  [227] = {.count = 1, .reusable = true}, SHIFT(90),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 3),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_class_member_declarations, 1),
  [247] = {.count = 1, .reusable = true}, SHIFT(93),
  [249] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_member_declarations_repeat1, 1),
  [251] = {.count = 1, .reusable = true}, SHIFT(94),
  [253] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(49),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 4),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 4),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_import_alias, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_import_alias, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(95),
  [270] = {.count = 1, .reusable = true}, SHIFT(134),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__block, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym__statements, 2),
  [276] = {.count = 1, .reusable = true}, SHIFT(97),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym__statements, 2),
  [280] = {.count = 1, .reusable = true}, SHIFT(99),
  [282] = {.count = 1, .reusable = true}, SHIFT(103),
  [284] = {.count = 1, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(133),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias, 4),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 4),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 4),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 4),
  [297] = {.count = 1, .reusable = false}, SHIFT(134),
  [299] = {.count = 1, .reusable = false}, SHIFT(104),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(132),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(139),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(142),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(115),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 5),
  [325] = {.count = 1, .reusable = true}, REDUCE(aux_sym__statements_repeat1, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statements_repeat1, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__statements, 3),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(107),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 5),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 5),
  [338] = {.count = 1, .reusable = true}, SHIFT(108),
  [340] = {.count = 1, .reusable = true}, SHIFT(109),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 1),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 5),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 5),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 6),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 6),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 6),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 6),
  [360] = {.count = 1, .reusable = true}, SHIFT(113),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 2),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 7),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 7),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 8),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 8),
  [374] = {.count = 1, .reusable = true}, SHIFT(129),
  [376] = {.count = 1, .reusable = false}, SHIFT(136),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_control_structure_body, 1),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym__block, 2),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(136),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__block, 3),
  [387] = {.count = 1, .reusable = true}, SHIFT(131),
  [389] = {.count = 1, .reusable = true}, SHIFT(121),
  [391] = {.count = 1, .reusable = true}, SHIFT(122),
  [393] = {.count = 1, .reusable = true}, SHIFT(125),
  [395] = {.count = 1, .reusable = false}, SHIFT(126),
  [397] = {.count = 1, .reusable = true}, SHIFT(138),
  [399] = {.count = 1, .reusable = true}, SHIFT(140),
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
