#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 93
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  anon_sym_DOT = 12,
  anon_sym_import = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH = 20,
  sym_custom_type_variant = 21,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 22,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH = 23,
  sym_int = 24,
  sym_file = 25,
  sym__statement = 26,
  sym__custom_type_statements = 27,
  sym_custom_type_statement = 28,
  sym__module = 29,
  sym_module_statement = 30,
  sym_module_statement_with_exposing = 31,
  sym__imports = 32,
  sym__exposing_list = 33,
  sym__simple_statements = 34,
  sym__simple_statement = 35,
  sym_func_statement = 36,
  sym__func_body = 37,
  sym_case_call = 38,
  sym_func_call = 39,
  sym__local_func_call = 40,
  sym__module_func_call = 41,
  sym__local_func_call_with_params = 42,
  sym__module_func_call_with_params = 43,
  sym_func_call_params = 44,
  sym__module_func_identifier = 45,
  sym_import_statement = 46,
  sym_import_statement_with_exposing = 47,
  sym_inline_record = 48,
  sym__assignment = 49,
  sym__math_with_model = 50,
  sym_dotted_name = 51,
  sym_module_identifier = 52,
  sym_type_alias_identifier = 53,
  sym_custom_type_identifier = 54,
  sym__type_alias_identifier_exposing_all = 55,
  sym_func_identifier = 56,
  sym_func_param = 57,
  sym_record_entry = 58,
  aux_sym_file_repeat1 = 59,
  aux_sym_custom_type_statement_repeat1 = 60,
  aux_sym__exposing_list_repeat1 = 61,
  aux_sym_func_statement_repeat1 = 62,
  aux_sym_case_call_repeat1 = 63,
  aux_sym_func_call_params_repeat1 = 64,
  aux_sym_inline_record_repeat1 = 65,
  aux_sym_dotted_name_repeat1 = 66,
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
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = "/[A-Z][a-z]*/",
  [sym_custom_type_variant] = "custom_type_variant",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = "/[a-z][A-Za-z]*/",
  [sym_int] = "int",
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
  [sym__local_func_call] = "_local_func_call",
  [sym__module_func_call] = "_module_func_call",
  [sym__local_func_call_with_params] = "_local_func_call_with_params",
  [sym__module_func_call_with_params] = "_module_func_call_with_params",
  [sym_func_call_params] = "func_call_params",
  [sym__module_func_identifier] = "_module_func_identifier",
  [sym_import_statement] = "import_statement",
  [sym_import_statement_with_exposing] = "import_statement_with_exposing",
  [sym_inline_record] = "inline_record",
  [sym__assignment] = "_assignment",
  [sym__math_with_model] = "_math_with_model",
  [sym_dotted_name] = "dotted_name",
  [sym_module_identifier] = "module_identifier",
  [sym_type_alias_identifier] = "type_alias_identifier",
  [sym_custom_type_identifier] = "custom_type_identifier",
  [sym__type_alias_identifier_exposing_all] = "_type_alias_identifier_exposing_all",
  [sym_func_identifier] = "func_identifier",
  [sym_func_param] = "func_param",
  [sym_record_entry] = "record_entry",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_custom_type_statement_repeat1] = "custom_type_statement_repeat1",
  [aux_sym__exposing_list_repeat1] = "_exposing_list_repeat1",
  [aux_sym_func_statement_repeat1] = "func_statement_repeat1",
  [aux_sym_case_call_repeat1] = "case_call_repeat1",
  [aux_sym_func_call_params_repeat1] = "func_call_params_repeat1",
  [aux_sym_inline_record_repeat1] = "inline_record_repeat1",
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
  [sym__local_func_call] = {
    .visible = false,
    .named = true,
  },
  [sym__module_func_call] = {
    .visible = false,
    .named = true,
  },
  [sym__local_func_call_with_params] = {
    .visible = false,
    .named = true,
  },
  [sym__module_func_call_with_params] = {
    .visible = false,
    .named = true,
  },
  [sym_func_call_params] = {
    .visible = true,
    .named = true,
  },
  [sym__module_func_identifier] = {
    .visible = false,
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
  [sym_func_identifier] = {
    .visible = true,
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
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(27);
      if (lookahead == 'm')
        ADVANCE(33);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '.')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ')')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      if (lookahead == 'a')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 's')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'e')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 19:
      if (lookahead == 'x')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'p')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'n')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'g')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 27:
      if (lookahead == 'm')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'p')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'r')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 33:
      if (lookahead == 'o')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'd')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'u')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'l')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 39:
      if (lookahead == 'f')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 41:
      if (lookahead == 'y')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'p')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'm')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'r')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 't')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'd')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'u')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'l')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_module);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'y')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'c')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'a')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_case);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == '-')
        ADVANCE(77);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 78:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(79);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'x')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'p')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'o')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 's')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'i')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'n')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH);
      if (lookahead == 'g')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_exposing);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'e')
        ADVANCE(79);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_custom_type_variant);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '(')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 95:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 98:
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(101);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 101:
      if (lookahead == '.')
        ADVANCE(3);
      END_STATE();
    case 102:
      if (lookahead == '(')
        ADVANCE(101);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(49);
      END_STATE();
    case 105:
      if (lookahead == '-')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 78},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 78},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 88},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 96},
  [35] = {.lex_state = 97},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 97},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 88},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 68},
  [55] = {.lex_state = 75},
  [56] = {.lex_state = 103},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 95},
  [59] = {.lex_state = 104},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 96},
  [63] = {.lex_state = 96},
  [64] = {.lex_state = 97},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 102},
  [68] = {.lex_state = 105},
  [69] = {.lex_state = 94},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 104},
  [72] = {.lex_state = 103},
  [73] = {.lex_state = 99},
  [74] = {.lex_state = 102},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 68},
  [79] = {.lex_state = 94},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 94},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 104},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 104},
  [92] = {.lex_state = 94},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
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
    [anon_sym_RBRACE] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [7] = {
    [sym_func_param] = STATE(17),
    [aux_sym_func_statement_repeat1] = STATE(17),
    [anon_sym_EQ] = ACTIONS(23),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(25),
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(13),
  },
  [9] = {
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(29),
  },
  [10] = {
    [anon_sym_EQ] = ACTIONS(31),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_module] = ACTIONS(35),
    [anon_sym_exposing] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(35),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(35),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_exposing] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(39),
  },
  [13] = {
    [aux_sym_dotted_name_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(45),
    [anon_sym_module] = ACTIONS(45),
    [anon_sym_exposing] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(45),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(51),
    [anon_sym_exposing] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(51),
  },
  [15] = {
    [sym__func_body] = STATE(26),
    [sym_case_call] = STATE(26),
    [sym_func_call] = STATE(26),
    [sym__local_func_call] = STATE(27),
    [sym__module_func_call] = STATE(27),
    [sym__local_func_call_with_params] = STATE(27),
    [sym__module_func_call_with_params] = STATE(27),
    [sym__module_func_identifier] = STATE(28),
    [sym__math_with_model] = STATE(26),
    [sym_module_identifier] = STATE(29),
    [sym_func_identifier] = STATE(30),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(55),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(57),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(59),
  },
  [17] = {
    [sym_func_param] = STATE(33),
    [aux_sym_func_statement_repeat1] = STATE(33),
    [anon_sym_EQ] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(25),
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
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(68),
    [anon_sym_import] = ACTIONS(71),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(74),
  },
  [19] = {
    [sym_custom_type_variant] = ACTIONS(77),
  },
  [20] = {
    [sym__exposing_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(79),
  },
  [21] = {
    [sym_module_identifier] = STATE(37),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
  },
  [22] = {
    [aux_sym_dotted_name_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
    [anon_sym_exposing] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(83),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(83),
  },
  [23] = {
    [sym__exposing_list] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(79),
  },
  [24] = {
    [sym_func_param] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(85),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(87),
    [anon_sym_module] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(87),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(91),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(93),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(95),
  },
  [28] = {
    [sym_func_call_params] = STATE(43),
    [sym_inline_record] = STATE(44),
    [aux_sym_func_call_params_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_type] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_import] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(99),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(103),
  },
  [30] = {
    [sym_func_call_params] = STATE(46),
    [sym_inline_record] = STATE(44),
    [aux_sym_func_call_params_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_type] = ACTIONS(107),
    [anon_sym_module] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(107),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
  },
  [32] = {
    [sym__func_body] = STATE(48),
    [sym_case_call] = STATE(48),
    [sym_func_call] = STATE(48),
    [sym__local_func_call] = STATE(27),
    [sym__module_func_call] = STATE(27),
    [sym__local_func_call_with_params] = STATE(27),
    [sym__module_func_call_with_params] = STATE(27),
    [sym__module_func_identifier] = STATE(28),
    [sym__math_with_model] = STATE(48),
    [sym_module_identifier] = STATE(29),
    [sym_func_identifier] = STATE(30),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(55),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(57),
  },
  [33] = {
    [sym_func_param] = STATE(33),
    [aux_sym_func_statement_repeat1] = STATE(33),
    [anon_sym_EQ] = ACTIONS(111),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(113),
  },
  [34] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(118),
  },
  [35] = {
    [sym_type_alias_identifier] = STATE(52),
    [sym__type_alias_identifier_exposing_all] = STATE(53),
    [sym_func_identifier] = STATE(53),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(128),
    [anon_sym_import] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(128),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_exposing] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_import] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(132),
  },
  [38] = {
    [aux_sym_dotted_name_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_exposing] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(132),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_module] = ACTIONS(139),
    [anon_sym_import] = ACTIONS(139),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(139),
  },
  [40] = {
    [anon_sym_of] = ACTIONS(59),
  },
  [41] = {
    [anon_sym_of] = ACTIONS(141),
  },
  [42] = {
    [sym__assignment] = STATE(56),
    [sym_record_entry] = STATE(57),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(143),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_module] = ACTIONS(147),
    [anon_sym_import] = ACTIONS(147),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(147),
  },
  [44] = {
    [sym_inline_record] = STATE(58),
    [aux_sym_func_call_params_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(151),
    [anon_sym_module] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(151),
  },
  [45] = {
    [sym_type_alias_identifier] = STATE(60),
    [sym_func_identifier] = STATE(60),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(153),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(157),
    [anon_sym_module] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(157),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(157),
  },
  [47] = {
    [sym_func_identifier] = STATE(61),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(153),
    [sym_int] = ACTIONS(159),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_module] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(163),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(163),
  },
  [49] = {
    [sym_custom_type_variant] = ACTIONS(165),
  },
  [50] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(169),
    [anon_sym_import] = ACTIONS(169),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(169),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(173),
    [anon_sym_module] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(171),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(171),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(173),
  },
  [52] = {
    [aux_sym__exposing_list_repeat1] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(179),
  },
  [53] = {
    [aux_sym__exposing_list_repeat1] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [54] = {
    [sym_custom_type_identifier] = STATE(68),
    [aux_sym_case_call_repeat1] = STATE(69),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(181),
  },
  [56] = {
    [aux_sym_inline_record_repeat1] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(185),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(187),
  },
  [58] = {
    [sym_inline_record] = STATE(58),
    [aux_sym_func_call_params_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_import] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(191),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(87),
    [anon_sym_module] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(87),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_type] = ACTIONS(198),
    [anon_sym_module] = ACTIONS(198),
    [anon_sym_import] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(198),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_type] = ACTIONS(202),
    [anon_sym_module] = ACTIONS(202),
    [anon_sym_import] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(202),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_type] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_module] = ACTIONS(206),
    [anon_sym_import] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(206),
  },
  [63] = {
    [aux_sym_custom_type_statement_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_type] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_module] = ACTIONS(206),
    [anon_sym_import] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(206),
  },
  [64] = {
    [sym_type_alias_identifier] = STATE(74),
    [sym__type_alias_identifier_exposing_all] = STATE(75),
    [sym_func_identifier] = STATE(75),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_import] = ACTIONS(213),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(213),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
  },
  [67] = {
    [aux_sym__exposing_list_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(217),
  },
  [68] = {
    [anon_sym_DASH_GT] = ACTIONS(219),
  },
  [69] = {
    [sym_custom_type_identifier] = STATE(68),
    [aux_sym_case_call_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(223),
    [anon_sym_module] = ACTIONS(223),
    [anon_sym_import] = ACTIONS(223),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(223),
  },
  [70] = {
    [sym__assignment] = STATE(80),
    [sym_record_entry] = STATE(57),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(143),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_type] = ACTIONS(227),
    [anon_sym_module] = ACTIONS(227),
    [anon_sym_import] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(227),
  },
  [72] = {
    [aux_sym_inline_record_repeat1] = STATE(82),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(229),
  },
  [73] = {
    [sym_func_identifier] = STATE(83),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(124),
    [sym_int] = ACTIONS(231),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(179),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_type] = ACTIONS(237),
    [anon_sym_module] = ACTIONS(237),
    [anon_sym_import] = ACTIONS(237),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(237),
  },
  [77] = {
    [aux_sym__exposing_list_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(233),
  },
  [78] = {
    [sym__func_body] = STATE(85),
    [sym_case_call] = STATE(85),
    [sym_func_call] = STATE(85),
    [sym__local_func_call] = STATE(27),
    [sym__module_func_call] = STATE(27),
    [sym__local_func_call_with_params] = STATE(27),
    [sym__module_func_call_with_params] = STATE(27),
    [sym__module_func_identifier] = STATE(86),
    [sym__math_with_model] = STATE(85),
    [sym_module_identifier] = STATE(29),
    [sym_func_identifier] = STATE(87),
    [sym_func_param] = STATE(31),
    [anon_sym_case] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(57),
  },
  [79] = {
    [sym_custom_type_identifier] = STATE(68),
    [aux_sym_case_call_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_type] = ACTIONS(246),
    [anon_sym_module] = ACTIONS(246),
    [anon_sym_import] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(246),
  },
  [80] = {
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(255),
    [anon_sym_module] = ACTIONS(255),
    [anon_sym_import] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(253),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(255),
  },
  [82] = {
    [aux_sym_inline_record_repeat1] = STATE(82),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(251),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
  },
  [84] = {
    [sym_func_param] = STATE(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(85),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(264),
    [anon_sym_import] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(264),
  },
  [86] = {
    [sym_func_call_params] = STATE(43),
    [sym_inline_record] = STATE(89),
    [aux_sym_func_call_params_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_type] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_import] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(99),
  },
  [87] = {
    [sym_func_call_params] = STATE(46),
    [sym_inline_record] = STATE(89),
    [aux_sym_func_call_params_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_type] = ACTIONS(107),
    [anon_sym_module] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(107),
  },
  [88] = {
    [anon_sym_of] = ACTIONS(266),
  },
  [89] = {
    [sym_inline_record] = STATE(91),
    [aux_sym_func_call_params_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(151),
    [anon_sym_module] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(151),
  },
  [90] = {
    [sym_custom_type_identifier] = STATE(68),
    [aux_sym_case_call_repeat1] = STATE(92),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(15),
  },
  [91] = {
    [sym_inline_record] = STATE(91),
    [aux_sym_func_call_params_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_import] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(189),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(191),
  },
  [92] = {
    [sym_custom_type_identifier] = STATE(68),
    [aux_sym_case_call_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(223),
    [anon_sym_module] = ACTIONS(223),
    [anon_sym_import] = ACTIONS(223),
    [aux_sym_SLASH_LBRACKA_DASHZ_RBRACK_LBRACKa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LBRACKA_DASHZa_DASHz_RBRACK_STAR_SLASH] = ACTIONS(223),
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
  [21] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_identifier, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_module_statement, 2),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_module_statement, 2),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [53] = {.count = 1, .reusable = false}, SHIFT(23),
  [55] = {.count = 1, .reusable = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = false}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_func_param, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(32),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = true}, SHIFT(35),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_name, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_dotted_name, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(40),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_func_identifier, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 3),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 3),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_func_call, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_func_call, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_call, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__module_func_call, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(42),
  [103] = {.count = 1, .reusable = true}, SHIFT(45),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__local_func_call, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__local_func_call, 1),
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
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_call_with_params, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym__module_func_call_with_params, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_func_call_params, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_func_call_params, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(59),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__local_func_call_with_params, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym__local_func_call_with_params, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(61),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_func_statement, 4),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_func_statement, 4),
  [165] = {.count = 1, .reusable = true}, SHIFT(62),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_custom_type_statement, 5),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_custom_type_statement, 5),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias_identifier, 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias_identifier, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(64),
  [177] = {.count = 1, .reusable = true}, SHIFT(65),
  [179] = {.count = 1, .reusable = true}, SHIFT(66),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_record_entry, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(70),
  [185] = {.count = 1, .reusable = true}, SHIFT(71),
  [187] = {.count = 1, .reusable = true}, SHIFT(73),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(aux_sym_func_call_params_repeat1, 2),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_func_call_params_repeat1, 2), SHIFT_REPEAT(42),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym__module_func_identifier, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym__module_func_identifier, 3),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym__math_with_model, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym__math_with_model, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [206] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_type_statement_repeat1, 2),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_type_statement_repeat1, 2), SHIFT_REPEAT(49),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__type_alias_identifier_exposing_all, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(76),
  [219] = {.count = 1, .reusable = true}, SHIFT(78),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_case_call, 4),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_case_call, 4),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 3),
  [229] = {.count = 1, .reusable = true}, SHIFT(81),
  [231] = {.count = 1, .reusable = true}, SHIFT(83),
  [233] = {.count = 1, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__exposing_list, 4),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__exposing_list, 4),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym__exposing_list_repeat1, 2), SHIFT_REPEAT(64),
  [242] = {.count = 1, .reusable = false}, SHIFT(84),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 2), SHIFT_REPEAT(9),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_inline_record, 4),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_inline_record, 4),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_record_repeat1, 2), SHIFT_REPEAT(70),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__assignment, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_call_repeat1, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(aux_sym_case_call_repeat1, 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(90),
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
