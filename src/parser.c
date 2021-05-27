#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 53
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
  aux_sym__literal_variable_token1 = 9,
  anon_sym_DOLLAR_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_DOLLARENV_LBRACE = 12,
  anon_sym_DOLLARCACHE_LBRACE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_EQ = 15,
  aux_sym__bracket_content_token1 = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__quoted_element_token1 = 19,
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
  sym__literal_variable = 30,
  sym_normal_var = 31,
  sym_env_var = 32,
  sym_cache_var = 33,
  sym_argument = 34,
  sym_bracket_argument = 35,
  sym__bracket_open = 36,
  aux_sym__bracket_content = 37,
  sym__bracket_close = 38,
  sym_quoted_argument = 39,
  sym__quoted_element = 40,
  sym_unquoted_argument = 41,
  sym_arguments = 42,
  sym__seperated_arguments = 43,
  sym_command_invocation = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_normal_var_repeat1 = 46,
  aux_sym__bracket_open_repeat1 = 47,
  aux_sym_quoted_argument_repeat1 = 48,
  aux_sym_unquoted_argument_repeat1 = 49,
  aux_sym_arguments_repeat1 = 50,
  aux_sym__seperated_arguments_repeat1 = 51,
  aux_sym_command_invocation_repeat1 = 52,
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
  [aux_sym__literal_variable_token1] = "_literal_variable_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARENV_LBRACE] = "$ENV{",
  [anon_sym_DOLLARCACHE_LBRACE] = "$CACHE{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym__bracket_content_token1] = "_bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_element_token1] = "_quoted_element_token1",
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
  [sym__literal_variable] = "_literal_variable",
  [sym_normal_var] = "normal_var",
  [sym_env_var] = "env_var",
  [sym_cache_var] = "cache_var",
  [sym_argument] = "argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym__bracket_open] = "_bracket_open",
  [aux_sym__bracket_content] = "_bracket_content",
  [sym__bracket_close] = "_bracket_close",
  [sym_quoted_argument] = "quoted_argument",
  [sym__quoted_element] = "_quoted_element",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_arguments] = "arguments",
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_normal_var_repeat1] = "normal_var_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_quoted_argument_repeat1] = "quoted_argument_repeat1",
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
  [aux_sym__literal_variable_token1] = aux_sym__literal_variable_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARENV_LBRACE] = anon_sym_DOLLARENV_LBRACE,
  [anon_sym_DOLLARCACHE_LBRACE] = anon_sym_DOLLARCACHE_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__bracket_content_token1] = aux_sym__bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_element_token1] = aux_sym__quoted_element_token1,
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
  [sym__literal_variable] = sym__literal_variable,
  [sym_normal_var] = sym_normal_var,
  [sym_env_var] = sym_env_var,
  [sym_cache_var] = sym_cache_var,
  [sym_argument] = sym_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym__bracket_open] = sym__bracket_open,
  [aux_sym__bracket_content] = aux_sym__bracket_content,
  [sym__bracket_close] = sym__bracket_close,
  [sym_quoted_argument] = sym_quoted_argument,
  [sym__quoted_element] = sym__quoted_element,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_arguments] = sym_arguments,
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_normal_var_repeat1] = aux_sym_normal_var_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_quoted_argument_repeat1] = aux_sym_quoted_argument_repeat1,
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
  [aux_sym__literal_variable_token1] = {
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
  [aux_sym__bracket_content_token1] = {
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
  [aux_sym__quoted_element_token1] = {
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
  [sym__literal_variable] = {
    .visible = false,
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
  [aux_sym__bracket_content] = {
    .visible = false,
    .named = false,
  },
  [sym__bracket_close] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_element] = {
    .visible = false,
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
  [aux_sym_normal_var_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_argument_repeat1] = {
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
      ACCEPT_TOKEN(aux_sym__literal_variable_token1);
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
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__bracket_content_token1);
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
      ACCEPT_TOKEN(aux_sym__quoted_element_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__quoted_element_token1);
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
      ACCEPT_TOKEN(aux_sym__quoted_element_token1);
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
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
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
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
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
    [aux_sym__literal_variable_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(80),
    [sym_command_invocation] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [aux_sym_command_invocation_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(6),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(81),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [3] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(5),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(82),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [4] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(82),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(84),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(79),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [7] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(4),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(43),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(79),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [8] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(14),
    [sym_escape_sequence] = STATE(9),
    [sym__escape_encoded] = STATE(17),
    [sym_variable_ref] = STATE(9),
    [sym_normal_var] = STATE(18),
    [sym_env_var] = STATE(18),
    [sym_cache_var] = STATE(18),
    [sym_argument] = STATE(58),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(53),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [aux_sym_unquoted_argument_repeat1] = STATE(9),
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
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(39), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    ACTIONS(37), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(11), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(18), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [38] = 10,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(50), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      aux_sym__quoted_element_token1,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym__escape_encoded,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(10), 4,
      sym_escape_sequence,
      sym_variable_ref,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(41), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [78] = 9,
    ACTIONS(66), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(69), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(72), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(75), 1,
      aux_sym_unquoted_argument_token1,
    STATE(17), 1,
      sym__escape_encoded,
    ACTIONS(61), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(11), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(18), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(63), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [116] = 10,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym__quoted_element_token1,
    ACTIONS(90), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym__escape_encoded,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(10), 4,
      sym_escape_sequence,
      sym_variable_ref,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(78), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [156] = 10,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym__quoted_element_token1,
    STATE(26), 1,
      sym__escape_encoded,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(12), 4,
      sym_escape_sequence,
      sym_variable_ref,
      sym__quoted_element,
      aux_sym_quoted_argument_repeat1,
    ACTIONS(78), 5,
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
    STATE(16), 1,
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
  [333] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [355] = 1,
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
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [369] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [391] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [413] = 1,
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
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [427] = 1,
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
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [441] = 1,
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
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [455] = 1,
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
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [469] = 5,
    ACTIONS(131), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(128), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [491] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [513] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [535] = 5,
    ACTIONS(120), 1,
      aux_sym__literal_variable_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(30), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [557] = 1,
    ACTIONS(142), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV_LBRACE,
      anon_sym_DOLLARCACHE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym__quoted_element_token1,
      anon_sym_BSLASH,
  [571] = 4,
    ACTIONS(144), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(22), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [590] = 4,
    ACTIONS(146), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(32), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [609] = 4,
    ACTIONS(148), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(24), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [628] = 4,
    ACTIONS(150), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(33), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [647] = 4,
    ACTIONS(152), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(25), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [666] = 4,
    ACTIONS(154), 1,
      aux_sym__literal_variable_token1,
    STATE(44), 1,
      sym__escape_encoded,
    STATE(31), 3,
      sym_escape_sequence,
      sym__literal_variable,
      aux_sym_normal_var_repeat1,
    ACTIONS(118), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [685] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(42), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [706] = 6,
    ACTIONS(158), 1,
      sym_space,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(42), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [727] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(8), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(41), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [748] = 1,
    ACTIONS(168), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym__literal_variable_token1,
      anon_sym_RBRACE,
  [758] = 5,
    ACTIONS(170), 1,
      sym_space,
    ACTIONS(172), 1,
      sym_newline,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_line_ending,
    STATE(49), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [775] = 5,
    ACTIONS(170), 1,
      sym_space,
    ACTIONS(172), 1,
      sym_newline,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_line_ending,
    STATE(50), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [792] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      aux_sym_command_invocation_repeat1,
    STATE(48), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [809] = 5,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_space,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(65), 1,
      aux_sym_command_invocation_repeat1,
    STATE(48), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [826] = 5,
    ACTIONS(170), 1,
      sym_space,
    ACTIONS(172), 1,
      sym_newline,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_line_ending,
    STATE(50), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [843] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_space,
    ACTIONS(191), 1,
      sym_newline,
    STATE(64), 1,
      sym_line_ending,
    STATE(50), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [860] = 5,
    ACTIONS(170), 1,
      sym_space,
    ACTIONS(172), 1,
      sym_newline,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_line_ending,
    STATE(46), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [877] = 4,
    ACTIONS(196), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__bracket_content,
    STATE(62), 1,
      sym__bracket_close,
  [890] = 4,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    ACTIONS(200), 1,
      aux_sym__bracket_content_token1,
    STATE(52), 1,
      aux_sym__bracket_content,
    STATE(55), 1,
      sym__bracket_close,
  [903] = 3,
    ACTIONS(204), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(202), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [914] = 1,
    ACTIONS(207), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [920] = 1,
    ACTIONS(209), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [926] = 1,
    ACTIONS(211), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [932] = 1,
    ACTIONS(213), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [938] = 1,
    ACTIONS(215), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [944] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [954] = 3,
    ACTIONS(221), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__bracket_content,
  [964] = 1,
    ACTIONS(226), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [970] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym_space,
  [978] = 1,
    ACTIONS(106), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [984] = 3,
    ACTIONS(232), 1,
      sym_space,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_command_invocation_repeat1,
  [994] = 3,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__bracket_open_repeat1,
  [1004] = 2,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym_space,
  [1012] = 1,
    ACTIONS(104), 3,
      sym_space,
      sym_newline,
      anon_sym_LPAREN,
  [1018] = 2,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym_space,
  [1026] = 2,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_space,
  [1034] = 2,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym_space,
  [1042] = 3,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym__bracket_open_repeat1,
  [1052] = 3,
    ACTIONS(260), 1,
      sym_space,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_command_invocation_repeat1,
  [1062] = 1,
    ACTIONS(265), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1068] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [1078] = 1,
    ACTIONS(269), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1084] = 2,
    ACTIONS(271), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [1091] = 2,
    ACTIONS(275), 1,
      aux_sym__bracket_content_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
  [1098] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1102] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1106] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1110] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1114] = 1,
    ACTIONS(287), 1,
      sym_newline,
  [1118] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 427,
  [SMALL_STATE(28)] = 441,
  [SMALL_STATE(29)] = 455,
  [SMALL_STATE(30)] = 469,
  [SMALL_STATE(31)] = 491,
  [SMALL_STATE(32)] = 513,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 557,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 590,
  [SMALL_STATE(37)] = 609,
  [SMALL_STATE(38)] = 628,
  [SMALL_STATE(39)] = 647,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 706,
  [SMALL_STATE(43)] = 727,
  [SMALL_STATE(44)] = 748,
  [SMALL_STATE(45)] = 758,
  [SMALL_STATE(46)] = 775,
  [SMALL_STATE(47)] = 792,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 826,
  [SMALL_STATE(50)] = 843,
  [SMALL_STATE(51)] = 860,
  [SMALL_STATE(52)] = 877,
  [SMALL_STATE(53)] = 890,
  [SMALL_STATE(54)] = 903,
  [SMALL_STATE(55)] = 914,
  [SMALL_STATE(56)] = 920,
  [SMALL_STATE(57)] = 926,
  [SMALL_STATE(58)] = 932,
  [SMALL_STATE(59)] = 938,
  [SMALL_STATE(60)] = 944,
  [SMALL_STATE(61)] = 954,
  [SMALL_STATE(62)] = 964,
  [SMALL_STATE(63)] = 970,
  [SMALL_STATE(64)] = 978,
  [SMALL_STATE(65)] = 984,
  [SMALL_STATE(66)] = 994,
  [SMALL_STATE(67)] = 1004,
  [SMALL_STATE(68)] = 1012,
  [SMALL_STATE(69)] = 1018,
  [SMALL_STATE(70)] = 1026,
  [SMALL_STATE(71)] = 1034,
  [SMALL_STATE(72)] = 1042,
  [SMALL_STATE(73)] = 1052,
  [SMALL_STATE(74)] = 1062,
  [SMALL_STATE(75)] = 1068,
  [SMALL_STATE(76)] = 1078,
  [SMALL_STATE(77)] = 1084,
  [SMALL_STATE(78)] = 1091,
  [SMALL_STATE(79)] = 1098,
  [SMALL_STATE(80)] = 1102,
  [SMALL_STATE(81)] = 1106,
  [SMALL_STATE(82)] = 1110,
  [SMALL_STATE(83)] = 1114,
  [SMALL_STATE(84)] = 1118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(37),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(38),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_argument_repeat1, 2), SHIFT_REPEAT(83),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(35),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(40),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(36),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(11),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_var_repeat1, 2), SHIFT_REPEAT(44),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_normal_var_repeat1, 2), SHIFT_REPEAT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_normal_var_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_element, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(64),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(68),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(54),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_content, 2), SHIFT_REPEAT(61),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bracket_content, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(73),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_CMake(void) {
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
