#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 113
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_type = 1,
  anon_sym_EQ = 2,
  anon_sym_PIPE = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE_DASH = 6,
  aux_sym_block_comment_token1 = 7,
  aux_sym_block_comment_token2 = 8,
  aux_sym_block_comment_token3 = 9,
  anon_sym_DASH_DASH = 10,
  aux_sym_line_comment_token1 = 11,
  anon_sym_alias = 12,
  anon_sym_module = 13,
  anon_sym_exposing = 14,
  anon_sym_COMMA = 15,
  anon_sym_as = 16,
  anon_sym_COLON = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_let = 19,
  anon_sym_in = 20,
  anon_sym_PIPE_GT = 21,
  anon_sym_DOT = 22,
  anon_sym_import = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  sym_upper_case_identifier = 32,
  sym_custom_type_variant = 33,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 34,
  aux_sym_lower_case_identifier_token1 = 35,
  sym_int = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_string_token1 = 38,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 39,
  aux_sym_string_token2 = 40,
  sym_file = 41,
  sym_type_declaration = 42,
  sym_union_variant = 43,
  sym_type_ref = 44,
  sym__comment = 45,
  sym_block_comment = 46,
  sym_line_comment = 47,
  sym_type_alias = 48,
  sym_module_declaration = 49,
  sym__imports = 50,
  sym_exposing_list = 51,
  sym_as_clause = 52,
  sym_exposed_type = 53,
  sym_type_expression = 54,
  sym_import_clause = 55,
  sym_inline_record = 56,
  sym_list = 57,
  sym__assignment = 58,
  sym_upper_case_qid = 59,
  sym__type_alias_identifier_exposing_all = 60,
  sym__func_identifiers = 61,
  sym_lower_case_identifier = 62,
  sym__module_func_identifier = 63,
  sym_record_entry = 64,
  sym_string = 65,
  sym__basic_datatypes = 66,
  sym_tuple = 67,
  aux_sym_file_repeat1 = 68,
  aux_sym_type_declaration_repeat1 = 69,
  aux_sym_type_ref_repeat1 = 70,
  aux_sym_block_comment_repeat1 = 71,
  aux_sym_exposing_list_repeat1 = 72,
  aux_sym_type_expression_repeat1 = 73,
  aux_sym_value_qid_repeat1 = 74,
  aux_sym_inline_record_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE_DASH] = "{-",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [aux_sym_block_comment_token2] = "block_comment_token2",
  [aux_sym_block_comment_token3] = "block_comment_token3",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_alias] = "alias",
  [anon_sym_module] = "module",
  [anon_sym_exposing] = "exposing",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_upper_case_identifier] = "upper_case_identifier",
  [sym_custom_type_variant] = "custom_type_variant",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [aux_sym_lower_case_identifier_token1] = "lower_case_identifier_token1",
  [sym_int] = "int",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_file] = "file",
  [sym_type_declaration] = "type_declaration",
  [sym_union_variant] = "union_variant",
  [sym_type_ref] = "type_ref",
  [sym__comment] = "_comment",
  [sym_block_comment] = "block_comment",
  [sym_line_comment] = "line_comment",
  [sym_type_alias] = "type_alias",
  [sym_module_declaration] = "module_declaration",
  [sym__imports] = "_imports",
  [sym_exposing_list] = "exposing_list",
  [sym_as_clause] = "as_clause",
  [sym_exposed_type] = "exposed_type",
  [sym_type_expression] = "type_expression",
  [sym_import_clause] = "import_clause",
  [sym_inline_record] = "inline_record",
  [sym_list] = "list",
  [sym__assignment] = "_assignment",
  [sym_upper_case_qid] = "upper_case_qid",
  [sym__type_alias_identifier_exposing_all] = "_type_alias_identifier_exposing_all",
  [sym__func_identifiers] = "_func_identifiers",
  [sym_lower_case_identifier] = "lower_case_identifier",
  [sym__module_func_identifier] = "_module_func_identifier",
  [sym_record_entry] = "record_entry",
  [sym_string] = "string",
  [sym__basic_datatypes] = "_basic_datatypes",
  [sym_tuple] = "tuple",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_ref_repeat1] = "type_ref_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_exposing_list_repeat1] = "exposing_list_repeat1",
  [aux_sym_type_expression_repeat1] = "type_expression_repeat1",
  [aux_sym_value_qid_repeat1] = "value_qid_repeat1",
  [aux_sym_inline_record_repeat1] = "inline_record_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym_upper_case_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type_variant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lower_case_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_union_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_list] = {
    .visible = true,
    .named = true,
  },
  [sym_as_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_exposed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_import_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_record] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_upper_case_qid] = {
    .visible = true,
    .named = true,
  },
  [sym__type_alias_identifier_exposing_all] = {
    .visible = false,
    .named = true,
  },
  [sym__func_identifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_lower_case_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__module_func_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_record_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_datatypes] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_ref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exposing_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_qid_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(26);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(27);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      if (lookahead == 'l')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'x')
        ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'm')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'o')
        ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'y')
        ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_upper_case_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"')
        ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == '.')
        ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_block_comment_token3);
      END_STATE();
    case 31:
      if (lookahead == 'i')
        ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 33:
      if (lookahead == 'p')
        ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'p')
        ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'd')
        ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'p')
        ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_upper_case_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 43:
      if (lookahead == ')')
        ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'o')
        ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 48:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 51:
      if (lookahead == 's')
        ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 's')
        ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'l')
        ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 57:
      if (lookahead == 'i')
        ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 63:
      if (lookahead == 'g')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(66);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(67);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(68);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(41);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      if (lookahead == '-')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'm')
        ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == '-')
        ADVANCE(39);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == '-')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '-')
        ADVANCE(39);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '-')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(82);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'a')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(68);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == '-')
        ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == 's')
        ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(86);
      if (lookahead == 'i')
        ADVANCE(68);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      END_STATE();
    case 86:
      if (lookahead == '-')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == '-')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == '}')
        ADVANCE(30);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_lower_case_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(66);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(67);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == 'a')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(68);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(91);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 95:
      if (lookahead == '(')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 96:
      if (lookahead == '.')
        ADVANCE(27);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}')
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(66);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 102:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(82);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'i')
        ADVANCE(68);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 85},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 81},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 85},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 81},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 91},
  [37] = {.lex_state = 81},
  [38] = {.lex_state = 81},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 97},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 65},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 95},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 102},
  [63] = {.lex_state = 103},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 102},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 104},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 65},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 95},
  [78] = {.lex_state = 65},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 92},
  [82] = {.lex_state = 102},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 89},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 65},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 65},
  [93] = {.lex_state = 65},
  [94] = {.lex_state = 65},
  [95] = {.lex_state = 65},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 103},
  [99] = {.lex_state = 65},
  [100] = {.lex_state = 104},
  [101] = {.lex_state = 65},
  [102] = {.lex_state = 104},
  [103] = {.lex_state = 102},
  [104] = {.lex_state = 104},
  [105] = {.lex_state = 65},
  [106] = {.lex_state = 65},
  [107] = {.lex_state = 65},
  [108] = {.lex_state = 65},
  [109] = {.lex_state = 65},
  [110] = {.lex_state = 102},
  [111] = {.lex_state = 89},
  [112] = {.lex_state = 104},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_custom_type_variant] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [aux_sym_block_comment_token3] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_upper_case_identifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym__comment] = STATE(8),
    [sym__imports] = STATE(8),
    [sym_file] = STATE(7),
    [sym_block_comment] = STATE(8),
    [aux_sym_file_repeat1] = STATE(8),
    [sym_line_comment] = STATE(8),
    [sym_type_declaration] = STATE(8),
    [sym_import_clause] = STATE(9),
    [sym_type_alias] = STATE(8),
    [sym_module_declaration] = STATE(8),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_DASH_DASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_LBRACE_DASH] = ACTIONS(13),
  },
  [2] = {
    [sym_upper_case_qid] = STATE(11),
    [sym_upper_case_identifier] = ACTIONS(15),
  },
  [3] = {
    [aux_sym_line_comment_token1] = ACTIONS(17),
  },
  [4] = {
    [sym_upper_case_qid] = STATE(14),
    [sym_upper_case_identifier] = ACTIONS(19),
  },
  [5] = {
    [sym_upper_case_identifier] = ACTIONS(21),
    [anon_sym_alias] = ACTIONS(23),
  },
  [6] = {
    [aux_sym_block_comment_repeat1] = STATE(19),
    [sym_block_comment] = STATE(18),
    [aux_sym_block_comment_token1] = ACTIONS(25),
    [aux_sym_block_comment_token3] = ACTIONS(27),
    [anon_sym_LBRACE_DASH] = ACTIONS(13),
    [aux_sym_block_comment_token2] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [8] = {
    [sym__comment] = STATE(20),
    [sym__imports] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_line_comment] = STATE(20),
    [aux_sym_file_repeat1] = STATE(20),
    [sym_type_declaration] = STATE(20),
    [sym_import_clause] = STATE(9),
    [sym_module_declaration] = STATE(20),
    [sym_type_alias] = STATE(20),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_DASH_DASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_LBRACE_DASH] = ACTIONS(13),
  },
  [9] = {
    [sym_exposing_list] = STATE(23),
    [sym_as_clause] = STATE(24),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(33),
    [anon_sym_LBRACE_DASH] = ACTIONS(33),
    [anon_sym_as] = ACTIONS(35),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(33),
    [anon_sym_exposing] = ACTIONS(37),
  },
  [10] = {
    [aux_sym_value_qid_repeat1] = STATE(26),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_LBRACE_DASH] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_exposing] = ACTIONS(39),
  },
  [11] = {
    [sym_exposing_list] = STATE(27),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(43),
    [anon_sym_LBRACE_DASH] = ACTIONS(43),
    [anon_sym_exposing] = ACTIONS(37),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(45),
    [anon_sym_DASH_DASH] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_type] = ACTIONS(45),
    [anon_sym_LBRACE_DASH] = ACTIONS(45),
  },
  [13] = {
    [aux_sym_value_qid_repeat1] = STATE(28),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_LBRACE_DASH] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_as] = ACTIONS(39),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_exposing] = ACTIONS(39),
  },
  [14] = {
    [anon_sym_DASH_DASH] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_LBRACE_DASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_module] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(47),
    [anon_sym_exposing] = ACTIONS(47),
  },
  [15] = {
    [sym_upper_case_identifier] = ACTIONS(49),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(51),
  },
  [17] = {
    [anon_sym_module] = ACTIONS(53),
    [anon_sym_DASH_DASH] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_type] = ACTIONS(53),
    [anon_sym_LBRACE_DASH] = ACTIONS(53),
    [aux_sym_block_comment_token3] = ACTIONS(53),
  },
  [18] = {
    [aux_sym_block_comment_token3] = ACTIONS(55),
  },
  [19] = {
    [aux_sym_block_comment_repeat1] = STATE(32),
    [aux_sym_block_comment_token3] = ACTIONS(57),
    [aux_sym_block_comment_token1] = ACTIONS(59),
    [aux_sym_block_comment_token2] = ACTIONS(61),
  },
  [20] = {
    [sym__comment] = STATE(20),
    [sym__imports] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_line_comment] = STATE(20),
    [aux_sym_file_repeat1] = STATE(20),
    [sym_type_declaration] = STATE(20),
    [sym_import_clause] = STATE(9),
    [sym_module_declaration] = STATE(20),
    [sym_type_alias] = STATE(20),
    [anon_sym_module] = ACTIONS(63),
    [anon_sym_DASH_DASH] = ACTIONS(66),
    [anon_sym_import] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_type] = ACTIONS(74),
    [anon_sym_LBRACE_DASH] = ACTIONS(77),
  },
  [21] = {
    [anon_sym_LPAREN] = ACTIONS(80),
  },
  [22] = {
    [sym_upper_case_identifier] = ACTIONS(82),
  },
  [23] = {
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_LBRACE_DASH] = ACTIONS(84),
  },
  [24] = {
    [sym_exposing_list] = STATE(35),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_LBRACE_DASH] = ACTIONS(84),
    [anon_sym_exposing] = ACTIONS(37),
  },
  [25] = {
    [sym_upper_case_identifier] = ACTIONS(86),
  },
  [26] = {
    [aux_sym_value_qid_repeat1] = STATE(37),
    [anon_sym_DASH_DASH] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_LBRACE_DASH] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_exposing] = ACTIONS(88),
  },
  [27] = {
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_DASH_DASH] = ACTIONS(90),
    [anon_sym_import] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_type] = ACTIONS(90),
    [anon_sym_LBRACE_DASH] = ACTIONS(90),
  },
  [28] = {
    [aux_sym_value_qid_repeat1] = STATE(38),
    [anon_sym_DASH_DASH] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_LBRACE_DASH] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_as] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_exposing] = ACTIONS(88),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(92),
  },
  [30] = {
    [sym_union_variant] = STATE(41),
    [sym_upper_case_identifier] = ACTIONS(94),
  },
  [31] = {
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [anon_sym_import] = ACTIONS(96),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_type] = ACTIONS(96),
    [anon_sym_LBRACE_DASH] = ACTIONS(96),
    [aux_sym_block_comment_token3] = ACTIONS(96),
  },
  [32] = {
    [aux_sym_block_comment_repeat1] = STATE(32),
    [aux_sym_block_comment_token3] = ACTIONS(98),
    [aux_sym_block_comment_token1] = ACTIONS(100),
    [aux_sym_block_comment_token2] = ACTIONS(103),
  },
  [33] = {
    [sym_lower_case_identifier] = STATE(44),
    [sym_exposed_type] = STATE(45),
    [sym__type_alias_identifier_exposing_all] = STATE(44),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(106),
    [sym_upper_case_identifier] = ACTIONS(108),
  },
  [34] = {
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_LBRACE_DASH] = ACTIONS(110),
    [anon_sym_exposing] = ACTIONS(110),
  },
  [35] = {
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_DASH_DASH] = ACTIONS(112),
    [anon_sym_import] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [anon_sym_LBRACE_DASH] = ACTIONS(112),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [anon_sym_LBRACE_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_as] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [sym_upper_case_identifier] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_exposing] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [37] = {
    [aux_sym_value_qid_repeat1] = STATE(37),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [anon_sym_LBRACE_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_exposing] = ACTIONS(114),
  },
  [38] = {
    [aux_sym_value_qid_repeat1] = STATE(38),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE_DASH] = ACTIONS(114),
    [anon_sym_as] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_exposing] = ACTIONS(114),
  },
  [39] = {
    [sym_string] = STATE(51),
    [sym__basic_datatypes] = STATE(51),
    [sym_list] = STATE(51),
    [sym_inline_record] = STATE(51),
    [sym_tuple] = STATE(51),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [40] = {
    [sym_type_ref] = STATE(53),
    [sym_upper_case_qid] = STATE(54),
    [sym_upper_case_identifier] = ACTIONS(131),
  },
  [41] = {
    [aux_sym_type_declaration_repeat1] = STATE(56),
    [anon_sym_module] = ACTIONS(133),
    [anon_sym_DASH_DASH] = ACTIONS(133),
    [anon_sym_import] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(133),
    [anon_sym_LBRACE_DASH] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(135),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [45] = {
    [aux_sym_exposing_list_repeat1] = STATE(60),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(145),
  },
  [46] = {
    [aux_sym_string_token1] = ACTIONS(147),
  },
  [47] = {
    [sym_string] = STATE(63),
    [sym__basic_datatypes] = STATE(63),
    [sym_list] = STATE(63),
    [sym_inline_record] = STATE(63),
    [sym_tuple] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [48] = {
    [aux_sym_string_token2] = ACTIONS(153),
  },
  [49] = {
    [sym_string] = STATE(66),
    [sym__basic_datatypes] = STATE(66),
    [sym_list] = STATE(66),
    [sym_inline_record] = STATE(66),
    [sym_tuple] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [50] = {
    [sym_record_entry] = STATE(68),
    [sym__assignment] = STATE(69),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(159),
  },
  [51] = {
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_DASH_DASH] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_type] = ACTIONS(161),
    [anon_sym_LBRACE_DASH] = ACTIONS(161),
  },
  [52] = {
    [aux_sym_value_qid_repeat1] = STATE(70),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_LBRACE_DASH] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [sym_upper_case_identifier] = ACTIONS(39),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
  },
  [53] = {
    [anon_sym_module] = ACTIONS(163),
    [anon_sym_DASH_DASH] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(163),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_LBRACE_DASH] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
  },
  [54] = {
    [sym_type_expression] = STATE(74),
    [sym_type_ref] = STATE(72),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(74),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_type] = ACTIONS(167),
    [anon_sym_LBRACE_DASH] = ACTIONS(167),
    [sym_upper_case_identifier] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
  },
  [55] = {
    [sym_union_variant] = STATE(75),
    [sym_upper_case_identifier] = ACTIONS(94),
  },
  [56] = {
    [aux_sym_type_declaration_repeat1] = STATE(76),
    [anon_sym_module] = ACTIONS(171),
    [anon_sym_DASH_DASH] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(171),
    [anon_sym_LBRACE_DASH] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(135),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
  },
  [58] = {
    [anon_sym_module] = ACTIONS(175),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(175),
    [anon_sym_LBRACE_DASH] = ACTIONS(175),
  },
  [59] = {
    [sym_lower_case_identifier] = STATE(44),
    [sym_exposed_type] = STATE(77),
    [sym__type_alias_identifier_exposing_all] = STATE(44),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(106),
    [sym_upper_case_identifier] = ACTIONS(108),
  },
  [60] = {
    [aux_sym_exposing_list_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(145),
  },
  [61] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_LBRACE_DASH] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(181),
    [anon_sym_import] = ACTIONS(181),
  },
  [63] = {
    [aux_sym_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(185),
  },
  [64] = {
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_LBRACE_DASH] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_import] = ACTIONS(187),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(189),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(191),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(193),
  },
  [69] = {
    [aux_sym_inline_record_repeat1] = STATE(88),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(197),
  },
  [70] = {
    [aux_sym_value_qid_repeat1] = STATE(89),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_DASH_DASH] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_LBRACE_DASH] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(41),
    [sym_upper_case_identifier] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
  },
  [71] = {
    [aux_sym_value_qid_repeat1] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_DASH_DASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_LBRACE_DASH] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [sym_upper_case_identifier] = ACTIONS(39),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
  },
  [72] = {
    [aux_sym_type_expression_repeat1] = STATE(92),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_DASH_DASH] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_LBRACE_DASH] = ACTIONS(199),
    [sym_upper_case_identifier] = ACTIONS(199),
    [anon_sym_module] = ACTIONS(199),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
  },
  [73] = {
    [sym_type_expression] = STATE(94),
    [sym_type_ref] = STATE(93),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(167),
    [anon_sym_LBRACE_DASH] = ACTIONS(167),
    [sym_upper_case_identifier] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(167),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
  },
  [74] = {
    [sym_type_expression] = STATE(95),
    [sym_type_ref] = STATE(72),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_LBRACE_DASH] = ACTIONS(207),
    [sym_upper_case_identifier] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_import] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
  },
  [75] = {
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [anon_sym_import] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_LBRACE_DASH] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
  },
  [76] = {
    [aux_sym_type_declaration_repeat1] = STATE(76),
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [anon_sym_import] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_LBRACE_DASH] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
  },
  [78] = {
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_DASH_DASH] = ACTIONS(216),
    [anon_sym_import] = ACTIONS(216),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_type] = ACTIONS(216),
    [anon_sym_LBRACE_DASH] = ACTIONS(216),
  },
  [79] = {
    [aux_sym_exposing_list_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(218),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(221),
    [anon_sym_LBRACE_DASH] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_module] = ACTIONS(221),
    [anon_sym_import] = ACTIONS(221),
  },
  [81] = {
    [sym_string] = STATE(96),
    [sym__basic_datatypes] = STATE(96),
    [sym_list] = STATE(96),
    [sym_inline_record] = STATE(96),
    [sym_tuple] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_DASH_DASH] = ACTIONS(225),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_type] = ACTIONS(225),
    [anon_sym_LBRACE_DASH] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_module] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(225),
  },
  [83] = {
    [aux_sym_list_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(227),
  },
  [84] = {
    [sym_string] = STATE(99),
    [sym__basic_datatypes] = STATE(99),
    [sym_list] = STATE(99),
    [sym_inline_record] = STATE(99),
    [sym_tuple] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [85] = {
    [sym__func_identifiers] = STATE(100),
    [sym_lower_case_identifier] = STATE(100),
    [sym__module_func_identifier] = STATE(100),
    [sym_upper_case_identifier] = ACTIONS(231),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(106),
    [sym_int] = ACTIONS(233),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_DASH_DASH] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_type] = ACTIONS(235),
    [anon_sym_LBRACE_DASH] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_module] = ACTIONS(235),
    [anon_sym_import] = ACTIONS(235),
  },
  [87] = {
    [sym_record_entry] = STATE(68),
    [sym__assignment] = STATE(102),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(159),
  },
  [88] = {
    [aux_sym_inline_record_repeat1] = STATE(104),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(197),
  },
  [89] = {
    [aux_sym_value_qid_repeat1] = STATE(89),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [anon_sym_LBRACE_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_upper_case_identifier] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [90] = {
    [aux_sym_value_qid_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_DASH_DASH] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_LBRACE_DASH] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(41),
    [sym_upper_case_identifier] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
  },
  [91] = {
    [sym_type_ref] = STATE(106),
    [sym_upper_case_qid] = STATE(73),
    [sym_upper_case_identifier] = ACTIONS(169),
  },
  [92] = {
    [aux_sym_type_expression_repeat1] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_DASH_DASH] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_LBRACE_DASH] = ACTIONS(239),
    [sym_upper_case_identifier] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_import] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
  },
  [93] = {
    [aux_sym_type_expression_repeat1] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_DASH_DASH] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_LBRACE_DASH] = ACTIONS(199),
    [sym_upper_case_identifier] = ACTIONS(199),
    [anon_sym_module] = ACTIONS(199),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
  },
  [94] = {
    [sym_type_expression] = STATE(109),
    [sym_type_ref] = STATE(93),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_LBRACE_DASH] = ACTIONS(207),
    [sym_upper_case_identifier] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_import] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
  },
  [95] = {
    [sym_type_expression] = STATE(95),
    [sym_type_ref] = STATE(72),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_DASH_DASH] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_type] = ACTIONS(244),
    [anon_sym_LBRACE_DASH] = ACTIONS(244),
    [sym_upper_case_identifier] = ACTIONS(246),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_DASH_DASH] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_LBRACE_DASH] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_import] = ACTIONS(251),
  },
  [98] = {
    [aux_sym_list_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(249),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(256),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [101] = {
    [anon_sym_DOT] = ACTIONS(260),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_type] = ACTIONS(264),
    [anon_sym_LBRACE_DASH] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(264),
    [anon_sym_import] = ACTIONS(264),
  },
  [104] = {
    [aux_sym_inline_record_repeat1] = STATE(104),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(266),
  },
  [105] = {
    [aux_sym_value_qid_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [anon_sym_LBRACE_DASH] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_upper_case_identifier] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_DASH_DASH] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_type] = ACTIONS(269),
    [anon_sym_LBRACE_DASH] = ACTIONS(269),
    [sym_upper_case_identifier] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
  },
  [107] = {
    [aux_sym_type_expression_repeat1] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_DASH_DASH] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_type] = ACTIONS(269),
    [anon_sym_LBRACE_DASH] = ACTIONS(269),
    [sym_upper_case_identifier] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
  },
  [108] = {
    [aux_sym_type_expression_repeat1] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_DASH_DASH] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_LBRACE_DASH] = ACTIONS(239),
    [sym_upper_case_identifier] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
    [anon_sym_DASH_GT] = ACTIONS(239),
    [anon_sym_import] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
  },
  [109] = {
    [sym_type_expression] = STATE(109),
    [sym_type_ref] = STATE(93),
    [sym_upper_case_qid] = STATE(73),
    [aux_sym_type_ref_repeat1] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_DASH_DASH] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_type] = ACTIONS(244),
    [anon_sym_LBRACE_DASH] = ACTIONS(244),
    [sym_upper_case_identifier] = ACTIONS(246),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_DASH_GT] = ACTIONS(244),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(277),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_type] = ACTIONS(277),
    [anon_sym_LBRACE_DASH] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_module] = ACTIONS(277),
    [anon_sym_import] = ACTIONS(277),
  },
  [111] = {
    [sym_lower_case_identifier] = STATE(112),
    [aux_sym_lower_case_identifier_token1] = ACTIONS(106),
    [sym_upper_case_identifier] = ACTIONS(279),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(16),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = false}, SHIFT(19),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__imports, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_upper_case_qid, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(25),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_import_clause, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = false}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = false}, SHIFT(32),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.count = 1, .reusable = true}, SHIFT(33),
  [82] = {.count = 1, .reusable = true}, SHIFT(34),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__imports, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(36),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_upper_case_qid, 2),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 3),
  [92] = {.count = 1, .reusable = true}, SHIFT(39),
  [94] = {.count = 1, .reusable = true}, SHIFT(40),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(32),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(32),
  [106] = {.count = 1, .reusable = true}, SHIFT(42),
  [108] = {.count = 1, .reusable = true}, SHIFT(43),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_as_clause, 2),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__imports, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_qid_repeat1, 2),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_qid_repeat1, 2), SHIFT_REPEAT(25),
  [119] = {.count = 1, .reusable = false}, SHIFT(46),
  [121] = {.count = 1, .reusable = true}, SHIFT(47),
  [123] = {.count = 1, .reusable = true}, SHIFT(48),
  [125] = {.count = 1, .reusable = true}, SHIFT(51),
  [127] = {.count = 1, .reusable = true}, SHIFT(49),
  [129] = {.count = 1, .reusable = true}, SHIFT(50),
  [131] = {.count = 1, .reusable = true}, SHIFT(52),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_type_declaration, 4),
  [135] = {.count = 1, .reusable = true}, SHIFT(55),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_lower_case_identifier, 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_exposed_type, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(57),
  [143] = {.count = 1, .reusable = true}, SHIFT(58),
  [145] = {.count = 1, .reusable = true}, SHIFT(59),
  [147] = {.count = 1, .reusable = true}, SHIFT(61),
  [149] = {.count = 1, .reusable = true}, SHIFT(63),
  [151] = {.count = 1, .reusable = true}, SHIFT(62),
  [153] = {.count = 1, .reusable = true}, SHIFT(64),
  [155] = {.count = 1, .reusable = true}, SHIFT(66),
  [157] = {.count = 1, .reusable = true}, SHIFT(65),
  [159] = {.count = 1, .reusable = true}, SHIFT(67),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 5),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_union_variant, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(74),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_type_ref, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(71),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_type_declaration, 5),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__type_alias_identifier_exposing_all, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_exposing_list, 4),
  [177] = {.count = 1, .reusable = true}, SHIFT(78),
  [179] = {.count = 1, .reusable = true}, SHIFT(80),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(81),
  [185] = {.count = 1, .reusable = true}, SHIFT(82),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(84),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_record_entry, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(85),
  [195] = {.count = 1, .reusable = true}, SHIFT(86),
  [197] = {.count = 1, .reusable = true}, SHIFT(87),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_type_expression, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(91),
  [203] = {.count = 1, .reusable = true}, SHIFT(94),
  [205] = {.count = 1, .reusable = true}, SHIFT(95),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_type_ref, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_exposing_list, 5),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(59),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [223] = {.count = 1, .reusable = true}, SHIFT(96),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [227] = {.count = 1, .reusable = true}, SHIFT(97),
  [229] = {.count = 1, .reusable = true}, SHIFT(99),
  [231] = {.count = 1, .reusable = true}, SHIFT(101),
  [233] = {.count = 1, .reusable = true}, SHIFT(100),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(103),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_type_expression, 2),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_ref_repeat1, 2), SHIFT_REPEAT(95),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_ref_repeat1, 2),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_ref_repeat1, 2), SHIFT_REPEAT(71),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(81),
  [256] = {.count = 1, .reusable = true}, SHIFT(110),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__assignment, 3),
  [260] = {.count = 1, .reusable = true}, SHIFT(111),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 4),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2), SHIFT_REPEAT(87),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_expression_repeat1, 2),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_expression_repeat1, 2), SHIFT_REPEAT(91),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_ref_repeat1, 2), SHIFT_REPEAT(109),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [279] = {.count = 1, .reusable = true}, SHIFT(112),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_identifier, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elm() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
