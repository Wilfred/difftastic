#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 6
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
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(52);
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
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(46);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
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
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
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
    [sym_source_file] = STATE(113),
    [sym_foreach_command] = STATE(42),
    [sym_foreach_loop] = STATE(53),
    [sym_normal_command] = STATE(53),
    [sym__command_invocation] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(12),
    [sym_escape_sequence] = STATE(7),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(7),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(50),
    [sym_bracket_argument] = STATE(56),
    [sym__bracket_open] = STATE(54),
    [sym_quoted_argument] = STATE(56),
    [sym_unquoted_argument] = STATE(56),
    [sym_arguments] = STATE(101),
    [aux_sym_unquoted_argument_repeat1] = STATE(7),
    [aux_sym__seperated_arguments_repeat1] = STATE(12),
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
    [sym_seperation] = STATE(2),
    [sym_escape_sequence] = STATE(7),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(7),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(50),
    [sym_bracket_argument] = STATE(56),
    [sym__bracket_open] = STATE(54),
    [sym_quoted_argument] = STATE(56),
    [sym_unquoted_argument] = STATE(56),
    [sym_arguments] = STATE(98),
    [aux_sym_unquoted_argument_repeat1] = STATE(7),
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
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(5),
    [sym_escape_sequence] = STATE(7),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(7),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(50),
    [sym_bracket_argument] = STATE(56),
    [sym__bracket_open] = STATE(54),
    [sym_quoted_argument] = STATE(56),
    [sym_unquoted_argument] = STATE(56),
    [sym_arguments] = STATE(91),
    [aux_sym_unquoted_argument_repeat1] = STATE(7),
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
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [5] = {
    [sym_line_ending] = STATE(20),
    [sym_seperation] = STATE(12),
    [sym_escape_sequence] = STATE(7),
    [sym__escape_encoded] = STATE(22),
    [sym_variable_ref] = STATE(7),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(50),
    [sym_bracket_argument] = STATE(56),
    [sym__bracket_open] = STATE(54),
    [sym_quoted_argument] = STATE(56),
    [sym_unquoted_argument] = STATE(56),
    [sym_arguments] = STATE(106),
    [aux_sym_unquoted_argument_repeat1] = STATE(7),
    [aux_sym__seperated_arguments_repeat1] = STATE(12),
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
    STATE(22), 1,
      sym__escape_encoded,
    STATE(54), 1,
      sym__bracket_open,
    STATE(69), 1,
      sym_argument,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(35), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(56), 3,
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
    ACTIONS(39), 1,
      aux_sym_unquoted_argument_token1,
    STATE(22), 1,
      sym__escape_encoded,
    ACTIONS(37), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(8), 3,
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
  [100] = 9,
    ACTIONS(46), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(52), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(55), 1,
      aux_sym_unquoted_argument_token1,
    STATE(22), 1,
      sym__escape_encoded,
    ACTIONS(41), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(8), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(43), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [138] = 11,
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
    STATE(29), 1,
      sym__escape_encoded,
    STATE(95), 1,
      sym_quoted_element,
    STATE(11), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [180] = 10,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(78), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(81), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(10), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(72), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [219] = 10,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_quoted_element_token1,
    STATE(29), 1,
      sym__escape_encoded,
    STATE(10), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(34), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(58), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [258] = 5,
    ACTIONS(96), 1,
      sym_space,
    ACTIONS(99), 1,
      sym_newline,
    STATE(20), 1,
      sym_line_ending,
    STATE(12), 2,
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
  [286] = 10,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(107), 1,
      sym_variable,
    STATE(15), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [323] = 10,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(97), 1,
      sym_variable,
    STATE(16), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [360] = 10,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(109), 1,
      sym_variable,
    STATE(26), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [397] = 10,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(96), 1,
      sym_variable,
    STATE(26), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [434] = 9,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(92), 1,
      sym_variable,
    STATE(18), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [468] = 9,
    ACTIONS(104), 1,
      sym_space,
    ACTIONS(106), 1,
      sym_newline,
    ACTIONS(110), 1,
      aux_sym_variable_token1,
    STATE(45), 1,
      sym_line_ending,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(93), 1,
      sym_variable,
    STATE(26), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(108), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [502] = 1,
    ACTIONS(120), 14,
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
  [519] = 1,
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
  [536] = 1,
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
  [551] = 1,
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
  [566] = 1,
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
  [581] = 1,
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
  [596] = 1,
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
  [611] = 5,
    ACTIONS(134), 1,
      sym_space,
    ACTIONS(137), 1,
      sym_newline,
    STATE(45), 1,
      sym_line_ending,
    STATE(26), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(102), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [634] = 5,
    ACTIONS(142), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [656] = 1,
    ACTIONS(84), 11,
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
  [670] = 1,
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
  [684] = 1,
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
  [698] = 5,
    ACTIONS(149), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(146), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [720] = 1,
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
  [734] = 1,
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
  [748] = 1,
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
  [762] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(105), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [783] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(102), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [804] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(100), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [825] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(99), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [846] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(103), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [867] = 5,
    ACTIONS(154), 1,
      aux_sym_variable_token1,
    STATE(51), 1,
      sym__escape_encoded,
    STATE(104), 1,
      sym_variable,
    STATE(27), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(140), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [888] = 1,
    ACTIONS(120), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [900] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(156), 1,
      sym_endforeach,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(43), 1,
      sym_foreach_command,
    STATE(58), 1,
      sym_endforeach_command,
    STATE(46), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [922] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      sym_endforeach,
    STATE(43), 1,
      sym_foreach_command,
    STATE(79), 1,
      sym_endforeach_command,
    STATE(44), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [944] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      sym_endforeach,
    STATE(43), 1,
      sym_foreach_command,
    STATE(57), 1,
      sym_endforeach_command,
    STATE(47), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [966] = 1,
    ACTIONS(122), 9,
      sym_space,
      sym_newline,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RPAREN,
  [978] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(156), 1,
      sym_endforeach,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(43), 1,
      sym_foreach_command,
    STATE(67), 1,
      sym_endforeach_command,
    STATE(47), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1000] = 5,
    ACTIONS(162), 1,
      sym_foreach,
    ACTIONS(165), 1,
      sym_endforeach,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(43), 1,
      sym_foreach_command,
    STATE(47), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1019] = 6,
    ACTIONS(170), 1,
      sym_space,
    ACTIONS(173), 1,
      sym_newline,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(48), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1040] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(48), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1061] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_line_ending,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(49), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1082] = 1,
    ACTIONS(182), 8,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1093] = 5,
    ACTIONS(162), 1,
      sym_foreach,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(42), 1,
      sym_foreach_command,
    STATE(52), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1112] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_foreach_command,
    STATE(52), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1131] = 5,
    ACTIONS(191), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_bracket_content_repeat1,
    STATE(65), 1,
      sym__bracket_close,
    STATE(90), 1,
      sym_bracket_content,
  [1147] = 3,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(195), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1158] = 1,
    ACTIONS(200), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1164] = 1,
    ACTIONS(202), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1170] = 2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 2,
      sym_foreach,
      sym_identifier,
  [1178] = 1,
    ACTIONS(208), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1184] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 2,
      sym_foreach,
      sym_identifier,
  [1192] = 3,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_EQ,
    STATE(83), 1,
      aux_sym__bracket_open_repeat1,
  [1202] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 2,
      sym_foreach,
      sym_identifier,
  [1210] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 2,
      sym_foreach,
      sym_identifier,
  [1218] = 3,
    ACTIONS(226), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_bracket_content_repeat1,
  [1228] = 1,
    ACTIONS(230), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1234] = 1,
    ACTIONS(232), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1240] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 2,
      sym_foreach,
      sym_identifier,
  [1248] = 3,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym__bracket_open_repeat1,
  [1258] = 1,
    ACTIONS(240), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1264] = 1,
    ACTIONS(242), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1270] = 3,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym__bracket_open_repeat1,
  [1280] = 1,
    ACTIONS(248), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1286] = 3,
    ACTIONS(250), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_bracket_content_repeat1,
  [1296] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 2,
      sym_foreach,
      sym_identifier,
  [1304] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 2,
      sym_foreach,
      sym_identifier,
  [1312] = 1,
    ACTIONS(263), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1318] = 1,
    ACTIONS(265), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1324] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 2,
      sym_foreach,
      sym_identifier,
  [1332] = 1,
    ACTIONS(206), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1338] = 1,
    ACTIONS(269), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1344] = 1,
    ACTIONS(261), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1350] = 1,
    ACTIONS(271), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1356] = 3,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym__bracket_open_repeat1,
  [1366] = 1,
    ACTIONS(224), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1372] = 1,
    ACTIONS(257), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1378] = 1,
    ACTIONS(212), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1384] = 1,
    ACTIONS(220), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1390] = 2,
    ACTIONS(275), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
  [1397] = 2,
    ACTIONS(279), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [1404] = 2,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym__bracket_close,
  [1411] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1415] = 1,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [1419] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [1423] = 1,
    ACTIONS(291), 1,
      sym_newline,
  [1427] = 1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
  [1431] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1435] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [1439] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1443] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [1447] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [1451] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [1455] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [1459] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
  [1463] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1467] = 1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [1471] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [1475] = 1,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [1479] = 1,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [1483] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1487] = 1,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
  [1491] = 1,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
  [1495] = 1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [1499] = 1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
  [1503] = 1,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 323,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 502,
  [SMALL_STATE(20)] = 519,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 566,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 596,
  [SMALL_STATE(26)] = 611,
  [SMALL_STATE(27)] = 634,
  [SMALL_STATE(28)] = 656,
  [SMALL_STATE(29)] = 670,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 698,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 734,
  [SMALL_STATE(34)] = 748,
  [SMALL_STATE(35)] = 762,
  [SMALL_STATE(36)] = 783,
  [SMALL_STATE(37)] = 804,
  [SMALL_STATE(38)] = 825,
  [SMALL_STATE(39)] = 846,
  [SMALL_STATE(40)] = 867,
  [SMALL_STATE(41)] = 888,
  [SMALL_STATE(42)] = 900,
  [SMALL_STATE(43)] = 922,
  [SMALL_STATE(44)] = 944,
  [SMALL_STATE(45)] = 966,
  [SMALL_STATE(46)] = 978,
  [SMALL_STATE(47)] = 1000,
  [SMALL_STATE(48)] = 1019,
  [SMALL_STATE(49)] = 1040,
  [SMALL_STATE(50)] = 1061,
  [SMALL_STATE(51)] = 1082,
  [SMALL_STATE(52)] = 1093,
  [SMALL_STATE(53)] = 1112,
  [SMALL_STATE(54)] = 1131,
  [SMALL_STATE(55)] = 1147,
  [SMALL_STATE(56)] = 1158,
  [SMALL_STATE(57)] = 1164,
  [SMALL_STATE(58)] = 1170,
  [SMALL_STATE(59)] = 1178,
  [SMALL_STATE(60)] = 1184,
  [SMALL_STATE(61)] = 1192,
  [SMALL_STATE(62)] = 1202,
  [SMALL_STATE(63)] = 1210,
  [SMALL_STATE(64)] = 1218,
  [SMALL_STATE(65)] = 1228,
  [SMALL_STATE(66)] = 1234,
  [SMALL_STATE(67)] = 1240,
  [SMALL_STATE(68)] = 1248,
  [SMALL_STATE(69)] = 1258,
  [SMALL_STATE(70)] = 1264,
  [SMALL_STATE(71)] = 1270,
  [SMALL_STATE(72)] = 1280,
  [SMALL_STATE(73)] = 1286,
  [SMALL_STATE(74)] = 1296,
  [SMALL_STATE(75)] = 1304,
  [SMALL_STATE(76)] = 1312,
  [SMALL_STATE(77)] = 1318,
  [SMALL_STATE(78)] = 1324,
  [SMALL_STATE(79)] = 1332,
  [SMALL_STATE(80)] = 1338,
  [SMALL_STATE(81)] = 1344,
  [SMALL_STATE(82)] = 1350,
  [SMALL_STATE(83)] = 1356,
  [SMALL_STATE(84)] = 1366,
  [SMALL_STATE(85)] = 1372,
  [SMALL_STATE(86)] = 1378,
  [SMALL_STATE(87)] = 1384,
  [SMALL_STATE(88)] = 1390,
  [SMALL_STATE(89)] = 1397,
  [SMALL_STATE(90)] = 1404,
  [SMALL_STATE(91)] = 1411,
  [SMALL_STATE(92)] = 1415,
  [SMALL_STATE(93)] = 1419,
  [SMALL_STATE(94)] = 1423,
  [SMALL_STATE(95)] = 1427,
  [SMALL_STATE(96)] = 1431,
  [SMALL_STATE(97)] = 1435,
  [SMALL_STATE(98)] = 1439,
  [SMALL_STATE(99)] = 1443,
  [SMALL_STATE(100)] = 1447,
  [SMALL_STATE(101)] = 1451,
  [SMALL_STATE(102)] = 1455,
  [SMALL_STATE(103)] = 1459,
  [SMALL_STATE(104)] = 1463,
  [SMALL_STATE(105)] = 1467,
  [SMALL_STATE(106)] = 1471,
  [SMALL_STATE(107)] = 1475,
  [SMALL_STATE(108)] = 1479,
  [SMALL_STATE(109)] = 1483,
  [SMALL_STATE(110)] = 1487,
  [SMALL_STATE(111)] = 1491,
  [SMALL_STATE(112)] = 1495,
  [SMALL_STATE(113)] = 1499,
  [SMALL_STATE(114)] = 1503,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(36),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(38),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(37),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(40),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(10),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(94),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(51),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(55),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(73),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [329] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
