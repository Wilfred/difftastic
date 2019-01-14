#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 113
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_type = 1,
  anon_sym_EQ = 2,
  anon_sym_PIPE = 3,
  anon_sym_module = 4,
  anon_sym_exposing = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_case = 9,
  anon_sym_of = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_import = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_DOT = 21,
  aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH = 22,
  sym_custom_type_variant = 23,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 24,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH = 25,
  sym_int = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_SLASH_DOT_STAR_SLASH = 28,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 29,
  sym_file = 30,
  sym__statement = 31,
  sym__custom_type_statements = 32,
  sym_custom_type_statement = 33,
  sym__module = 34,
  sym_module_statement = 35,
  sym_module_statement_with_exposing = 36,
  sym__imports = 37,
  sym__exposing_list = 38,
  sym__simple_statements = 39,
  sym__simple_statement = 40,
  sym_func_statement = 41,
  sym__func_body = 42,
  sym_case_call = 43,
  sym_func_call = 44,
  sym_func_call_params = 45,
  sym_import_statement = 46,
  sym_import_statement_with_exposing = 47,
  sym_inline_record = 48,
  sym_list = 49,
  sym__assignment = 50,
  sym__math_with_model = 51,
  sym_dotted_name = 52,
  sym_module_identifier = 53,
  sym_type_alias_identifier = 54,
  sym_custom_type_identifier = 55,
  sym__type_alias_identifier_exposing_all = 56,
  sym__func_identifiers = 57,
  sym_func_identifier = 58,
  sym__module_func_identifier = 59,
  sym_func_param = 60,
  sym_record_entry = 61,
  sym_string = 62,
  sym__basic_datatypes = 63,
  aux_sym_file_repeat1 = 64,
  aux_sym_custom_type_statement_repeat1 = 65,
  aux_sym__exposing_list_repeat1 = 66,
  aux_sym_func_statement_repeat1 = 67,
  aux_sym_case_call_repeat1 = 68,
  aux_sym_func_call_params_repeat1 = 69,
  aux_sym_inline_record_repeat1 = 70,
  aux_sym_list_repeat1 = 71,
  aux_sym_list_repeat2 = 72,
  aux_sym_dotted_name_repeat1 = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
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
  [sym_custom_type_variant] = "custom_type_variant",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = "/[a-z][A-Za-z]*/",
  [sym_int] = "int",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym__custom_type_statements] = "_custom_type_statements",
  [sym_custom_type_statement] = "custom_type_statement",
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
  [sym_type_alias_identifier] = "type_alias_identifier",
  [sym_custom_type_identifier] = "custom_type_identifier",
  [sym__type_alias_identifier_exposing_all] = "_type_alias_identifier_exposing_all",
  [sym__func_identifiers] = "_func_identifiers",
  [sym_func_identifier] = "func_identifier",
  [sym__module_func_identifier] = "_module_func_identifier",
  [sym_func_param] = "func_param",
  [sym_record_entry] = "record_entry",
  [sym_string] = "string",
  [sym__basic_datatypes] = "_basic_datatypes",
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
  [aux_sym_SLASH_DOT_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
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
  [sym_type_alias_identifier] = {
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
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(32);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(44);
      if (lookahead == 't')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
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
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 's')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 24:
      if (lookahead == 'x')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'p')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'o')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 's')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'i')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'g')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 32:
      if (lookahead == 'm')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'p')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'o')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'r')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 38:
      if (lookahead == 'o')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'd')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'l')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 44:
      if (lookahead == 'f')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 46:
      if (lookahead == 'y')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'p')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'm')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 't')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'd')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'u')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_module);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'y')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_case);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == '\"')
        ADVANCE(2);
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
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(79);
      END_STATE();
    case 80:
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == '-')
        ADVANCE(82);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'x')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'n')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'g')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_exposing);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_custom_type_variant);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '(')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 99:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == 'o')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(104);
      if (lookahead != 0)
        ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(108);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == '.')
        ADVANCE(6);
      END_STATE();
    case 109:
      if (lookahead == '(')
        ADVANCE(108);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      END_STATE();
    case 113:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 114:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == '\"')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 118:
      if (lookahead == '-')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 95},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 95},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 97},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 97},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 100},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 101},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 101},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 93},
  [50] = {.lex_state = 100},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 109},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 110},
  [56] = {.lex_state = 111},
  [57] = {.lex_state = 80},
  [58] = {.lex_state = 112},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 114},
  [62] = {.lex_state = 83},
  [63] = {.lex_state = 114},
  [64] = {.lex_state = 114},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 97},
  [67] = {.lex_state = 99},
  [68] = {.lex_state = 117},
  [69] = {.lex_state = 100},
  [70] = {.lex_state = 100},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 109},
  [74] = {.lex_state = 109},
  [75] = {.lex_state = 118},
  [76] = {.lex_state = 117},
  [77] = {.lex_state = 80},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 112},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 101},
  [82] = {.lex_state = 113},
  [83] = {.lex_state = 114},
  [84] = {.lex_state = 101},
  [85] = {.lex_state = 114},
  [86] = {.lex_state = 97},
  [87] = {.lex_state = 114},
  [88] = {.lex_state = 113},
  [89] = {.lex_state = 109},
  [90] = {.lex_state = 109},
  [91] = {.lex_state = 55},
  [92] = {.lex_state = 109},
  [93] = {.lex_state = 73},
  [94] = {.lex_state = 117},
  [95] = {.lex_state = 112},
  [96] = {.lex_state = 113},
  [97] = {.lex_state = 112},
  [98] = {.lex_state = 112},
  [99] = {.lex_state = 114},
  [100] = {.lex_state = 113},
  [101] = {.lex_state = 114},
  [102] = {.lex_state = 114},
  [103] = {.lex_state = 114},
  [104] = {.lex_state = 114},
  [105] = {.lex_state = 80},
  [106] = {.lex_state = 117},
  [107] = {.lex_state = 110},
  [108] = {.lex_state = 102},
  [109] = {.lex_state = 110},
  [110] = {.lex_state = 73},
  [111] = {.lex_state = 110},
  [112] = {.lex_state = 117},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(1),
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
    [sym_custom_type_identifier] = STATE(10),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym_dotted_name] = STATE(12),
    [sym_module_identifier] = STATE(13),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [4] = {
    [sym_dotted_name] = STATE(14),
    [sym_module_identifier] = STATE(13),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [5] = {
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [sym_int] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [sym_func_param] = STATE(17),
    [aux_sym_func_statement_repeat1] = STATE(17),
    [anon_sym_EQ] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(27),
  },
  [8] = {
    [sym__statement] = STATE(18),
    [sym__custom_type_statements] = STATE(18),
    [sym_custom_type_statement] = STATE(18),
    [sym__module] = STATE(18),
    [sym_module_statement] = STATE(18),
    [sym_module_statement_with_exposing] = STATE(18),
    [sym__imports] = STATE(18),
    [sym__simple_statements] = STATE(18),
    [sym__simple_statement] = STATE(18),
    [sym_func_statement] = STATE(18),
    [sym_import_statement] = STATE(18),
    [sym_import_statement_with_exposing] = STATE(18),
    [sym_func_identifier] = STATE(7),
    [aux_sym_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(13),
  },
  [9] = {
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(31),
  },
  [10] = {
    [anon_sym_EQ] = ACTIONS(33),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_exposing] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(35),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(37),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_exposing] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(41),
  },
  [13] = {
    [aux_sym_dotted_name_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_module] = ACTIONS(47),
    [anon_sym_exposing] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(47),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(53),
    [anon_sym_module] = ACTIONS(53),
    [anon_sym_exposing] = ACTIONS(55),
    [anon_sym_import] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(53),
  },
  [15] = {
    [sym__func_body] = STATE(26),
    [sym_case_call] = STATE(26),
    [sym_func_call] = STATE(26),
    [sym__math_with_model] = STATE(26),
    [sym_module_identifier] = STATE(27),
    [sym__func_identifiers] = STATE(28),
    [sym_func_identifier] = STATE(28),
    [sym__module_func_identifier] = STATE(28),
    [sym_func_param] = STATE(29),
    [anon_sym_case] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(59),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(61),
  },
  [17] = {
    [sym_func_param] = STATE(31),
    [aux_sym_func_statement_repeat1] = STATE(31),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(27),
  },
  [18] = {
    [sym__statement] = STATE(18),
    [sym__custom_type_statements] = STATE(18),
    [sym_custom_type_statement] = STATE(18),
    [sym__module] = STATE(18),
    [sym_module_statement] = STATE(18),
    [sym_module_statement_with_exposing] = STATE(18),
    [sym__imports] = STATE(18),
    [sym__simple_statements] = STATE(18),
    [sym__simple_statement] = STATE(18),
    [sym_func_statement] = STATE(18),
    [sym_import_statement] = STATE(18),
    [sym_import_statement_with_exposing] = STATE(18),
    [sym_func_identifier] = STATE(7),
    [aux_sym_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_type] = ACTIONS(67),
    [anon_sym_module] = ACTIONS(70),
    [anon_sym_import] = ACTIONS(73),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(76),
  },
  [19] = {
    [sym_custom_type_variant] = ACTIONS(79),
  },
  [20] = {
    [sym__exposing_list] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(81),
  },
  [21] = {
    [sym_module_identifier] = STATE(35),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [22] = {
    [aux_sym_dotted_name_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_exposing] = ACTIONS(85),
    [anon_sym_import] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(85),
  },
  [23] = {
    [sym__exposing_list] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(81),
  },
  [24] = {
    [sym_func_param] = STATE(39),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(87),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(21),
    [anon_sym_module] = ACTIONS(21),
    [anon_sym_import] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(21),
    [sym_int] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(91),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(93),
  },
  [28] = {
    [sym_func_call_params] = STATE(45),
    [sym_inline_record] = STATE(46),
    [sym_list] = STATE(46),
    [sym_string] = STATE(46),
    [sym__basic_datatypes] = STATE(46),
    [aux_sym_func_call_params_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_module] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(97),
    [sym_int] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [29] = {
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
  },
  [30] = {
    [sym__func_body] = STATE(48),
    [sym_case_call] = STATE(48),
    [sym_func_call] = STATE(48),
    [sym__math_with_model] = STATE(48),
    [sym_module_identifier] = STATE(27),
    [sym__func_identifiers] = STATE(28),
    [sym_func_identifier] = STATE(28),
    [sym__module_func_identifier] = STATE(28),
    [sym_func_param] = STATE(29),
    [anon_sym_case] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(59),
  },
  [31] = {
    [sym_func_param] = STATE(31),
    [aux_sym_func_statement_repeat1] = STATE(31),
    [anon_sym_EQ] = ACTIONS(111),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(113),
  },
  [32] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(118),
  },
  [33] = {
    [sym_type_alias_identifier] = STATE(52),
    [sym__type_alias_identifier_exposing_all] = STATE(53),
    [sym_func_identifier] = STATE(53),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(128),
    [anon_sym_import] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(128),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_exposing] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(132),
  },
  [36] = {
    [aux_sym_dotted_name_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_exposing] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(132),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_module] = ACTIONS(139),
    [anon_sym_import] = ACTIONS(139),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(139),
  },
  [38] = {
    [anon_sym_of] = ACTIONS(61),
  },
  [39] = {
    [anon_sym_of] = ACTIONS(141),
  },
  [40] = {
    [sym_type_alias_identifier] = STATE(56),
    [sym_func_identifier] = STATE(56),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(143),
  },
  [41] = {
    [sym__assignment] = STATE(58),
    [sym_record_entry] = STATE(59),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(145),
  },
  [42] = {
    [sym_func_call] = STATE(61),
    [sym_module_identifier] = STATE(62),
    [sym__func_identifiers] = STATE(63),
    [sym_func_identifier] = STATE(63),
    [sym__module_func_identifier] = STATE(63),
    [sym_string] = STATE(64),
    [sym__basic_datatypes] = STATE(64),
    [anon_sym_RBRACK] = ACTIONS(147),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
    [sym_int] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [43] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(151),
  },
  [44] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(153),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(157),
    [anon_sym_module] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(155),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(157),
  },
  [46] = {
    [sym_inline_record] = STATE(67),
    [sym_list] = STATE(67),
    [sym_string] = STATE(67),
    [sym__basic_datatypes] = STATE(67),
    [aux_sym_func_call_params_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_type] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(161),
    [sym_int] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [47] = {
    [sym_module_identifier] = STATE(27),
    [sym__func_identifiers] = STATE(68),
    [sym_func_identifier] = STATE(68),
    [sym__module_func_identifier] = STATE(68),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(143),
    [sym_int] = ACTIONS(165),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(169),
    [anon_sym_import] = ACTIONS(169),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(169),
  },
  [49] = {
    [sym_custom_type_variant] = ACTIONS(171),
  },
  [50] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_type] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(175),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(175),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_import] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(177),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(179),
    [sym_int] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(177),
  },
  [52] = {
    [aux_sym__exposing_list_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(185),
  },
  [53] = {
    [aux_sym__exposing_list_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(183),
  },
  [54] = {
    [sym_custom_type_identifier] = STATE(75),
    [aux_sym_case_call_repeat1] = STATE(76),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(21),
    [anon_sym_module] = ACTIONS(21),
    [anon_sym_import] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(21),
    [sym_int] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_import] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(189),
    [sym_int] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(187),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(191),
  },
  [58] = {
    [aux_sym_inline_record_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(197),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_module] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_import] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(201),
    [sym_int] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(199),
  },
  [61] = {
    [aux_sym_list_repeat2] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(205),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(207),
  },
  [63] = {
    [sym_func_call_params] = STATE(45),
    [sym_inline_record] = STATE(85),
    [sym_list] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_datatypes] = STATE(85),
    [aux_sym_func_call_params_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_int] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [64] = {
    [aux_sym_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(205),
  },
  [65] = {
    [anon_sym_DQUOTE] = ACTIONS(213),
  },
  [66] = {
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
  },
  [67] = {
    [sym_inline_record] = STATE(67),
    [sym_list] = STATE(67),
    [sym_string] = STATE(67),
    [sym__basic_datatypes] = STATE(67),
    [aux_sym_func_call_params_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_import] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(217),
    [sym_int] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_type] = ACTIONS(236),
    [anon_sym_module] = ACTIONS(236),
    [anon_sym_import] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(236),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_module] = ACTIONS(240),
    [anon_sym_import] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(240),
  },
  [70] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_module] = ACTIONS(240),
    [anon_sym_import] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(240),
  },
  [71] = {
    [sym_type_alias_identifier] = STATE(89),
    [sym__type_alias_identifier_exposing_all] = STATE(90),
    [sym_func_identifier] = STATE(90),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_module] = ACTIONS(247),
    [anon_sym_import] = ACTIONS(247),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(247),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
  },
  [74] = {
    [aux_sym__exposing_list_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(251),
  },
  [75] = {
    [anon_sym_DASH_GT] = ACTIONS(253),
  },
  [76] = {
    [sym_custom_type_identifier] = STATE(75),
    [aux_sym_case_call_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(257),
    [anon_sym_import] = ACTIONS(257),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(257),
  },
  [77] = {
    [sym__assignment] = STATE(95),
    [sym_record_entry] = STATE(59),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(145),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(261),
    [anon_sym_module] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_import] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(261),
    [sym_int] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(259),
  },
  [79] = {
    [aux_sym_inline_record_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(263),
  },
  [80] = {
    [sym_module_identifier] = STATE(62),
    [sym__func_identifiers] = STATE(98),
    [sym_func_identifier] = STATE(98),
    [sym__module_func_identifier] = STATE(98),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
    [sym_int] = ACTIONS(265),
  },
  [81] = {
    [sym_func_call] = STATE(99),
    [sym_module_identifier] = STATE(62),
    [sym__func_identifiers] = STATE(63),
    [sym_func_identifier] = STATE(63),
    [sym__module_func_identifier] = STATE(63),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(269),
    [sym_int] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(267),
  },
  [83] = {
    [aux_sym_list_repeat2] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(271),
  },
  [84] = {
    [sym_type_alias_identifier] = STATE(56),
    [sym_func_identifier] = STATE(56),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [85] = {
    [sym_inline_record] = STATE(102),
    [sym_list] = STATE(102),
    [sym_string] = STATE(102),
    [sym__basic_datatypes] = STATE(102),
    [aux_sym_func_call_params_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_int] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [86] = {
    [sym_string] = STATE(103),
    [sym__basic_datatypes] = STATE(103),
    [sym_int] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [87] = {
    [aux_sym_list_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(271),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_import] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(279),
    [sym_int] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(277),
  },
  [89] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(185),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_import] = ACTIONS(285),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(285),
  },
  [92] = {
    [aux_sym__exposing_list_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [93] = {
    [sym__func_body] = STATE(106),
    [sym_case_call] = STATE(106),
    [sym_func_call] = STATE(106),
    [sym__math_with_model] = STATE(106),
    [sym_module_identifier] = STATE(27),
    [sym__func_identifiers] = STATE(107),
    [sym_func_identifier] = STATE(107),
    [sym__module_func_identifier] = STATE(107),
    [sym_func_param] = STATE(29),
    [anon_sym_case] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(59),
  },
  [94] = {
    [sym_custom_type_identifier] = STATE(75),
    [aux_sym_case_call_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(294),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(294),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(303),
    [sym_int] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(301),
  },
  [97] = {
    [aux_sym_inline_record_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
  },
  [99] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_import] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(314),
    [sym_int] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(312),
  },
  [101] = {
    [aux_sym_list_repeat2] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(310),
  },
  [102] = {
    [sym_inline_record] = STATE(102),
    [sym_list] = STATE(102),
    [sym_string] = STATE(102),
    [sym__basic_datatypes] = STATE(102),
    [aux_sym_func_call_params_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_int] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
  },
  [104] = {
    [aux_sym_list_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(322),
  },
  [105] = {
    [sym_func_param] = STATE(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(87),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(329),
    [anon_sym_module] = ACTIONS(329),
    [anon_sym_import] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(329),
  },
  [107] = {
    [sym_func_call_params] = STATE(45),
    [sym_inline_record] = STATE(109),
    [sym_list] = STATE(109),
    [sym_string] = STATE(109),
    [sym__basic_datatypes] = STATE(109),
    [aux_sym_func_call_params_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_module] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(95),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(97),
    [sym_int] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [108] = {
    [anon_sym_of] = ACTIONS(333),
  },
  [109] = {
    [sym_inline_record] = STATE(111),
    [sym_list] = STATE(111),
    [sym_string] = STATE(111),
    [sym__basic_datatypes] = STATE(111),
    [aux_sym_func_call_params_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_type] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(161),
    [sym_int] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
  },
  [110] = {
    [sym_custom_type_identifier] = STATE(75),
    [aux_sym_case_call_repeat1] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [111] = {
    [sym_inline_record] = STATE(111),
    [sym_list] = STATE(111),
    [sym_string] = STATE(111),
    [sym__basic_datatypes] = STATE(111),
    [aux_sym_func_call_params_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_import] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(217),
    [sym_int] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
  },
  [112] = {
    [sym_custom_type_identifier] = STATE(75),
    [aux_sym_case_call_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(257),
    [anon_sym_import] = ACTIONS(257),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(257),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_func_identifier, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_func_identifier, 1),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_identifier, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_module_statement, 2),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_module_statement, 2),
  [43] = {.count = 1, .reusable = false}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [55] = {.count = 1, .reusable = false}, SHIFT(23),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_func_param, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(30),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.count = 1, .reusable = true}, SHIFT(32),
  [81] = {.count = 1, .reusable = true}, SHIFT(33),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(38),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 3),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 3),
  [93] = {.count = 1, .reusable = true}, SHIFT(40),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_func_call, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_func_call, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(41),
  [101] = {.count = 1, .reusable = true}, SHIFT(42),
  [103] = {.count = 1, .reusable = true}, SHIFT(46),
  [105] = {.count = 1, .reusable = false}, SHIFT(43),
  [107] = {.count = 1, .reusable = true}, SHIFT(44),
  [109] = {.count = 1, .reusable = true}, SHIFT(47),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_func_statement_repeat1, 2),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_statement_repeat1, 2), SHIFT_REPEAT(16),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_statement, 4),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_custom_type_statement, 4),
  [120] = {.count = 1, .reusable = true}, SHIFT(49),
  [122] = {.count = 1, .reusable = true}, SHIFT(51),
  [124] = {.count = 1, .reusable = true}, SHIFT(5),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_module_statement_with_exposing, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_module_statement_with_exposing, 4),
  [130] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [132] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(21),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement_with_exposing, 4),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement_with_exposing, 4),
  [141] = {.count = 1, .reusable = true}, SHIFT(54),
  [143] = {.count = 1, .reusable = true}, SHIFT(55),
  [145] = {.count = 1, .reusable = true}, SHIFT(57),
  [147] = {.count = 1, .reusable = true}, SHIFT(60),
  [149] = {.count = 1, .reusable = true}, SHIFT(64),
  [151] = {.count = 1, .reusable = false}, SHIFT(65),
  [153] = {.count = 1, .reusable = false}, SHIFT(66),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_func_call, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_func_call, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_func_call_params, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_func_call_params, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(67),
  [165] = {.count = 1, .reusable = true}, SHIFT(68),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 4),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 4),
  [171] = {.count = 1, .reusable = true}, SHIFT(69),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_statement, 5),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_custom_type_statement, 5),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias_identifier, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias_identifier, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(71),
  [183] = {.count = 1, .reusable = true}, SHIFT(72),
  [185] = {.count = 1, .reusable = true}, SHIFT(73),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_identifier, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__module_func_identifier, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_record_entry, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(77),
  [195] = {.count = 1, .reusable = true}, SHIFT(78),
  [197] = {.count = 1, .reusable = true}, SHIFT(80),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(81),
  [205] = {.count = 1, .reusable = true}, SHIFT(82),
  [207] = {.count = 1, .reusable = true}, SHIFT(84),
  [209] = {.count = 1, .reusable = true}, SHIFT(85),
  [211] = {.count = 1, .reusable = true}, SHIFT(86),
  [213] = {.count = 1, .reusable = true}, SHIFT(88),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(41),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(42),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(67),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(43),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(44),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__math_with_model, 3),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__math_with_model, 3),
  [238] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [240] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2), SHIFT_REPEAT(49),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__type_alias_identifier_exposing_all, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(91),
  [253] = {.count = 1, .reusable = true}, SHIFT(93),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_case_call, 4),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_case_call, 4),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 3),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 3),
  [263] = {.count = 1, .reusable = true}, SHIFT(96),
  [265] = {.count = 1, .reusable = true}, SHIFT(98),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [271] = {.count = 1, .reusable = true}, SHIFT(100),
  [273] = {.count = 1, .reusable = true}, SHIFT(102),
  [275] = {.count = 1, .reusable = true}, SHIFT(103),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 4),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 4),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2), SHIFT_REPEAT(71),
  [290] = {.count = 1, .reusable = false}, SHIFT(105),
  [292] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2),
  [294] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 2),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2), SHIFT_REPEAT(9),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 4),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 4),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2), SHIFT_REPEAT(77),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym__assignment, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat2, 2),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(81),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(102),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(86),
  [327] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 3),
  [329] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 3),
  [331] = {.count = 1, .reusable = true}, SHIFT(109),
  [333] = {.count = 1, .reusable = true}, SHIFT(110),
  [335] = {.count = 1, .reusable = true}, SHIFT(111),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(111),
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
