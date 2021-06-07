#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 59
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
  sym__command_invocation = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_seperation_repeat1 = 51,
  aux_sym_variable_repeat1 = 52,
  aux_sym__bracket_open_repeat1 = 53,
  aux_sym_bracket_content_repeat1 = 54,
  aux_sym_quoted_element_repeat1 = 55,
  aux_sym_unquoted_argument_repeat1 = 56,
  aux_sym_arguments_repeat1 = 57,
  aux_sym__seperated_arguments_repeat1 = 58,
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
  [sym__command_invocation] = "_command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_seperation_repeat1] = "seperation_repeat1",
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
  [sym__command_invocation] = sym__command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_seperation_repeat1] = aux_sym_seperation_repeat1,
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
  [sym__command_invocation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seperation_repeat1] = {
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
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
    [sym_source_file] = STATE(89),
    [sym_foreach_command] = STATE(41),
    [sym_endforeach_command] = STATE(41),
    [sym_normal_command] = STATE(41),
    [sym__command_invocation] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_endforeach] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_line_ending] = STATE(14),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(5),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(5),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(42),
    [sym_bracket_argument] = STATE(58),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(58),
    [sym_unquoted_argument] = STATE(58),
    [sym_arguments] = STATE(75),
    [aux_sym_seperation_repeat1] = STATE(14),
    [aux_sym_unquoted_argument_repeat1] = STATE(5),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
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
    [sym_line_ending] = STATE(14),
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(5),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(5),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(42),
    [sym_bracket_argument] = STATE(58),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(58),
    [sym_unquoted_argument] = STATE(58),
    [sym_arguments] = STATE(74),
    [aux_sym_seperation_repeat1] = STATE(14),
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
  [4] = {
    [sym_line_ending] = STATE(14),
    [sym_seperation] = STATE(9),
    [sym_escape_sequence] = STATE(5),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(5),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(57),
    [sym_bracket_argument] = STATE(58),
    [sym__bracket_open] = STATE(47),
    [sym_quoted_argument] = STATE(58),
    [sym_unquoted_argument] = STATE(58),
    [aux_sym_seperation_repeat1] = STATE(14),
    [aux_sym_unquoted_argument_repeat1] = STATE(5),
    [aux_sym__seperated_arguments_repeat1] = STATE(9),
    [sym_space] = ACTIONS(33),
    [sym_newline] = ACTIONS(33),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(37), 1,
      aux_sym_unquoted_argument_token1,
    STATE(22), 1,
      sym__escape_encoded,
    ACTIONS(35), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(6), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(15), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [38] = 9,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(50), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(53), 1,
      aux_sym_unquoted_argument_token1,
    STATE(22), 1,
      sym__escape_encoded,
    ACTIONS(39), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(6), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(41), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [76] = 11,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(83), 1,
      sym_quoted_element,
    STATE(10), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(56), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [118] = 10,
    ACTIONS(73), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(79), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(87), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(8), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(70), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [157] = 5,
    ACTIONS(90), 1,
      sym_space,
    ACTIONS(93), 1,
      sym_newline,
    STATE(9), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(14), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    ACTIONS(96), 12,
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
  [186] = 10,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_quoted_element_token1,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(8), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(56), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [225] = 10,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(84), 1,
      sym_variable,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(24), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [263] = 10,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(79), 1,
      sym_variable,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(24), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [301] = 9,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(85), 1,
      sym_variable,
    STATE(15), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(24), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [336] = 2,
    STATE(16), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
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
  [357] = 9,
    ACTIONS(102), 1,
      sym_space,
    ACTIONS(104), 1,
      sym_newline,
    ACTIONS(108), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(80), 1,
      sym_variable,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(24), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(106), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [392] = 4,
    ACTIONS(116), 1,
      sym_space,
    ACTIONS(119), 1,
      sym_newline,
    STATE(16), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    ACTIONS(122), 12,
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
  [417] = 1,
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
  [434] = 5,
    ACTIONS(126), 1,
      sym_space,
    ACTIONS(129), 1,
      sym_newline,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(24), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    ACTIONS(96), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [458] = 1,
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
  [473] = 1,
    ACTIONS(134), 12,
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
  [488] = 1,
    ACTIONS(136), 12,
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
  [503] = 1,
    ACTIONS(138), 12,
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
  [518] = 1,
    ACTIONS(140), 12,
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
  [533] = 2,
    STATE(33), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
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
  [549] = 5,
    ACTIONS(144), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
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
  [571] = 1,
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
  [585] = 1,
    ACTIONS(82), 11,
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
  [599] = 1,
    ACTIONS(134), 11,
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
  [613] = 1,
    ACTIONS(138), 11,
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
  [627] = 1,
    ACTIONS(136), 11,
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
  [641] = 1,
    ACTIONS(140), 11,
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
  [655] = 5,
    ACTIONS(151), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(148), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [677] = 4,
    ACTIONS(156), 1,
      sym_space,
    ACTIONS(159), 1,
      sym_newline,
    STATE(33), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    ACTIONS(122), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [697] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(76), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [718] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(78), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [739] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(77), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [760] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(88), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [781] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(86), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [802] = 5,
    ACTIONS(162), 1,
      aux_sym_variable_token1,
    STATE(46), 1,
      sym__escape_encoded,
    STATE(87), 1,
      sym_variable,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(142), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [823] = 5,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_foreach,
    ACTIONS(169), 1,
      sym_endforeach,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(40), 5,
      sym_foreach_command,
      sym_endforeach_command,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [843] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_endforeach,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(40), 5,
      sym_foreach_command,
      sym_endforeach_command,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [863] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(14), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(45), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [885] = 6,
    ACTIONS(179), 1,
      sym_space,
    ACTIONS(182), 1,
      sym_newline,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(14), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(43), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [907] = 1,
    ACTIONS(124), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [919] = 6,
    ACTIONS(11), 1,
      sym_space,
    ACTIONS(13), 1,
      sym_newline,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(14), 2,
      sym_line_ending,
      aux_sym_seperation_repeat1,
    STATE(43), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [941] = 1,
    ACTIONS(189), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [952] = 5,
    ACTIONS(191), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__bracket_close,
    STATE(60), 1,
      aux_sym_bracket_content_repeat1,
    STATE(72), 1,
      sym_bracket_content,
  [968] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [977] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [986] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [995] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1004] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1013] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1022] = 3,
    ACTIONS(221), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(219), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1033] = 2,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1042] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1051] = 1,
    ACTIONS(232), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1057] = 1,
    ACTIONS(234), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1063] = 1,
    ACTIONS(236), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1069] = 3,
    ACTIONS(238), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_bracket_content_repeat1,
  [1079] = 3,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_EQ,
    STATE(69), 1,
      aux_sym__bracket_open_repeat1,
  [1089] = 3,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym__bracket_open_repeat1,
  [1099] = 1,
    ACTIONS(250), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1105] = 3,
    ACTIONS(252), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_bracket_content_repeat1,
  [1115] = 1,
    ACTIONS(257), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1121] = 1,
    ACTIONS(259), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1127] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [1137] = 1,
    ACTIONS(265), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1143] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      aux_sym__bracket_open_repeat1,
  [1153] = 1,
    ACTIONS(269), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1159] = 2,
    ACTIONS(271), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [1166] = 2,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym__bracket_close,
  [1173] = 2,
    ACTIONS(277), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
  [1180] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1184] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1188] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [1192] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1196] = 1,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
  [1200] = 1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1204] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1208] = 1,
    ACTIONS(295), 1,
      sym_newline,
  [1212] = 1,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
  [1216] = 1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
  [1220] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1224] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1228] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [1232] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [1236] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
  [1240] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [1244] = 1,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
  [1248] = 1,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 417,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 473,
  [SMALL_STATE(21)] = 488,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 518,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 549,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 585,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 613,
  [SMALL_STATE(30)] = 627,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 677,
  [SMALL_STATE(34)] = 697,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 739,
  [SMALL_STATE(37)] = 760,
  [SMALL_STATE(38)] = 781,
  [SMALL_STATE(39)] = 802,
  [SMALL_STATE(40)] = 823,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 863,
  [SMALL_STATE(43)] = 885,
  [SMALL_STATE(44)] = 907,
  [SMALL_STATE(45)] = 919,
  [SMALL_STATE(46)] = 941,
  [SMALL_STATE(47)] = 952,
  [SMALL_STATE(48)] = 968,
  [SMALL_STATE(49)] = 977,
  [SMALL_STATE(50)] = 986,
  [SMALL_STATE(51)] = 995,
  [SMALL_STATE(52)] = 1004,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1022,
  [SMALL_STATE(55)] = 1033,
  [SMALL_STATE(56)] = 1042,
  [SMALL_STATE(57)] = 1051,
  [SMALL_STATE(58)] = 1057,
  [SMALL_STATE(59)] = 1063,
  [SMALL_STATE(60)] = 1069,
  [SMALL_STATE(61)] = 1079,
  [SMALL_STATE(62)] = 1089,
  [SMALL_STATE(63)] = 1099,
  [SMALL_STATE(64)] = 1105,
  [SMALL_STATE(65)] = 1115,
  [SMALL_STATE(66)] = 1121,
  [SMALL_STATE(67)] = 1127,
  [SMALL_STATE(68)] = 1137,
  [SMALL_STATE(69)] = 1143,
  [SMALL_STATE(70)] = 1153,
  [SMALL_STATE(71)] = 1159,
  [SMALL_STATE(72)] = 1166,
  [SMALL_STATE(73)] = 1173,
  [SMALL_STATE(74)] = 1180,
  [SMALL_STATE(75)] = 1184,
  [SMALL_STATE(76)] = 1188,
  [SMALL_STATE(77)] = 1192,
  [SMALL_STATE(78)] = 1196,
  [SMALL_STATE(79)] = 1200,
  [SMALL_STATE(80)] = 1204,
  [SMALL_STATE(81)] = 1208,
  [SMALL_STATE(82)] = 1212,
  [SMALL_STATE(83)] = 1216,
  [SMALL_STATE(84)] = 1220,
  [SMALL_STATE(85)] = 1224,
  [SMALL_STATE(86)] = 1228,
  [SMALL_STATE(87)] = 1232,
  [SMALL_STATE(88)] = 1236,
  [SMALL_STATE(89)] = 1240,
  [SMALL_STATE(90)] = 1244,
  [SMALL_STATE(91)] = 1248,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(22),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(29),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(38),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(39),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(37),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(8),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(81),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seperation_repeat1, 2), SHIFT_REPEAT(16),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seperation_repeat1, 2), SHIFT_REPEAT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_seperation_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(24),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(46),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seperation_repeat1, 2), SHIFT_REPEAT(33),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seperation_repeat1, 2), SHIFT_REPEAT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_command, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_command, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(54),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(64),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
