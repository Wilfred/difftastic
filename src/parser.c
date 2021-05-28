#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_source_file = 24,
  sym_line_ending = 25,
  sym_seperation = 26,
  sym_escape_sequence = 27,
  sym__escape_encoded = 28,
  sym_variable_ref = 29,
  sym_variable = 30,
  sym_normal_var = 31,
  sym_env_var = 32,
  sym_cache_var = 33,
  sym_argument = 34,
  sym_bracket_argument = 35,
  sym__bracket_open = 36,
  sym_bracket_content = 37,
  sym__bracket_close = 38,
  sym_quoted_argument = 39,
  sym_quoted_element = 40,
  sym_unquoted_argument = 41,
  sym_arguments = 42,
  sym__seperated_arguments = 43,
  sym_command_invocation = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_variable_repeat1 = 46,
  aux_sym__bracket_open_repeat1 = 47,
  aux_sym_bracket_content_repeat1 = 48,
  aux_sym_quoted_element_repeat1 = 49,
  aux_sym_unquoted_argument_repeat1 = 50,
  aux_sym_arguments_repeat1 = 51,
  aux_sym__seperated_arguments_repeat1 = 52,
  aux_sym_command_invocation_repeat1 = 53,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_seperation] = "seperation",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_encoded] = "_escape_encoded",
  [sym_variable_ref] = "variable_ref",
  [sym_variable] = "variable",
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
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
  [aux_sym_quoted_element_repeat1] = "quoted_element_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__seperated_arguments_repeat1] = "_seperated_arguments_repeat1",
  [aux_sym_command_invocation_repeat1] = "command_invocation_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_seperation] = sym_seperation,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_encoded] = sym__escape_encoded,
  [sym_variable_ref] = sym_variable_ref,
  [sym_variable] = sym_variable,
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
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
  [aux_sym_quoted_element_repeat1] = aux_sym_quoted_element_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__seperated_arguments_repeat1] = aux_sym__seperated_arguments_repeat1,
  [aux_sym_command_invocation_repeat1] = aux_sym_command_invocation_repeat1,
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
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
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
  [aux_sym_command_invocation_repeat1] = {
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
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
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
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(35);
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
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(38);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(51);
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
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(51);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(29);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
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
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
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
    [sym_source_file] = STATE(81),
    [sym_command_invocation] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [aux_sym_command_invocation_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(78),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
    [aux_sym__seperated_arguments_repeat1] = STATE(14),
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
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(85),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
    [aux_sym__seperated_arguments_repeat1] = STATE(2),
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
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(85),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
    [aux_sym__seperated_arguments_repeat1] = STATE(14),
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
  [5] = {
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(86),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
    [aux_sym__seperated_arguments_repeat1] = STATE(14),
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
  [6] = {
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(5),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(77),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
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
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [7] = {
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(4),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(36),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [sym_arguments] = STATE(86),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
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
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [8] = {
    [sym_line_ending] = STATE(15),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(10),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(10),
    [sym_normal_var] = STATE(20),
    [sym_env_var] = STATE(20),
    [sym_cache_var] = STATE(20),
    [sym_argument] = STATE(61),
    [sym_bracket_argument] = STATE(55),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(55),
    [sym_unquoted_argument] = STATE(55),
    [aux_sym_unquoted_argument_repeat1] = STATE(10),
    [aux_sym__seperated_arguments_repeat1] = STATE(14),
    [sym_space] = ACTIONS(35),
    [sym_newline] = ACTIONS(35),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(42), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(48), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    ACTIONS(37), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(39), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [38] = 9,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(56), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    ACTIONS(54), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [76] = 11,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym__escape_encoded,
    STATE(87), 1,
      sym_quoted_element,
    STATE(12), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [118] = 10,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym_quoted_element_token1,
    STATE(27), 1,
      sym__escape_encoded,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [157] = 10,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym__escape_encoded,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(76), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [196] = 5,
    ACTIONS(96), 1,
      sym_space,
    ACTIONS(99), 1,
      sym_newline,
    STATE(15), 1,
      sym_line_ending,
    STATE(14), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(102), 12,
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
    ACTIONS(104), 14,
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
    ACTIONS(106), 14,
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
    ACTIONS(108), 12,
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
    ACTIONS(110), 12,
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
    ACTIONS(112), 12,
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
    ACTIONS(114), 12,
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
    ACTIONS(116), 12,
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
    ACTIONS(116), 11,
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
    ACTIONS(114), 11,
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
    ACTIONS(112), 11,
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
    ACTIONS(110), 11,
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
    ACTIONS(88), 11,
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
    ACTIONS(108), 11,
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
    ACTIONS(121), 1,
      aux_sym_variable_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(28), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [438] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(84), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [459] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(83), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [480] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(82), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [501] = 5,
    ACTIONS(130), 1,
      aux_sym_variable_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(28), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [522] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(79), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [543] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(80), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [564] = 5,
    ACTIONS(128), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym__escape_encoded,
    STATE(76), 1,
      sym_variable,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(126), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [585] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(38), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [606] = 6,
    ACTIONS(136), 1,
      sym_space,
    ACTIONS(139), 1,
      sym_newline,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(37), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [627] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(37), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [648] = 1,
    ACTIONS(146), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [658] = 5,
    ACTIONS(148), 1,
      sym_space,
    ACTIONS(150), 1,
      sym_newline,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_line_ending,
    STATE(46), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [675] = 5,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      sym_space,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_command_invocation_repeat1,
    STATE(41), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [692] = 5,
    ACTIONS(148), 1,
      sym_space,
    ACTIONS(150), 1,
      sym_newline,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_line_ending,
    STATE(46), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [709] = 5,
    ACTIONS(148), 1,
      sym_space,
    ACTIONS(150), 1,
      sym_newline,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_line_ending,
    STATE(40), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [726] = 5,
    ACTIONS(148), 1,
      sym_space,
    ACTIONS(150), 1,
      sym_newline,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_line_ending,
    STATE(42), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [743] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym_command_invocation_repeat1,
    STATE(41), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [760] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym_space,
    ACTIONS(171), 1,
      sym_newline,
    STATE(57), 1,
      sym_line_ending,
    STATE(46), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [777] = 5,
    ACTIONS(174), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_bracket_content_repeat1,
    STATE(53), 1,
      sym__bracket_close,
    STATE(74), 1,
      sym_bracket_content,
  [793] = 3,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(48), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(178), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [804] = 3,
    ACTIONS(183), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_bracket_content_repeat1,
  [814] = 1,
    ACTIONS(187), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [820] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_space,
  [828] = 3,
    ACTIONS(193), 1,
      sym_space,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_command_invocation_repeat1,
  [838] = 1,
    ACTIONS(197), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [844] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_space,
  [852] = 1,
    ACTIONS(203), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [858] = 3,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym__bracket_open_repeat1,
  [868] = 1,
    ACTIONS(104), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [874] = 1,
    ACTIONS(209), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [880] = 1,
    ACTIONS(106), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [886] = 1,
    ACTIONS(211), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [892] = 1,
    ACTIONS(213), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [898] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(68), 1,
      aux_sym__bracket_open_repeat1,
  [908] = 3,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym__bracket_open_repeat1,
  [918] = 1,
    ACTIONS(223), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [924] = 3,
    ACTIONS(225), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_bracket_content_repeat1,
  [934] = 2,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_space,
  [942] = 3,
    ACTIONS(234), 1,
      sym_space,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_command_invocation_repeat1,
  [952] = 3,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym__bracket_open_repeat1,
  [962] = 1,
    ACTIONS(241), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [968] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_space,
  [976] = 2,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_space,
  [984] = 2,
    ACTIONS(251), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
  [991] = 2,
    ACTIONS(255), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
  [998] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      sym__bracket_close,
  [1005] = 1,
    ACTIONS(261), 1,
      sym_newline,
  [1009] = 1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
  [1013] = 1,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1017] = 1,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
  [1021] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
  [1029] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [1033] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1037] = 1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [1041] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1045] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1049] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1053] = 1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 76,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 438,
  [SMALL_STATE(30)] = 459,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 606,
  [SMALL_STATE(38)] = 627,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 675,
  [SMALL_STATE(42)] = 692,
  [SMALL_STATE(43)] = 709,
  [SMALL_STATE(44)] = 726,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 777,
  [SMALL_STATE(48)] = 793,
  [SMALL_STATE(49)] = 804,
  [SMALL_STATE(50)] = 814,
  [SMALL_STATE(51)] = 820,
  [SMALL_STATE(52)] = 828,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 844,
  [SMALL_STATE(55)] = 852,
  [SMALL_STATE(56)] = 858,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 874,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 886,
  [SMALL_STATE(61)] = 892,
  [SMALL_STATE(62)] = 898,
  [SMALL_STATE(63)] = 908,
  [SMALL_STATE(64)] = 918,
  [SMALL_STATE(65)] = 924,
  [SMALL_STATE(66)] = 934,
  [SMALL_STATE(67)] = 942,
  [SMALL_STATE(68)] = 952,
  [SMALL_STATE(69)] = 962,
  [SMALL_STATE(70)] = 968,
  [SMALL_STATE(71)] = 976,
  [SMALL_STATE(72)] = 984,
  [SMALL_STATE(73)] = 991,
  [SMALL_STATE(74)] = 998,
  [SMALL_STATE(75)] = 1005,
  [SMALL_STATE(76)] = 1009,
  [SMALL_STATE(77)] = 1013,
  [SMALL_STATE(78)] = 1017,
  [SMALL_STATE(79)] = 1021,
  [SMALL_STATE(80)] = 1025,
  [SMALL_STATE(81)] = 1029,
  [SMALL_STATE(82)] = 1033,
  [SMALL_STATE(83)] = 1037,
  [SMALL_STATE(84)] = 1041,
  [SMALL_STATE(85)] = 1045,
  [SMALL_STATE(86)] = 1049,
  [SMALL_STATE(87)] = 1053,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(35),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(31),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(29),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(75),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(39),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(57),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(59),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(65),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(67),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
