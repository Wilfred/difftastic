#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym_foreach_loop_token1 = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_source_file = 25,
  sym_line_ending = 26,
  sym_seperation = 27,
  sym_escape_sequence = 28,
  sym__escape_encoded = 29,
  sym_variable = 30,
  sym_variable_ref = 31,
  sym_normal_var = 32,
  sym_env_var = 33,
  sym_cache_var = 34,
  sym_argument = 35,
  sym_bracket_argument = 36,
  sym__bracket_open = 37,
  sym_bracket_content = 38,
  sym__bracket_close = 39,
  sym_quoted_argument = 40,
  sym_quoted_element = 41,
  sym_unquoted_argument = 42,
  sym_arguments = 43,
  sym__seperated_arguments = 44,
  sym_foreach_loop = 45,
  sym_normal_command = 46,
  sym_command_invocation = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_variable_repeat1 = 49,
  aux_sym__bracket_open_repeat1 = 50,
  aux_sym_bracket_content_repeat1 = 51,
  aux_sym_quoted_element_repeat1 = 52,
  aux_sym_unquoted_argument_repeat1 = 53,
  aux_sym_arguments_repeat1 = 54,
  aux_sym__seperated_arguments_repeat1 = 55,
  aux_sym_foreach_loop_repeat1 = 56,
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
  [aux_sym_foreach_loop_token1] = "foreach_loop_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [aux_sym_foreach_loop_token1] = aux_sym_foreach_loop_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [aux_sym_foreach_loop_token1] = {
    .visible = false,
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
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'H') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'V') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
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
    [sym_source_file] = STATE(103),
    [sym_foreach_loop] = STATE(60),
    [sym_normal_command] = STATE(60),
    [sym_command_invocation] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym_foreach_loop_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [aux_sym_foreach_loop_token1] = ACTIONS(9),
  },
  [2] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(92),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [3] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(104),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [4] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(13),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(91),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(13),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [5] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(97),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(2),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [6] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(91),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [7] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(97),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [8] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(7),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(104),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(7),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [9] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(3),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(95),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(3),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
  [10] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(96),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [11] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(10),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(94),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(10),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(41),
  },
  [12] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(6),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(96),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(6),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [13] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(46),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [sym_arguments] = STATE(93),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [14] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(15),
    [sym__escape_encoded] = STATE(23),
    [sym_variable_ref] = STATE(15),
    [sym_normal_var] = STATE(27),
    [sym_env_var] = STATE(27),
    [sym_cache_var] = STATE(27),
    [sym_argument] = STATE(75),
    [sym_bracket_argument] = STATE(64),
    [sym__bracket_open] = STATE(48),
    [sym_quoted_argument] = STATE(64),
    [sym_unquoted_argument] = STATE(64),
    [aux_sym_unquoted_argument_repeat1] = STATE(15),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym_space] = ACTIONS(45),
    [sym_newline] = ACTIONS(45),
    [sym__escape_identity] = ACTIONS(15),
    [anon_sym_BSLASHt] = ACTIONS(15),
    [anon_sym_BSLASHr] = ACTIONS(15),
    [anon_sym_BSLASHn] = ACTIONS(15),
    [sym__escape_semicolon] = ACTIONS(15),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(49), 1,
      aux_sym_unquoted_argument_token1,
    STATE(23), 1,
      sym__escape_encoded,
    ACTIONS(47), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(15), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [38] = 11,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(63), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(99), 1,
      sym_quoted_element,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(33), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(51), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [80] = 9,
    ACTIONS(70), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(79), 1,
      aux_sym_unquoted_argument_token1,
    STATE(23), 1,
      sym__escape_encoded,
    ACTIONS(65), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(67), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [118] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(63), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      aux_sym_quoted_element_token1,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(33), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(51), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [157] = 10,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(92), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(33), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(86), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [196] = 5,
    ACTIONS(106), 1,
      sym_space,
    ACTIONS(109), 1,
      sym_newline,
    STATE(21), 1,
      sym_line_ending,
    STATE(20), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(112), 12,
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
  [224] = 1,
    ACTIONS(114), 14,
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
  [241] = 1,
    ACTIONS(116), 14,
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
  [258] = 1,
    ACTIONS(118), 12,
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
  [273] = 1,
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
  [288] = 1,
    ACTIONS(122), 12,
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
  [303] = 1,
    ACTIONS(124), 12,
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
  [318] = 1,
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
  [333] = 1,
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
  [347] = 1,
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
  [361] = 1,
    ACTIONS(122), 11,
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
  [375] = 1,
    ACTIONS(124), 11,
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
  [389] = 1,
    ACTIONS(98), 11,
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
  [403] = 1,
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
  [417] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(88), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [438] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(101), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [459] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(100), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [480] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(102), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [501] = 5,
    ACTIONS(135), 1,
      aux_sym_variable_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(38), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(132), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [522] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(90), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [543] = 5,
    ACTIONS(140), 1,
      aux_sym_variable_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(38), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [564] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    STATE(47), 1,
      sym__escape_encoded,
    STATE(89), 1,
      sym_variable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [585] = 7,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym_space,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(152), 1,
      aux_sym_foreach_loop_token1,
    STATE(58), 1,
      aux_sym_foreach_loop_repeat1,
    STATE(42), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(60), 2,
      sym_foreach_loop,
      sym_normal_command,
  [609] = 7,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      aux_sym_foreach_loop_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym_foreach_loop_repeat1,
    STATE(42), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(60), 2,
      sym_foreach_loop,
      sym_normal_command,
  [633] = 6,
    ACTIONS(157), 1,
      sym_space,
    ACTIONS(160), 1,
      sym_newline,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(14), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(44), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [654] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(14), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(44), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [675] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(14), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(45), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [696] = 1,
    ACTIONS(169), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [706] = 5,
    ACTIONS(171), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym__bracket_close,
    STATE(66), 1,
      aux_sym_bracket_content_repeat1,
    STATE(87), 1,
      sym_bracket_content,
  [722] = 3,
    ACTIONS(175), 1,
      sym_space,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
    ACTIONS(178), 3,
      sym_identifier,
      aux_sym_foreach_loop_token1,
      anon_sym_LPAREN,
  [734] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(182), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [743] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(186), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [752] = 3,
    ACTIONS(190), 1,
      anon_sym_EQ,
    STATE(52), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(188), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [763] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(195), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [772] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(199), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [781] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(203), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [790] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(207), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [799] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(211), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [808] = 4,
    ACTIONS(213), 1,
      sym_space,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      aux_sym_foreach_loop_token1,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
  [821] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(221), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [830] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(225), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [839] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(229), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [848] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_space,
    ACTIONS(233), 2,
      sym_identifier,
      aux_sym_foreach_loop_token1,
  [857] = 1,
    ACTIONS(235), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [863] = 1,
    ACTIONS(237), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [869] = 3,
    ACTIONS(239), 1,
      sym_space,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      aux_sym_foreach_loop_repeat1,
  [879] = 3,
    ACTIONS(243), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_bracket_content_repeat1,
  [889] = 3,
    ACTIONS(247), 1,
      sym_space,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_foreach_loop_repeat1,
  [899] = 3,
    ACTIONS(213), 1,
      sym_space,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
  [909] = 3,
    ACTIONS(213), 1,
      sym_space,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
  [919] = 3,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__bracket_open_repeat1,
  [929] = 3,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_space,
    STATE(82), 1,
      aux_sym_foreach_loop_repeat1,
  [939] = 1,
    ACTIONS(261), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [945] = 3,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_space,
    STATE(83), 1,
      aux_sym_foreach_loop_repeat1,
  [955] = 1,
    ACTIONS(265), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [961] = 1,
    ACTIONS(267), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [967] = 1,
    ACTIONS(269), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [973] = 3,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym__bracket_open_repeat1,
  [983] = 1,
    ACTIONS(275), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [989] = 3,
    ACTIONS(277), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_bracket_content_repeat1,
  [999] = 3,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      aux_sym__bracket_open_repeat1,
  [1009] = 3,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      anon_sym_EQ,
    STATE(80), 1,
      aux_sym__bracket_open_repeat1,
  [1019] = 3,
    ACTIONS(213), 1,
      sym_space,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
  [1029] = 3,
    ACTIONS(213), 1,
      sym_space,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym_foreach_loop_repeat1,
  [1039] = 1,
    ACTIONS(292), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1045] = 2,
    ACTIONS(294), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
  [1052] = 2,
    ACTIONS(298), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
  [1059] = 2,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym__bracket_close,
  [1066] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [1070] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [1074] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1078] = 1,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
  [1082] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [1086] = 1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1090] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1094] = 1,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
  [1098] = 1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
  [1102] = 1,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
  [1106] = 1,
    ACTIONS(324), 1,
      sym_newline,
  [1110] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1114] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1118] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
  [1122] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1126] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [1130] = 1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 38,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 118,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 241,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 303,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 333,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 361,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 389,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 438,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 480,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 522,
  [SMALL_STATE(40)] = 543,
  [SMALL_STATE(41)] = 564,
  [SMALL_STATE(42)] = 585,
  [SMALL_STATE(43)] = 609,
  [SMALL_STATE(44)] = 633,
  [SMALL_STATE(45)] = 654,
  [SMALL_STATE(46)] = 675,
  [SMALL_STATE(47)] = 696,
  [SMALL_STATE(48)] = 706,
  [SMALL_STATE(49)] = 722,
  [SMALL_STATE(50)] = 734,
  [SMALL_STATE(51)] = 743,
  [SMALL_STATE(52)] = 752,
  [SMALL_STATE(53)] = 763,
  [SMALL_STATE(54)] = 772,
  [SMALL_STATE(55)] = 781,
  [SMALL_STATE(56)] = 790,
  [SMALL_STATE(57)] = 799,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 821,
  [SMALL_STATE(60)] = 830,
  [SMALL_STATE(61)] = 839,
  [SMALL_STATE(62)] = 848,
  [SMALL_STATE(63)] = 857,
  [SMALL_STATE(64)] = 863,
  [SMALL_STATE(65)] = 869,
  [SMALL_STATE(66)] = 879,
  [SMALL_STATE(67)] = 889,
  [SMALL_STATE(68)] = 899,
  [SMALL_STATE(69)] = 909,
  [SMALL_STATE(70)] = 919,
  [SMALL_STATE(71)] = 929,
  [SMALL_STATE(72)] = 939,
  [SMALL_STATE(73)] = 945,
  [SMALL_STATE(74)] = 955,
  [SMALL_STATE(75)] = 961,
  [SMALL_STATE(76)] = 967,
  [SMALL_STATE(77)] = 973,
  [SMALL_STATE(78)] = 983,
  [SMALL_STATE(79)] = 989,
  [SMALL_STATE(80)] = 999,
  [SMALL_STATE(81)] = 1009,
  [SMALL_STATE(82)] = 1019,
  [SMALL_STATE(83)] = 1029,
  [SMALL_STATE(84)] = 1039,
  [SMALL_STATE(85)] = 1045,
  [SMALL_STATE(86)] = 1052,
  [SMALL_STATE(87)] = 1059,
  [SMALL_STATE(88)] = 1066,
  [SMALL_STATE(89)] = 1070,
  [SMALL_STATE(90)] = 1074,
  [SMALL_STATE(91)] = 1078,
  [SMALL_STATE(92)] = 1082,
  [SMALL_STATE(93)] = 1086,
  [SMALL_STATE(94)] = 1090,
  [SMALL_STATE(95)] = 1094,
  [SMALL_STATE(96)] = 1098,
  [SMALL_STATE(97)] = 1102,
  [SMALL_STATE(98)] = 1106,
  [SMALL_STATE(99)] = 1110,
  [SMALL_STATE(100)] = 1114,
  [SMALL_STATE(101)] = 1118,
  [SMALL_STATE(102)] = 1122,
  [SMALL_STATE(103)] = 1126,
  [SMALL_STATE(104)] = 1130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(23),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(41),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(29),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(36),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(35),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(37),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(19),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(98),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(47),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreach_loop_repeat1, 2), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_loop_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 7),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(79),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
