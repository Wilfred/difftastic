#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
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
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'V') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLARENV_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == '{') ADVANCE(54);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
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
    [sym_source_file] = STATE(133),
    [sym_foreach_command] = STATE(52),
    [sym_foreach_loop] = STATE(57),
    [sym_normal_command] = STATE(57),
    [sym__command_invocation] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(5),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(24),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(54),
    [sym_bracket_argument] = STATE(78),
    [sym__bracket_open] = STATE(61),
    [sym_quoted_argument] = STATE(78),
    [sym_unquoted_argument] = STATE(78),
    [sym_arguments] = STATE(110),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
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
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(24),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(54),
    [sym_bracket_argument] = STATE(78),
    [sym__bracket_open] = STATE(61),
    [sym_quoted_argument] = STATE(78),
    [sym_unquoted_argument] = STATE(78),
    [sym_arguments] = STATE(117),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
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
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(3),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(24),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(54),
    [sym_bracket_argument] = STATE(78),
    [sym__bracket_open] = STATE(61),
    [sym_quoted_argument] = STATE(78),
    [sym_unquoted_argument] = STATE(78),
    [sym_arguments] = STATE(111),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(3),
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
    [sym_line_ending] = STATE(21),
    [sym_seperation] = STATE(20),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(24),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(23),
    [sym_env_var] = STATE(23),
    [sym_cache_var] = STATE(23),
    [sym_argument] = STATE(54),
    [sym_bracket_argument] = STATE(78),
    [sym__bracket_open] = STATE(61),
    [sym_quoted_argument] = STATE(78),
    [sym_unquoted_argument] = STATE(78),
    [sym_arguments] = STATE(119),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
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
  [0] = 18,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(62), 1,
      sym__bracket_open,
    STATE(123), 1,
      sym_argument,
    STATE(20), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(122), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(35), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [66] = 16,
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
    STATE(21), 1,
      sym_line_ending,
    STATE(24), 1,
      sym__escape_encoded,
    STATE(61), 1,
      sym__bracket_open,
    STATE(64), 1,
      sym_argument,
    STATE(20), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(49), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(12), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(78), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [128] = 18,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(62), 1,
      sym__bracket_open,
    STATE(129), 1,
      sym_argument,
    STATE(9), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(122), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(35), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [194] = 18,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(62), 1,
      sym__bracket_open,
    STATE(131), 1,
      sym_argument,
    STATE(20), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(122), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(35), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [260] = 18,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(62), 1,
      sym__bracket_open,
    STATE(120), 1,
      sym_argument,
    STATE(6), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(122), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(35), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [326] = 14,
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
    STATE(24), 1,
      sym__escape_encoded,
    STATE(54), 1,
      sym_argument,
    STATE(61), 1,
      sym__bracket_open,
    STATE(121), 1,
      sym_arguments,
    STATE(12), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(78), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [379] = 9,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(59), 1,
      aux_sym_unquoted_argument_token1,
    STATE(24), 1,
      sym__escape_encoded,
    ACTIONS(57), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(14), 3,
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
  [417] = 11,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      sym__escape_encoded,
    STATE(118), 1,
      sym_quoted_element,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(61), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [459] = 9,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(89), 1,
      aux_sym_unquoted_argument_token1,
    STATE(24), 1,
      sym__escape_encoded,
    ACTIONS(75), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(23), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(77), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [497] = 11,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(71), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym__escape_encoded,
    STATE(116), 1,
      sym_quoted_element,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(61), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [539] = 10,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(103), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      sym__escape_encoded,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(94), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [578] = 10,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_quoted_element_token1,
    STATE(32), 1,
      sym__escape_encoded,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(31), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(61), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [617] = 9,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      aux_sym_unquoted_argument_token1,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(35), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [653] = 9,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(129), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(132), 1,
      aux_sym_unquoted_argument_token1,
    STATE(36), 1,
      sym__escape_encoded,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(40), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(120), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [689] = 5,
    ACTIONS(135), 1,
      sym_space,
    ACTIONS(138), 1,
      sym_newline,
    STATE(21), 1,
      sym_line_ending,
    STATE(20), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(141), 12,
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
  [717] = 1,
    ACTIONS(143), 14,
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
  [734] = 1,
    ACTIONS(145), 14,
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
  [751] = 1,
    ACTIONS(147), 12,
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
  [766] = 1,
    ACTIONS(149), 12,
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
  [781] = 1,
    ACTIONS(151), 12,
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
  [796] = 1,
    ACTIONS(153), 12,
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
  [811] = 1,
    ACTIONS(155), 12,
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
  [826] = 1,
    ACTIONS(153), 11,
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
  [840] = 1,
    ACTIONS(106), 11,
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
  [854] = 1,
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
  [868] = 1,
    ACTIONS(147), 11,
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
  [882] = 1,
    ACTIONS(149), 11,
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
  [896] = 1,
    ACTIONS(151), 11,
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
  [910] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(106), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [931] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(101), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [952] = 1,
    ACTIONS(149), 10,
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
  [965] = 1,
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
  [978] = 1,
    ACTIONS(153), 10,
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
  [991] = 1,
    ACTIONS(151), 10,
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
  [1004] = 1,
    ACTIONS(147), 10,
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
  [1017] = 5,
    ACTIONS(161), 1,
      aux_sym_variable_token1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1038] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(125), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1059] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(126), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1080] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(124), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1101] = 5,
    ACTIONS(168), 1,
      aux_sym_variable_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
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
  [1122] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(114), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1143] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(108), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1164] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(113), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1185] = 5,
    ACTIONS(159), 1,
      aux_sym_variable_token1,
    STATE(60), 1,
      sym__escape_encoded,
    STATE(107), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(157), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1206] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(173), 1,
      sym_endforeach,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(85), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1228] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_endforeach_command,
    STATE(53), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1250] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(173), 1,
      sym_endforeach,
    ACTIONS(175), 1,
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
  [1272] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      sym_endforeach,
    STATE(51), 1,
      sym_foreach_command,
    STATE(83), 1,
      sym_endforeach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1294] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(7), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(59), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1315] = 5,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_foreach,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(52), 1,
      sym_foreach_command,
    STATE(55), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1334] = 5,
    ACTIONS(183), 1,
      sym_foreach,
    ACTIONS(189), 1,
      sym_endforeach,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(51), 1,
      sym_foreach_command,
    STATE(56), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1353] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_foreach_command,
    STATE(55), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1372] = 6,
    ACTIONS(196), 1,
      sym_space,
    ACTIONS(199), 1,
      sym_newline,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(7), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(58), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1393] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_line_ending,
    STATE(7), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(58), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [1414] = 1,
    ACTIONS(206), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [1424] = 5,
    ACTIONS(208), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_bracket_content_repeat1,
    STATE(91), 1,
      sym__bracket_close,
    STATE(99), 1,
      sym_bracket_content,
  [1440] = 5,
    ACTIONS(208), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_bracket_content_repeat1,
    STATE(98), 1,
      sym_bracket_content,
    STATE(109), 1,
      sym__bracket_close,
  [1456] = 3,
    ACTIONS(216), 1,
      anon_sym_EQ,
    STATE(63), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(214), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1467] = 1,
    ACTIONS(219), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1473] = 3,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym__bracket_open_repeat1,
  [1483] = 1,
    ACTIONS(225), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1489] = 1,
    ACTIONS(227), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1495] = 3,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym__bracket_open_repeat1,
  [1505] = 1,
    ACTIONS(233), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1511] = 3,
    ACTIONS(235), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_bracket_content_repeat1,
  [1521] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 2,
      sym_foreach,
      sym_identifier,
  [1529] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 2,
      sym_foreach,
      sym_identifier,
  [1537] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 2,
      sym_foreach,
      sym_identifier,
  [1545] = 1,
    ACTIONS(252), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1551] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 2,
      sym_foreach,
      sym_identifier,
  [1559] = 1,
    ACTIONS(250), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1565] = 3,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_EQ,
    STATE(92), 1,
      aux_sym__bracket_open_repeat1,
  [1575] = 1,
    ACTIONS(262), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1581] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 2,
      sym_foreach,
      sym_identifier,
  [1589] = 3,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym__bracket_open_repeat1,
  [1599] = 3,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym__bracket_open_repeat1,
  [1609] = 1,
    ACTIONS(274), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1615] = 1,
    ACTIONS(276), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1621] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 2,
      sym_foreach,
      sym_identifier,
  [1629] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 2,
      sym_foreach,
      sym_identifier,
  [1637] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 2,
      sym_foreach,
      sym_identifier,
  [1645] = 1,
    ACTIONS(284), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1651] = 1,
    ACTIONS(266), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1657] = 1,
    ACTIONS(286), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1663] = 3,
    ACTIONS(288), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_bracket_content_repeat1,
  [1673] = 1,
    ACTIONS(292), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1679] = 3,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      aux_sym__bracket_open_repeat1,
  [1689] = 1,
    ACTIONS(296), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [1695] = 1,
    ACTIONS(256), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1701] = 1,
    ACTIONS(242), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1707] = 1,
    ACTIONS(246), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1713] = 2,
    ACTIONS(298), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
  [1720] = 2,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym__bracket_close,
  [1727] = 2,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__bracket_close,
  [1734] = 2,
    ACTIONS(306), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [1741] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [1745] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [1749] = 1,
    ACTIONS(314), 1,
      sym_newline,
  [1753] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1757] = 1,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
  [1761] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
  [1765] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [1769] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1773] = 1,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [1777] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [1781] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1785] = 1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1789] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [1793] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [1797] = 1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
  [1801] = 1,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
  [1805] = 1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [1809] = 1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [1813] = 1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [1817] = 1,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [1821] = 1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [1825] = 1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [1829] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1833] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1837] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1841] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1845] = 1,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [1849] = 1,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [1853] = 1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [1857] = 1,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
  [1861] = 1,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [1865] = 1,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
  [1869] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [1873] = 1,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 539,
  [SMALL_STATE(17)] = 578,
  [SMALL_STATE(18)] = 617,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 717,
  [SMALL_STATE(22)] = 734,
  [SMALL_STATE(23)] = 751,
  [SMALL_STATE(24)] = 766,
  [SMALL_STATE(25)] = 781,
  [SMALL_STATE(26)] = 796,
  [SMALL_STATE(27)] = 811,
  [SMALL_STATE(28)] = 826,
  [SMALL_STATE(29)] = 840,
  [SMALL_STATE(30)] = 854,
  [SMALL_STATE(31)] = 868,
  [SMALL_STATE(32)] = 882,
  [SMALL_STATE(33)] = 896,
  [SMALL_STATE(34)] = 910,
  [SMALL_STATE(35)] = 931,
  [SMALL_STATE(36)] = 952,
  [SMALL_STATE(37)] = 965,
  [SMALL_STATE(38)] = 978,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1004,
  [SMALL_STATE(41)] = 1017,
  [SMALL_STATE(42)] = 1038,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1080,
  [SMALL_STATE(45)] = 1101,
  [SMALL_STATE(46)] = 1122,
  [SMALL_STATE(47)] = 1143,
  [SMALL_STATE(48)] = 1164,
  [SMALL_STATE(49)] = 1185,
  [SMALL_STATE(50)] = 1206,
  [SMALL_STATE(51)] = 1228,
  [SMALL_STATE(52)] = 1250,
  [SMALL_STATE(53)] = 1272,
  [SMALL_STATE(54)] = 1294,
  [SMALL_STATE(55)] = 1315,
  [SMALL_STATE(56)] = 1334,
  [SMALL_STATE(57)] = 1353,
  [SMALL_STATE(58)] = 1372,
  [SMALL_STATE(59)] = 1393,
  [SMALL_STATE(60)] = 1414,
  [SMALL_STATE(61)] = 1424,
  [SMALL_STATE(62)] = 1440,
  [SMALL_STATE(63)] = 1456,
  [SMALL_STATE(64)] = 1467,
  [SMALL_STATE(65)] = 1473,
  [SMALL_STATE(66)] = 1483,
  [SMALL_STATE(67)] = 1489,
  [SMALL_STATE(68)] = 1495,
  [SMALL_STATE(69)] = 1505,
  [SMALL_STATE(70)] = 1511,
  [SMALL_STATE(71)] = 1521,
  [SMALL_STATE(72)] = 1529,
  [SMALL_STATE(73)] = 1537,
  [SMALL_STATE(74)] = 1545,
  [SMALL_STATE(75)] = 1551,
  [SMALL_STATE(76)] = 1559,
  [SMALL_STATE(77)] = 1565,
  [SMALL_STATE(78)] = 1575,
  [SMALL_STATE(79)] = 1581,
  [SMALL_STATE(80)] = 1589,
  [SMALL_STATE(81)] = 1599,
  [SMALL_STATE(82)] = 1609,
  [SMALL_STATE(83)] = 1615,
  [SMALL_STATE(84)] = 1621,
  [SMALL_STATE(85)] = 1629,
  [SMALL_STATE(86)] = 1637,
  [SMALL_STATE(87)] = 1645,
  [SMALL_STATE(88)] = 1651,
  [SMALL_STATE(89)] = 1657,
  [SMALL_STATE(90)] = 1663,
  [SMALL_STATE(91)] = 1673,
  [SMALL_STATE(92)] = 1679,
  [SMALL_STATE(93)] = 1689,
  [SMALL_STATE(94)] = 1695,
  [SMALL_STATE(95)] = 1701,
  [SMALL_STATE(96)] = 1707,
  [SMALL_STATE(97)] = 1713,
  [SMALL_STATE(98)] = 1720,
  [SMALL_STATE(99)] = 1727,
  [SMALL_STATE(100)] = 1734,
  [SMALL_STATE(101)] = 1741,
  [SMALL_STATE(102)] = 1745,
  [SMALL_STATE(103)] = 1749,
  [SMALL_STATE(104)] = 1753,
  [SMALL_STATE(105)] = 1757,
  [SMALL_STATE(106)] = 1761,
  [SMALL_STATE(107)] = 1765,
  [SMALL_STATE(108)] = 1769,
  [SMALL_STATE(109)] = 1773,
  [SMALL_STATE(110)] = 1777,
  [SMALL_STATE(111)] = 1781,
  [SMALL_STATE(112)] = 1785,
  [SMALL_STATE(113)] = 1789,
  [SMALL_STATE(114)] = 1793,
  [SMALL_STATE(115)] = 1797,
  [SMALL_STATE(116)] = 1801,
  [SMALL_STATE(117)] = 1805,
  [SMALL_STATE(118)] = 1809,
  [SMALL_STATE(119)] = 1813,
  [SMALL_STATE(120)] = 1817,
  [SMALL_STATE(121)] = 1821,
  [SMALL_STATE(122)] = 1825,
  [SMALL_STATE(123)] = 1829,
  [SMALL_STATE(124)] = 1833,
  [SMALL_STATE(125)] = 1837,
  [SMALL_STATE(126)] = 1841,
  [SMALL_STATE(127)] = 1845,
  [SMALL_STATE(128)] = 1849,
  [SMALL_STATE(129)] = 1853,
  [SMALL_STATE(130)] = 1857,
  [SMALL_STATE(131)] = 1861,
  [SMALL_STATE(132)] = 1865,
  [SMALL_STATE(133)] = 1869,
  [SMALL_STATE(134)] = 1873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(24),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(47),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(49),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(14),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(48),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(46),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(35),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(16),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(103),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(36),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(44),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(42),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(43),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(19),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(60),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(21),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(63),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(70),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
