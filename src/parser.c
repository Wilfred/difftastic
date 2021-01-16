#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_comment = 1,
  anon_sym_false = 2,
  anon_sym_true = 3,
  aux_sym_keyword_token1 = 4,
  sym_nil = 5,
  sym__dec = 6,
  sym__hex = 7,
  sym__radix = 8,
  sym_string = 9,
  sym_buffer = 10,
  sym_symbol = 11,
  anon_sym_AT_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_AT_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_AT_LBRACE = 18,
  anon_sym_LPAREN = 19,
  anon_sym_LBRACK = 20,
  anon_sym_TILDE = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_PIPE = 23,
  anon_sym_SEMI = 24,
  anon_sym_COMMA = 25,
  sym_long_buffer = 26,
  sym_long_string = 27,
  sym_source = 28,
  sym__form = 29,
  sym_boolean = 30,
  sym_keyword = 31,
  sym_number = 32,
  sym_array = 33,
  sym_bracket_array = 34,
  sym_struct = 35,
  sym_table = 36,
  sym_tuple = 37,
  sym_bracket_tuple = 38,
  sym_quasi_quote_form = 39,
  sym_quote_form = 40,
  sym_short_fn_form = 41,
  sym_splice_form = 42,
  sym_unquote_form = 43,
  aux_sym_source_repeat1 = 44,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [aux_sym_keyword_token1] = "keyword_token1",
  [sym_nil] = "nil",
  [sym__dec] = "_dec",
  [sym__hex] = "_hex",
  [sym__radix] = "_radix",
  [sym_string] = "string",
  [sym_buffer] = "buffer",
  [sym_symbol] = "symbol",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT_LBRACK] = "@[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_TILDE] = "~",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [sym_long_buffer] = "long_buffer",
  [sym_long_string] = "long_string",
  [sym_source] = "source",
  [sym__form] = "_form",
  [sym_boolean] = "boolean",
  [sym_keyword] = "keyword",
  [sym_number] = "number",
  [sym_array] = "array",
  [sym_bracket_array] = "bracket_array",
  [sym_struct] = "struct",
  [sym_table] = "table",
  [sym_tuple] = "tuple",
  [sym_bracket_tuple] = "bracket_tuple",
  [sym_quasi_quote_form] = "quasi_quote_form",
  [sym_quote_form] = "quote_form",
  [sym_short_fn_form] = "short_fn_form",
  [sym_splice_form] = "splice_form",
  [sym_unquote_form] = "unquote_form",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [sym_nil] = sym_nil,
  [sym__dec] = sym__dec,
  [sym__hex] = sym__hex,
  [sym__radix] = sym__radix,
  [sym_string] = sym_string,
  [sym_buffer] = sym_buffer,
  [sym_symbol] = sym_symbol,
  [anon_sym_AT_LPAREN] = anon_sym_AT_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_long_buffer] = sym_long_buffer,
  [sym_long_string] = sym_long_string,
  [sym_source] = sym_source,
  [sym__form] = sym__form,
  [sym_boolean] = sym_boolean,
  [sym_keyword] = sym_keyword,
  [sym_number] = sym_number,
  [sym_array] = sym_array,
  [sym_bracket_array] = sym_bracket_array,
  [sym_struct] = sym_struct,
  [sym_table] = sym_table,
  [sym_tuple] = sym_tuple,
  [sym_bracket_tuple] = sym_bracket_tuple,
  [sym_quasi_quote_form] = sym_quasi_quote_form,
  [sym_quote_form] = sym_quote_form,
  [sym_short_fn_form] = sym_short_fn_form,
  [sym_splice_form] = sym_splice_form,
  [sym_unquote_form] = sym_unquote_form,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__radix] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_long_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_long_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_array] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_quasi_quote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_form] = {
    .visible = true,
    .named = true,
  },
  [sym_splice_form] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_form] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == '3') ADVANCE(23);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(20);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead == '_') ADVANCE(27);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(43);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__radix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__radix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_buffer);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '3') ADVANCE(30);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(43);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0},
};

enum {
  ts_external_token_long_buffer = 0,
  ts_external_token_long_string = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_long_buffer] = sym_long_buffer,
  [ts_external_token_long_string] = sym_long_string,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_long_buffer] = true,
    [ts_external_token_long_string] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__radix] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_buffer] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_long_buffer] = ACTIONS(1),
    [sym_long_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(41),
    [sym__form] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_number] = STATE(12),
    [sym_array] = STATE(12),
    [sym_bracket_array] = STATE(12),
    [sym_struct] = STATE(12),
    [sym_table] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_bracket_tuple] = STATE(12),
    [sym_quasi_quote_form] = STATE(12),
    [sym_quote_form] = STATE(12),
    [sym_short_fn_form] = STATE(12),
    [sym_splice_form] = STATE(12),
    [sym_unquote_form] = STATE(12),
    [aux_sym_source_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(11),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_buffer] = ACTIONS(15),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(15),
    [sym_long_string] = ACTIONS(15),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [aux_sym_keyword_token1] = ACTIONS(44),
    [sym_nil] = ACTIONS(47),
    [sym__dec] = ACTIONS(50),
    [sym__hex] = ACTIONS(50),
    [sym__radix] = ACTIONS(50),
    [sym_string] = ACTIONS(53),
    [sym_buffer] = ACTIONS(53),
    [sym_symbol] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_AT_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_AT_LBRACE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(86),
    [sym_long_buffer] = ACTIONS(53),
    [sym_long_string] = ACTIONS(53),
  },
  [3] = {
    [sym__form] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_number] = STATE(15),
    [sym_array] = STATE(15),
    [sym_bracket_array] = STATE(15),
    [sym_struct] = STATE(15),
    [sym_table] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_bracket_tuple] = STATE(15),
    [sym_quasi_quote_form] = STATE(15),
    [sym_quote_form] = STATE(15),
    [sym_short_fn_form] = STATE(15),
    [sym_splice_form] = STATE(15),
    [sym_unquote_form] = STATE(15),
    [aux_sym_source_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(89),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(91),
    [sym_buffer] = ACTIONS(91),
    [sym_symbol] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(91),
    [sym_long_string] = ACTIONS(91),
  },
  [4] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [5] = {
    [sym__form] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_keyword] = STATE(14),
    [sym_number] = STATE(14),
    [sym_array] = STATE(14),
    [sym_bracket_array] = STATE(14),
    [sym_struct] = STATE(14),
    [sym_table] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_bracket_tuple] = STATE(14),
    [sym_quasi_quote_form] = STATE(14),
    [sym_quote_form] = STATE(14),
    [sym_short_fn_form] = STATE(14),
    [sym_splice_form] = STATE(14),
    [sym_unquote_form] = STATE(14),
    [aux_sym_source_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(101),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(103),
    [sym_buffer] = ACTIONS(103),
    [sym_symbol] = ACTIONS(101),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(103),
    [sym_long_string] = ACTIONS(103),
  },
  [6] = {
    [sym__form] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_keyword] = STATE(10),
    [sym_number] = STATE(10),
    [sym_array] = STATE(10),
    [sym_bracket_array] = STATE(10),
    [sym_struct] = STATE(10),
    [sym_table] = STATE(10),
    [sym_tuple] = STATE(10),
    [sym_bracket_tuple] = STATE(10),
    [sym_quasi_quote_form] = STATE(10),
    [sym_quote_form] = STATE(10),
    [sym_short_fn_form] = STATE(10),
    [sym_splice_form] = STATE(10),
    [sym_unquote_form] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(107),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(109),
    [sym_buffer] = ACTIONS(109),
    [sym_symbol] = ACTIONS(107),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(109),
    [sym_long_string] = ACTIONS(109),
  },
  [7] = {
    [sym__form] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_keyword] = STATE(13),
    [sym_number] = STATE(13),
    [sym_array] = STATE(13),
    [sym_bracket_array] = STATE(13),
    [sym_struct] = STATE(13),
    [sym_table] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_bracket_tuple] = STATE(13),
    [sym_quasi_quote_form] = STATE(13),
    [sym_quote_form] = STATE(13),
    [sym_short_fn_form] = STATE(13),
    [sym_splice_form] = STATE(13),
    [sym_unquote_form] = STATE(13),
    [aux_sym_source_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(113),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(115),
    [sym_buffer] = ACTIONS(115),
    [sym_symbol] = ACTIONS(113),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(115),
    [sym_long_string] = ACTIONS(115),
  },
  [8] = {
    [sym__form] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_keyword] = STATE(11),
    [sym_number] = STATE(11),
    [sym_array] = STATE(11),
    [sym_bracket_array] = STATE(11),
    [sym_struct] = STATE(11),
    [sym_table] = STATE(11),
    [sym_tuple] = STATE(11),
    [sym_bracket_tuple] = STATE(11),
    [sym_quasi_quote_form] = STATE(11),
    [sym_quote_form] = STATE(11),
    [sym_short_fn_form] = STATE(11),
    [sym_splice_form] = STATE(11),
    [sym_unquote_form] = STATE(11),
    [aux_sym_source_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(119),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(121),
    [sym_buffer] = ACTIONS(121),
    [sym_symbol] = ACTIONS(119),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(121),
    [sym_long_string] = ACTIONS(121),
  },
  [9] = {
    [sym__form] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_number] = STATE(4),
    [sym_array] = STATE(4),
    [sym_bracket_array] = STATE(4),
    [sym_struct] = STATE(4),
    [sym_table] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_bracket_tuple] = STATE(4),
    [sym_quasi_quote_form] = STATE(4),
    [sym_quote_form] = STATE(4),
    [sym_short_fn_form] = STATE(4),
    [sym_splice_form] = STATE(4),
    [sym_unquote_form] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(125),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(127),
    [sym_buffer] = ACTIONS(127),
    [sym_symbol] = ACTIONS(125),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(127),
    [sym_long_string] = ACTIONS(127),
  },
  [10] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [11] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [12] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [13] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [14] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [15] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_bracket_array] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_table] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_bracket_tuple] = STATE(2),
    [sym_quasi_quote_form] = STATE(2),
    [sym_quote_form] = STATE(2),
    [sym_short_fn_form] = STATE(2),
    [sym_splice_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(95),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(97),
    [sym_buffer] = ACTIONS(97),
    [sym_symbol] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(97),
    [sym_long_string] = ACTIONS(97),
  },
  [16] = {
    [sym__form] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_number] = STATE(29),
    [sym_array] = STATE(29),
    [sym_bracket_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_table] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_bracket_tuple] = STATE(29),
    [sym_quasi_quote_form] = STATE(29),
    [sym_quote_form] = STATE(29),
    [sym_short_fn_form] = STATE(29),
    [sym_splice_form] = STATE(29),
    [sym_unquote_form] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(143),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(145),
    [sym_buffer] = ACTIONS(145),
    [sym_symbol] = ACTIONS(143),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(145),
    [sym_long_string] = ACTIONS(145),
  },
  [17] = {
    [sym__form] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_number] = STATE(30),
    [sym_array] = STATE(30),
    [sym_bracket_array] = STATE(30),
    [sym_struct] = STATE(30),
    [sym_table] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_bracket_tuple] = STATE(30),
    [sym_quasi_quote_form] = STATE(30),
    [sym_quote_form] = STATE(30),
    [sym_short_fn_form] = STATE(30),
    [sym_splice_form] = STATE(30),
    [sym_unquote_form] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(147),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(149),
    [sym_buffer] = ACTIONS(149),
    [sym_symbol] = ACTIONS(147),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(149),
    [sym_long_string] = ACTIONS(149),
  },
  [18] = {
    [sym__form] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym_keyword] = STATE(31),
    [sym_number] = STATE(31),
    [sym_array] = STATE(31),
    [sym_bracket_array] = STATE(31),
    [sym_struct] = STATE(31),
    [sym_table] = STATE(31),
    [sym_tuple] = STATE(31),
    [sym_bracket_tuple] = STATE(31),
    [sym_quasi_quote_form] = STATE(31),
    [sym_quote_form] = STATE(31),
    [sym_short_fn_form] = STATE(31),
    [sym_splice_form] = STATE(31),
    [sym_unquote_form] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(151),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(153),
    [sym_buffer] = ACTIONS(153),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(153),
    [sym_long_string] = ACTIONS(153),
  },
  [19] = {
    [sym__form] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_number] = STATE(32),
    [sym_array] = STATE(32),
    [sym_bracket_array] = STATE(32),
    [sym_struct] = STATE(32),
    [sym_table] = STATE(32),
    [sym_tuple] = STATE(32),
    [sym_bracket_tuple] = STATE(32),
    [sym_quasi_quote_form] = STATE(32),
    [sym_quote_form] = STATE(32),
    [sym_short_fn_form] = STATE(32),
    [sym_splice_form] = STATE(32),
    [sym_unquote_form] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(155),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(157),
    [sym_buffer] = ACTIONS(157),
    [sym_symbol] = ACTIONS(155),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(157),
    [sym_long_string] = ACTIONS(157),
  },
  [20] = {
    [sym__form] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_number] = STATE(33),
    [sym_array] = STATE(33),
    [sym_bracket_array] = STATE(33),
    [sym_struct] = STATE(33),
    [sym_table] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym_bracket_tuple] = STATE(33),
    [sym_quasi_quote_form] = STATE(33),
    [sym_quote_form] = STATE(33),
    [sym_short_fn_form] = STATE(33),
    [sym_splice_form] = STATE(33),
    [sym_unquote_form] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [sym_nil] = ACTIONS(159),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__radix] = ACTIONS(13),
    [sym_string] = ACTIONS(161),
    [sym_buffer] = ACTIONS(161),
    [sym_symbol] = ACTIONS(159),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buffer] = ACTIONS(161),
    [sym_long_string] = ACTIONS(161),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [aux_sym_keyword_token1] = ACTIONS(163),
    [sym_nil] = ACTIONS(165),
    [sym__dec] = ACTIONS(165),
    [sym__hex] = ACTIONS(165),
    [sym__radix] = ACTIONS(165),
    [sym_string] = ACTIONS(163),
    [sym_buffer] = ACTIONS(163),
    [sym_symbol] = ACTIONS(165),
    [anon_sym_AT_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_AT_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_AT_LBRACE] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [sym_long_buffer] = ACTIONS(163),
    [sym_long_string] = ACTIONS(163),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(169),
    [aux_sym_keyword_token1] = ACTIONS(167),
    [sym_nil] = ACTIONS(169),
    [sym__dec] = ACTIONS(169),
    [sym__hex] = ACTIONS(169),
    [sym__radix] = ACTIONS(169),
    [sym_string] = ACTIONS(167),
    [sym_buffer] = ACTIONS(167),
    [sym_symbol] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_AT_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [sym_long_buffer] = ACTIONS(167),
    [sym_long_string] = ACTIONS(167),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [aux_sym_keyword_token1] = ACTIONS(171),
    [sym_nil] = ACTIONS(173),
    [sym__dec] = ACTIONS(173),
    [sym__hex] = ACTIONS(173),
    [sym__radix] = ACTIONS(173),
    [sym_string] = ACTIONS(171),
    [sym_buffer] = ACTIONS(171),
    [sym_symbol] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_AT_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AT_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [sym_long_buffer] = ACTIONS(171),
    [sym_long_string] = ACTIONS(171),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [aux_sym_keyword_token1] = ACTIONS(175),
    [sym_nil] = ACTIONS(177),
    [sym__dec] = ACTIONS(177),
    [sym__hex] = ACTIONS(177),
    [sym__radix] = ACTIONS(177),
    [sym_string] = ACTIONS(175),
    [sym_buffer] = ACTIONS(175),
    [sym_symbol] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_AT_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AT_LBRACE] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [sym_long_buffer] = ACTIONS(175),
    [sym_long_string] = ACTIONS(175),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [aux_sym_keyword_token1] = ACTIONS(179),
    [sym_nil] = ACTIONS(181),
    [sym__dec] = ACTIONS(181),
    [sym__hex] = ACTIONS(181),
    [sym__radix] = ACTIONS(181),
    [sym_string] = ACTIONS(179),
    [sym_buffer] = ACTIONS(179),
    [sym_symbol] = ACTIONS(181),
    [anon_sym_AT_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_AT_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_AT_LBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_long_buffer] = ACTIONS(179),
    [sym_long_string] = ACTIONS(179),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [aux_sym_keyword_token1] = ACTIONS(183),
    [sym_nil] = ACTIONS(185),
    [sym__dec] = ACTIONS(185),
    [sym__hex] = ACTIONS(185),
    [sym__radix] = ACTIONS(185),
    [sym_string] = ACTIONS(183),
    [sym_buffer] = ACTIONS(183),
    [sym_symbol] = ACTIONS(185),
    [anon_sym_AT_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_AT_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AT_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_long_buffer] = ACTIONS(183),
    [sym_long_string] = ACTIONS(183),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [aux_sym_keyword_token1] = ACTIONS(187),
    [sym_nil] = ACTIONS(189),
    [sym__dec] = ACTIONS(189),
    [sym__hex] = ACTIONS(189),
    [sym__radix] = ACTIONS(189),
    [sym_string] = ACTIONS(187),
    [sym_buffer] = ACTIONS(187),
    [sym_symbol] = ACTIONS(189),
    [anon_sym_AT_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_AT_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AT_LBRACE] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_long_buffer] = ACTIONS(187),
    [sym_long_string] = ACTIONS(187),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [aux_sym_keyword_token1] = ACTIONS(191),
    [sym_nil] = ACTIONS(193),
    [sym__dec] = ACTIONS(193),
    [sym__hex] = ACTIONS(193),
    [sym__radix] = ACTIONS(193),
    [sym_string] = ACTIONS(191),
    [sym_buffer] = ACTIONS(191),
    [sym_symbol] = ACTIONS(193),
    [anon_sym_AT_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_AT_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AT_LBRACE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_long_buffer] = ACTIONS(191),
    [sym_long_string] = ACTIONS(191),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [aux_sym_keyword_token1] = ACTIONS(195),
    [sym_nil] = ACTIONS(197),
    [sym__dec] = ACTIONS(197),
    [sym__hex] = ACTIONS(197),
    [sym__radix] = ACTIONS(197),
    [sym_string] = ACTIONS(195),
    [sym_buffer] = ACTIONS(195),
    [sym_symbol] = ACTIONS(197),
    [anon_sym_AT_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_AT_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_AT_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_long_buffer] = ACTIONS(195),
    [sym_long_string] = ACTIONS(195),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [aux_sym_keyword_token1] = ACTIONS(199),
    [sym_nil] = ACTIONS(201),
    [sym__dec] = ACTIONS(201),
    [sym__hex] = ACTIONS(201),
    [sym__radix] = ACTIONS(201),
    [sym_string] = ACTIONS(199),
    [sym_buffer] = ACTIONS(199),
    [sym_symbol] = ACTIONS(201),
    [anon_sym_AT_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_AT_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AT_LBRACE] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [sym_long_buffer] = ACTIONS(199),
    [sym_long_string] = ACTIONS(199),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [aux_sym_keyword_token1] = ACTIONS(203),
    [sym_nil] = ACTIONS(205),
    [sym__dec] = ACTIONS(205),
    [sym__hex] = ACTIONS(205),
    [sym__radix] = ACTIONS(205),
    [sym_string] = ACTIONS(203),
    [sym_buffer] = ACTIONS(203),
    [sym_symbol] = ACTIONS(205),
    [anon_sym_AT_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_AT_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_AT_LBRACE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_long_buffer] = ACTIONS(203),
    [sym_long_string] = ACTIONS(203),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [aux_sym_keyword_token1] = ACTIONS(207),
    [sym_nil] = ACTIONS(209),
    [sym__dec] = ACTIONS(209),
    [sym__hex] = ACTIONS(209),
    [sym__radix] = ACTIONS(209),
    [sym_string] = ACTIONS(207),
    [sym_buffer] = ACTIONS(207),
    [sym_symbol] = ACTIONS(209),
    [anon_sym_AT_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_AT_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_AT_LBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_long_buffer] = ACTIONS(207),
    [sym_long_string] = ACTIONS(207),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [aux_sym_keyword_token1] = ACTIONS(211),
    [sym_nil] = ACTIONS(213),
    [sym__dec] = ACTIONS(213),
    [sym__hex] = ACTIONS(213),
    [sym__radix] = ACTIONS(213),
    [sym_string] = ACTIONS(211),
    [sym_buffer] = ACTIONS(211),
    [sym_symbol] = ACTIONS(213),
    [anon_sym_AT_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_AT_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_AT_LBRACE] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_long_buffer] = ACTIONS(211),
    [sym_long_string] = ACTIONS(211),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [aux_sym_keyword_token1] = ACTIONS(215),
    [sym_nil] = ACTIONS(217),
    [sym__dec] = ACTIONS(217),
    [sym__hex] = ACTIONS(217),
    [sym__radix] = ACTIONS(217),
    [sym_string] = ACTIONS(215),
    [sym_buffer] = ACTIONS(215),
    [sym_symbol] = ACTIONS(217),
    [anon_sym_AT_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_AT_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_long_buffer] = ACTIONS(215),
    [sym_long_string] = ACTIONS(215),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [aux_sym_keyword_token1] = ACTIONS(219),
    [sym_nil] = ACTIONS(221),
    [sym__dec] = ACTIONS(221),
    [sym__hex] = ACTIONS(221),
    [sym__radix] = ACTIONS(221),
    [sym_string] = ACTIONS(219),
    [sym_buffer] = ACTIONS(219),
    [sym_symbol] = ACTIONS(221),
    [anon_sym_AT_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_AT_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_AT_LBRACE] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_long_buffer] = ACTIONS(219),
    [sym_long_string] = ACTIONS(219),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(225),
    [aux_sym_keyword_token1] = ACTIONS(223),
    [sym_nil] = ACTIONS(225),
    [sym__dec] = ACTIONS(225),
    [sym__hex] = ACTIONS(225),
    [sym__radix] = ACTIONS(225),
    [sym_string] = ACTIONS(223),
    [sym_buffer] = ACTIONS(223),
    [sym_symbol] = ACTIONS(225),
    [anon_sym_AT_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_AT_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_AT_LBRACE] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_long_buffer] = ACTIONS(223),
    [sym_long_string] = ACTIONS(223),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [aux_sym_keyword_token1] = ACTIONS(227),
    [sym_nil] = ACTIONS(229),
    [sym__dec] = ACTIONS(229),
    [sym__hex] = ACTIONS(229),
    [sym__radix] = ACTIONS(229),
    [sym_string] = ACTIONS(227),
    [sym_buffer] = ACTIONS(227),
    [sym_symbol] = ACTIONS(229),
    [anon_sym_AT_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_AT_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_AT_LBRACE] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_long_buffer] = ACTIONS(227),
    [sym_long_string] = ACTIONS(227),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [aux_sym_keyword_token1] = ACTIONS(231),
    [sym_nil] = ACTIONS(233),
    [sym__dec] = ACTIONS(233),
    [sym__hex] = ACTIONS(233),
    [sym__radix] = ACTIONS(233),
    [sym_string] = ACTIONS(231),
    [sym_buffer] = ACTIONS(231),
    [sym_symbol] = ACTIONS(233),
    [anon_sym_AT_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_AT_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_AT_LBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [sym_long_buffer] = ACTIONS(231),
    [sym_long_string] = ACTIONS(231),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(237),
    [aux_sym_keyword_token1] = ACTIONS(235),
    [sym_nil] = ACTIONS(237),
    [sym__dec] = ACTIONS(237),
    [sym__hex] = ACTIONS(237),
    [sym__radix] = ACTIONS(237),
    [sym_string] = ACTIONS(235),
    [sym_buffer] = ACTIONS(235),
    [sym_symbol] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_AT_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_AT_LBRACE] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_long_buffer] = ACTIONS(235),
    [sym_long_string] = ACTIONS(235),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(241),
    [aux_sym_keyword_token1] = ACTIONS(239),
    [sym_nil] = ACTIONS(241),
    [sym__dec] = ACTIONS(241),
    [sym__hex] = ACTIONS(241),
    [sym__radix] = ACTIONS(241),
    [sym_string] = ACTIONS(239),
    [sym_buffer] = ACTIONS(239),
    [sym_symbol] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [sym_long_buffer] = ACTIONS(239),
    [sym_long_string] = ACTIONS(239),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(23),
  [9] = {.count = 1, .reusable = true}, SHIFT(34),
  [11] = {.count = 1, .reusable = false}, SHIFT(12),
  [13] = {.count = 1, .reusable = false}, SHIFT(28),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, SHIFT(3),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(23),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [89] = {.count = 1, .reusable = false}, SHIFT(15),
  [91] = {.count = 1, .reusable = true}, SHIFT(15),
  [93] = {.count = 1, .reusable = true}, SHIFT(27),
  [95] = {.count = 1, .reusable = false}, SHIFT(2),
  [97] = {.count = 1, .reusable = true}, SHIFT(2),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
  [101] = {.count = 1, .reusable = false}, SHIFT(14),
  [103] = {.count = 1, .reusable = true}, SHIFT(14),
  [105] = {.count = 1, .reusable = true}, SHIFT(25),
  [107] = {.count = 1, .reusable = false}, SHIFT(10),
  [109] = {.count = 1, .reusable = true}, SHIFT(10),
  [111] = {.count = 1, .reusable = true}, SHIFT(21),
  [113] = {.count = 1, .reusable = false}, SHIFT(13),
  [115] = {.count = 1, .reusable = true}, SHIFT(13),
  [117] = {.count = 1, .reusable = true}, SHIFT(22),
  [119] = {.count = 1, .reusable = false}, SHIFT(11),
  [121] = {.count = 1, .reusable = true}, SHIFT(11),
  [123] = {.count = 1, .reusable = true}, SHIFT(24),
  [125] = {.count = 1, .reusable = false}, SHIFT(4),
  [127] = {.count = 1, .reusable = true}, SHIFT(4),
  [129] = {.count = 1, .reusable = true}, SHIFT(26),
  [131] = {.count = 1, .reusable = true}, SHIFT(36),
  [133] = {.count = 1, .reusable = true}, SHIFT(38),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_source, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(37),
  [139] = {.count = 1, .reusable = true}, SHIFT(35),
  [141] = {.count = 1, .reusable = true}, SHIFT(40),
  [143] = {.count = 1, .reusable = false}, SHIFT(29),
  [145] = {.count = 1, .reusable = true}, SHIFT(29),
  [147] = {.count = 1, .reusable = false}, SHIFT(30),
  [149] = {.count = 1, .reusable = true}, SHIFT(30),
  [151] = {.count = 1, .reusable = false}, SHIFT(31),
  [153] = {.count = 1, .reusable = true}, SHIFT(31),
  [155] = {.count = 1, .reusable = false}, SHIFT(32),
  [157] = {.count = 1, .reusable = true}, SHIFT(32),
  [159] = {.count = 1, .reusable = false}, SHIFT(33),
  [161] = {.count = 1, .reusable = true}, SHIFT(33),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_array, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_array, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_table, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_table, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_tuple, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_tuple, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_quasi_quote_form, 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_quasi_quote_form, 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_quote_form, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_quote_form, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_form, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_form, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_splice_form, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_splice_form, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_form, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_form, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_array, 3),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_array, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_tuple, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_tuple, 3),
  [243] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_janet_simple_external_scanner_create(void);
void tree_sitter_janet_simple_external_scanner_destroy(void *);
bool tree_sitter_janet_simple_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_janet_simple_external_scanner_serialize(void *, char *);
void tree_sitter_janet_simple_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_janet_simple(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_janet_simple_external_scanner_create,
      tree_sitter_janet_simple_external_scanner_destroy,
      tree_sitter_janet_simple_external_scanner_scan,
      tree_sitter_janet_simple_external_scanner_serialize,
      tree_sitter_janet_simple_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
