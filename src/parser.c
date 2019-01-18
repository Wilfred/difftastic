#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 122
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_type = 1,
  anon_sym_EQ = 2,
  anon_sym_PIPE = 3,
  anon_sym_alias = 4,
  anon_sym_module = 5,
  anon_sym_exposing = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_case = 10,
  anon_sym_of = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_import = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_DOT = 22,
  aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH = 23,
  sym_type_alias_identifier = 24,
  sym_custom_type_variant = 25,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 26,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH = 27,
  sym_int = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH = 30,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 31,
  aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH = 32,
  sym_file = 33,
  sym__statement = 34,
  sym__custom_type_statements = 35,
  sym_custom_type_statement = 36,
  sym_type_alias = 37,
  sym__module = 38,
  sym_module_statement = 39,
  sym_module_statement_with_exposing = 40,
  sym__imports = 41,
  sym__exposing_list = 42,
  sym__simple_statements = 43,
  sym__simple_statement = 44,
  sym_func_statement = 45,
  sym__func_body = 46,
  sym_case_call = 47,
  sym_func_call = 48,
  sym_func_call_params = 49,
  sym_import_statement = 50,
  sym_import_statement_with_exposing = 51,
  sym_inline_record = 52,
  sym_list = 53,
  sym__assignment = 54,
  sym__math_with_model = 55,
  sym_dotted_name = 56,
  sym_module_identifier = 57,
  sym_custom_type_identifier = 58,
  sym__type_alias_identifier_exposing_all = 59,
  sym__func_identifiers = 60,
  sym_func_identifier = 61,
  sym__module_func_identifier = 62,
  sym_func_param = 63,
  sym_record_entry = 64,
  sym_string = 65,
  sym__basic_datatypes = 66,
  sym_tuple = 67,
  aux_sym_file_repeat1 = 68,
  aux_sym_custom_type_statement_repeat1 = 69,
  aux_sym__exposing_list_repeat1 = 70,
  aux_sym_func_statement_repeat1 = 71,
  aux_sym_case_call_repeat1 = 72,
  aux_sym_func_call_params_repeat1 = 73,
  aux_sym_inline_record_repeat1 = 74,
  aux_sym_list_repeat1 = 75,
  aux_sym_list_repeat2 = 76,
  aux_sym_dotted_name_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_alias] = "alias",
  [anon_sym_module] = "module",
  [anon_sym_exposing] = "exposing",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = "/[A-Z][a-z]*/",
  [sym_type_alias_identifier] = "type_alias_identifier",
  [sym_custom_type_variant] = "custom_type_variant",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = "/[a-z][A-Za-z]*/",
  [sym_int] = "int",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH] = "/[\\w &[{}(=*)+\\]!#@-]*/",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH] = "/[\\w\\s]*/",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym__custom_type_statements] = "_custom_type_statements",
  [sym_custom_type_statement] = "custom_type_statement",
  [sym_type_alias] = "type_alias",
  [sym__module] = "_module",
  [sym_module_statement] = "module_statement",
  [sym_module_statement_with_exposing] = "module_statement_with_exposing",
  [sym__imports] = "_imports",
  [sym__exposing_list] = "_exposing_list",
  [sym__simple_statements] = "_simple_statements",
  [sym__simple_statement] = "_simple_statement",
  [sym_func_statement] = "func_statement",
  [sym__func_body] = "_func_body",
  [sym_case_call] = "case_call",
  [sym_func_call] = "func_call",
  [sym_func_call_params] = "func_call_params",
  [sym_import_statement] = "import_statement",
  [sym_import_statement_with_exposing] = "import_statement_with_exposing",
  [sym_inline_record] = "inline_record",
  [sym_list] = "list",
  [sym__assignment] = "_assignment",
  [sym__math_with_model] = "_math_with_model",
  [sym_dotted_name] = "dotted_name",
  [sym_module_identifier] = "module_identifier",
  [sym_custom_type_identifier] = "custom_type_identifier",
  [sym__type_alias_identifier_exposing_all] = "_type_alias_identifier_exposing_all",
  [sym__func_identifiers] = "_func_identifiers",
  [sym_func_identifier] = "func_identifier",
  [sym__module_func_identifier] = "_module_func_identifier",
  [sym_func_param] = "func_param",
  [sym_record_entry] = "record_entry",
  [sym_string] = "string",
  [sym__basic_datatypes] = "_basic_datatypes",
  [sym_tuple] = "tuple",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_custom_type_statement_repeat1] = "custom_type_statement_repeat1",
  [aux_sym__exposing_list_repeat1] = "_exposing_list_repeat1",
  [aux_sym_func_statement_repeat1] = "func_statement_repeat1",
  [aux_sym_case_call_repeat1] = "case_call_repeat1",
  [aux_sym_func_call_params_repeat1] = "func_call_params_repeat1",
  [aux_sym_inline_record_repeat1] = "inline_record_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_type_alias_identifier] = {
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
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = {
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
  [aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_type_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_custom_type_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_module_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_module_statement_with_exposing] = {
    .visible = true,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym__exposing_list] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_func_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__func_body] = {
    .visible = false,
    .named = true,
  },
  [sym_case_call] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_params] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement_with_exposing] = {
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
  [sym__math_with_model] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type_identifier] = {
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
  [sym_func_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__module_func_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_func_param] = {
    .visible = true,
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
  [aux_sym_custom_type_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exposing_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_params_repeat1] = {
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
  [aux_sym_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_name_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'a')
        ADVANCE(20);
      if (lookahead == 'c')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'm')
        ADVANCE(43);
      if (lookahead == 'o')
        ADVANCE(49);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(56);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(59);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\"')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '.')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'i')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'a')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 's')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 29:
      if (lookahead == 'x')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'p')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 's')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'i')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'n')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'g')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 37:
      if (lookahead == 'm')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'p')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'o')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'r')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 't')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 43:
      if (lookahead == 'o')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'd')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'u')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 49:
      if (lookahead == 'f')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 51:
      if (lookahead == 'y')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'p')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_type_alias_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'm')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 't')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'd')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'u')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'y')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'a')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == '-')
        ADVANCE(87);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 87:
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'x')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'n')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'g')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_exposing);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_case);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_custom_type_variant);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 109:
      if (lookahead == 'o')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH);
      if (lookahead == ' ')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(112);
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
        ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH);
      if (lookahead == ' ')
        ADVANCE(113);
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
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH);
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
        ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 119:
      if (lookahead == '(')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '.')
        ADVANCE(6);
      END_STATE();
    case 121:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 122:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      END_STATE();
    case 125:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(82);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 126:
      if (lookahead == '\"')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == '-')
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 79},
  [3] = {.lex_state = 79},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 83},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 97},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 79},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 105},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 105},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 88},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 105},
  [35] = {.lex_state = 108},
  [36] = {.lex_state = 85},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 109},
  [42] = {.lex_state = 109},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 110},
  [45] = {.lex_state = 84},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 115},
  [49] = {.lex_state = 118},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 111},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 103},
  [55] = {.lex_state = 108},
  [56] = {.lex_state = 119},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 79},
  [59] = {.lex_state = 121},
  [60] = {.lex_state = 122},
  [61] = {.lex_state = 123},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 124},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 123},
  [67] = {.lex_state = 125},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 125},
  [70] = {.lex_state = 125},
  [71] = {.lex_state = 126},
  [72] = {.lex_state = 105},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 128},
  [75] = {.lex_state = 108},
  [76] = {.lex_state = 108},
  [77] = {.lex_state = 85},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 110},
  [80] = {.lex_state = 110},
  [81] = {.lex_state = 129},
  [82] = {.lex_state = 128},
  [83] = {.lex_state = 105},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 123},
  [86] = {.lex_state = 124},
  [87] = {.lex_state = 111},
  [88] = {.lex_state = 111},
  [89] = {.lex_state = 123},
  [90] = {.lex_state = 125},
  [91] = {.lex_state = 85},
  [92] = {.lex_state = 125},
  [93] = {.lex_state = 105},
  [94] = {.lex_state = 125},
  [95] = {.lex_state = 123},
  [96] = {.lex_state = 119},
  [97] = {.lex_state = 110},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 110},
  [100] = {.lex_state = 98},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 110},
  [103] = {.lex_state = 124},
  [104] = {.lex_state = 123},
  [105] = {.lex_state = 124},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 125},
  [108] = {.lex_state = 123},
  [109] = {.lex_state = 125},
  [110] = {.lex_state = 125},
  [111] = {.lex_state = 125},
  [112] = {.lex_state = 125},
  [113] = {.lex_state = 84},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 122},
  [116] = {.lex_state = 123},
  [117] = {.lex_state = 109},
  [118] = {.lex_state = 122},
  [119] = {.lex_state = 79},
  [120] = {.lex_state = 122},
  [121] = {.lex_state = 128},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(3),
    [sym_type_alias_identifier] = ACTIONS(3),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(6),
    [sym__statement] = STATE(8),
    [sym__custom_type_statements] = STATE(8),
    [sym_custom_type_statement] = STATE(8),
    [sym_type_alias] = STATE(8),
    [sym__module] = STATE(8),
    [sym_module_statement] = STATE(8),
    [sym_module_statement_with_exposing] = STATE(8),
    [sym__imports] = STATE(8),
    [sym__simple_statements] = STATE(8),
    [sym__simple_statement] = STATE(8),
    [sym_func_statement] = STATE(8),
    [sym_import_statement] = STATE(8),
    [sym_import_statement_with_exposing] = STATE(8),
    [sym_func_identifier] = STATE(7),
    [aux_sym_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(13),
  },
  [2] = {
    [sym_custom_type_identifier] = STATE(11),
    [anon_sym_alias] = ACTIONS(15),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [3] = {
    [sym_dotted_name] = STATE(13),
    [sym_module_identifier] = STATE(14),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
  },
  [4] = {
    [sym_dotted_name] = STATE(15),
    [sym_module_identifier] = STATE(14),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(21),
    [sym_int] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [sym_func_param] = STATE(18),
    [aux_sym_func_statement_repeat1] = STATE(18),
    [anon_sym_EQ] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(29),
  },
  [8] = {
    [sym__statement] = STATE(19),
    [sym__custom_type_statements] = STATE(19),
    [sym_custom_type_statement] = STATE(19),
    [sym_type_alias] = STATE(19),
    [sym__module] = STATE(19),
    [sym_module_statement] = STATE(19),
    [sym_module_statement_with_exposing] = STATE(19),
    [sym__imports] = STATE(19),
    [sym__simple_statements] = STATE(19),
    [sym__simple_statement] = STATE(19),
    [sym_func_statement] = STATE(19),
    [sym_import_statement] = STATE(19),
    [sym_import_statement_with_exposing] = STATE(19),
    [sym_func_identifier] = STATE(7),
    [aux_sym_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(13),
  },
  [9] = {
    [sym_type_alias_identifier] = ACTIONS(33),
  },
  [10] = {
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
  },
  [11] = {
    [anon_sym_EQ] = ACTIONS(37),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_exposing] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(41),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(45),
    [anon_sym_module] = ACTIONS(45),
    [anon_sym_exposing] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(45),
  },
  [14] = {
    [aux_sym_dotted_name_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(51),
    [anon_sym_exposing] = ACTIONS(51),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(51),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_type] = ACTIONS(57),
    [anon_sym_module] = ACTIONS(57),
    [anon_sym_exposing] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(57),
  },
  [16] = {
    [sym__func_body] = STATE(28),
    [sym_case_call] = STATE(28),
    [sym_func_call] = STATE(28),
    [sym__math_with_model] = STATE(28),
    [sym_module_identifier] = STATE(29),
    [sym__func_identifiers] = STATE(30),
    [sym_func_identifier] = STATE(30),
    [sym__module_func_identifier] = STATE(30),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(63),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(65),
  },
  [18] = {
    [sym_func_param] = STATE(33),
    [aux_sym_func_statement_repeat1] = STATE(33),
    [anon_sym_EQ] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(29),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym__custom_type_statements] = STATE(19),
    [sym_custom_type_statement] = STATE(19),
    [sym_type_alias] = STATE(19),
    [sym__module] = STATE(19),
    [sym_module_statement] = STATE(19),
    [sym_module_statement_with_exposing] = STATE(19),
    [sym__imports] = STATE(19),
    [sym__simple_statements] = STATE(19),
    [sym__simple_statement] = STATE(19),
    [sym_func_statement] = STATE(19),
    [sym_import_statement] = STATE(19),
    [sym_import_statement_with_exposing] = STATE(19),
    [sym_func_identifier] = STATE(7),
    [aux_sym_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(74),
    [anon_sym_import] = ACTIONS(77),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(80),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(83),
  },
  [21] = {
    [sym_custom_type_variant] = ACTIONS(85),
  },
  [22] = {
    [sym__exposing_list] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [23] = {
    [sym_module_identifier] = STATE(38),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
  },
  [24] = {
    [aux_sym_dotted_name_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_exposing] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(91),
  },
  [25] = {
    [sym__exposing_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [26] = {
    [sym_func_param] = STATE(42),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(93),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_import] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(23),
    [sym_int] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_module] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(97),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(97),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(99),
  },
  [30] = {
    [sym_func_call_params] = STATE(49),
    [sym_inline_record] = STATE(50),
    [sym_list] = STATE(50),
    [sym_string] = STATE(50),
    [sym__basic_datatypes] = STATE(50),
    [sym_tuple] = STATE(50),
    [aux_sym_func_call_params_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_module] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(103),
    [sym_int] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
  },
  [32] = {
    [sym__func_body] = STATE(52),
    [sym_case_call] = STATE(52),
    [sym_func_call] = STATE(52),
    [sym__math_with_model] = STATE(52),
    [sym_module_identifier] = STATE(29),
    [sym__func_identifiers] = STATE(30),
    [sym_func_identifier] = STATE(30),
    [sym__module_func_identifier] = STATE(30),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(63),
  },
  [33] = {
    [sym_func_param] = STATE(33),
    [aux_sym_func_statement_repeat1] = STATE(33),
    [anon_sym_EQ] = ACTIONS(119),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(121),
  },
  [34] = {
    [sym_inline_record] = STATE(53),
    [sym_list] = STATE(53),
    [sym_string] = STATE(53),
    [sym__basic_datatypes] = STATE(53),
    [sym_tuple] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_int] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [35] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(128),
    [anon_sym_import] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(128),
  },
  [36] = {
    [sym__type_alias_identifier_exposing_all] = STATE(57),
    [sym_func_identifier] = STATE(57),
    [sym_type_alias_identifier] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym_module] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(138),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_exposing] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(140),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(142),
  },
  [39] = {
    [aux_sym_dotted_name_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_exposing] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(142),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_import] = ACTIONS(149),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(149),
  },
  [41] = {
    [anon_sym_of] = ACTIONS(65),
  },
  [42] = {
    [anon_sym_of] = ACTIONS(151),
  },
  [43] = {
    [sym_func_identifier] = STATE(59),
    [sym_type_alias_identifier] = ACTIONS(153),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(155),
  },
  [44] = {
    [sym_inline_record] = STATE(62),
    [sym_list] = STATE(62),
    [sym_string] = STATE(62),
    [sym__basic_datatypes] = STATE(62),
    [sym_tuple] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_int] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [45] = {
    [sym__assignment] = STATE(64),
    [sym_record_entry] = STATE(65),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(161),
  },
  [46] = {
    [sym_func_call] = STATE(67),
    [sym_inline_record] = STATE(70),
    [sym_list] = STATE(70),
    [sym_module_identifier] = STATE(68),
    [sym__func_identifiers] = STATE(69),
    [sym_func_identifier] = STATE(69),
    [sym__module_func_identifier] = STATE(69),
    [sym_string] = STATE(70),
    [sym__basic_datatypes] = STATE(70),
    [sym_tuple] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(163),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
    [sym_int] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [47] = {
    [aux_sym_SLASH_LBRACK_BSLASHw_AMP_LBRACK_LBRACE_RBRACE_LPAREN_EQ_STAR_RPAREN_PLUS_BSLASH_RBRACK_BANG_POUND_AT_DASH_RBRACK_STAR_SLASH] = ACTIONS(167),
  },
  [48] = {
    [aux_sym_SLASH_LBRACK_BSLASHw_BSLASHs_RBRACK_STAR_SLASH] = ACTIONS(169),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(173),
    [anon_sym_module] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(173),
  },
  [50] = {
    [sym_inline_record] = STATE(73),
    [sym_list] = STATE(73),
    [sym_string] = STATE(73),
    [sym__basic_datatypes] = STATE(73),
    [sym_tuple] = STATE(73),
    [aux_sym_func_call_params_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(177),
    [sym_int] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [51] = {
    [sym_module_identifier] = STATE(29),
    [sym__func_identifiers] = STATE(74),
    [sym_func_identifier] = STATE(74),
    [sym__module_func_identifier] = STATE(74),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(155),
    [sym_int] = ACTIONS(181),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(185),
    [anon_sym_module] = ACTIONS(185),
    [anon_sym_import] = ACTIONS(185),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(185),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_import] = ACTIONS(189),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(189),
  },
  [54] = {
    [sym_custom_type_variant] = ACTIONS(191),
  },
  [55] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_import] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(195),
  },
  [56] = {
    [aux_sym__exposing_list_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(201),
  },
  [57] = {
    [aux_sym__exposing_list_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(199),
  },
  [58] = {
    [sym_custom_type_identifier] = STATE(81),
    [aux_sym_case_call_repeat1] = STATE(82),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(205),
    [anon_sym_module] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_import] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(205),
    [sym_int] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_import] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(23),
    [sym_int] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_import] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(209),
    [sym_int] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(207),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(211),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(213),
  },
  [64] = {
    [aux_sym_inline_record_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(219),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(223),
    [anon_sym_module] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_import] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(223),
    [sym_int] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(221),
  },
  [67] = {
    [aux_sym_list_repeat2] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(227),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(229),
  },
  [69] = {
    [sym_func_call_params] = STATE(49),
    [sym_inline_record] = STATE(92),
    [sym_list] = STATE(92),
    [sym_string] = STATE(92),
    [sym__basic_datatypes] = STATE(92),
    [sym_tuple] = STATE(92),
    [aux_sym_func_call_params_repeat1] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_int] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [70] = {
    [aux_sym_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(227),
  },
  [71] = {
    [anon_sym_DQUOTE] = ACTIONS(235),
  },
  [72] = {
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(235),
  },
  [73] = {
    [sym_inline_record] = STATE(73),
    [sym_list] = STATE(73),
    [sym_string] = STATE(73),
    [sym__basic_datatypes] = STATE(73),
    [sym_tuple] = STATE(73),
    [aux_sym_func_call_params_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_import] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(247),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(239),
    [sym_int] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(256),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(261),
    [anon_sym_module] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(261),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(261),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_import] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(265),
  },
  [76] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_import] = ACTIONS(265),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(265),
  },
  [77] = {
    [sym__type_alias_identifier_exposing_all] = STATE(97),
    [sym_func_identifier] = STATE(97),
    [sym_type_alias_identifier] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(274),
    [anon_sym_module] = ACTIONS(274),
    [anon_sym_import] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(274),
  },
  [79] = {
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
  },
  [80] = {
    [aux_sym__exposing_list_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(278),
  },
  [81] = {
    [anon_sym_DASH_GT] = ACTIONS(280),
  },
  [82] = {
    [sym_custom_type_identifier] = STATE(81),
    [aux_sym_case_call_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(284),
  },
  [83] = {
    [sym_inline_record] = STATE(102),
    [sym_list] = STATE(102),
    [sym_string] = STATE(102),
    [sym__basic_datatypes] = STATE(102),
    [sym_tuple] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_int] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [84] = {
    [sym__assignment] = STATE(103),
    [sym_record_entry] = STATE(65),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(161),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(290),
    [anon_sym_module] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(290),
    [sym_int] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(288),
  },
  [86] = {
    [aux_sym_inline_record_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(292),
  },
  [87] = {
    [sym_module_identifier] = STATE(68),
    [sym__func_identifiers] = STATE(106),
    [sym_func_identifier] = STATE(106),
    [sym__module_func_identifier] = STATE(106),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
    [sym_int] = ACTIONS(294),
  },
  [88] = {
    [sym_func_call] = STATE(107),
    [sym_module_identifier] = STATE(68),
    [sym__func_identifiers] = STATE(69),
    [sym_func_identifier] = STATE(69),
    [sym__module_func_identifier] = STATE(69),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(298),
    [sym_int] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(296),
  },
  [90] = {
    [aux_sym_list_repeat2] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [91] = {
    [sym_func_identifier] = STATE(59),
    [sym_type_alias_identifier] = ACTIONS(153),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(134),
  },
  [92] = {
    [sym_inline_record] = STATE(110),
    [sym_list] = STATE(110),
    [sym_string] = STATE(110),
    [sym__basic_datatypes] = STATE(110),
    [sym_tuple] = STATE(110),
    [aux_sym_func_call_params_repeat1] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_int] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [93] = {
    [sym_inline_record] = STATE(111),
    [sym_list] = STATE(111),
    [sym_string] = STATE(111),
    [sym__basic_datatypes] = STATE(111),
    [sym_tuple] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_int] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [94] = {
    [aux_sym_list_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_type] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_import] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(308),
    [sym_int] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(306),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(201),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(314),
    [anon_sym_import] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(314),
  },
  [99] = {
    [aux_sym__exposing_list_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(310),
  },
  [100] = {
    [sym__func_body] = STATE(114),
    [sym_case_call] = STATE(114),
    [sym_func_call] = STATE(114),
    [sym__math_with_model] = STATE(114),
    [sym_module_identifier] = STATE(29),
    [sym__func_identifiers] = STATE(115),
    [sym_func_identifier] = STATE(115),
    [sym__module_func_identifier] = STATE(115),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(63),
  },
  [101] = {
    [sym_custom_type_identifier] = STATE(81),
    [aux_sym_case_call_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_type] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(323),
    [anon_sym_import] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(323),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(328),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_import] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(334),
    [sym_int] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(332),
  },
  [105] = {
    [aux_sym_inline_record_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(330),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(345),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(345),
    [sym_int] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(343),
  },
  [109] = {
    [aux_sym_list_repeat2] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(341),
  },
  [110] = {
    [sym_inline_record] = STATE(110),
    [sym_list] = STATE(110),
    [sym_string] = STATE(110),
    [sym__basic_datatypes] = STATE(110),
    [sym_tuple] = STATE(110),
    [aux_sym_func_call_params_repeat1] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_int] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(256),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
  },
  [112] = {
    [aux_sym_list_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(353),
  },
  [113] = {
    [sym_func_param] = STATE(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(93),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(360),
    [anon_sym_module] = ACTIONS(360),
    [anon_sym_import] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(360),
  },
  [115] = {
    [sym_func_call_params] = STATE(49),
    [sym_inline_record] = STATE(118),
    [sym_list] = STATE(118),
    [sym_string] = STATE(118),
    [sym__basic_datatypes] = STATE(118),
    [sym_tuple] = STATE(118),
    [aux_sym_func_call_params_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_module] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(103),
    [sym_int] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_type] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(366),
    [sym_int] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(364),
  },
  [117] = {
    [anon_sym_of] = ACTIONS(368),
  },
  [118] = {
    [sym_inline_record] = STATE(120),
    [sym_list] = STATE(120),
    [sym_string] = STATE(120),
    [sym__basic_datatypes] = STATE(120),
    [sym_tuple] = STATE(120),
    [aux_sym_func_call_params_repeat1] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(177),
    [sym_int] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
  },
  [119] = {
    [sym_custom_type_identifier] = STATE(81),
    [aux_sym_case_call_repeat1] = STATE(121),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [120] = {
    [sym_inline_record] = STATE(120),
    [sym_list] = STATE(120),
    [sym_string] = STATE(120),
    [sym__basic_datatypes] = STATE(120),
    [sym_tuple] = STATE(120),
    [aux_sym_func_call_params_repeat1] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_import] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(247),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(239),
    [sym_int] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(256),
  },
  [121] = {
    [sym_custom_type_identifier] = STATE(81),
    [aux_sym_case_call_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(284),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_func_identifier, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_func_identifier, 1),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_identifier, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_module_statement, 2),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_module_statement, 2),
  [47] = {.count = 1, .reusable = false}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(26),
  [63] = {.count = 1, .reusable = false}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_func_param, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.count = 1, .reusable = true}, SHIFT(34),
  [85] = {.count = 1, .reusable = true}, SHIFT(35),
  [87] = {.count = 1, .reusable = true}, SHIFT(36),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(41),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 3),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 3),
  [99] = {.count = 1, .reusable = true}, SHIFT(43),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_func_call, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_func_call, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, SHIFT(45),
  [109] = {.count = 1, .reusable = true}, SHIFT(46),
  [111] = {.count = 1, .reusable = true}, SHIFT(50),
  [113] = {.count = 1, .reusable = false}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, SHIFT(48),
  [117] = {.count = 1, .reusable = true}, SHIFT(51),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_func_statement_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_statement_repeat1, 2), SHIFT_REPEAT(17),
  [124] = {.count = 1, .reusable = true}, SHIFT(53),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_statement, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_custom_type_statement, 4),
  [130] = {.count = 1, .reusable = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = true}, SHIFT(56),
  [134] = {.count = 1, .reusable = true}, SHIFT(5),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_module_statement_with_exposing, 4),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_module_statement_with_exposing, 4),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(23),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement_with_exposing, 4),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement_with_exposing, 4),
  [151] = {.count = 1, .reusable = true}, SHIFT(58),
  [153] = {.count = 1, .reusable = true}, SHIFT(59),
  [155] = {.count = 1, .reusable = true}, SHIFT(60),
  [157] = {.count = 1, .reusable = true}, SHIFT(61),
  [159] = {.count = 1, .reusable = true}, SHIFT(62),
  [161] = {.count = 1, .reusable = true}, SHIFT(63),
  [163] = {.count = 1, .reusable = true}, SHIFT(66),
  [165] = {.count = 1, .reusable = true}, SHIFT(70),
  [167] = {.count = 1, .reusable = false}, SHIFT(71),
  [169] = {.count = 1, .reusable = false}, SHIFT(72),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_func_call, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_func_call, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_func_call_params, 1),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_func_call_params, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(73),
  [181] = {.count = 1, .reusable = true}, SHIFT(74),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 4),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 4),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 5),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias, 5),
  [191] = {.count = 1, .reusable = true}, SHIFT(75),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_statement, 5),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_custom_type_statement, 5),
  [197] = {.count = 1, .reusable = true}, SHIFT(77),
  [199] = {.count = 1, .reusable = true}, SHIFT(78),
  [201] = {.count = 1, .reusable = true}, SHIFT(79),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_identifier, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__module_func_identifier, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(83),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_record_entry, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(84),
  [217] = {.count = 1, .reusable = true}, SHIFT(85),
  [219] = {.count = 1, .reusable = true}, SHIFT(87),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(88),
  [227] = {.count = 1, .reusable = true}, SHIFT(89),
  [229] = {.count = 1, .reusable = true}, SHIFT(91),
  [231] = {.count = 1, .reusable = true}, SHIFT(92),
  [233] = {.count = 1, .reusable = true}, SHIFT(93),
  [235] = {.count = 1, .reusable = true}, SHIFT(95),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(44),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(45),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(46),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(73),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(47),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(48),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__math_with_model, 3),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym__math_with_model, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2), SHIFT_REPEAT(54),
  [270] = {.count = 1, .reusable = true}, SHIFT(96),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 3),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__type_alias_identifier_exposing_all, 2),
  [278] = {.count = 1, .reusable = true}, SHIFT(98),
  [280] = {.count = 1, .reusable = true}, SHIFT(100),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_case_call, 4),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_case_call, 4),
  [286] = {.count = 1, .reusable = true}, SHIFT(102),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(104),
  [294] = {.count = 1, .reusable = true}, SHIFT(106),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(108),
  [302] = {.count = 1, .reusable = true}, SHIFT(110),
  [304] = {.count = 1, .reusable = true}, SHIFT(111),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 4),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 4),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2), SHIFT_REPEAT(77),
  [319] = {.count = 1, .reusable = false}, SHIFT(113),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 2),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2), SHIFT_REPEAT(10),
  [328] = {.count = 1, .reusable = true}, SHIFT(116),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 4),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 4),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2), SHIFT_REPEAT(84),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__assignment, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat2, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(88),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(110),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(93),
  [358] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 3),
  [360] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 3),
  [362] = {.count = 1, .reusable = true}, SHIFT(118),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [368] = {.count = 1, .reusable = true}, SHIFT(119),
  [370] = {.count = 1, .reusable = true}, SHIFT(120),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(120),
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
