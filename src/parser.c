#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__space = 1,
  sym__newline = 2,
  sym_foreach = 3,
  sym_endforeach = 4,
  sym_identifier = 5,
  sym__escape_identity = 6,
  anon_sym_BSLASHt = 7,
  anon_sym_BSLASHr = 8,
  anon_sym_BSLASHn = 9,
  sym__escape_semicolon = 10,
  aux_sym_variable_token1 = 11,
  anon_sym_DOLLAR_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_DOLLARENV_LBRACE = 14,
  anon_sym_DOLLARCACHE_LBRACE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_EQ = 17,
  aux_sym_bracket_content_token1 = 18,
  anon_sym_RBRACK = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_quoted_element_token1 = 21,
  anon_sym_BSLASH = 22,
  aux_sym_unquoted_argument_token1 = 23,
  anon_sym_LPAREN = 24,
  anon_sym_IN = 25,
  anon_sym_RPAREN = 26,
  sym_source_file = 27,
  sym__line_ending = 28,
  sym__seperation = 29,
  sym_escape_sequence = 30,
  sym__escape_encoded = 31,
  sym_variable = 32,
  sym_variable_ref = 33,
  sym_normal_var = 34,
  sym_env_var = 35,
  sym_cache_var = 36,
  sym_argument = 37,
  sym_bracket_argument = 38,
  sym__bracket_open = 39,
  sym_bracket_content = 40,
  sym__bracket_close = 41,
  sym_quoted_argument = 42,
  sym_quoted_element = 43,
  sym_unquoted_argument = 44,
  sym_arguments = 45,
  sym_foreach_command = 46,
  sym_endforeach_command = 47,
  sym_foreach_loop = 48,
  sym_normal_command = 49,
  sym__command_invocation = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_variable_repeat1 = 52,
  aux_sym__bracket_open_repeat1 = 53,
  aux_sym_bracket_content_repeat1 = 54,
  aux_sym_quoted_element_repeat1 = 55,
  aux_sym_unquoted_argument_repeat1 = 56,
  aux_sym_arguments_repeat1 = 57,
  aux_sym_arguments_repeat2 = 58,
  aux_sym_foreach_command_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym_foreach] = "foreach",
  [sym_endforeach] = "endforeach",
  [sym_identifier] = "identifier",
  [sym__escape_identity] = "_escape_identity",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [sym__escape_semicolon] = "_escape_semicolon",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARENV_LBRACE] = "$ENV{",
  [anon_sym_DOLLARCACHE_LBRACE] = "$CACHE{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym_bracket_content_token1] = "bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_element_token1] = "quoted_element_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_IN] = "IN",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__line_ending] = "_line_ending",
  [sym__seperation] = "_seperation",
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
  [sym_arguments] = "arguments",
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
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_foreach_command_repeat1] = "foreach_command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym__newline] = sym__newline,
  [sym_foreach] = sym_foreach,
  [sym_endforeach] = sym_endforeach,
  [sym_identifier] = sym_identifier,
  [sym__escape_identity] = sym__escape_identity,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [sym__escape_semicolon] = sym__escape_semicolon,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARENV_LBRACE] = anon_sym_DOLLARENV_LBRACE,
  [anon_sym_DOLLARCACHE_LBRACE] = anon_sym_DOLLARCACHE_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_bracket_content_token1] = aux_sym_bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_element_token1] = aux_sym_quoted_element_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_unquoted_argument_token1] = aux_sym_unquoted_argument_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__line_ending] = sym__line_ending,
  [sym__seperation] = sym__seperation,
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
  [sym_arguments] = sym_arguments,
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
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_foreach_command_repeat1] = aux_sym_foreach_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
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
  [anon_sym_DOLLARENV_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARCACHE_LBRACE] = {
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
  [aux_sym_unquoted_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending] = {
    .visible = false,
    .named = true,
  },
  [sym__seperation] = {
    .visible = false,
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
  [sym_arguments] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreach_command_repeat1] = {
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
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'H') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'V') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(51);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__escape_identity] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__escape_semicolon] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_foreach_command] = STATE(53),
    [sym_foreach_loop] = STATE(54),
    [sym_normal_command] = STATE(54),
    [sym__command_invocation] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(61), 1,
      sym_argument,
    STATE(64), 1,
      sym__bracket_open,
    STATE(116), 1,
      sym_arguments,
    ACTIONS(9), 2,
      sym__space,
      sym__newline,
    STATE(5), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [65] = 17,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(61), 1,
      sym_argument,
    STATE(64), 1,
      sym__bracket_open,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(27), 2,
      sym__space,
      sym__newline,
    STATE(6), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [130] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(33), 1,
      anon_sym_IN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(64), 1,
      sym__bracket_open,
    STATE(81), 1,
      sym_argument,
    ACTIONS(31), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(19), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [193] = 17,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(61), 1,
      sym_argument,
    STATE(64), 1,
      sym__bracket_open,
    STATE(115), 1,
      sym_arguments,
    ACTIONS(35), 2,
      sym__space,
      sym__newline,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [258] = 17,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(61), 1,
      sym_argument,
    STATE(64), 1,
      sym__bracket_open,
    STATE(135), 1,
      sym_arguments,
    ACTIONS(35), 2,
      sym__space,
      sym__newline,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [323] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(65), 1,
      sym__bracket_open,
    STATE(132), 1,
      sym_argument,
    ACTIONS(41), 2,
      sym__space,
      sym__newline,
    STATE(8), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(134), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [385] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(65), 1,
      sym__bracket_open,
    STATE(127), 1,
      sym_argument,
    ACTIONS(35), 2,
      sym__space,
      sym__newline,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(134), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [447] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(65), 1,
      sym__bracket_open,
    STATE(107), 1,
      sym_argument,
    ACTIONS(35), 2,
      sym__space,
      sym__newline,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(134), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [509] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(65), 1,
      sym__bracket_open,
    STATE(106), 1,
      sym_argument,
    ACTIONS(61), 2,
      sym__space,
      sym__newline,
    STATE(9), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(22), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(134), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [571] = 15,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(64), 1,
      sym__bracket_open,
    STATE(72), 1,
      sym_argument,
    ACTIONS(65), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [631] = 14,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(67), 1,
      anon_sym_IN,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(60), 1,
      sym_argument,
    STATE(64), 1,
      sym__bracket_open,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(83), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [684] = 11,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(75), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(120), 1,
      sym_quoted_element,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(32), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(69), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [726] = 9,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(85), 1,
      aux_sym_unquoted_argument_token1,
    STATE(25), 1,
      sym__escape_encoded,
    ACTIONS(83), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [764] = 11,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(75), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(79), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(123), 1,
      sym_quoted_element,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(32), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(69), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [806] = 9,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(103), 1,
      aux_sym_unquoted_argument_token1,
    STATE(25), 1,
      sym__escape_encoded,
    ACTIONS(89), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(91), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [844] = 10,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(112), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(115), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(123), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(32), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [883] = 10,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(75), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      aux_sym_quoted_element_token1,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(32), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(69), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [922] = 3,
    ACTIONS(130), 2,
      sym__space,
      sym__newline,
    STATE(19), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    ACTIONS(133), 13,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_IN,
      anon_sym_RPAREN,
  [947] = 3,
    ACTIONS(135), 2,
      sym__space,
      sym__newline,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
    ACTIONS(133), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [971] = 9,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(144), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(147), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(150), 1,
      aux_sym_unquoted_argument_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(138), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1007] = 9,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      aux_sym_unquoted_argument_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(21), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1043] = 1,
    ACTIONS(155), 12,
      sym__space,
      sym__newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1058] = 1,
    ACTIONS(157), 12,
      sym__space,
      sym__newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1073] = 1,
    ACTIONS(159), 12,
      sym__space,
      sym__newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1088] = 1,
    ACTIONS(161), 12,
      sym__space,
      sym__newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1103] = 1,
    ACTIONS(163), 12,
      sym__space,
      sym__newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1118] = 1,
    ACTIONS(161), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1132] = 1,
    ACTIONS(157), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1146] = 1,
    ACTIONS(163), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1160] = 1,
    ACTIONS(159), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1174] = 1,
    ACTIONS(155), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1188] = 1,
    ACTIONS(118), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1202] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(111), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1223] = 1,
    ACTIONS(163), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1236] = 1,
    ACTIONS(161), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1249] = 1,
    ACTIONS(157), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1262] = 1,
    ACTIONS(155), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1275] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(130), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1296] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(129), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1317] = 5,
    ACTIONS(169), 1,
      aux_sym_variable_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1338] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(128), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1359] = 1,
    ACTIONS(159), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1372] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(119), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1393] = 5,
    ACTIONS(176), 1,
      aux_sym_variable_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(173), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1414] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(117), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1435] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(118), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1456] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(112), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1477] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    STATE(62), 1,
      sym__escape_encoded,
    STATE(122), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(165), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1498] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(181), 1,
      sym_endforeach,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(89), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1520] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(79), 1,
      sym_endforeach_command,
    STATE(52), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1542] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(86), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1564] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(181), 1,
      sym_endforeach,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(73), 1,
      sym_endforeach_command,
    STATE(50), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1586] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_foreach_command,
    STATE(55), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1605] = 5,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_foreach,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(53), 1,
      sym_foreach_command,
    STATE(55), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1624] = 5,
    ACTIONS(191), 1,
      sym_foreach,
    ACTIONS(197), 1,
      sym_endforeach,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1643] = 4,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(202), 2,
      sym__space,
      sym__newline,
    STATE(4), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1659] = 4,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(206), 2,
      sym__space,
      sym__newline,
    STATE(4), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1675] = 4,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(211), 2,
      sym__space,
      sym__newline,
    STATE(11), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1691] = 4,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(202), 2,
      sym__space,
      sym__newline,
    STATE(4), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1707] = 4,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(211), 2,
      sym__space,
      sym__newline,
    STATE(11), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1723] = 1,
    ACTIONS(219), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [1733] = 4,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(221), 2,
      sym__space,
      sym__newline,
    STATE(11), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym_arguments_repeat1,
  [1749] = 5,
    ACTIONS(226), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym__bracket_close,
    STATE(95), 1,
      aux_sym_bracket_content_repeat1,
    STATE(102), 1,
      sym_bracket_content,
  [1765] = 5,
    ACTIONS(226), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_bracket_content_repeat1,
    STATE(105), 1,
      sym_bracket_content,
    STATE(125), 1,
      sym__bracket_close,
  [1781] = 3,
    ACTIONS(234), 1,
      anon_sym_EQ,
    STATE(66), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(232), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1792] = 1,
    ACTIONS(237), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1798] = 1,
    ACTIONS(239), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1804] = 3,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym__bracket_open_repeat1,
  [1814] = 1,
    ACTIONS(245), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1820] = 3,
    ACTIONS(247), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_bracket_content_repeat1,
  [1830] = 1,
    ACTIONS(224), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1836] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 2,
      sym_foreach,
      sym_identifier,
  [1844] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 2,
      sym_foreach,
      sym_identifier,
  [1852] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 2,
      sym_foreach,
      sym_identifier,
  [1860] = 3,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym__bracket_open_repeat1,
  [1870] = 1,
    ACTIONS(268), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1876] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 2,
      sym_foreach,
      sym_identifier,
  [1884] = 1,
    ACTIONS(254), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1890] = 1,
    ACTIONS(272), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1896] = 1,
    ACTIONS(209), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1902] = 1,
    ACTIONS(274), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1908] = 1,
    ACTIONS(276), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1914] = 3,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym__bracket_open_repeat1,
  [1924] = 1,
    ACTIONS(280), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1930] = 1,
    ACTIONS(282), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1936] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 2,
      sym_foreach,
      sym_identifier,
  [1944] = 3,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym__bracket_open_repeat1,
  [1954] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 2,
      sym_foreach,
      sym_identifier,
  [1962] = 1,
    ACTIONS(292), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1968] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 2,
      sym_foreach,
      sym_identifier,
  [1976] = 1,
    ACTIONS(296), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1982] = 3,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      aux_sym__bracket_open_repeat1,
  [1992] = 2,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 2,
      sym_foreach,
      sym_identifier,
  [2000] = 3,
    ACTIONS(302), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_bracket_content_repeat1,
  [2010] = 1,
    ACTIONS(306), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [2016] = 1,
    ACTIONS(308), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2022] = 3,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym__bracket_open_repeat1,
  [2032] = 1,
    ACTIONS(258), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2038] = 1,
    ACTIONS(262), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [2044] = 1,
    ACTIONS(314), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [2050] = 2,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym__bracket_close,
  [2057] = 2,
    ACTIONS(318), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
  [2064] = 2,
    ACTIONS(322), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
  [2071] = 2,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym__bracket_close,
  [2078] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [2082] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [2086] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [2090] = 1,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
  [2094] = 1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
  [2098] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [2102] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
  [2106] = 1,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
  [2110] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [2114] = 1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [2118] = 1,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [2122] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [2126] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [2130] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [2134] = 1,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [2138] = 1,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
  [2142] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [2146] = 1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2150] = 1,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [2154] = 1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [2158] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [2162] = 1,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [2166] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [2170] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [2174] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [2178] = 1,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
  [2182] = 1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [2186] = 1,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2190] = 1,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [2194] = 1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
  [2198] = 1,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
  [2202] = 1,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
  [2206] = 1,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 258,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 385,
  [SMALL_STATE(9)] = 447,
  [SMALL_STATE(10)] = 509,
  [SMALL_STATE(11)] = 571,
  [SMALL_STATE(12)] = 631,
  [SMALL_STATE(13)] = 684,
  [SMALL_STATE(14)] = 726,
  [SMALL_STATE(15)] = 764,
  [SMALL_STATE(16)] = 806,
  [SMALL_STATE(17)] = 844,
  [SMALL_STATE(18)] = 883,
  [SMALL_STATE(19)] = 922,
  [SMALL_STATE(20)] = 947,
  [SMALL_STATE(21)] = 971,
  [SMALL_STATE(22)] = 1007,
  [SMALL_STATE(23)] = 1043,
  [SMALL_STATE(24)] = 1058,
  [SMALL_STATE(25)] = 1073,
  [SMALL_STATE(26)] = 1088,
  [SMALL_STATE(27)] = 1103,
  [SMALL_STATE(28)] = 1118,
  [SMALL_STATE(29)] = 1132,
  [SMALL_STATE(30)] = 1146,
  [SMALL_STATE(31)] = 1160,
  [SMALL_STATE(32)] = 1174,
  [SMALL_STATE(33)] = 1188,
  [SMALL_STATE(34)] = 1202,
  [SMALL_STATE(35)] = 1223,
  [SMALL_STATE(36)] = 1236,
  [SMALL_STATE(37)] = 1249,
  [SMALL_STATE(38)] = 1262,
  [SMALL_STATE(39)] = 1275,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1317,
  [SMALL_STATE(42)] = 1338,
  [SMALL_STATE(43)] = 1359,
  [SMALL_STATE(44)] = 1372,
  [SMALL_STATE(45)] = 1393,
  [SMALL_STATE(46)] = 1414,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1456,
  [SMALL_STATE(49)] = 1477,
  [SMALL_STATE(50)] = 1498,
  [SMALL_STATE(51)] = 1520,
  [SMALL_STATE(52)] = 1542,
  [SMALL_STATE(53)] = 1564,
  [SMALL_STATE(54)] = 1586,
  [SMALL_STATE(55)] = 1605,
  [SMALL_STATE(56)] = 1624,
  [SMALL_STATE(57)] = 1643,
  [SMALL_STATE(58)] = 1659,
  [SMALL_STATE(59)] = 1675,
  [SMALL_STATE(60)] = 1691,
  [SMALL_STATE(61)] = 1707,
  [SMALL_STATE(62)] = 1723,
  [SMALL_STATE(63)] = 1733,
  [SMALL_STATE(64)] = 1749,
  [SMALL_STATE(65)] = 1765,
  [SMALL_STATE(66)] = 1781,
  [SMALL_STATE(67)] = 1792,
  [SMALL_STATE(68)] = 1798,
  [SMALL_STATE(69)] = 1804,
  [SMALL_STATE(70)] = 1814,
  [SMALL_STATE(71)] = 1820,
  [SMALL_STATE(72)] = 1830,
  [SMALL_STATE(73)] = 1836,
  [SMALL_STATE(74)] = 1844,
  [SMALL_STATE(75)] = 1852,
  [SMALL_STATE(76)] = 1860,
  [SMALL_STATE(77)] = 1870,
  [SMALL_STATE(78)] = 1876,
  [SMALL_STATE(79)] = 1884,
  [SMALL_STATE(80)] = 1890,
  [SMALL_STATE(81)] = 1896,
  [SMALL_STATE(82)] = 1902,
  [SMALL_STATE(83)] = 1908,
  [SMALL_STATE(84)] = 1914,
  [SMALL_STATE(85)] = 1924,
  [SMALL_STATE(86)] = 1930,
  [SMALL_STATE(87)] = 1936,
  [SMALL_STATE(88)] = 1944,
  [SMALL_STATE(89)] = 1954,
  [SMALL_STATE(90)] = 1962,
  [SMALL_STATE(91)] = 1968,
  [SMALL_STATE(92)] = 1976,
  [SMALL_STATE(93)] = 1982,
  [SMALL_STATE(94)] = 1992,
  [SMALL_STATE(95)] = 2000,
  [SMALL_STATE(96)] = 2010,
  [SMALL_STATE(97)] = 2016,
  [SMALL_STATE(98)] = 2022,
  [SMALL_STATE(99)] = 2032,
  [SMALL_STATE(100)] = 2038,
  [SMALL_STATE(101)] = 2044,
  [SMALL_STATE(102)] = 2050,
  [SMALL_STATE(103)] = 2057,
  [SMALL_STATE(104)] = 2064,
  [SMALL_STATE(105)] = 2071,
  [SMALL_STATE(106)] = 2078,
  [SMALL_STATE(107)] = 2082,
  [SMALL_STATE(108)] = 2086,
  [SMALL_STATE(109)] = 2090,
  [SMALL_STATE(110)] = 2094,
  [SMALL_STATE(111)] = 2098,
  [SMALL_STATE(112)] = 2102,
  [SMALL_STATE(113)] = 2106,
  [SMALL_STATE(114)] = 2110,
  [SMALL_STATE(115)] = 2114,
  [SMALL_STATE(116)] = 2118,
  [SMALL_STATE(117)] = 2122,
  [SMALL_STATE(118)] = 2126,
  [SMALL_STATE(119)] = 2130,
  [SMALL_STATE(120)] = 2134,
  [SMALL_STATE(121)] = 2138,
  [SMALL_STATE(122)] = 2142,
  [SMALL_STATE(123)] = 2146,
  [SMALL_STATE(124)] = 2150,
  [SMALL_STATE(125)] = 2154,
  [SMALL_STATE(126)] = 2158,
  [SMALL_STATE(127)] = 2162,
  [SMALL_STATE(128)] = 2166,
  [SMALL_STATE(129)] = 2170,
  [SMALL_STATE(130)] = 2174,
  [SMALL_STATE(131)] = 2178,
  [SMALL_STATE(132)] = 2182,
  [SMALL_STATE(133)] = 2186,
  [SMALL_STATE(134)] = 2190,
  [SMALL_STATE(135)] = 2194,
  [SMALL_STATE(136)] = 2198,
  [SMALL_STATE(137)] = 2202,
  [SMALL_STATE(138)] = 2206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(49),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(48),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(16),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(31),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(46),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(47),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(44),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(17),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(108),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(43),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(42),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(40),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(21),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(62),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2), SHIFT_REPEAT(4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(11),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(66),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(71),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [390] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
