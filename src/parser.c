#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  sym_space = 1,
  sym_newline = 2,
  sym_identifier = 3,
  sym__escape_identity = 4,
  anon_sym_BSLASHt = 5,
  anon_sym_BSLASHr = 6,
  anon_sym_BSLASHn = 7,
  sym__escape_semicolon = 8,
  aux_sym_variable_token1 = 9,
  anon_sym_DOLLAR_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_DOLLARENV_LBRACE = 12,
  anon_sym_DOLLARCACHE_LBRACE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_EQ = 15,
  aux_sym_bracket_content_token1 = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_quoted_element_token1 = 19,
  anon_sym_BSLASH = 20,
  aux_sym_unquoted_argument_token1 = 21,
  anon_sym_foreach = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_endforeach = 25,
  sym_source_file = 26,
  sym_line_ending = 27,
  sym_seperation = 28,
  sym_escape_sequence = 29,
  sym__escape_encoded = 30,
  sym_variable = 31,
  sym_variable_ref = 32,
  sym_normal_var = 33,
  sym_env_var = 34,
  sym_cache_var = 35,
  sym_argument = 36,
  sym_bracket_argument = 37,
  sym__bracket_open = 38,
  sym_bracket_content = 39,
  sym__bracket_close = 40,
  sym_quoted_argument = 41,
  sym_quoted_element = 42,
  sym_unquoted_argument = 43,
  sym_arguments = 44,
  sym__seperated_arguments = 45,
  sym_foreach_loop = 46,
  sym_normal_command = 47,
  sym_command_invocation = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_variable_repeat1 = 50,
  aux_sym__bracket_open_repeat1 = 51,
  aux_sym_bracket_content_repeat1 = 52,
  aux_sym_quoted_element_repeat1 = 53,
  aux_sym_unquoted_argument_repeat1 = 54,
  aux_sym_arguments_repeat1 = 55,
  aux_sym__seperated_arguments_repeat1 = 56,
  aux_sym_foreach_loop_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
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
  [anon_sym_foreach] = "foreach",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_endforeach] = "endforeach",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_seperation] = "seperation",
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
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_foreach_loop] = "foreach_loop",
  [sym_normal_command] = "normal_command",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
  [aux_sym_quoted_element_repeat1] = "quoted_element_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__seperated_arguments_repeat1] = "_seperated_arguments_repeat1",
  [aux_sym_foreach_loop_repeat1] = "foreach_loop_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_space] = sym_space,
  [sym_newline] = sym_newline,
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
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_endforeach] = anon_sym_endforeach,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_seperation] = sym_seperation,
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
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_foreach_loop] = sym_foreach_loop,
  [sym_normal_command] = sym_normal_command,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
  [aux_sym_quoted_element_repeat1] = aux_sym_quoted_element_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__seperated_arguments_repeat1] = aux_sym__seperated_arguments_repeat1,
  [aux_sym_foreach_loop_repeat1] = aux_sym_foreach_loop_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
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
  [anon_sym_foreach] = {
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
  [anon_sym_endforeach] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_ending] = {
    .visible = true,
    .named = true,
  },
  [sym_seperation] = {
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
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__seperated_arguments] = {
    .visible = false,
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
  [sym_command_invocation] = {
    .visible = true,
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
  [aux_sym__seperated_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreach_loop_repeat1] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'V') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(58);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(49);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 30},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 30},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 30},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 30},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 20},
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
    [sym_source_file] = STATE(107),
    [sym_foreach_loop] = STATE(62),
    [sym_normal_command] = STATE(62),
    [sym_command_invocation] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_foreach] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(5),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(100),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(5),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [3] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(4),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(111),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(4),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [4] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(18),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(91),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(18),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [5] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(18),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(87),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(18),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [6] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(18),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(104),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(18),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [7] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(18),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(100),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(18),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [8] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(6),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(91),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(6),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [9] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(7),
    [sym_escape_sequence] = STATE(11),
    [sym__escape_encoded] = STATE(25),
    [sym_variable_ref] = STATE(11),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(48),
    [sym_bracket_argument] = STATE(60),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(60),
    [sym_unquoted_argument] = STATE(60),
    [sym_arguments] = STATE(112),
    [aux_sym_unquoted_argument_repeat1] = STATE(11),
    [aux_sym__seperated_arguments_repeat1] = STATE(7),
    [sym_space] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    STATE(20), 1,
      sym_line_ending,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(53), 1,
      sym__bracket_open,
    STATE(68), 1,
      sym_argument,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(39), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(11), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(60), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [62] = 9,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(43), 1,
      aux_sym_unquoted_argument_token1,
    STATE(25), 1,
      sym__escape_encoded,
    ACTIONS(41), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [100] = 11,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(95), 1,
      sym_quoted_element,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [142] = 9,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(70), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(73), 1,
      aux_sym_unquoted_argument_token1,
    STATE(25), 1,
      sym__escape_encoded,
    ACTIONS(59), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(61), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [180] = 5,
    ACTIONS(81), 1,
      aux_sym_variable_token1,
    STATE(19), 1,
      sym__escape_encoded,
    STATE(14), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(78), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(76), 9,
      sym_space,
      sym_newline,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [209] = 10,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(93), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(15), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(84), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [248] = 10,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_quoted_element_token1,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(15), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(45), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [287] = 4,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    STATE(19), 1,
      sym__escape_encoded,
    STATE(14), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 14,
      sym_space,
      sym_newline,
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
  [314] = 5,
    ACTIONS(112), 1,
      sym_space,
    ACTIONS(115), 1,
      sym_newline,
    STATE(20), 1,
      sym_line_ending,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(118), 12,
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
  [342] = 1,
    ACTIONS(120), 15,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [360] = 1,
    ACTIONS(122), 14,
      sym_space,
      sym_newline,
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
  [377] = 1,
    ACTIONS(124), 14,
      sym_space,
      sym_newline,
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
  [394] = 1,
    ACTIONS(126), 12,
      sym_space,
      sym_newline,
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
  [409] = 1,
    ACTIONS(128), 12,
      sym_space,
      sym_newline,
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
  [424] = 1,
    ACTIONS(130), 12,
      sym_space,
      sym_newline,
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
  [439] = 1,
    ACTIONS(120), 12,
      sym_space,
      sym_newline,
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
  [454] = 1,
    ACTIONS(132), 12,
      sym_space,
      sym_newline,
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
  [469] = 1,
    ACTIONS(132), 11,
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
  [483] = 1,
    ACTIONS(96), 11,
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
  [497] = 1,
    ACTIONS(120), 11,
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
  [511] = 1,
    ACTIONS(126), 11,
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
  [525] = 1,
    ACTIONS(130), 11,
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
  [539] = 5,
    ACTIONS(137), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [561] = 5,
    ACTIONS(144), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [583] = 1,
    ACTIONS(128), 11,
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
  [597] = 6,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(97), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [621] = 6,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(94), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [645] = 6,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(90), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [669] = 6,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(93), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [693] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(103), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [714] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(110), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [735] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(109), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [756] = 5,
    ACTIONS(160), 1,
      aux_sym_variable_token1,
    STATE(9), 1,
      sym_variable,
    STATE(19), 1,
      sym__escape_encoded,
    STATE(17), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(158), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [777] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(108), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [798] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(105), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [819] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(49), 1,
      sym__escape_encoded,
    STATE(106), 1,
      sym_variable,
    STATE(33), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [840] = 5,
    ACTIONS(160), 1,
      aux_sym_variable_token1,
    STATE(2), 1,
      sym_variable,
    STATE(19), 1,
      sym__escape_encoded,
    STATE(17), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(158), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [861] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(50), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [882] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(47), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [903] = 1,
    ACTIONS(166), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [914] = 6,
    ACTIONS(168), 1,
      sym_space,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(50), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [935] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_foreach,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(62), 2,
      sym_foreach_loop,
      sym_normal_command,
  [953] = 5,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_foreach,
    STATE(52), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(62), 2,
      sym_foreach_loop,
      sym_normal_command,
  [971] = 5,
    ACTIONS(186), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_bracket_content_repeat1,
    STATE(83), 1,
      sym__bracket_close,
    STATE(86), 1,
      sym_bracket_content,
  [987] = 3,
    ACTIONS(192), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(190), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [998] = 1,
    ACTIONS(195), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1004] = 3,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [1014] = 3,
    ACTIONS(201), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_bracket_content_repeat1,
  [1024] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      sym_identifier,
      anon_sym_foreach,
  [1032] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 2,
      sym_identifier,
      anon_sym_foreach,
  [1040] = 1,
    ACTIONS(213), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1046] = 3,
    ACTIONS(215), 1,
      sym_space,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_foreach_loop_repeat1,
  [1056] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 2,
      sym_identifier,
      anon_sym_foreach,
  [1064] = 3,
    ACTIONS(224), 1,
      sym_space,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_foreach_loop_repeat1,
  [1074] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 2,
      sym_identifier,
      anon_sym_foreach,
  [1082] = 3,
    ACTIONS(232), 1,
      sym_space,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_foreach_loop_repeat1,
  [1092] = 3,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__bracket_open_repeat1,
  [1102] = 1,
    ACTIONS(240), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1108] = 1,
    ACTIONS(242), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1114] = 1,
    ACTIONS(244), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1120] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 2,
      sym_identifier,
      anon_sym_foreach,
  [1128] = 3,
    ACTIONS(250), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_bracket_content_repeat1,
  [1138] = 3,
    ACTIONS(232), 1,
      sym_space,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_foreach_loop_repeat1,
  [1148] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 2,
      sym_identifier,
      anon_sym_foreach,
  [1156] = 3,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [1166] = 1,
    ACTIONS(263), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1172] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 2,
      sym_identifier,
      anon_sym_foreach,
  [1180] = 3,
    ACTIONS(269), 1,
      sym_space,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      aux_sym_foreach_loop_repeat1,
  [1190] = 1,
    ACTIONS(273), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1196] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 2,
      sym_identifier,
      anon_sym_foreach,
  [1204] = 3,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_EQ,
    STATE(74), 1,
      aux_sym__bracket_open_repeat1,
  [1214] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 2,
      sym_identifier,
      anon_sym_foreach,
  [1222] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 2,
      sym_identifier,
      anon_sym_foreach,
  [1230] = 1,
    ACTIONS(291), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1236] = 2,
    ACTIONS(293), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
  [1243] = 2,
    ACTIONS(297), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
  [1250] = 2,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym__bracket_close,
  [1257] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1261] = 1,
    ACTIONS(305), 1,
      anon_sym_endforeach,
  [1265] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1269] = 1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [1273] = 1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [1277] = 1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [1281] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [1285] = 1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [1289] = 1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1293] = 1,
    ACTIONS(315), 1,
      anon_sym_endforeach,
  [1297] = 1,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [1301] = 1,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [1305] = 1,
    ACTIONS(321), 1,
      sym_newline,
  [1309] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [1313] = 1,
    ACTIONS(325), 1,
      anon_sym_endforeach,
  [1317] = 1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [1321] = 1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
  [1325] = 1,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [1329] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1333] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
  [1337] = 1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1341] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
  [1345] = 1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
  [1349] = 1,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [1353] = 1,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [1357] = 1,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [1361] = 1,
    ACTIONS(349), 1,
      anon_sym_endforeach,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 394,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 439,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 497,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 525,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 561,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 597,
  [SMALL_STATE(36)] = 621,
  [SMALL_STATE(37)] = 645,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 735,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 777,
  [SMALL_STATE(44)] = 798,
  [SMALL_STATE(45)] = 819,
  [SMALL_STATE(46)] = 840,
  [SMALL_STATE(47)] = 861,
  [SMALL_STATE(48)] = 882,
  [SMALL_STATE(49)] = 903,
  [SMALL_STATE(50)] = 914,
  [SMALL_STATE(51)] = 935,
  [SMALL_STATE(52)] = 953,
  [SMALL_STATE(53)] = 971,
  [SMALL_STATE(54)] = 987,
  [SMALL_STATE(55)] = 998,
  [SMALL_STATE(56)] = 1004,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1024,
  [SMALL_STATE(59)] = 1032,
  [SMALL_STATE(60)] = 1040,
  [SMALL_STATE(61)] = 1046,
  [SMALL_STATE(62)] = 1056,
  [SMALL_STATE(63)] = 1064,
  [SMALL_STATE(64)] = 1074,
  [SMALL_STATE(65)] = 1082,
  [SMALL_STATE(66)] = 1092,
  [SMALL_STATE(67)] = 1102,
  [SMALL_STATE(68)] = 1108,
  [SMALL_STATE(69)] = 1114,
  [SMALL_STATE(70)] = 1120,
  [SMALL_STATE(71)] = 1128,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1148,
  [SMALL_STATE(74)] = 1156,
  [SMALL_STATE(75)] = 1166,
  [SMALL_STATE(76)] = 1172,
  [SMALL_STATE(77)] = 1180,
  [SMALL_STATE(78)] = 1190,
  [SMALL_STATE(79)] = 1196,
  [SMALL_STATE(80)] = 1204,
  [SMALL_STATE(81)] = 1214,
  [SMALL_STATE(82)] = 1222,
  [SMALL_STATE(83)] = 1230,
  [SMALL_STATE(84)] = 1236,
  [SMALL_STATE(85)] = 1243,
  [SMALL_STATE(86)] = 1250,
  [SMALL_STATE(87)] = 1257,
  [SMALL_STATE(88)] = 1261,
  [SMALL_STATE(89)] = 1265,
  [SMALL_STATE(90)] = 1269,
  [SMALL_STATE(91)] = 1273,
  [SMALL_STATE(92)] = 1277,
  [SMALL_STATE(93)] = 1281,
  [SMALL_STATE(94)] = 1285,
  [SMALL_STATE(95)] = 1289,
  [SMALL_STATE(96)] = 1293,
  [SMALL_STATE(97)] = 1297,
  [SMALL_STATE(98)] = 1301,
  [SMALL_STATE(99)] = 1305,
  [SMALL_STATE(100)] = 1309,
  [SMALL_STATE(101)] = 1313,
  [SMALL_STATE(102)] = 1317,
  [SMALL_STATE(103)] = 1321,
  [SMALL_STATE(104)] = 1325,
  [SMALL_STATE(105)] = 1329,
  [SMALL_STATE(106)] = 1333,
  [SMALL_STATE(107)] = 1337,
  [SMALL_STATE(108)] = 1341,
  [SMALL_STATE(109)] = 1345,
  [SMALL_STATE(110)] = 1349,
  [SMALL_STATE(111)] = 1353,
  [SMALL_STATE(112)] = 1357,
  [SMALL_STATE(113)] = 1361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(25),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(45),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(44),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(19),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(29),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(43),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(41),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(40),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(15),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(99),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(49),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(54),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreach_loop_repeat1, 2), SHIFT_REPEAT(61),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_loop_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 8),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 8),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(71),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 11),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 10),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 10),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 9),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 9),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
