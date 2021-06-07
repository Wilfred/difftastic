#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_space = 1,
  sym_newline = 2,
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
  anon_sym_RPAREN = 25,
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
  sym_foreach_command = 46,
  sym_endforeach_command = 47,
  sym_normal_command = 48,
  sym_command_invocation = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_variable_repeat1 = 51,
  aux_sym__bracket_open_repeat1 = 52,
  aux_sym_bracket_content_repeat1 = 53,
  aux_sym_quoted_element_repeat1 = 54,
  aux_sym_unquoted_argument_repeat1 = 55,
  aux_sym_arguments_repeat1 = 56,
  aux_sym__seperated_arguments_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
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
  [sym_foreach_command] = "foreach_command",
  [sym_endforeach_command] = "endforeach_command",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_space] = sym_space,
  [sym_newline] = sym_newline,
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
  [sym_foreach_command] = sym_foreach_command,
  [sym_endforeach_command] = sym_endforeach_command,
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
  [sym_foreach_command] = {
    .visible = true,
    .named = true,
  },
  [sym_endforeach_command] = {
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
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(51);
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
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(54);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(45);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(20);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [sym_source_file] = STATE(82),
    [sym_foreach_command] = STATE(52),
    [sym_endforeach_command] = STATE(52),
    [sym_normal_command] = STATE(52),
    [sym_command_invocation] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_endforeach] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(10),
    [sym_escape_sequence] = STATE(5),
    [sym__escape_encoded] = STATE(20),
    [sym_variable_ref] = STATE(5),
    [sym_normal_var] = STATE(21),
    [sym_env_var] = STATE(21),
    [sym_cache_var] = STATE(21),
    [sym_argument] = STATE(44),
    [sym_bracket_argument] = STATE(61),
    [sym__bracket_open] = STATE(45),
    [sym_quoted_argument] = STATE(61),
    [sym_unquoted_argument] = STATE(61),
    [sym_arguments] = STATE(75),
    [aux_sym_unquoted_argument_repeat1] = STATE(5),
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
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [3] = {
    [sym_line_ending] = STATE(16),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(5),
    [sym__escape_encoded] = STATE(20),
    [sym_variable_ref] = STATE(5),
    [sym_normal_var] = STATE(21),
    [sym_env_var] = STATE(21),
    [sym_cache_var] = STATE(21),
    [sym_argument] = STATE(44),
    [sym_bracket_argument] = STATE(61),
    [sym__bracket_open] = STATE(45),
    [sym_quoted_argument] = STATE(61),
    [sym_unquoted_argument] = STATE(61),
    [sym_arguments] = STATE(90),
    [aux_sym_unquoted_argument_repeat1] = STATE(5),
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
    [anon_sym_RPAREN] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    STATE(16), 1,
      sym_line_ending,
    STATE(20), 1,
      sym__escape_encoded,
    STATE(45), 1,
      sym__bracket_open,
    STATE(66), 1,
      sym_argument,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(33), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(5), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(21), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(61), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(15), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [62] = 9,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(37), 1,
      aux_sym_unquoted_argument_token1,
    STATE(20), 1,
      sym__escape_encoded,
    ACTIONS(35), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(21), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(15), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [100] = 11,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(73), 1,
      sym_quoted_element,
    STATE(8), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(39), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [142] = 9,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(67), 1,
      aux_sym_unquoted_argument_token1,
    STATE(20), 1,
      sym__escape_encoded,
    ACTIONS(53), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(21), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(55), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [180] = 10,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_quoted_element_token1,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(9), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(39), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [219] = 10,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(83), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      sym__escape_encoded,
    STATE(9), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(27), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(74), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [258] = 5,
    ACTIONS(94), 1,
      sym_space,
    ACTIONS(97), 1,
      sym_newline,
    STATE(16), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(100), 12,
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
  [286] = 10,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_line_ending,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(88), 1,
      sym_variable,
    STATE(22), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [323] = 10,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_line_ending,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(78), 1,
      sym_variable,
    STATE(11), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [360] = 9,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym_line_ending,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(77), 1,
      sym_variable,
    STATE(14), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [394] = 9,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    STATE(39), 1,
      sym_line_ending,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(89), 1,
      sym_variable,
    STATE(22), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [428] = 1,
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
  [445] = 1,
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
  [462] = 1,
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
  [477] = 1,
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
  [492] = 1,
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
  [507] = 1,
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
  [522] = 1,
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
  [537] = 5,
    ACTIONS(128), 1,
      sym_space,
    ACTIONS(131), 1,
      sym_newline,
    STATE(39), 1,
      sym_line_ending,
    STATE(22), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(100), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [560] = 5,
    ACTIONS(136), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    ACTIONS(138), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [582] = 5,
    ACTIONS(143), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [604] = 1,
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
  [618] = 1,
    ACTIONS(86), 11,
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
  [632] = 1,
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
  [646] = 1,
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
  [660] = 1,
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
  [674] = 1,
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
  [688] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(80), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [709] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(87), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [730] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(86), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [751] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(81), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [772] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(85), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [793] = 5,
    ACTIONS(148), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym__escape_encoded,
    STATE(79), 1,
      sym_variable,
    STATE(23), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(134), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [814] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_endforeach,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(52), 3,
      sym_foreach_command,
      sym_endforeach_command,
      sym_normal_command,
  [836] = 6,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym_foreach,
    ACTIONS(157), 1,
      sym_endforeach,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(38), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
    STATE(52), 3,
      sym_foreach_command,
      sym_endforeach_command,
      sym_normal_command,
  [858] = 1,
    ACTIONS(116), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [870] = 1,
    ACTIONS(114), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [882] = 6,
    ACTIONS(163), 1,
      sym_space,
    ACTIONS(166), 1,
      sym_newline,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(41), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [903] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(41), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [924] = 1,
    ACTIONS(173), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [935] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_line_ending,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(42), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [956] = 5,
    ACTIONS(177), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym__bracket_close,
    STATE(58), 1,
      aux_sym_bracket_content_repeat1,
    STATE(70), 1,
      sym_bracket_content,
  [972] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [981] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [990] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [999] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1008] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1017] = 3,
    ACTIONS(203), 1,
      anon_sym_EQ,
    STATE(51), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(201), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1028] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1037] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1046] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1055] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1064] = 3,
    ACTIONS(222), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_bracket_content_repeat1,
  [1074] = 1,
    ACTIONS(227), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1080] = 3,
    ACTIONS(229), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_bracket_content_repeat1,
  [1090] = 3,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym__bracket_open_repeat1,
  [1100] = 3,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_EQ,
    STATE(51), 1,
      aux_sym__bracket_open_repeat1,
  [1110] = 1,
    ACTIONS(241), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1116] = 3,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym__bracket_open_repeat1,
  [1126] = 1,
    ACTIONS(247), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1132] = 1,
    ACTIONS(249), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1138] = 1,
    ACTIONS(251), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1144] = 1,
    ACTIONS(253), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1150] = 1,
    ACTIONS(255), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1156] = 3,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__bracket_open_repeat1,
  [1166] = 1,
    ACTIONS(259), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1172] = 2,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__bracket_close,
  [1179] = 2,
    ACTIONS(263), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
  [1186] = 2,
    ACTIONS(267), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
  [1193] = 1,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
  [1197] = 1,
    ACTIONS(273), 1,
      sym_newline,
  [1201] = 1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [1205] = 1,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
  [1209] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1213] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1217] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
  [1221] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [1225] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1229] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [1233] = 1,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
  [1237] = 1,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
  [1241] = 1,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
  [1245] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1249] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1253] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1257] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1261] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 286,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 428,
  [SMALL_STATE(16)] = 445,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 477,
  [SMALL_STATE(19)] = 492,
  [SMALL_STATE(20)] = 507,
  [SMALL_STATE(21)] = 522,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 582,
  [SMALL_STATE(25)] = 604,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 632,
  [SMALL_STATE(28)] = 646,
  [SMALL_STATE(29)] = 660,
  [SMALL_STATE(30)] = 674,
  [SMALL_STATE(31)] = 688,
  [SMALL_STATE(32)] = 709,
  [SMALL_STATE(33)] = 730,
  [SMALL_STATE(34)] = 751,
  [SMALL_STATE(35)] = 772,
  [SMALL_STATE(36)] = 793,
  [SMALL_STATE(37)] = 814,
  [SMALL_STATE(38)] = 836,
  [SMALL_STATE(39)] = 858,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 882,
  [SMALL_STATE(42)] = 903,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 956,
  [SMALL_STATE(46)] = 972,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 999,
  [SMALL_STATE(50)] = 1008,
  [SMALL_STATE(51)] = 1017,
  [SMALL_STATE(52)] = 1028,
  [SMALL_STATE(53)] = 1037,
  [SMALL_STATE(54)] = 1046,
  [SMALL_STATE(55)] = 1055,
  [SMALL_STATE(56)] = 1064,
  [SMALL_STATE(57)] = 1074,
  [SMALL_STATE(58)] = 1080,
  [SMALL_STATE(59)] = 1090,
  [SMALL_STATE(60)] = 1100,
  [SMALL_STATE(61)] = 1110,
  [SMALL_STATE(62)] = 1116,
  [SMALL_STATE(63)] = 1126,
  [SMALL_STATE(64)] = 1132,
  [SMALL_STATE(65)] = 1138,
  [SMALL_STATE(66)] = 1144,
  [SMALL_STATE(67)] = 1150,
  [SMALL_STATE(68)] = 1156,
  [SMALL_STATE(69)] = 1166,
  [SMALL_STATE(70)] = 1172,
  [SMALL_STATE(71)] = 1179,
  [SMALL_STATE(72)] = 1186,
  [SMALL_STATE(73)] = 1193,
  [SMALL_STATE(74)] = 1197,
  [SMALL_STATE(75)] = 1201,
  [SMALL_STATE(76)] = 1205,
  [SMALL_STATE(77)] = 1209,
  [SMALL_STATE(78)] = 1213,
  [SMALL_STATE(79)] = 1217,
  [SMALL_STATE(80)] = 1221,
  [SMALL_STATE(81)] = 1225,
  [SMALL_STATE(82)] = 1229,
  [SMALL_STATE(83)] = 1233,
  [SMALL_STATE(84)] = 1237,
  [SMALL_STATE(85)] = 1241,
  [SMALL_STATE(86)] = 1245,
  [SMALL_STATE(87)] = 1249,
  [SMALL_STATE(88)] = 1253,
  [SMALL_STATE(89)] = 1257,
  [SMALL_STATE(90)] = 1261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(20),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(31),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(25),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(35),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(74),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(39),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(43),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_command, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_command, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(56),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
