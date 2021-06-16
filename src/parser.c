#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym__escape_identity = 1,
  anon_sym_BSLASHt = 2,
  anon_sym_BSLASHr = 3,
  anon_sym_BSLASHn = 4,
  sym__escape_semicolon = 5,
  aux_sym_variable_token1 = 6,
  anon_sym_DOLLAR_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DOLLARENV = 9,
  anon_sym_LBRACE = 10,
  anon_sym_DOLLARCACHE = 11,
  anon_sym_LBRACK = 12,
  anon_sym_EQ = 13,
  aux_sym_bracket_content_token1 = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_element_token1 = 17,
  anon_sym_BSLASH = 18,
  aux_sym_quoted_element_token2 = 19,
  aux_sym_unquoted_argument_token1 = 20,
  anon_sym_LPAREN = 21,
  aux_sym_foreach_command_token1 = 22,
  anon_sym_IN = 23,
  anon_sym_RANGE = 24,
  anon_sym_ZIP_LISTS = 25,
  anon_sym_LISTS = 26,
  anon_sym_ITEMS = 27,
  anon_sym_RPAREN = 28,
  sym_foreach = 29,
  sym_endforeach = 30,
  sym_identifier = 31,
  sym_source_file = 32,
  sym_escape_sequence = 33,
  sym__escape_encoded = 34,
  sym_variable = 35,
  sym_variable_ref = 36,
  sym_normal_var = 37,
  sym_env_var = 38,
  sym_cache_var = 39,
  sym_argument = 40,
  sym_bracket_argument = 41,
  sym__bracket_open = 42,
  sym_bracket_content = 43,
  sym__bracket_close = 44,
  sym_quoted_argument = 45,
  sym_quoted_element = 46,
  sym_unquoted_argument = 47,
  sym_foreach_command = 48,
  sym_endforeach_command = 49,
  sym_foreach_loop = 50,
  sym_normal_command = 51,
  sym__command_invocation = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_variable_repeat1 = 54,
  aux_sym__bracket_open_repeat1 = 55,
  aux_sym_bracket_content_repeat1 = 56,
  aux_sym_quoted_element_repeat1 = 57,
  aux_sym_unquoted_argument_repeat1 = 58,
  aux_sym_foreach_command_repeat1 = 59,
  aux_sym_foreach_command_repeat2 = 60,
  aux_sym_normal_command_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__escape_identity] = "_escape_identity",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [sym__escape_semicolon] = "_escape_semicolon",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARENV] = "$ENV",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLARCACHE] = "$CACHE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym_bracket_content_token1] = "bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_element_token1] = "quoted_element_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_quoted_element_token2] = "quoted_element_token2",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_foreach_command_token1] = "foreach_command_token1",
  [anon_sym_IN] = "IN",
  [anon_sym_RANGE] = "RANGE",
  [anon_sym_ZIP_LISTS] = "ZIP_LISTS",
  [anon_sym_LISTS] = "LISTS",
  [anon_sym_ITEMS] = "ITEMS",
  [anon_sym_RPAREN] = ")",
  [sym_foreach] = "foreach",
  [sym_endforeach] = "endforeach",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_encoded] = "_escape_encoded",
  [sym_variable] = "variable",
  [sym_variable_ref] = "variable_ref",
  [sym_normal_var] = "normal_var",
  [sym_env_var] = "env_var",
  [sym_cache_var] = "cache_var",
  [sym_argument] = "argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym__bracket_open] = "_bracket_open",
  [sym_bracket_content] = "bracket_content",
  [sym__bracket_close] = "_bracket_close",
  [sym_quoted_argument] = "quoted_argument",
  [sym_quoted_element] = "quoted_element",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_foreach_command] = "foreach_command",
  [sym_endforeach_command] = "endforeach_command",
  [sym_foreach_loop] = "foreach_loop",
  [sym_normal_command] = "normal_command",
  [sym__command_invocation] = "_command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
  [aux_sym_quoted_element_repeat1] = "quoted_element_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_foreach_command_repeat1] = "foreach_command_repeat1",
  [aux_sym_foreach_command_repeat2] = "foreach_command_repeat2",
  [aux_sym_normal_command_repeat1] = "normal_command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__escape_identity] = sym__escape_identity,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [sym__escape_semicolon] = sym__escape_semicolon,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARENV] = anon_sym_DOLLARENV,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLARCACHE] = anon_sym_DOLLARCACHE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_bracket_content_token1] = aux_sym_bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_element_token1] = aux_sym_quoted_element_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_quoted_element_token2] = aux_sym_quoted_element_token2,
  [aux_sym_unquoted_argument_token1] = aux_sym_unquoted_argument_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_foreach_command_token1] = aux_sym_foreach_command_token1,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_RANGE] = anon_sym_RANGE,
  [anon_sym_ZIP_LISTS] = anon_sym_ZIP_LISTS,
  [anon_sym_LISTS] = anon_sym_LISTS,
  [anon_sym_ITEMS] = anon_sym_ITEMS,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_foreach] = sym_foreach,
  [sym_endforeach] = sym_endforeach,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_encoded] = sym__escape_encoded,
  [sym_variable] = sym_variable,
  [sym_variable_ref] = sym_variable_ref,
  [sym_normal_var] = sym_normal_var,
  [sym_env_var] = sym_env_var,
  [sym_cache_var] = sym_cache_var,
  [sym_argument] = sym_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym__bracket_open] = sym__bracket_open,
  [sym_bracket_content] = sym_bracket_content,
  [sym__bracket_close] = sym__bracket_close,
  [sym_quoted_argument] = sym_quoted_argument,
  [sym_quoted_element] = sym_quoted_element,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_foreach_command] = sym_foreach_command,
  [sym_endforeach_command] = sym_endforeach_command,
  [sym_foreach_loop] = sym_foreach_loop,
  [sym_normal_command] = sym_normal_command,
  [sym__command_invocation] = sym__command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
  [aux_sym_quoted_element_repeat1] = aux_sym_quoted_element_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_foreach_command_repeat1] = aux_sym_foreach_command_repeat1,
  [aux_sym_foreach_command_repeat2] = aux_sym_foreach_command_repeat2,
  [aux_sym_normal_command_repeat1] = aux_sym_normal_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_identity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [sym__escape_semicolon] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARENV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARCACHE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bracket_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_element_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_element_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_foreach_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZIP_LISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ITEMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_endforeach] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_encoded] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_var] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_cache_var] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_open] = {
    .visible = false,
    .named = true,
  },
  [sym_bracket_content] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_close] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_element] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_command] = {
    .visible = true,
    .named = true,
  },
  [sym_endforeach_command] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_invocation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreach_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreach_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_command_repeat1] = {
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
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'Z') ADVANCE(70);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'V') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLARENV);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(36);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'Z') ADVANCE(70);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_foreach_command_token1);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_foreach_command_token1);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_foreach_command_token1);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_foreach_command_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ZIP_LISTS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LISTS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ITEMS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 30},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__escape_identity] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__escape_semicolon] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLARENV] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLARCACHE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(147),
    [sym_foreach_command] = STATE(52),
    [sym_foreach_loop] = STATE(55),
    [sym_normal_command] = STATE(55),
    [sym__command_invocation] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_escape_sequence] = STATE(16),
    [sym__escape_encoded] = STATE(28),
    [sym_variable_ref] = STATE(16),
    [sym_normal_var] = STATE(25),
    [sym_env_var] = STATE(25),
    [sym_cache_var] = STATE(25),
    [sym_argument] = STATE(95),
    [sym_bracket_argument] = STATE(97),
    [sym__bracket_open] = STATE(68),
    [sym_quoted_argument] = STATE(97),
    [sym_unquoted_argument] = STATE(97),
    [aux_sym_unquoted_argument_repeat1] = STATE(16),
    [aux_sym_foreach_command_repeat1] = STATE(14),
    [sym__escape_identity] = ACTIONS(9),
    [anon_sym_BSLASHt] = ACTIONS(9),
    [anon_sym_BSLASHr] = ACTIONS(9),
    [anon_sym_BSLASHn] = ACTIONS(9),
    [sym__escape_semicolon] = ACTIONS(9),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(11),
    [anon_sym_DOLLARENV] = ACTIONS(13),
    [anon_sym_DOLLARCACHE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [aux_sym_quoted_element_token2] = ACTIONS(21),
    [aux_sym_unquoted_argument_token1] = ACTIONS(23),
    [aux_sym_foreach_command_token1] = ACTIONS(21),
    [anon_sym_IN] = ACTIONS(25),
    [anon_sym_RANGE] = ACTIONS(25),
    [anon_sym_ZIP_LISTS] = ACTIONS(25),
    [anon_sym_LISTS] = ACTIONS(25),
    [anon_sym_ITEMS] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    STATE(4), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(64), 1,
      sym_argument,
    STATE(68), 1,
      sym__bracket_open,
    ACTIONS(27), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(29), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [64] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    STATE(14), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(68), 1,
      sym__bracket_open,
    STATE(74), 1,
      sym_argument,
    ACTIONS(31), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(33), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [128] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(65), 1,
      sym_argument,
    STATE(68), 1,
      sym__bracket_open,
    ACTIONS(35), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [188] = 15,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(68), 1,
      sym__bracket_open,
    STATE(78), 1,
      sym_argument,
    ACTIONS(39), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [246] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(68), 1,
      sym__bracket_open,
    STATE(69), 1,
      sym_argument,
    ACTIONS(41), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [306] = 16,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(66), 1,
      sym__bracket_open,
    STATE(145), 1,
      sym_argument,
    ACTIONS(55), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(132), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [366] = 16,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(66), 1,
      sym__bracket_open,
    STATE(137), 1,
      sym_argument,
    ACTIONS(55), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(132), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [426] = 16,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_foreach_command_repeat1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(66), 1,
      sym__bracket_open,
    STATE(131), 1,
      sym_argument,
    ACTIONS(63), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(132), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [486] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(62), 1,
      sym_argument,
    STATE(68), 1,
      sym__bracket_open,
    ACTIONS(55), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [546] = 16,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_foreach_command_repeat1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(66), 1,
      sym__bracket_open,
    STATE(136), 1,
      sym_argument,
    ACTIONS(69), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(132), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [606] = 16,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    STATE(28), 1,
      sym__escape_encoded,
    STATE(68), 1,
      sym__bracket_open,
    STATE(73), 1,
      sym_argument,
    ACTIONS(55), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(97), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [666] = 3,
    STATE(14), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(77), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    ACTIONS(75), 17,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
      anon_sym_RPAREN,
  [693] = 9,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DOLLARENV,
    ACTIONS(89), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(94), 1,
      aux_sym_unquoted_argument_token1,
    STATE(28), 1,
      sym__escape_encoded,
    ACTIONS(92), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
    STATE(15), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(80), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [731] = 9,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOLLARENV,
    ACTIONS(15), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(99), 1,
      aux_sym_unquoted_argument_token1,
    STATE(28), 1,
      sym__escape_encoded,
    ACTIONS(97), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
    STATE(15), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(25), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(9), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [769] = 11,
    ACTIONS(103), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(105), 1,
      anon_sym_DOLLARENV,
    ACTIONS(107), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(128), 1,
      sym_quoted_element,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(101), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [811] = 11,
    ACTIONS(103), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(105), 1,
      anon_sym_DOLLARENV,
    ACTIONS(107), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(126), 1,
      sym_quoted_element,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(101), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [853] = 10,
    ACTIONS(103), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(105), 1,
      anon_sym_DOLLARENV,
    ACTIONS(107), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_quoted_element_token1,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(20), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(101), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [892] = 10,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(127), 1,
      anon_sym_DOLLARENV,
    ACTIONS(130), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(20), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(121), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [931] = 9,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      aux_sym_unquoted_argument_token1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [967] = 9,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      anon_sym_DOLLARENV,
    ACTIONS(152), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(155), 1,
      aux_sym_unquoted_argument_token1,
    STATE(50), 1,
      sym__escape_encoded,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(39), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(143), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1003] = 3,
    STATE(23), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(158), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
    ACTIONS(75), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1025] = 1,
    ACTIONS(161), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1040] = 1,
    ACTIONS(163), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1055] = 1,
    ACTIONS(165), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1070] = 1,
    ACTIONS(167), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1085] = 1,
    ACTIONS(169), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1100] = 1,
    ACTIONS(167), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1114] = 1,
    ACTIONS(163), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1128] = 1,
    ACTIONS(133), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1142] = 1,
    ACTIONS(161), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1156] = 1,
    ACTIONS(165), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1170] = 1,
    ACTIONS(169), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1184] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(120), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1205] = 1,
    ACTIONS(167), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1218] = 1,
    ACTIONS(165), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1231] = 1,
    ACTIONS(161), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1244] = 1,
    ACTIONS(163), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1257] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(140), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1278] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(125), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1299] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(124), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1320] = 5,
    ACTIONS(175), 1,
      aux_sym_variable_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(44), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1341] = 5,
    ACTIONS(182), 1,
      aux_sym_variable_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(44), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(179), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1362] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(139), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1383] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(143), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1404] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(118), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1425] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(138), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1446] = 5,
    ACTIONS(173), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(121), 1,
      sym_variable,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(171), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1467] = 1,
    ACTIONS(169), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1480] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(187), 1,
      sym_endforeach,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(88), 1,
      sym_endforeach_command,
    STATE(54), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1502] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(80), 1,
      sym_endforeach_command,
    STATE(53), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1524] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(111), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1546] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(187), 1,
      sym_endforeach,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(93), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1568] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_foreach_command,
    STATE(57), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1587] = 5,
    ACTIONS(195), 1,
      sym_foreach,
    ACTIONS(198), 1,
      sym_endforeach,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1606] = 5,
    ACTIONS(195), 1,
      sym_foreach,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(52), 1,
      sym_foreach_command,
    STATE(57), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1625] = 1,
    ACTIONS(208), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [1635] = 4,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(60), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1649] = 4,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(60), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(214), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1663] = 4,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(60), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1677] = 4,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(61), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1691] = 4,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(60), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1705] = 4,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_foreach_command_repeat1,
    STATE(70), 1,
      aux_sym_foreach_command_repeat2,
    ACTIONS(223), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1719] = 4,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(63), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1733] = 5,
    ACTIONS(227), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_bracket_content_repeat1,
    STATE(117), 1,
      sym_bracket_content,
    STATE(127), 1,
      sym__bracket_close,
  [1749] = 4,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_foreach_command_repeat1,
    STATE(67), 1,
      aux_sym_foreach_command_repeat2,
    ACTIONS(231), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1763] = 5,
    ACTIONS(227), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_bracket_content_repeat1,
    STATE(96), 1,
      sym__bracket_close,
    STATE(115), 1,
      sym_bracket_content,
  [1779] = 4,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(71), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1793] = 4,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_foreach_command_repeat1,
    STATE(67), 1,
      aux_sym_foreach_command_repeat2,
    ACTIONS(223), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1807] = 4,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(60), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1821] = 4,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_foreach_command_repeat1,
    STATE(67), 1,
      aux_sym_foreach_command_repeat2,
    ACTIONS(223), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1835] = 4,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_foreach_command_repeat1,
    STATE(59), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(210), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1849] = 4,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_foreach_command_repeat1,
    STATE(72), 1,
      aux_sym_foreach_command_repeat2,
    ACTIONS(223), 2,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
  [1863] = 3,
    ACTIONS(246), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(244), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1874] = 1,
    ACTIONS(249), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1880] = 3,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__bracket_open_repeat1,
  [1890] = 1,
    ACTIONS(217), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1896] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 2,
      sym_foreach,
      sym_identifier,
  [1904] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 2,
      sym_foreach,
      sym_identifier,
  [1912] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 2,
      sym_foreach,
      sym_identifier,
  [1920] = 3,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__bracket_open_repeat1,
  [1930] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 2,
      sym_foreach,
      sym_identifier,
  [1938] = 1,
    ACTIONS(273), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1944] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym__bracket_open_repeat1,
  [1954] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 2,
      sym_foreach,
      sym_identifier,
  [1962] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 2,
      sym_foreach,
      sym_identifier,
  [1970] = 1,
    ACTIONS(261), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1976] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 2,
      sym_foreach,
      sym_identifier,
  [1984] = 1,
    ACTIONS(291), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [1990] = 3,
    ACTIONS(293), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_bracket_content_repeat1,
  [2000] = 1,
    ACTIONS(297), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2006] = 1,
    ACTIONS(299), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2012] = 3,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym__bracket_open_repeat1,
  [2022] = 1,
    ACTIONS(234), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2028] = 1,
    ACTIONS(305), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2034] = 1,
    ACTIONS(307), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2040] = 1,
    ACTIONS(289), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2046] = 1,
    ACTIONS(271), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2052] = 3,
    ACTIONS(309), 1,
      anon_sym_EQ,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      aux_sym__bracket_open_repeat1,
  [2062] = 1,
    ACTIONS(313), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2068] = 1,
    ACTIONS(315), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2074] = 3,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__bracket_open_repeat1,
  [2084] = 1,
    ACTIONS(257), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2090] = 1,
    ACTIONS(265), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2096] = 2,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 2,
      sym_foreach,
      sym_identifier,
  [2104] = 1,
    ACTIONS(321), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2110] = 1,
    ACTIONS(323), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2116] = 1,
    ACTIONS(281), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2122] = 1,
    ACTIONS(285), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2128] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 2,
      sym_foreach,
      sym_identifier,
  [2136] = 3,
    ACTIONS(327), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_bracket_content_repeat1,
  [2146] = 1,
    ACTIONS(332), 3,
      aux_sym_quoted_element_token2,
      aux_sym_foreach_command_token1,
      anon_sym_RPAREN,
  [2152] = 2,
    ACTIONS(334), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
  [2159] = 2,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym__bracket_close,
  [2166] = 2,
    ACTIONS(340), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
  [2173] = 2,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym__bracket_close,
  [2180] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [2184] = 1,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
  [2188] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [2192] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [2196] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [2200] = 1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [2204] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [2208] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [2212] = 1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2216] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [2220] = 1,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
  [2224] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [2228] = 1,
    ACTIONS(370), 1,
      aux_sym_quoted_element_token2,
  [2232] = 1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [2236] = 1,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
  [2240] = 1,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
  [2244] = 1,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
  [2248] = 1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [2252] = 1,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2256] = 1,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [2260] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
  [2264] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
  [2268] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
  [2272] = 1,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
  [2276] = 1,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
  [2280] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [2284] = 1,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [2288] = 1,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [2292] = 1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
  [2296] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [2300] = 1,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
  [2304] = 1,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
  [2308] = 1,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
  [2312] = 1,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
  [2316] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 246,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 606,
  [SMALL_STATE(14)] = 666,
  [SMALL_STATE(15)] = 693,
  [SMALL_STATE(16)] = 731,
  [SMALL_STATE(17)] = 769,
  [SMALL_STATE(18)] = 811,
  [SMALL_STATE(19)] = 853,
  [SMALL_STATE(20)] = 892,
  [SMALL_STATE(21)] = 931,
  [SMALL_STATE(22)] = 967,
  [SMALL_STATE(23)] = 1003,
  [SMALL_STATE(24)] = 1025,
  [SMALL_STATE(25)] = 1040,
  [SMALL_STATE(26)] = 1055,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1085,
  [SMALL_STATE(29)] = 1100,
  [SMALL_STATE(30)] = 1114,
  [SMALL_STATE(31)] = 1128,
  [SMALL_STATE(32)] = 1142,
  [SMALL_STATE(33)] = 1156,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1184,
  [SMALL_STATE(36)] = 1205,
  [SMALL_STATE(37)] = 1218,
  [SMALL_STATE(38)] = 1231,
  [SMALL_STATE(39)] = 1244,
  [SMALL_STATE(40)] = 1257,
  [SMALL_STATE(41)] = 1278,
  [SMALL_STATE(42)] = 1299,
  [SMALL_STATE(43)] = 1320,
  [SMALL_STATE(44)] = 1341,
  [SMALL_STATE(45)] = 1362,
  [SMALL_STATE(46)] = 1383,
  [SMALL_STATE(47)] = 1404,
  [SMALL_STATE(48)] = 1425,
  [SMALL_STATE(49)] = 1446,
  [SMALL_STATE(50)] = 1467,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1502,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1546,
  [SMALL_STATE(55)] = 1568,
  [SMALL_STATE(56)] = 1587,
  [SMALL_STATE(57)] = 1606,
  [SMALL_STATE(58)] = 1625,
  [SMALL_STATE(59)] = 1635,
  [SMALL_STATE(60)] = 1649,
  [SMALL_STATE(61)] = 1663,
  [SMALL_STATE(62)] = 1677,
  [SMALL_STATE(63)] = 1691,
  [SMALL_STATE(64)] = 1705,
  [SMALL_STATE(65)] = 1719,
  [SMALL_STATE(66)] = 1733,
  [SMALL_STATE(67)] = 1749,
  [SMALL_STATE(68)] = 1763,
  [SMALL_STATE(69)] = 1779,
  [SMALL_STATE(70)] = 1793,
  [SMALL_STATE(71)] = 1807,
  [SMALL_STATE(72)] = 1821,
  [SMALL_STATE(73)] = 1835,
  [SMALL_STATE(74)] = 1849,
  [SMALL_STATE(75)] = 1863,
  [SMALL_STATE(76)] = 1874,
  [SMALL_STATE(77)] = 1880,
  [SMALL_STATE(78)] = 1890,
  [SMALL_STATE(79)] = 1896,
  [SMALL_STATE(80)] = 1904,
  [SMALL_STATE(81)] = 1912,
  [SMALL_STATE(82)] = 1920,
  [SMALL_STATE(83)] = 1930,
  [SMALL_STATE(84)] = 1938,
  [SMALL_STATE(85)] = 1944,
  [SMALL_STATE(86)] = 1954,
  [SMALL_STATE(87)] = 1962,
  [SMALL_STATE(88)] = 1970,
  [SMALL_STATE(89)] = 1976,
  [SMALL_STATE(90)] = 1984,
  [SMALL_STATE(91)] = 1990,
  [SMALL_STATE(92)] = 2000,
  [SMALL_STATE(93)] = 2006,
  [SMALL_STATE(94)] = 2012,
  [SMALL_STATE(95)] = 2022,
  [SMALL_STATE(96)] = 2028,
  [SMALL_STATE(97)] = 2034,
  [SMALL_STATE(98)] = 2040,
  [SMALL_STATE(99)] = 2046,
  [SMALL_STATE(100)] = 2052,
  [SMALL_STATE(101)] = 2062,
  [SMALL_STATE(102)] = 2068,
  [SMALL_STATE(103)] = 2074,
  [SMALL_STATE(104)] = 2084,
  [SMALL_STATE(105)] = 2090,
  [SMALL_STATE(106)] = 2096,
  [SMALL_STATE(107)] = 2104,
  [SMALL_STATE(108)] = 2110,
  [SMALL_STATE(109)] = 2116,
  [SMALL_STATE(110)] = 2122,
  [SMALL_STATE(111)] = 2128,
  [SMALL_STATE(112)] = 2136,
  [SMALL_STATE(113)] = 2146,
  [SMALL_STATE(114)] = 2152,
  [SMALL_STATE(115)] = 2159,
  [SMALL_STATE(116)] = 2166,
  [SMALL_STATE(117)] = 2173,
  [SMALL_STATE(118)] = 2180,
  [SMALL_STATE(119)] = 2184,
  [SMALL_STATE(120)] = 2188,
  [SMALL_STATE(121)] = 2192,
  [SMALL_STATE(122)] = 2196,
  [SMALL_STATE(123)] = 2200,
  [SMALL_STATE(124)] = 2204,
  [SMALL_STATE(125)] = 2208,
  [SMALL_STATE(126)] = 2212,
  [SMALL_STATE(127)] = 2216,
  [SMALL_STATE(128)] = 2220,
  [SMALL_STATE(129)] = 2224,
  [SMALL_STATE(130)] = 2228,
  [SMALL_STATE(131)] = 2232,
  [SMALL_STATE(132)] = 2236,
  [SMALL_STATE(133)] = 2240,
  [SMALL_STATE(134)] = 2244,
  [SMALL_STATE(135)] = 2248,
  [SMALL_STATE(136)] = 2252,
  [SMALL_STATE(137)] = 2256,
  [SMALL_STATE(138)] = 2260,
  [SMALL_STATE(139)] = 2264,
  [SMALL_STATE(140)] = 2268,
  [SMALL_STATE(141)] = 2272,
  [SMALL_STATE(142)] = 2276,
  [SMALL_STATE(143)] = 2280,
  [SMALL_STATE(144)] = 2284,
  [SMALL_STATE(145)] = 2288,
  [SMALL_STATE(146)] = 2292,
  [SMALL_STATE(147)] = 2296,
  [SMALL_STATE(148)] = 2300,
  [SMALL_STATE(149)] = 2304,
  [SMALL_STATE(150)] = 2308,
  [SMALL_STATE(151)] = 2312,
  [SMALL_STATE(152)] = 2316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat2, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(28),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(42),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(144),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(119),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(34),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(41),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(149),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(150),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(20),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(130),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(50),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(48),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(151),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(152),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(22),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2), SHIFT_REPEAT(23),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(58),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2), SHIFT_REPEAT(6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat2, 2), SHIFT_REPEAT(2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat2, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(75),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(112),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [404] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cmake(void) {
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
