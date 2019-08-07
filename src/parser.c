#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 161
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
  aux_sym_semi_token1 = 23,
  anon_sym_AT = 24,
  anon_sym_DOT = 25,
  aux_sym_lexical_identifier_token1 = 26,
  aux_sym_lexical_identifier_token2 = 27,
  sym_source_file = 28,
  sym_shebang_line = 29,
  sym_package_header = 30,
  sym_import_header = 31,
  sym_import_alias = 32,
  sym_type_alias = 33,
  sym_declaration = 34,
  sym_class_declaration = 35,
  sym_class_body = 36,
  sym_class_member_declarations = 37,
  sym_variable_declaration = 38,
  sym_function_declaration = 39,
  sym_function_body = 40,
  sym_object_declaration = 41,
  sym_type = 42,
  sym_statements = 43,
  sym_statement = 44,
  sym_label = 45,
  sym_control_structure_body = 46,
  sym_block = 47,
  sym_loop_statement = 48,
  sym_for_statement = 49,
  sym_while_statement = 50,
  sym_do_while_statement = 51,
  sym_semi = 52,
  sym_semis = 53,
  sym_assignment = 54,
  sym_expression = 55,
  sym_directly_assignable_expression = 56,
  sym_annotation = 57,
  sym_simple_identifier = 58,
  sym_identifier = 59,
  sym_lexical_identifier = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_source_file_repeat2 = 62,
  aux_sym_class_member_declarations_repeat1 = 63,
  aux_sym_statements_repeat1 = 64,
  aux_sym_statement_repeat1 = 65,
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
  [aux_sym_semi_token1] = "semi_token1",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [aux_sym_lexical_identifier_token1] = "lexical_identifier_token1",
  [aux_sym_lexical_identifier_token2] = "lexical_identifier_token2",
  [sym_source_file] = "source_file",
  [sym_shebang_line] = "shebang_line",
  [sym_package_header] = "package_header",
  [sym_import_header] = "import_header",
  [sym_import_alias] = "import_alias",
  [sym_type_alias] = "type_alias",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym_class_member_declarations] = "class_member_declarations",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_object_declaration] = "object_declaration",
  [sym_type] = "type",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_label] = "label",
  [sym_control_structure_body] = "control_structure_body",
  [sym_block] = "block",
  [sym_loop_statement] = "loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym_semi] = "semi",
  [sym_semis] = "semis",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_directly_assignable_expression] = "directly_assignable_expression",
  [sym_annotation] = "annotation",
  [sym_simple_identifier] = "simple_identifier",
  [sym_identifier] = "identifier",
  [sym_lexical_identifier] = "lexical_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_class_member_declarations_repeat1] = "class_member_declarations_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
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
  [aux_sym_semi_token1] = {
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
  [aux_sym_lexical_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexical_identifier_token2] = {
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
  [sym_declaration] = {
    .visible = true,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
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
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_semis] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
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
  [sym_lexical_identifier] = {
    .visible = true,
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
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
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
      ACCEPT_TOKEN(aux_sym_semi_token1);
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
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'j') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'k') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_lexical_identifier_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [aux_sym_lexical_identifier_token2] = ACTIONS(1),
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
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_import_header] = STATE(19),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_shebang_line] = STATE(17),
    [sym_package_header] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_declaration] = STATE(15),
    [sym_simple_identifier] = STATE(22),
    [sym_source_file] = STATE(23),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_type_alias] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_package] = ACTIONS(15),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [2] = {
    [sym_simple_identifier] = STATE(27),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_lexical_identifier_token1] = ACTIONS(9),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
  },
  [3] = {
    [anon_sym_interface] = ACTIONS(31),
    [aux_sym_lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(31),
    [aux_sym_semi_token1] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_class] = ACTIONS(31),
    [anon_sym_fun] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(31),
    [aux_sym_lexical_identifier_token1] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
  },
  [4] = {
    [sym_simple_identifier] = STATE(28),
    [sym_identifier] = STATE(29),
    [sym_lexical_identifier] = STATE(125),
    [aux_sym_lexical_identifier_token1] = ACTIONS(35),
    [aux_sym_lexical_identifier_token2] = ACTIONS(35),
  },
  [5] = {
    [aux_sym_shebang_line_token1] = ACTIONS(37),
  },
  [6] = {
    [sym_simple_identifier] = STATE(31),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_lexical_identifier_token1] = ACTIONS(9),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(39),
  },
  [8] = {
    [sym_control_structure_body] = STATE(35),
    [sym_block] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_while] = ACTIONS(43),
  },
  [9] = {
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [10] = {
    [sym_simple_identifier] = STATE(38),
    [sym_lexical_identifier] = STATE(141),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [11] = {
    [sym_simple_identifier] = STATE(39),
    [sym_lexical_identifier] = STATE(141),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [12] = {
    [sym_simple_identifier] = STATE(126),
    [sym_identifier] = STATE(40),
    [sym_lexical_identifier] = STATE(143),
    [aux_sym_lexical_identifier_token1] = ACTIONS(49),
    [aux_sym_lexical_identifier_token2] = ACTIONS(49),
  },
  [13] = {
    [sym_simple_identifier] = STATE(41),
    [sym_lexical_identifier] = STATE(141),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [14] = {
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(42),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [15] = {
    [aux_sym_semi_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [16] = {
    [aux_sym_semi_token1] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [17] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(44),
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(44),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_package_header] = STATE(45),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_package] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(29),
  },
  [18] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(44),
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(44),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [19] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(46),
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [20] = {
    [anon_sym_interface] = ACTIONS(61),
    [aux_sym_semi_token1] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_typealias] = ACTIONS(61),
    [anon_sym_class] = ACTIONS(61),
    [anon_sym_fun] = ACTIONS(61),
    [anon_sym_object] = ACTIONS(61),
  },
  [21] = {
    [anon_sym_interface] = ACTIONS(65),
    [aux_sym_lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(65),
    [aux_sym_semi_token1] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_class] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_while] = ACTIONS(65),
    [anon_sym_object] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_typealias] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(65),
  },
  [22] = {
    [anon_sym_interface] = ACTIONS(69),
    [aux_sym_lexical_identifier_token2] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(69),
    [aux_sym_semi_token1] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_class] = ACTIONS(69),
    [anon_sym_fun] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(75),
    [aux_sym_lexical_identifier_token1] = ACTIONS(69),
    [anon_sym_while] = ACTIONS(69),
    [anon_sym_object] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(69),
    [anon_sym_typealias] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(69),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(77),
  },
  [24] = {
    [sym_annotation] = STATE(48),
    [sym_loop_statement] = STATE(47),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(47),
    [sym_expression] = STATE(47),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(47),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [aux_sym_statement_repeat1] = STATE(48),
    [sym_type_alias] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_label] = STATE(48),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [25] = {
    [sym_semi] = STATE(50),
    [aux_sym_semi_token1] = ACTIONS(79),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(81),
  },
  [27] = {
    [sym_class_body] = STATE(53),
    [anon_sym_interface] = ACTIONS(83),
    [anon_sym_object] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(85),
    [aux_sym_semi_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_typealias] = ACTIONS(83),
    [anon_sym_class] = ACTIONS(83),
    [anon_sym_fun] = ACTIONS(83),
  },
  [28] = {
    [aux_sym_identifier_repeat1] = STATE(55),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(89),
    [aux_sym_lexical_identifier_token2] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [aux_sym_semi_token1] = ACTIONS(91),
    [anon_sym_class] = ACTIONS(89),
    [anon_sym_fun] = ACTIONS(89),
    [anon_sym_DOT_STAR] = ACTIONS(89),
    [aux_sym_lexical_identifier_token1] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_typealias] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(89),
  },
  [29] = {
    [sym_import_alias] = STATE(56),
    [sym_semi] = STATE(58),
    [anon_sym_interface] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [anon_sym_as] = ACTIONS(97),
    [aux_sym_lexical_identifier_token2] = ACTIONS(95),
    [anon_sym_for] = ACTIONS(95),
    [aux_sym_semi_token1] = ACTIONS(99),
    [anon_sym_class] = ACTIONS(95),
    [anon_sym_fun] = ACTIONS(95),
    [anon_sym_DOT_STAR] = ACTIONS(101),
    [aux_sym_lexical_identifier_token1] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_object] = ACTIONS(95),
    [anon_sym_do] = ACTIONS(95),
    [anon_sym_typealias] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
  },
  [30] = {
    [anon_sym_interface] = ACTIONS(105),
    [aux_sym_lexical_identifier_token1] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(105),
    [anon_sym_object] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(105),
    [anon_sym_do] = ACTIONS(105),
    [aux_sym_lexical_identifier_token2] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_for] = ACTIONS(105),
    [anon_sym_typealias] = ACTIONS(105),
    [anon_sym_class] = ACTIONS(105),
    [anon_sym_fun] = ACTIONS(105),
    [anon_sym_package] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(107),
  },
  [31] = {
    [sym_class_body] = STATE(59),
    [anon_sym_interface] = ACTIONS(109),
    [anon_sym_object] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(85),
    [aux_sym_semi_token1] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_typealias] = ACTIONS(109),
    [anon_sym_class] = ACTIONS(109),
    [anon_sym_fun] = ACTIONS(109),
  },
  [32] = {
    [sym_expression] = STATE(61),
    [sym_lexical_identifier] = STATE(141),
    [sym_simple_identifier] = STATE(60),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [33] = {
    [sym_annotation] = STATE(24),
    [sym_statements] = STATE(63),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(64),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(115),
  },
  [35] = {
    [anon_sym_while] = ACTIONS(117),
  },
  [36] = {
    [anon_sym_while] = ACTIONS(119),
  },
  [37] = {
    [sym_annotation] = STATE(69),
    [sym_simple_identifier] = STATE(68),
    [sym_variable_declaration] = STATE(67),
    [sym_lexical_identifier] = STATE(147),
    [aux_sym_for_statement_repeat1] = STATE(69),
    [aux_sym_lexical_identifier_token1] = ACTIONS(121),
    [aux_sym_lexical_identifier_token2] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(125),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(127),
  },
  [40] = {
    [sym_semi] = STATE(72),
    [anon_sym_interface] = ACTIONS(129),
    [aux_sym_lexical_identifier_token1] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [aux_sym_lexical_identifier_token2] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_typealias] = ACTIONS(129),
    [aux_sym_semi_token1] = ACTIONS(99),
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_fun] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
  },
  [41] = {
    [anon_sym_interface] = ACTIONS(133),
    [aux_sym_lexical_identifier_token1] = ACTIONS(133),
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_object] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [aux_sym_lexical_identifier_token2] = ACTIONS(135),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_typealias] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_fun] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
  },
  [42] = {
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(42),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(137),
    [aux_sym_lexical_identifier_token1] = ACTIONS(140),
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_object] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(149),
    [aux_sym_lexical_identifier_token2] = ACTIONS(152),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_typealias] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_fun] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(166),
  },
  [43] = {
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(42),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [44] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(46),
    [aux_sym_source_file_repeat2] = STATE(73),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [45] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(74),
    [aux_sym_source_file_repeat2] = STATE(73),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(74),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [46] = {
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_import_header] = STATE(46),
    [anon_sym_interface] = ACTIONS(171),
    [aux_sym_lexical_identifier_token1] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(173),
    [anon_sym_object] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [aux_sym_lexical_identifier_token2] = ACTIONS(176),
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_typealias] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_fun] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(176),
  },
  [47] = {
    [aux_sym_semi_token1] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(180),
  },
  [48] = {
    [sym_annotation] = STATE(48),
    [aux_sym_statement_repeat1] = STATE(48),
    [sym_lexical_identifier] = STATE(141),
    [sym_label] = STATE(48),
    [sym_simple_identifier] = STATE(75),
    [anon_sym_interface] = ACTIONS(182),
    [aux_sym_lexical_identifier_token1] = ACTIONS(184),
    [anon_sym_while] = ACTIONS(182),
    [anon_sym_object] = ACTIONS(182),
    [anon_sym_do] = ACTIONS(182),
    [aux_sym_lexical_identifier_token2] = ACTIONS(187),
    [anon_sym_for] = ACTIONS(182),
    [anon_sym_typealias] = ACTIONS(182),
    [anon_sym_class] = ACTIONS(182),
    [anon_sym_fun] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(190),
  },
  [49] = {
    [anon_sym_interface] = ACTIONS(193),
    [aux_sym_lexical_identifier_token1] = ACTIONS(193),
    [anon_sym_while] = ACTIONS(193),
    [anon_sym_object] = ACTIONS(193),
    [anon_sym_do] = ACTIONS(193),
    [aux_sym_lexical_identifier_token2] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(193),
    [anon_sym_typealias] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_fun] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(195),
  },
  [50] = {
    [anon_sym_interface] = ACTIONS(197),
    [aux_sym_lexical_identifier_token1] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(197),
    [anon_sym_object] = ACTIONS(197),
    [anon_sym_do] = ACTIONS(197),
    [aux_sym_lexical_identifier_token2] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(197),
    [anon_sym_typealias] = ACTIONS(197),
    [anon_sym_class] = ACTIONS(197),
    [anon_sym_fun] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(155),
  },
  [51] = {
    [sym_expression] = STATE(76),
    [sym_lexical_identifier] = STATE(21),
    [sym_simple_identifier] = STATE(131),
    [aux_sym_lexical_identifier_token1] = ACTIONS(9),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
  },
  [52] = {
    [sym_object_declaration] = STATE(20),
    [aux_sym_class_member_declarations_repeat1] = STATE(78),
    [sym_class_member_declarations] = STATE(79),
    [sym_type_alias] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_declaration] = STATE(80),
    [sym_class_declaration] = STATE(20),
    [anon_sym_interface] = ACTIONS(199),
    [anon_sym_object] = ACTIONS(201),
    [anon_sym_typealias] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_fun] = ACTIONS(207),
  },
  [53] = {
    [anon_sym_interface] = ACTIONS(209),
    [aux_sym_semi_token1] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_typealias] = ACTIONS(209),
    [anon_sym_class] = ACTIONS(209),
    [anon_sym_fun] = ACTIONS(209),
    [anon_sym_object] = ACTIONS(209),
  },
  [54] = {
    [sym_simple_identifier] = STATE(81),
    [sym_lexical_identifier] = STATE(125),
    [aux_sym_lexical_identifier_token1] = ACTIONS(35),
    [aux_sym_lexical_identifier_token2] = ACTIONS(35),
  },
  [55] = {
    [aux_sym_identifier_repeat1] = STATE(82),
    [anon_sym_interface] = ACTIONS(213),
    [anon_sym_import] = ACTIONS(213),
    [anon_sym_as] = ACTIONS(213),
    [aux_sym_lexical_identifier_token2] = ACTIONS(213),
    [anon_sym_for] = ACTIONS(213),
    [aux_sym_semi_token1] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(213),
    [anon_sym_fun] = ACTIONS(213),
    [anon_sym_DOT_STAR] = ACTIONS(213),
    [aux_sym_lexical_identifier_token1] = ACTIONS(213),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(213),
    [anon_sym_object] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(213),
    [anon_sym_typealias] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(213),
  },
  [56] = {
    [sym_semi] = STATE(83),
    [anon_sym_interface] = ACTIONS(217),
    [aux_sym_lexical_identifier_token1] = ACTIONS(217),
    [anon_sym_import] = ACTIONS(217),
    [anon_sym_object] = ACTIONS(217),
    [anon_sym_while] = ACTIONS(217),
    [anon_sym_do] = ACTIONS(217),
    [aux_sym_lexical_identifier_token2] = ACTIONS(217),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_for] = ACTIONS(217),
    [anon_sym_typealias] = ACTIONS(217),
    [aux_sym_semi_token1] = ACTIONS(99),
    [anon_sym_class] = ACTIONS(217),
    [anon_sym_fun] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
  },
  [57] = {
    [sym_simple_identifier] = STATE(84),
    [sym_lexical_identifier] = STATE(143),
    [aux_sym_lexical_identifier_token1] = ACTIONS(49),
    [aux_sym_lexical_identifier_token2] = ACTIONS(49),
  },
  [58] = {
    [anon_sym_interface] = ACTIONS(217),
    [aux_sym_lexical_identifier_token1] = ACTIONS(217),
    [anon_sym_import] = ACTIONS(217),
    [anon_sym_object] = ACTIONS(217),
    [anon_sym_while] = ACTIONS(217),
    [anon_sym_do] = ACTIONS(217),
    [aux_sym_lexical_identifier_token2] = ACTIONS(219),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_for] = ACTIONS(217),
    [anon_sym_typealias] = ACTIONS(217),
    [anon_sym_class] = ACTIONS(217),
    [anon_sym_fun] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(219),
  },
  [59] = {
    [anon_sym_interface] = ACTIONS(221),
    [aux_sym_semi_token1] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_typealias] = ACTIONS(221),
    [anon_sym_class] = ACTIONS(221),
    [anon_sym_fun] = ACTIONS(221),
    [anon_sym_object] = ACTIONS(221),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(225),
  },
  [62] = {
    [anon_sym_while] = ACTIONS(227),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(229),
  },
  [64] = {
    [sym_semis] = STATE(88),
    [aux_sym_statements_repeat1] = STATE(89),
    [aux_sym_semi_token1] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(233),
  },
  [65] = {
    [sym_expression] = STATE(90),
    [sym_lexical_identifier] = STATE(141),
    [sym_simple_identifier] = STATE(60),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(235),
  },
  [67] = {
    [anon_sym_in] = ACTIONS(237),
  },
  [68] = {
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(241),
  },
  [69] = {
    [sym_annotation] = STATE(95),
    [sym_simple_identifier] = STATE(68),
    [sym_variable_declaration] = STATE(94),
    [sym_lexical_identifier] = STATE(147),
    [aux_sym_for_statement_repeat1] = STATE(95),
    [aux_sym_lexical_identifier_token1] = ACTIONS(121),
    [aux_sym_lexical_identifier_token2] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
  },
  [70] = {
    [sym_lexical_identifier] = STATE(21),
    [sym_simple_identifier] = STATE(96),
    [sym_type] = STATE(97),
    [aux_sym_lexical_identifier_token1] = ACTIONS(9),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(243),
  },
  [72] = {
    [anon_sym_interface] = ACTIONS(245),
    [aux_sym_lexical_identifier_token1] = ACTIONS(245),
    [anon_sym_import] = ACTIONS(245),
    [anon_sym_object] = ACTIONS(245),
    [anon_sym_while] = ACTIONS(245),
    [anon_sym_do] = ACTIONS(245),
    [aux_sym_lexical_identifier_token2] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_for] = ACTIONS(245),
    [anon_sym_typealias] = ACTIONS(245),
    [anon_sym_class] = ACTIONS(245),
    [anon_sym_fun] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
  },
  [73] = {
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(42),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [74] = {
    [sym_annotation] = STATE(24),
    [sym_import_header] = STATE(46),
    [aux_sym_source_file_repeat2] = STATE(99),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [75] = {
    [anon_sym_interface] = ACTIONS(69),
    [aux_sym_lexical_identifier_token1] = ACTIONS(69),
    [anon_sym_while] = ACTIONS(69),
    [anon_sym_object] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(69),
    [aux_sym_lexical_identifier_token2] = ACTIONS(251),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_typealias] = ACTIONS(69),
    [anon_sym_class] = ACTIONS(69),
    [anon_sym_fun] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(251),
  },
  [76] = {
    [aux_sym_semi_token1] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [77] = {
    [anon_sym_interface] = ACTIONS(257),
    [aux_sym_semi_token1] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_typealias] = ACTIONS(257),
    [anon_sym_class] = ACTIONS(257),
    [anon_sym_fun] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
  },
  [78] = {
    [sym_type_alias] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [aux_sym_class_member_declarations_repeat1] = STATE(100),
    [sym_declaration] = STATE(80),
    [sym_class_declaration] = STATE(20),
    [anon_sym_interface] = ACTIONS(199),
    [anon_sym_typealias] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_fun] = ACTIONS(207),
    [anon_sym_object] = ACTIONS(201),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(263),
  },
  [80] = {
    [sym_semis] = STATE(102),
    [anon_sym_interface] = ACTIONS(265),
    [anon_sym_typealias] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_class] = ACTIONS(265),
    [anon_sym_fun] = ACTIONS(265),
    [anon_sym_object] = ACTIONS(265),
    [aux_sym_semi_token1] = ACTIONS(267),
  },
  [81] = {
    [anon_sym_interface] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_as] = ACTIONS(269),
    [aux_sym_lexical_identifier_token2] = ACTIONS(269),
    [anon_sym_for] = ACTIONS(269),
    [aux_sym_semi_token1] = ACTIONS(271),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [anon_sym_DOT_STAR] = ACTIONS(269),
    [aux_sym_lexical_identifier_token1] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_typealias] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
  },
  [82] = {
    [aux_sym_identifier_repeat1] = STATE(82),
    [anon_sym_interface] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_as] = ACTIONS(269),
    [aux_sym_lexical_identifier_token2] = ACTIONS(269),
    [anon_sym_for] = ACTIONS(269),
    [aux_sym_semi_token1] = ACTIONS(271),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [anon_sym_DOT_STAR] = ACTIONS(269),
    [aux_sym_lexical_identifier_token1] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_typealias] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(269),
  },
  [83] = {
    [anon_sym_interface] = ACTIONS(276),
    [aux_sym_lexical_identifier_token1] = ACTIONS(276),
    [anon_sym_import] = ACTIONS(276),
    [anon_sym_object] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(276),
    [anon_sym_do] = ACTIONS(276),
    [aux_sym_lexical_identifier_token2] = ACTIONS(278),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_for] = ACTIONS(276),
    [anon_sym_typealias] = ACTIONS(276),
    [anon_sym_class] = ACTIONS(276),
    [anon_sym_fun] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(278),
  },
  [84] = {
    [anon_sym_interface] = ACTIONS(280),
    [aux_sym_lexical_identifier_token1] = ACTIONS(280),
    [anon_sym_import] = ACTIONS(280),
    [anon_sym_object] = ACTIONS(280),
    [anon_sym_while] = ACTIONS(280),
    [anon_sym_do] = ACTIONS(280),
    [aux_sym_lexical_identifier_token2] = ACTIONS(280),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_for] = ACTIONS(280),
    [anon_sym_typealias] = ACTIONS(280),
    [aux_sym_semi_token1] = ACTIONS(282),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_fun] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(280),
  },
  [85] = {
    [sym_control_structure_body] = STATE(103),
    [sym_block] = STATE(127),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
  },
  [86] = {
    [anon_sym_while] = ACTIONS(288),
  },
  [87] = {
    [anon_sym_interface] = ACTIONS(290),
    [aux_sym_lexical_identifier_token2] = ACTIONS(292),
    [anon_sym_for] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(290),
    [anon_sym_fun] = ACTIONS(290),
    [aux_sym_lexical_identifier_token1] = ACTIONS(290),
    [anon_sym_while] = ACTIONS(290),
    [anon_sym_object] = ACTIONS(290),
    [anon_sym_do] = ACTIONS(290),
    [anon_sym_typealias] = ACTIONS(290),
    [anon_sym_AT] = ACTIONS(292),
  },
  [88] = {
    [sym_annotation] = STATE(24),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(104),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [89] = {
    [sym_semis] = STATE(105),
    [aux_sym_statements_repeat1] = STATE(106),
    [aux_sym_semi_token1] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(296),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(298),
  },
  [91] = {
    [sym_expression] = STATE(108),
    [sym_lexical_identifier] = STATE(141),
    [sym_simple_identifier] = STATE(60),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [92] = {
    [sym_expression] = STATE(109),
    [sym_lexical_identifier] = STATE(141),
    [sym_simple_identifier] = STATE(60),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [93] = {
    [sym_simple_identifier] = STATE(138),
    [sym_type] = STATE(110),
    [sym_lexical_identifier] = STATE(147),
    [aux_sym_lexical_identifier_token1] = ACTIONS(121),
    [aux_sym_lexical_identifier_token2] = ACTIONS(121),
  },
  [94] = {
    [anon_sym_in] = ACTIONS(300),
  },
  [95] = {
    [sym_annotation] = STATE(95),
    [aux_sym_for_statement_repeat1] = STATE(95),
    [aux_sym_lexical_identifier_token1] = ACTIONS(302),
    [aux_sym_lexical_identifier_token2] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(304),
  },
  [96] = {
    [anon_sym_interface] = ACTIONS(307),
    [aux_sym_semi_token1] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_typealias] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_fun] = ACTIONS(307),
    [anon_sym_object] = ACTIONS(307),
  },
  [97] = {
    [anon_sym_interface] = ACTIONS(311),
    [aux_sym_semi_token1] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_typealias] = ACTIONS(311),
    [anon_sym_class] = ACTIONS(311),
    [anon_sym_fun] = ACTIONS(311),
    [anon_sym_object] = ACTIONS(311),
  },
  [98] = {
    [sym_block] = STATE(113),
    [sym_function_body] = STATE(114),
    [aux_sym_semi_token1] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
  },
  [99] = {
    [sym_annotation] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(42),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(25),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [100] = {
    [sym_type_alias] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [aux_sym_class_member_declarations_repeat1] = STATE(100),
    [sym_declaration] = STATE(80),
    [sym_class_declaration] = STATE(20),
    [anon_sym_interface] = ACTIONS(325),
    [anon_sym_typealias] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_class] = ACTIONS(325),
    [anon_sym_fun] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(336),
  },
  [101] = {
    [anon_sym_interface] = ACTIONS(339),
    [aux_sym_semi_token1] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_typealias] = ACTIONS(339),
    [anon_sym_class] = ACTIONS(339),
    [anon_sym_fun] = ACTIONS(339),
    [anon_sym_object] = ACTIONS(339),
  },
  [102] = {
    [anon_sym_interface] = ACTIONS(331),
    [anon_sym_typealias] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_class] = ACTIONS(331),
    [anon_sym_fun] = ACTIONS(331),
    [anon_sym_object] = ACTIONS(331),
  },
  [103] = {
    [aux_sym_semi_token1] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(345),
  },
  [104] = {
    [aux_sym_semi_token1] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(349),
  },
  [105] = {
    [sym_annotation] = STATE(24),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(104),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [106] = {
    [sym_semis] = STATE(115),
    [aux_sym_statements_repeat1] = STATE(106),
    [aux_sym_semi_token1] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(349),
  },
  [107] = {
    [aux_sym_semi_token1] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(358),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(362),
  },
  [110] = {
    [anon_sym_in] = ACTIONS(364),
  },
  [111] = {
    [sym_expression] = STATE(118),
    [sym_lexical_identifier] = STATE(141),
    [sym_simple_identifier] = STATE(60),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [112] = {
    [sym_expression] = STATE(119),
    [sym_lexical_identifier] = STATE(21),
    [sym_simple_identifier] = STATE(131),
    [aux_sym_lexical_identifier_token1] = ACTIONS(9),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
  },
  [113] = {
    [anon_sym_interface] = ACTIONS(366),
    [aux_sym_semi_token1] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_typealias] = ACTIONS(366),
    [anon_sym_class] = ACTIONS(366),
    [anon_sym_fun] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
  },
  [114] = {
    [anon_sym_interface] = ACTIONS(370),
    [aux_sym_semi_token1] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_typealias] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_fun] = ACTIONS(370),
    [anon_sym_object] = ACTIONS(370),
  },
  [115] = {
    [sym_annotation] = STATE(24),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [sym_type_alias] = STATE(20),
    [aux_sym_statement_repeat1] = STATE(24),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(104),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(29),
  },
  [116] = {
    [aux_sym_semi_token1] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(376),
  },
  [117] = {
    [sym_control_structure_body] = STATE(120),
    [sym_block] = STATE(127),
    [aux_sym_semi_token1] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(319),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(382),
  },
  [119] = {
    [anon_sym_interface] = ACTIONS(384),
    [aux_sym_semi_token1] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym_typealias] = ACTIONS(384),
    [anon_sym_class] = ACTIONS(384),
    [anon_sym_fun] = ACTIONS(384),
    [anon_sym_object] = ACTIONS(384),
  },
  [120] = {
    [aux_sym_semi_token1] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(390),
  },
  [121] = {
    [sym_control_structure_body] = STATE(122),
    [sym_block] = STATE(127),
    [aux_sym_semi_token1] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(319),
  },
  [122] = {
    [aux_sym_semi_token1] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(394),
  },
  [123] = {
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_as] = ACTIONS(31),
    [aux_sym_lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(31),
    [aux_sym_semi_token1] = ACTIONS(33),
    [anon_sym_class] = ACTIONS(31),
    [anon_sym_fun] = ACTIONS(31),
    [anon_sym_DOT_STAR] = ACTIONS(31),
    [aux_sym_lexical_identifier_token1] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
  },
  [124] = {
    [sym_simple_identifier] = STATE(31),
    [sym_lexical_identifier] = STATE(145),
    [aux_sym_lexical_identifier_token1] = ACTIONS(396),
    [aux_sym_lexical_identifier_token2] = ACTIONS(396),
  },
  [125] = {
    [anon_sym_interface] = ACTIONS(65),
    [anon_sym_import] = ACTIONS(65),
    [anon_sym_as] = ACTIONS(65),
    [aux_sym_lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(65),
    [aux_sym_semi_token1] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [anon_sym_DOT_STAR] = ACTIONS(65),
    [aux_sym_lexical_identifier_token1] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_while] = ACTIONS(65),
    [anon_sym_object] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_typealias] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(65),
  },
  [126] = {
    [aux_sym_identifier_repeat1] = STATE(130),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [aux_sym_lexical_identifier_token2] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [aux_sym_semi_token1] = ACTIONS(91),
    [anon_sym_class] = ACTIONS(89),
    [anon_sym_fun] = ACTIONS(89),
    [aux_sym_lexical_identifier_token1] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_typealias] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(89),
  },
  [127] = {
    [aux_sym_semi_token1] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(400),
  },
  [128] = {
    [aux_sym_lexical_identifier_token1] = ACTIONS(135),
    [aux_sym_lexical_identifier_token2] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
  },
  [129] = {
    [anon_sym_interface] = ACTIONS(193),
    [aux_sym_lexical_identifier_token1] = ACTIONS(193),
    [anon_sym_import] = ACTIONS(193),
    [anon_sym_object] = ACTIONS(193),
    [anon_sym_while] = ACTIONS(193),
    [anon_sym_do] = ACTIONS(193),
    [aux_sym_lexical_identifier_token2] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(193),
    [anon_sym_typealias] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_fun] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(195),
  },
  [130] = {
    [aux_sym_identifier_repeat1] = STATE(135),
    [anon_sym_interface] = ACTIONS(213),
    [anon_sym_import] = ACTIONS(213),
    [aux_sym_lexical_identifier_token2] = ACTIONS(213),
    [anon_sym_for] = ACTIONS(213),
    [aux_sym_semi_token1] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(213),
    [anon_sym_fun] = ACTIONS(213),
    [aux_sym_lexical_identifier_token1] = ACTIONS(213),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(213),
    [anon_sym_object] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(213),
    [anon_sym_typealias] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(213),
  },
  [131] = {
    [anon_sym_interface] = ACTIONS(73),
    [aux_sym_semi_token1] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_typealias] = ACTIONS(73),
    [anon_sym_class] = ACTIONS(73),
    [anon_sym_fun] = ACTIONS(73),
    [anon_sym_object] = ACTIONS(73),
  },
  [132] = {
    [anon_sym_interface] = ACTIONS(402),
    [aux_sym_semi_token1] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_typealias] = ACTIONS(402),
    [anon_sym_class] = ACTIONS(402),
    [anon_sym_fun] = ACTIONS(402),
    [anon_sym_object] = ACTIONS(402),
  },
  [133] = {
    [sym_simple_identifier] = STATE(96),
    [sym_type] = STATE(97),
    [sym_lexical_identifier] = STATE(145),
    [aux_sym_lexical_identifier_token1] = ACTIONS(396),
    [aux_sym_lexical_identifier_token2] = ACTIONS(396),
  },
  [134] = {
    [anon_sym_interface] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [aux_sym_lexical_identifier_token2] = ACTIONS(269),
    [anon_sym_for] = ACTIONS(269),
    [aux_sym_semi_token1] = ACTIONS(271),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [aux_sym_lexical_identifier_token1] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_typealias] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
  },
  [135] = {
    [aux_sym_identifier_repeat1] = STATE(135),
    [anon_sym_interface] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [aux_sym_lexical_identifier_token2] = ACTIONS(269),
    [anon_sym_for] = ACTIONS(269),
    [aux_sym_semi_token1] = ACTIONS(271),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [aux_sym_lexical_identifier_token1] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_while] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_typealias] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(404),
    [anon_sym_AT] = ACTIONS(269),
  },
  [136] = {
    [anon_sym_interface] = ACTIONS(407),
    [aux_sym_semi_token1] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_typealias] = ACTIONS(407),
    [anon_sym_class] = ACTIONS(407),
    [anon_sym_fun] = ACTIONS(407),
    [anon_sym_object] = ACTIONS(407),
  },
  [137] = {
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_typealias] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
    [anon_sym_fun] = ACTIONS(292),
    [anon_sym_object] = ACTIONS(292),
  },
  [138] = {
    [anon_sym_in] = ACTIONS(309),
  },
  [139] = {
    [sym_simple_identifier] = STATE(131),
    [sym_expression] = STATE(119),
    [sym_lexical_identifier] = STATE(145),
    [aux_sym_lexical_identifier_token1] = ACTIONS(396),
    [aux_sym_lexical_identifier_token2] = ACTIONS(396),
  },
  [140] = {
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_lexical_identifier_token1] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [aux_sym_lexical_identifier_token2] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_class] = ACTIONS(31),
    [anon_sym_fun] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(33),
  },
  [141] = {
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_interface] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [aux_sym_lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_while] = ACTIONS(65),
    [anon_sym_object] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [aux_sym_lexical_identifier_token2] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(65),
    [anon_sym_typealias] = ACTIONS(65),
    [anon_sym_class] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(67),
  },
  [142] = {
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_import] = ACTIONS(31),
    [aux_sym_lexical_identifier_token2] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(31),
    [aux_sym_semi_token1] = ACTIONS(33),
    [anon_sym_class] = ACTIONS(31),
    [anon_sym_fun] = ACTIONS(31),
    [aux_sym_lexical_identifier_token1] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
  },
  [143] = {
    [anon_sym_interface] = ACTIONS(65),
    [anon_sym_import] = ACTIONS(65),
    [aux_sym_lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(65),
    [aux_sym_semi_token1] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [aux_sym_lexical_identifier_token1] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_while] = ACTIONS(65),
    [anon_sym_object] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_typealias] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(65),
  },
  [144] = {
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_class] = ACTIONS(31),
    [anon_sym_fun] = ACTIONS(31),
    [aux_sym_semi_token1] = ACTIONS(33),
  },
  [145] = {
    [anon_sym_interface] = ACTIONS(65),
    [anon_sym_object] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_typealias] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_class] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [aux_sym_semi_token1] = ACTIONS(67),
  },
  [146] = {
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
  },
  [147] = {
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(67),
  },
  [148] = {
    [aux_sym_lexical_identifier_token1] = ACTIONS(33),
    [aux_sym_lexical_identifier_token2] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(33),
  },
  [149] = {
    [aux_sym_lexical_identifier_token1] = ACTIONS(67),
    [aux_sym_lexical_identifier_token2] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(67),
  },
  [150] = {
    [sym_simple_identifier] = STATE(27),
    [sym_lexical_identifier] = STATE(145),
    [aux_sym_lexical_identifier_token1] = ACTIONS(396),
    [aux_sym_lexical_identifier_token2] = ACTIONS(396),
  },
  [151] = {
    [sym_simple_identifier] = STATE(128),
    [sym_lexical_identifier] = STATE(149),
    [aux_sym_lexical_identifier_token1] = ACTIONS(409),
    [aux_sym_lexical_identifier_token2] = ACTIONS(409),
  },
  [152] = {
    [sym_statements] = STATE(155),
    [sym_loop_statement] = STATE(15),
    [sym_for_statement] = STATE(16),
    [sym_assignment] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_lexical_identifier] = STATE(21),
    [sym_type_alias] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_statement] = STATE(64),
    [sym_label] = STATE(24),
    [sym_while_statement] = STATE(16),
    [sym_do_while_statement] = STATE(16),
    [sym_directly_assignable_expression] = STATE(26),
    [sym_annotation] = STATE(24),
    [sym_declaration] = STATE(15),
    [sym_class_declaration] = STATE(20),
    [sym_object_declaration] = STATE(20),
    [sym_simple_identifier] = STATE(22),
    [aux_sym_statement_repeat1] = STATE(24),
    [anon_sym_interface] = ACTIONS(3),
    [aux_sym_lexical_identifier_token2] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_fun] = ACTIONS(13),
    [aux_sym_lexical_identifier_token1] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_object] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_typealias] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
  },
  [153] = {
    [anon_sym_EQ] = ACTIONS(413),
  },
  [154] = {
    [sym_simple_identifier] = STATE(134),
    [sym_lexical_identifier] = STATE(143),
    [aux_sym_lexical_identifier_token1] = ACTIONS(49),
    [aux_sym_lexical_identifier_token2] = ACTIONS(49),
  },
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(415),
  },
  [156] = {
    [sym_block] = STATE(113),
    [sym_function_body] = STATE(114),
    [anon_sym_interface] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_typealias] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_fun] = ACTIONS(317),
    [aux_sym_semi_token1] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(417),
  },
  [157] = {
    [sym_simple_identifier] = STATE(153),
    [sym_lexical_identifier] = STATE(141),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(419),
  },
  [159] = {
    [anon_sym_LPAREN] = ACTIONS(421),
  },
  [160] = {
    [sym_simple_identifier] = STATE(159),
    [sym_lexical_identifier] = STATE(141),
    [aux_sym_lexical_identifier_token1] = ACTIONS(47),
    [aux_sym_lexical_identifier_token2] = ACTIONS(47),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(9),
  [13] = {.count = 1, .reusable = false}, SHIFT(11),
  [15] = {.count = 1, .reusable = false}, SHIFT(12),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(6),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_lexical_identifier, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_lexical_identifier, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(123),
  [37] = {.count = 1, .reusable = true}, SHIFT(30),
  [39] = {.count = 1, .reusable = true}, SHIFT(32),
  [41] = {.count = 1, .reusable = true}, SHIFT(33),
  [43] = {.count = 1, .reusable = true}, SHIFT(34),
  [45] = {.count = 1, .reusable = true}, SHIFT(37),
  [47] = {.count = 1, .reusable = true}, SHIFT(140),
  [49] = {.count = 1, .reusable = true}, SHIFT(142),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_loop_statement, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_loop_statement, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_simple_identifier, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_simple_identifier, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_label, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_directly_assignable_expression, 1),
  [77] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [79] = {.count = 1, .reusable = true}, SHIFT(49),
  [81] = {.count = 1, .reusable = true}, SHIFT(51),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 2),
  [85] = {.count = 1, .reusable = false}, SHIFT(52),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(54),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 2),
  [97] = {.count = 1, .reusable = false}, SHIFT(57),
  [99] = {.count = 1, .reusable = true}, SHIFT(129),
  [101] = {.count = 1, .reusable = false}, SHIFT(56),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(62),
  [115] = {.count = 1, .reusable = true}, SHIFT(65),
  [117] = {.count = 1, .reusable = true}, SHIFT(66),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_control_structure_body, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(146),
  [123] = {.count = 1, .reusable = true}, SHIFT(151),
  [125] = {.count = 1, .reusable = true}, SHIFT(70),
  [127] = {.count = 1, .reusable = true}, SHIFT(71),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(13),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym_statement_repeat1, 2),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(140),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(140),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(13),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_semi, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_semi, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(150),
  [201] = {.count = 1, .reusable = true}, SHIFT(124),
  [203] = {.count = 1, .reusable = true}, SHIFT(157),
  [205] = {.count = 1, .reusable = true}, SHIFT(77),
  [207] = {.count = 1, .reusable = true}, SHIFT(160),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 3),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 3),
  [225] = {.count = 1, .reusable = true}, SHIFT(85),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(86),
  [231] = {.count = 1, .reusable = true}, SHIFT(87),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(91),
  [237] = {.count = 1, .reusable = true}, SHIFT(92),
  [239] = {.count = 1, .reusable = true}, SHIFT(93),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 1),
  [243] = {.count = 1, .reusable = true}, SHIFT(98),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_class_member_declarations, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(101),
  [265] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_member_declarations_repeat1, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(137),
  [269] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(54),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 4),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 4),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_import_alias, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_import_alias, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(103),
  [286] = {.count = 1, .reusable = true}, SHIFT(152),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_semis, 1),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_semis, 1),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 2),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 2),
  [298] = {.count = 1, .reusable = true}, SHIFT(107),
  [300] = {.count = 1, .reusable = true}, SHIFT(111),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(151),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias, 4),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 4),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 4),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 4),
  [319] = {.count = 1, .reusable = false}, SHIFT(152),
  [321] = {.count = 1, .reusable = false}, SHIFT(112),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(150),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(157),
  [331] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(160),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(124),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 5),
  [347] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 3),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(87),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 5),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 5),
  [360] = {.count = 1, .reusable = true}, SHIFT(116),
  [362] = {.count = 1, .reusable = true}, SHIFT(117),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 1),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 5),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 5),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 6),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 6),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 6),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 6),
  [382] = {.count = 1, .reusable = true}, SHIFT(121),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 2),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 2),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 7),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 7),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 8),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 8),
  [396] = {.count = 1, .reusable = true}, SHIFT(144),
  [398] = {.count = 1, .reusable = false}, SHIFT(154),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_control_structure_body, 1),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(154),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [409] = {.count = 1, .reusable = true}, SHIFT(148),
  [411] = {.count = 1, .reusable = true}, SHIFT(132),
  [413] = {.count = 1, .reusable = true}, SHIFT(133),
  [415] = {.count = 1, .reusable = true}, SHIFT(136),
  [417] = {.count = 1, .reusable = false}, SHIFT(139),
  [419] = {.count = 1, .reusable = true}, SHIFT(156),
  [421] = {.count = 1, .reusable = true}, SHIFT(158),
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
