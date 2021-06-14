#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_RPAREN = 25,
  sym_source_file = 26,
  sym__line_ending = 27,
  sym__seperation = 28,
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
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__newline);
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
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
    [sym_source_file] = STATE(131),
    [sym_foreach_command] = STATE(50),
    [sym_foreach_loop] = STATE(55),
    [sym_normal_command] = STATE(55),
    [sym__command_invocation] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_foreach] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym__line_ending] = STATE(20),
    [sym__seperation] = STATE(20),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(21),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(22),
    [sym_env_var] = STATE(22),
    [sym_cache_var] = STATE(22),
    [sym_argument] = STATE(52),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(59),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(115),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym__space] = ACTIONS(9),
    [sym__newline] = ACTIONS(9),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_unquoted_argument_token1] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
  [3] = {
    [sym__line_ending] = STATE(20),
    [sym__seperation] = STATE(20),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(21),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(22),
    [sym_env_var] = STATE(22),
    [sym_cache_var] = STATE(22),
    [sym_argument] = STATE(52),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(59),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(117),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(20),
    [sym__space] = ACTIONS(9),
    [sym__newline] = ACTIONS(9),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_unquoted_argument_token1] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [4] = {
    [sym__line_ending] = STATE(2),
    [sym__seperation] = STATE(2),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(21),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(22),
    [sym_env_var] = STATE(22),
    [sym_cache_var] = STATE(22),
    [sym_argument] = STATE(52),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(59),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(109),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(2),
    [sym__space] = ACTIONS(29),
    [sym__newline] = ACTIONS(29),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_unquoted_argument_token1] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [5] = {
    [sym__line_ending] = STATE(3),
    [sym__seperation] = STATE(3),
    [sym_escape_sequence] = STATE(12),
    [sym__escape_encoded] = STATE(21),
    [sym_variable_ref] = STATE(12),
    [sym_normal_var] = STATE(22),
    [sym_env_var] = STATE(22),
    [sym_cache_var] = STATE(22),
    [sym_argument] = STATE(52),
    [sym_bracket_argument] = STATE(76),
    [sym__bracket_open] = STATE(59),
    [sym_quoted_argument] = STATE(76),
    [sym_unquoted_argument] = STATE(76),
    [sym_arguments] = STATE(108),
    [aux_sym_unquoted_argument_repeat1] = STATE(12),
    [aux_sym__seperated_arguments_repeat1] = STATE(3),
    [sym__space] = ACTIONS(33),
    [sym__newline] = ACTIONS(33),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARCACHE_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_unquoted_argument_token1] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(60), 1,
      sym__bracket_open,
    STATE(121), 1,
      sym_argument,
    ACTIONS(9), 2,
      sym__space,
      sym__newline,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(120), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(37), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [62] = 15,
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
    STATE(21), 1,
      sym__escape_encoded,
    STATE(59), 1,
      sym__bracket_open,
    STATE(65), 1,
      sym_argument,
    ACTIONS(51), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(12), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(22), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(76), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [122] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(60), 1,
      sym__bracket_open,
    STATE(127), 1,
      sym_argument,
    ACTIONS(53), 2,
      sym__space,
      sym__newline,
    STATE(9), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(120), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(37), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [184] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(60), 1,
      sym__bracket_open,
    STATE(129), 1,
      sym_argument,
    ACTIONS(9), 2,
      sym__space,
      sym__newline,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(120), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(37), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [246] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(60), 1,
      sym__bracket_open,
    STATE(118), 1,
      sym_argument,
    ACTIONS(59), 2,
      sym__space,
      sym__newline,
    STATE(6), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(19), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(120), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(37), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [308] = 14,
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
    STATE(21), 1,
      sym__escape_encoded,
    STATE(52), 1,
      sym_argument,
    STATE(59), 1,
      sym__bracket_open,
    STATE(119), 1,
      sym_arguments,
    STATE(12), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(22), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(76), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [361] = 9,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(65), 1,
      aux_sym_unquoted_argument_token1,
    STATE(21), 1,
      sym__escape_encoded,
    ACTIONS(63), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(22), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [399] = 9,
    ACTIONS(72), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(75), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(78), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(81), 1,
      aux_sym_unquoted_argument_token1,
    STATE(21), 1,
      sym__escape_encoded,
    ACTIONS(67), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(22), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(69), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [437] = 11,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(116), 1,
      sym_quoted_element,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(84), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [479] = 11,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(94), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(114), 1,
      sym_quoted_element,
    STATE(17), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(84), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [521] = 10,
    ACTIONS(103), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [560] = 10,
    ACTIONS(86), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_quoted_element_token1,
    STATE(31), 1,
      sym__escape_encoded,
    STATE(16), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(30), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(84), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [599] = 9,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(130), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(133), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(136), 1,
      aux_sym_unquoted_argument_token1,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(124), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [635] = 9,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLARENV_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLARCACHE_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      aux_sym_unquoted_argument_token1,
    STATE(34), 1,
      sym__escape_encoded,
    STATE(18), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(38), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(37), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [671] = 3,
    ACTIONS(141), 2,
      sym__space,
      sym__newline,
    STATE(20), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(144), 12,
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
  [695] = 1,
    ACTIONS(146), 12,
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
  [710] = 1,
    ACTIONS(148), 12,
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
  [725] = 1,
    ACTIONS(150), 12,
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
  [740] = 1,
    ACTIONS(152), 12,
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
  [755] = 1,
    ACTIONS(154), 12,
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
  [770] = 1,
    ACTIONS(150), 11,
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
  [784] = 1,
    ACTIONS(152), 11,
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
  [798] = 1,
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
  [812] = 1,
    ACTIONS(154), 11,
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
  [826] = 1,
    ACTIONS(148), 11,
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
    ACTIONS(146), 11,
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
  [854] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(105), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [875] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(99), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [896] = 1,
    ACTIONS(146), 10,
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
  [909] = 1,
    ACTIONS(154), 10,
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
  [922] = 1,
    ACTIONS(152), 10,
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
  [935] = 1,
    ACTIONS(150), 10,
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
  [948] = 1,
    ACTIONS(148), 10,
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
  [961] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(124), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [982] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(123), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1003] = 5,
    ACTIONS(160), 1,
      aux_sym_variable_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1024] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(122), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1045] = 5,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(164), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1066] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(112), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1087] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(106), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1108] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(111), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1129] = 5,
    ACTIONS(158), 1,
      aux_sym_variable_token1,
    STATE(58), 1,
      sym__escape_encoded,
    STATE(104), 1,
      sym_variable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(156), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1150] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(172), 1,
      sym_endforeach,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(49), 1,
      sym_foreach_command,
    STATE(83), 1,
      sym_endforeach_command,
    STATE(54), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1172] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_endforeach,
    STATE(49), 1,
      sym_foreach_command,
    STATE(74), 1,
      sym_endforeach_command,
    STATE(51), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1194] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(172), 1,
      sym_endforeach,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(49), 1,
      sym_foreach_command,
    STATE(71), 1,
      sym_endforeach_command,
    STATE(48), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1216] = 6,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_endforeach,
    STATE(49), 1,
      sym_foreach_command,
    STATE(81), 1,
      sym_endforeach_command,
    STATE(54), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1238] = 4,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(178), 2,
      sym__space,
      sym__newline,
    STATE(57), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
    STATE(7), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
  [1255] = 5,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym_foreach,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(50), 1,
      sym_foreach_command,
    STATE(53), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1274] = 5,
    ACTIONS(184), 1,
      sym_foreach,
    ACTIONS(190), 1,
      sym_endforeach,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(49), 1,
      sym_foreach_command,
    STATE(54), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1293] = 5,
    ACTIONS(5), 1,
      sym_foreach,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_foreach_command,
    STATE(53), 4,
      sym_foreach_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1312] = 4,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 2,
      sym__space,
      sym__newline,
    STATE(56), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
    STATE(7), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
  [1329] = 4,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(178), 2,
      sym__space,
      sym__newline,
    STATE(56), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
    STATE(7), 3,
      sym__line_ending,
      sym__seperation,
      aux_sym__seperated_arguments_repeat1,
  [1346] = 1,
    ACTIONS(204), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [1356] = 5,
    ACTIONS(206), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_bracket_content_repeat1,
    STATE(89), 1,
      sym__bracket_close,
    STATE(97), 1,
      sym_bracket_content,
  [1372] = 5,
    ACTIONS(206), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_bracket_content_repeat1,
    STATE(96), 1,
      sym_bracket_content,
    STATE(107), 1,
      sym__bracket_close,
  [1388] = 3,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(61), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(212), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1399] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__bracket_open_repeat1,
  [1409] = 3,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym__bracket_open_repeat1,
  [1419] = 1,
    ACTIONS(225), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1425] = 1,
    ACTIONS(227), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1431] = 1,
    ACTIONS(229), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1437] = 1,
    ACTIONS(231), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1443] = 3,
    ACTIONS(233), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_bracket_content_repeat1,
  [1453] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 2,
      sym_foreach,
      sym_identifier,
  [1461] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 2,
      sym_foreach,
      sym_identifier,
  [1469] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 2,
      sym_foreach,
      sym_identifier,
  [1477] = 1,
    ACTIONS(250), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1483] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 2,
      sym_foreach,
      sym_identifier,
  [1491] = 1,
    ACTIONS(248), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1497] = 3,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(90), 1,
      aux_sym__bracket_open_repeat1,
  [1507] = 1,
    ACTIONS(260), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1513] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 2,
      sym_foreach,
      sym_identifier,
  [1521] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__bracket_open_repeat1,
  [1531] = 3,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym__bracket_open_repeat1,
  [1541] = 1,
    ACTIONS(272), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1547] = 1,
    ACTIONS(274), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1553] = 2,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 2,
      sym_foreach,
      sym_identifier,
  [1561] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 2,
      sym_foreach,
      sym_identifier,
  [1569] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 2,
      sym_foreach,
      sym_identifier,
  [1577] = 1,
    ACTIONS(282), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1583] = 1,
    ACTIONS(264), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1589] = 1,
    ACTIONS(284), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1595] = 3,
    ACTIONS(286), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_bracket_content_repeat1,
  [1605] = 1,
    ACTIONS(290), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1611] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      aux_sym__bracket_open_repeat1,
  [1621] = 1,
    ACTIONS(294), 3,
      sym__space,
      sym__newline,
      anon_sym_RPAREN,
  [1627] = 1,
    ACTIONS(254), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1633] = 1,
    ACTIONS(240), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1639] = 1,
    ACTIONS(244), 3,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [1645] = 2,
    ACTIONS(296), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
  [1652] = 2,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym__bracket_close,
  [1659] = 2,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym__bracket_close,
  [1666] = 2,
    ACTIONS(304), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
  [1673] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1677] = 1,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
  [1681] = 1,
    ACTIONS(312), 1,
      sym__newline,
  [1685] = 1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1689] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1693] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [1697] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
  [1701] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [1705] = 1,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
  [1709] = 1,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [1713] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [1717] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1721] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1725] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [1729] = 1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
  [1733] = 1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1737] = 1,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [1741] = 1,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [1745] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [1749] = 1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [1753] = 1,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [1757] = 1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [1761] = 1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [1765] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1769] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1773] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1777] = 1,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
  [1781] = 1,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [1785] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1789] = 1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [1793] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [1797] = 1,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
  [1801] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [1805] = 1,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 671,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 710,
  [SMALL_STATE(23)] = 725,
  [SMALL_STATE(24)] = 740,
  [SMALL_STATE(25)] = 755,
  [SMALL_STATE(26)] = 770,
  [SMALL_STATE(27)] = 784,
  [SMALL_STATE(28)] = 798,
  [SMALL_STATE(29)] = 812,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 840,
  [SMALL_STATE(32)] = 854,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 922,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 948,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 1003,
  [SMALL_STATE(42)] = 1024,
  [SMALL_STATE(43)] = 1045,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1087,
  [SMALL_STATE(46)] = 1108,
  [SMALL_STATE(47)] = 1129,
  [SMALL_STATE(48)] = 1150,
  [SMALL_STATE(49)] = 1172,
  [SMALL_STATE(50)] = 1194,
  [SMALL_STATE(51)] = 1216,
  [SMALL_STATE(52)] = 1238,
  [SMALL_STATE(53)] = 1255,
  [SMALL_STATE(54)] = 1274,
  [SMALL_STATE(55)] = 1293,
  [SMALL_STATE(56)] = 1312,
  [SMALL_STATE(57)] = 1329,
  [SMALL_STATE(58)] = 1346,
  [SMALL_STATE(59)] = 1356,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1388,
  [SMALL_STATE(62)] = 1399,
  [SMALL_STATE(63)] = 1409,
  [SMALL_STATE(64)] = 1419,
  [SMALL_STATE(65)] = 1425,
  [SMALL_STATE(66)] = 1431,
  [SMALL_STATE(67)] = 1437,
  [SMALL_STATE(68)] = 1443,
  [SMALL_STATE(69)] = 1453,
  [SMALL_STATE(70)] = 1461,
  [SMALL_STATE(71)] = 1469,
  [SMALL_STATE(72)] = 1477,
  [SMALL_STATE(73)] = 1483,
  [SMALL_STATE(74)] = 1491,
  [SMALL_STATE(75)] = 1497,
  [SMALL_STATE(76)] = 1507,
  [SMALL_STATE(77)] = 1513,
  [SMALL_STATE(78)] = 1521,
  [SMALL_STATE(79)] = 1531,
  [SMALL_STATE(80)] = 1541,
  [SMALL_STATE(81)] = 1547,
  [SMALL_STATE(82)] = 1553,
  [SMALL_STATE(83)] = 1561,
  [SMALL_STATE(84)] = 1569,
  [SMALL_STATE(85)] = 1577,
  [SMALL_STATE(86)] = 1583,
  [SMALL_STATE(87)] = 1589,
  [SMALL_STATE(88)] = 1595,
  [SMALL_STATE(89)] = 1605,
  [SMALL_STATE(90)] = 1611,
  [SMALL_STATE(91)] = 1621,
  [SMALL_STATE(92)] = 1627,
  [SMALL_STATE(93)] = 1633,
  [SMALL_STATE(94)] = 1639,
  [SMALL_STATE(95)] = 1645,
  [SMALL_STATE(96)] = 1652,
  [SMALL_STATE(97)] = 1659,
  [SMALL_STATE(98)] = 1666,
  [SMALL_STATE(99)] = 1673,
  [SMALL_STATE(100)] = 1677,
  [SMALL_STATE(101)] = 1681,
  [SMALL_STATE(102)] = 1685,
  [SMALL_STATE(103)] = 1689,
  [SMALL_STATE(104)] = 1693,
  [SMALL_STATE(105)] = 1697,
  [SMALL_STATE(106)] = 1701,
  [SMALL_STATE(107)] = 1705,
  [SMALL_STATE(108)] = 1709,
  [SMALL_STATE(109)] = 1713,
  [SMALL_STATE(110)] = 1717,
  [SMALL_STATE(111)] = 1721,
  [SMALL_STATE(112)] = 1725,
  [SMALL_STATE(113)] = 1729,
  [SMALL_STATE(114)] = 1733,
  [SMALL_STATE(115)] = 1737,
  [SMALL_STATE(116)] = 1741,
  [SMALL_STATE(117)] = 1745,
  [SMALL_STATE(118)] = 1749,
  [SMALL_STATE(119)] = 1753,
  [SMALL_STATE(120)] = 1757,
  [SMALL_STATE(121)] = 1761,
  [SMALL_STATE(122)] = 1765,
  [SMALL_STATE(123)] = 1769,
  [SMALL_STATE(124)] = 1773,
  [SMALL_STATE(125)] = 1777,
  [SMALL_STATE(126)] = 1781,
  [SMALL_STATE(127)] = 1785,
  [SMALL_STATE(128)] = 1789,
  [SMALL_STATE(129)] = 1793,
  [SMALL_STATE(130)] = 1797,
  [SMALL_STATE(131)] = 1801,
  [SMALL_STATE(132)] = 1805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(45),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(32),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(47),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(31),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(44),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(33),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(16),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(101),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(34),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(42),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(40),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(18),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(58),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(43),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(7),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(68),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
