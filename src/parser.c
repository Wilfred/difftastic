#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 123
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_POUND = 4,
  anon_sym_POUND_SEMI = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUNDt = 7,
  anon_sym_POUNDf = 8,
  anon_sym_POUNDT = 9,
  anon_sym_POUNDF = 10,
  sym_character = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym_escape_sequence = 14,
  sym_number = 15,
  sym_symbol = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_DOT = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_COMMA = 25,
  anon_sym_COMMA_AT = 26,
  anon_sym_POUND_SQUOTE = 27,
  anon_sym_POUND_BQUOTE = 28,
  anon_sym_POUND_COMMA = 29,
  anon_sym_POUND_COMMA_AT = 30,
  anon_sym_SQUOTE = 31,
  anon_sym_quote = 32,
  anon_sym_POUND_LPAREN = 33,
  anon_sym_POUNDvu8_LPAREN = 34,
  anon_sym_define = 35,
  anon_sym_if = 36,
  sym_program = 37,
  sym__datum = 38,
  sym_comment = 39,
  sym_directive = 40,
  sym__simple_datum = 41,
  sym_boolean = 42,
  sym_string = 43,
  sym__compound_datum = 44,
  sym_list = 45,
  sym__abbreviation = 46,
  sym__abbreviation_prefix = 47,
  sym__special_form = 48,
  sym_quote = 49,
  sym_vector = 50,
  sym_byte_vector = 51,
  sym_if_expr = 52,
  sym_if_test = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_byte_vector_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUNDT] = "#T",
  [anon_sym_POUNDF] = "#F",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_quote] = "quote",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [anon_sym_define] = "define",
  [anon_sym_if] = "if",
  [sym_program] = "program",
  [sym__datum] = "_datum",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym__simple_datum] = "_simple_datum",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
  [sym__abbreviation] = "_abbreviation",
  [sym__abbreviation_prefix] = "_abbreviation_prefix",
  [sym__special_form] = "_special_form",
  [sym_quote] = "quote",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [sym_if_expr] = "if_expr",
  [sym_if_test] = "if_test",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_byte_vector_repeat1] = "byte_vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUNDT] = anon_sym_POUNDT,
  [anon_sym_POUNDF] = anon_sym_POUNDF,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_if] = anon_sym_if,
  [sym_program] = sym_program,
  [sym__datum] = sym__datum,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym__simple_datum] = sym__simple_datum,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
  [sym__abbreviation] = sym__abbreviation,
  [sym__abbreviation_prefix] = sym__abbreviation_prefix,
  [sym__special_form] = sym__special_form,
  [sym_quote] = sym_quote,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [sym_if_expr] = sym_if_expr,
  [sym_if_test] = sym_if_test,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_byte_vector_repeat1] = aux_sym_byte_vector_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDF] = {
    .visible = true,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__abbreviation] = {
    .visible = false,
    .named = true,
  },
  [sym__abbreviation_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__special_form] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_if_test] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_vector_repeat1] = {
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

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(110);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead == '}') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(151)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '|') ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead == '}') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead == '}') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(114);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(144);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(144);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(9);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '|') ADVANCE(161);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(18);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '@') ADVANCE(268);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(297);
      END_STATE();
    case 26:
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(268);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(189);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(250);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(253);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(257);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ';') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(183);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'x') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 115:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 116:
      if (lookahead == '|') ADVANCE(161);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 122:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 124:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(110);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead == '}') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(151)
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead == '}') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(152)
      if (('!' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '|') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '|') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(116);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(116);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '|') ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '|') ADVANCE(158);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_POUNDT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUNDF);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '+') ADVANCE(254);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(27);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == '|') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == '|') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '/') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '@') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '@') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(254);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(256);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '@') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '@') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(259);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(208);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(260);
      if (lookahead == '-') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(261);
      if (lookahead == '-') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(223);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(208);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(225);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(277);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 152},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 152},
  [23] = {.lex_state = 152},
  [24] = {.lex_state = 152},
  [25] = {.lex_state = 152},
  [26] = {.lex_state = 152},
  [27] = {.lex_state = 152},
  [28] = {.lex_state = 152},
  [29] = {.lex_state = 152},
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 152},
  [33] = {.lex_state = 152},
  [34] = {.lex_state = 152},
  [35] = {.lex_state = 152},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 152},
  [38] = {.lex_state = 152},
  [39] = {.lex_state = 152},
  [40] = {.lex_state = 152},
  [41] = {.lex_state = 152},
  [42] = {.lex_state = 152},
  [43] = {.lex_state = 152},
  [44] = {.lex_state = 152},
  [45] = {.lex_state = 152},
  [46] = {.lex_state = 152},
  [47] = {.lex_state = 152},
  [48] = {.lex_state = 152},
  [49] = {.lex_state = 152},
  [50] = {.lex_state = 152},
  [51] = {.lex_state = 152},
  [52] = {.lex_state = 152},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 152},
  [55] = {.lex_state = 152},
  [56] = {.lex_state = 152},
  [57] = {.lex_state = 152},
  [58] = {.lex_state = 152},
  [59] = {.lex_state = 152},
  [60] = {.lex_state = 152},
  [61] = {.lex_state = 152},
  [62] = {.lex_state = 152},
  [63] = {.lex_state = 152},
  [64] = {.lex_state = 152},
  [65] = {.lex_state = 152},
  [66] = {.lex_state = 152},
  [67] = {.lex_state = 152},
  [68] = {.lex_state = 152},
  [69] = {.lex_state = 152},
  [70] = {.lex_state = 152},
  [71] = {.lex_state = 152},
  [72] = {.lex_state = 152},
  [73] = {.lex_state = 152},
  [74] = {.lex_state = 152},
  [75] = {.lex_state = 152},
  [76] = {.lex_state = 152},
  [77] = {.lex_state = 152},
  [78] = {.lex_state = 152},
  [79] = {.lex_state = 152},
  [80] = {.lex_state = 152},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 152},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 152},
  [86] = {.lex_state = 152},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 152},
  [89] = {.lex_state = 152},
  [90] = {.lex_state = 152},
  [91] = {.lex_state = 152},
  [92] = {.lex_state = 152},
  [93] = {.lex_state = 152},
  [94] = {.lex_state = 152},
  [95] = {.lex_state = 152},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 152},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 152},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 152},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 152},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 152},
  [120] = {.lex_state = 152},
  [121] = {.lex_state = 152},
  [122] = {.lex_state = 152},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 152},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 152},
  [133] = {.lex_state = 152},
  [134] = {.lex_state = 152},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 152},
  [137] = {.lex_state = 152},
  [138] = {.lex_state = 152},
  [139] = {.lex_state = 152},
  [140] = {.lex_state = 152},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {(TSStateId)(-1)},
  [173] = {(TSStateId)(-1)},
  [174] = {(TSStateId)(-1)},
  [175] = {(TSStateId)(-1)},
  [176] = {(TSStateId)(-1)},
  [177] = {(TSStateId)(-1)},
  [178] = {(TSStateId)(-1)},
  [179] = {(TSStateId)(-1)},
  [180] = {(TSStateId)(-1)},
  [181] = {(TSStateId)(-1)},
  [182] = {(TSStateId)(-1)},
  [183] = {(TSStateId)(-1)},
  [184] = {(TSStateId)(-1)},
  [185] = {(TSStateId)(-1)},
  [186] = {(TSStateId)(-1)},
  [187] = {(TSStateId)(-1)},
  [188] = {(TSStateId)(-1)},
  [189] = {(TSStateId)(-1)},
  [190] = {(TSStateId)(-1)},
  [191] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_directive] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUNDT] = ACTIONS(1),
    [anon_sym_POUNDF] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(150),
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(1),
    [sym_directive] = STATE(1),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [2] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(37),
    [anon_sym_POUNDf] = ACTIONS(37),
    [anon_sym_POUNDT] = ACTIONS(37),
    [anon_sym_POUNDF] = ACTIONS(37),
    [sym_character] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_number] = ACTIONS(40),
    [sym_symbol] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_COMMA_AT] = ACTIONS(62),
    [anon_sym_POUND_SQUOTE] = ACTIONS(62),
    [anon_sym_POUND_BQUOTE] = ACTIONS(62),
    [anon_sym_POUND_COMMA] = ACTIONS(65),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_POUND_LPAREN] = ACTIONS(71),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(74),
  },
  [3] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(13),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(101),
  },
  [4] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(107),
  },
  [5] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(111),
  },
  [6] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(115),
  },
  [7] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(119),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(121),
  },
  [8] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(8),
    [sym_directive] = STATE(8),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(125),
  },
  [9] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(9),
    [sym_directive] = STATE(9),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(127),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(129),
  },
  [10] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(10),
    [sym_directive] = STATE(10),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(133),
  },
  [11] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(137),
  },
  [12] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [13] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [14] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [15] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [16] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(153),
    [anon_sym_POUNDf] = ACTIONS(153),
    [anon_sym_POUNDT] = ACTIONS(153),
    [anon_sym_POUNDF] = ACTIONS(153),
    [sym_character] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_number] = ACTIONS(156),
    [sym_symbol] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_COMMA_AT] = ACTIONS(62),
    [anon_sym_POUND_SQUOTE] = ACTIONS(62),
    [anon_sym_POUND_BQUOTE] = ACTIONS(62),
    [anon_sym_POUND_COMMA] = ACTIONS(65),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_POUND_LPAREN] = ACTIONS(177),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(180),
  },
  [17] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [18] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [19] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(19),
    [sym_directive] = STATE(19),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [20] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [21] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [22] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(25),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [23] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [24] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(24),
    [sym_directive] = STATE(24),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [25] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(25),
    [sym_directive] = STATE(25),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [26] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(26),
    [sym_directive] = STATE(26),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(23),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [27] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(27),
    [sym_directive] = STATE(27),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [28] = {
    [sym__datum] = STATE(122),
    [sym_comment] = STATE(28),
    [sym_directive] = STATE(28),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_program_repeat1] = STATE(27),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [29] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(29),
    [sym_directive] = STATE(29),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(57),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [30] = {
    [sym__datum] = STATE(146),
    [sym_comment] = STATE(30),
    [sym_directive] = STATE(30),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [31] = {
    [sym__datum] = STATE(145),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [32] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(32),
    [sym_directive] = STATE(32),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(53),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [33] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(33),
    [sym_directive] = STATE(33),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(69),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [34] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(34),
    [sym_directive] = STATE(34),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(64),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [35] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(35),
    [sym_directive] = STATE(35),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(65),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [36] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(56),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [37] = {
    [sym__datum] = STATE(144),
    [sym_comment] = STATE(37),
    [sym_directive] = STATE(37),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [38] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(60),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [39] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(39),
    [sym_directive] = STATE(39),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(78),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [40] = {
    [sym__datum] = STATE(165),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [41] = {
    [sym__datum] = STATE(166),
    [sym_comment] = STATE(41),
    [sym_directive] = STATE(41),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [42] = {
    [sym__datum] = STATE(124),
    [sym_comment] = STATE(42),
    [sym_directive] = STATE(42),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [sym_if_test] = STATE(72),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [43] = {
    [sym__datum] = STATE(167),
    [sym_comment] = STATE(43),
    [sym_directive] = STATE(43),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [44] = {
    [sym__datum] = STATE(168),
    [sym_comment] = STATE(44),
    [sym_directive] = STATE(44),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [45] = {
    [sym__datum] = STATE(169),
    [sym_comment] = STATE(45),
    [sym_directive] = STATE(45),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [46] = {
    [sym__datum] = STATE(170),
    [sym_comment] = STATE(46),
    [sym_directive] = STATE(46),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [47] = {
    [sym__datum] = STATE(155),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [48] = {
    [sym__datum] = STATE(160),
    [sym_comment] = STATE(48),
    [sym_directive] = STATE(48),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [49] = {
    [sym__datum] = STATE(83),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [50] = {
    [sym__datum] = STATE(142),
    [sym_comment] = STATE(50),
    [sym_directive] = STATE(50),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [51] = {
    [sym__datum] = STATE(143),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [52] = {
    [sym__datum] = STATE(110),
    [sym_comment] = STATE(52),
    [sym_directive] = STATE(52),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [53] = {
    [sym__datum] = STATE(46),
    [sym_comment] = STATE(53),
    [sym_directive] = STATE(53),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [54] = {
    [sym__datum] = STATE(107),
    [sym_comment] = STATE(54),
    [sym_directive] = STATE(54),
    [sym__simple_datum] = STATE(100),
    [sym_boolean] = STATE(98),
    [sym_string] = STATE(98),
    [sym__compound_datum] = STATE(100),
    [sym_list] = STATE(84),
    [sym__abbreviation] = STATE(97),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(84),
    [sym_quote] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [sym_if_expr] = STATE(104),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(77),
    [anon_sym_POUNDf] = ACTIONS(77),
    [anon_sym_POUNDT] = ACTIONS(77),
    [anon_sym_POUNDF] = ACTIONS(77),
    [sym_character] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_symbol] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(99),
  },
  [55] = {
    [sym__datum] = STATE(163),
    [sym_comment] = STATE(55),
    [sym_directive] = STATE(55),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [56] = {
    [sym__datum] = STATE(30),
    [sym_comment] = STATE(56),
    [sym_directive] = STATE(56),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [57] = {
    [sym__datum] = STATE(45),
    [sym_comment] = STATE(57),
    [sym_directive] = STATE(57),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [58] = {
    [sym__datum] = STATE(156),
    [sym_comment] = STATE(58),
    [sym_directive] = STATE(58),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [59] = {
    [sym__datum] = STATE(161),
    [sym_comment] = STATE(59),
    [sym_directive] = STATE(59),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [60] = {
    [sym__datum] = STATE(44),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [61] = {
    [sym__datum] = STATE(171),
    [sym_comment] = STATE(61),
    [sym_directive] = STATE(61),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [62] = {
    [sym__datum] = STATE(90),
    [sym_comment] = STATE(62),
    [sym_directive] = STATE(62),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [63] = {
    [sym__datum] = STATE(164),
    [sym_comment] = STATE(63),
    [sym_directive] = STATE(63),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [64] = {
    [sym__datum] = STATE(31),
    [sym_comment] = STATE(64),
    [sym_directive] = STATE(64),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [65] = {
    [sym__datum] = STATE(43),
    [sym_comment] = STATE(65),
    [sym_directive] = STATE(65),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [66] = {
    [sym__datum] = STATE(185),
    [sym_comment] = STATE(66),
    [sym_directive] = STATE(66),
    [sym__simple_datum] = STATE(185),
    [sym_boolean] = STATE(185),
    [sym_string] = STATE(185),
    [sym__compound_datum] = STATE(185),
    [sym_list] = STATE(185),
    [sym__abbreviation] = STATE(175),
    [sym__abbreviation_prefix] = STATE(80),
    [sym__special_form] = STATE(185),
    [sym_quote] = STATE(185),
    [sym_vector] = STATE(185),
    [sym_byte_vector] = STATE(185),
    [sym_if_expr] = STATE(185),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(213),
    [anon_sym_POUNDf] = ACTIONS(213),
    [anon_sym_POUNDT] = ACTIONS(213),
    [anon_sym_POUNDF] = ACTIONS(213),
    [sym_character] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [sym_number] = ACTIONS(215),
    [sym_symbol] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(229),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
  [67] = {
    [sym__datum] = STATE(154),
    [sym_comment] = STATE(67),
    [sym_directive] = STATE(67),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [68] = {
    [sym__datum] = STATE(162),
    [sym_comment] = STATE(68),
    [sym_directive] = STATE(68),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [69] = {
    [sym__datum] = STATE(37),
    [sym_comment] = STATE(69),
    [sym_directive] = STATE(69),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [70] = {
    [sym__datum] = STATE(141),
    [sym_comment] = STATE(70),
    [sym_directive] = STATE(70),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [71] = {
    [sym__datum] = STATE(153),
    [sym_comment] = STATE(71),
    [sym_directive] = STATE(71),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [72] = {
    [sym__datum] = STATE(41),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [73] = {
    [sym__datum] = STATE(152),
    [sym_comment] = STATE(73),
    [sym_directive] = STATE(73),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [74] = {
    [sym__datum] = STATE(157),
    [sym_comment] = STATE(74),
    [sym_directive] = STATE(74),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [75] = {
    [sym__datum] = STATE(149),
    [sym_comment] = STATE(75),
    [sym_directive] = STATE(75),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [76] = {
    [sym__datum] = STATE(158),
    [sym_comment] = STATE(76),
    [sym_directive] = STATE(76),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [77] = {
    [sym__datum] = STATE(159),
    [sym_comment] = STATE(77),
    [sym_directive] = STATE(77),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [78] = {
    [sym__datum] = STATE(40),
    [sym_comment] = STATE(78),
    [sym_directive] = STATE(78),
    [sym__simple_datum] = STATE(119),
    [sym_boolean] = STATE(120),
    [sym_string] = STATE(120),
    [sym__compound_datum] = STATE(119),
    [sym_list] = STATE(96),
    [sym__abbreviation] = STATE(95),
    [sym__abbreviation_prefix] = STATE(62),
    [sym__special_form] = STATE(96),
    [sym_quote] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_byte_vector] = STATE(93),
    [sym_if_expr] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [79] = {
    [sym__datum] = STATE(172),
    [sym_comment] = STATE(79),
    [sym_directive] = STATE(79),
    [sym__simple_datum] = STATE(172),
    [sym_boolean] = STATE(172),
    [sym_string] = STATE(172),
    [sym__compound_datum] = STATE(172),
    [sym_list] = STATE(172),
    [sym__abbreviation] = STATE(175),
    [sym__abbreviation_prefix] = STATE(80),
    [sym__special_form] = STATE(172),
    [sym_quote] = STATE(172),
    [sym_vector] = STATE(172),
    [sym_byte_vector] = STATE(172),
    [sym_if_expr] = STATE(172),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(213),
    [anon_sym_POUNDf] = ACTIONS(213),
    [anon_sym_POUNDT] = ACTIONS(213),
    [anon_sym_POUNDF] = ACTIONS(213),
    [sym_character] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [sym_number] = ACTIONS(233),
    [sym_symbol] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(229),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
  [80] = {
    [sym__datum] = STATE(187),
    [sym_comment] = STATE(80),
    [sym_directive] = STATE(80),
    [sym__simple_datum] = STATE(187),
    [sym_boolean] = STATE(187),
    [sym_string] = STATE(187),
    [sym__compound_datum] = STATE(187),
    [sym_list] = STATE(187),
    [sym__abbreviation] = STATE(175),
    [sym__abbreviation_prefix] = STATE(80),
    [sym__special_form] = STATE(187),
    [sym_quote] = STATE(187),
    [sym_vector] = STATE(187),
    [sym_byte_vector] = STATE(187),
    [sym_if_expr] = STATE(187),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(213),
    [anon_sym_POUNDf] = ACTIONS(213),
    [anon_sym_POUNDT] = ACTIONS(213),
    [anon_sym_POUNDF] = ACTIONS(213),
    [sym_character] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [sym_number] = ACTIONS(237),
    [sym_symbol] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(229),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
  [81] = {
    [sym_comment] = STATE(81),
    [sym_directive] = STATE(81),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(241),
    [anon_sym_POUNDf] = ACTIONS(241),
    [anon_sym_POUNDT] = ACTIONS(241),
    [anon_sym_POUNDF] = ACTIONS(241),
    [sym_character] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_number] = ACTIONS(241),
    [sym_symbol] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COMMA_AT] = ACTIONS(241),
    [anon_sym_POUND_SQUOTE] = ACTIONS(241),
    [anon_sym_POUND_BQUOTE] = ACTIONS(241),
    [anon_sym_POUND_COMMA] = ACTIONS(243),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_POUND_LPAREN] = ACTIONS(241),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(241),
  },
  [82] = {
    [sym_comment] = STATE(82),
    [sym_directive] = STATE(82),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(245),
    [anon_sym_POUNDf] = ACTIONS(245),
    [anon_sym_POUNDT] = ACTIONS(245),
    [anon_sym_POUNDF] = ACTIONS(245),
    [sym_character] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_number] = ACTIONS(245),
    [sym_symbol] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(245),
    [anon_sym_POUND_SQUOTE] = ACTIONS(245),
    [anon_sym_POUND_BQUOTE] = ACTIONS(245),
    [anon_sym_POUND_COMMA] = ACTIONS(247),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_POUND_LPAREN] = ACTIONS(245),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(245),
  },
  [83] = {
    [sym_comment] = STATE(83),
    [sym_directive] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(249),
    [anon_sym_POUNDf] = ACTIONS(249),
    [anon_sym_POUNDT] = ACTIONS(249),
    [anon_sym_POUNDF] = ACTIONS(249),
    [sym_character] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_symbol] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(249),
    [anon_sym_POUND_SQUOTE] = ACTIONS(249),
    [anon_sym_POUND_BQUOTE] = ACTIONS(249),
    [anon_sym_POUND_COMMA] = ACTIONS(251),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_POUND_LPAREN] = ACTIONS(249),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(249),
  },
  [84] = {
    [sym_comment] = STATE(84),
    [sym_directive] = STATE(84),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(253),
    [anon_sym_POUNDf] = ACTIONS(253),
    [anon_sym_POUNDT] = ACTIONS(253),
    [anon_sym_POUNDF] = ACTIONS(253),
    [sym_character] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_number] = ACTIONS(253),
    [sym_symbol] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(253),
    [anon_sym_POUND_SQUOTE] = ACTIONS(253),
    [anon_sym_POUND_BQUOTE] = ACTIONS(253),
    [anon_sym_POUND_COMMA] = ACTIONS(255),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_POUND_LPAREN] = ACTIONS(253),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(253),
  },
  [85] = {
    [sym_comment] = STATE(85),
    [sym_directive] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(257),
    [anon_sym_POUNDf] = ACTIONS(257),
    [anon_sym_POUNDT] = ACTIONS(257),
    [anon_sym_POUNDF] = ACTIONS(257),
    [sym_character] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [sym_number] = ACTIONS(257),
    [sym_symbol] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(257),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(257),
    [anon_sym_POUND_COMMA] = ACTIONS(259),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_LPAREN] = ACTIONS(257),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(257),
  },
  [86] = {
    [sym_comment] = STATE(86),
    [sym_directive] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(261),
    [anon_sym_POUNDf] = ACTIONS(261),
    [anon_sym_POUNDT] = ACTIONS(261),
    [anon_sym_POUNDF] = ACTIONS(261),
    [sym_character] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_number] = ACTIONS(261),
    [sym_symbol] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_COMMA_AT] = ACTIONS(261),
    [anon_sym_POUND_SQUOTE] = ACTIONS(261),
    [anon_sym_POUND_BQUOTE] = ACTIONS(261),
    [anon_sym_POUND_COMMA] = ACTIONS(263),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_POUND_LPAREN] = ACTIONS(261),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(261),
  },
  [87] = {
    [sym_comment] = STATE(87),
    [sym_directive] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(265),
    [anon_sym_POUNDf] = ACTIONS(265),
    [anon_sym_POUNDT] = ACTIONS(265),
    [anon_sym_POUNDF] = ACTIONS(265),
    [sym_character] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_number] = ACTIONS(265),
    [sym_symbol] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_COMMA_AT] = ACTIONS(265),
    [anon_sym_POUND_SQUOTE] = ACTIONS(265),
    [anon_sym_POUND_BQUOTE] = ACTIONS(265),
    [anon_sym_POUND_COMMA] = ACTIONS(267),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_POUND_LPAREN] = ACTIONS(265),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(265),
  },
  [88] = {
    [sym_comment] = STATE(88),
    [sym_directive] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(269),
    [anon_sym_POUNDf] = ACTIONS(269),
    [anon_sym_POUNDT] = ACTIONS(269),
    [anon_sym_POUNDF] = ACTIONS(269),
    [sym_character] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [sym_number] = ACTIONS(269),
    [sym_symbol] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_COMMA_AT] = ACTIONS(269),
    [anon_sym_POUND_SQUOTE] = ACTIONS(269),
    [anon_sym_POUND_BQUOTE] = ACTIONS(269),
    [anon_sym_POUND_COMMA] = ACTIONS(271),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(269),
  },
  [89] = {
    [sym_comment] = STATE(89),
    [sym_directive] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(273),
    [anon_sym_POUNDf] = ACTIONS(273),
    [anon_sym_POUNDT] = ACTIONS(273),
    [anon_sym_POUNDF] = ACTIONS(273),
    [sym_character] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_number] = ACTIONS(273),
    [sym_symbol] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(273),
    [anon_sym_POUND_SQUOTE] = ACTIONS(273),
    [anon_sym_POUND_BQUOTE] = ACTIONS(273),
    [anon_sym_POUND_COMMA] = ACTIONS(275),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_POUND_LPAREN] = ACTIONS(273),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(273),
  },
  [90] = {
    [sym_comment] = STATE(90),
    [sym_directive] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(277),
    [anon_sym_POUNDf] = ACTIONS(277),
    [anon_sym_POUNDT] = ACTIONS(277),
    [anon_sym_POUNDF] = ACTIONS(277),
    [sym_character] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_number] = ACTIONS(277),
    [sym_symbol] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_COMMA_AT] = ACTIONS(277),
    [anon_sym_POUND_SQUOTE] = ACTIONS(277),
    [anon_sym_POUND_BQUOTE] = ACTIONS(277),
    [anon_sym_POUND_COMMA] = ACTIONS(279),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_POUND_LPAREN] = ACTIONS(277),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(277),
  },
  [91] = {
    [sym_comment] = STATE(91),
    [sym_directive] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(281),
    [anon_sym_POUNDf] = ACTIONS(281),
    [anon_sym_POUNDT] = ACTIONS(281),
    [anon_sym_POUNDF] = ACTIONS(281),
    [sym_character] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym_number] = ACTIONS(281),
    [sym_symbol] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COMMA_AT] = ACTIONS(281),
    [anon_sym_POUND_SQUOTE] = ACTIONS(281),
    [anon_sym_POUND_BQUOTE] = ACTIONS(281),
    [anon_sym_POUND_COMMA] = ACTIONS(283),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_POUND_LPAREN] = ACTIONS(281),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(281),
  },
  [92] = {
    [sym_comment] = STATE(92),
    [sym_directive] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(241),
    [anon_sym_POUNDf] = ACTIONS(241),
    [anon_sym_POUNDT] = ACTIONS(241),
    [anon_sym_POUNDF] = ACTIONS(241),
    [sym_character] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_number] = ACTIONS(241),
    [sym_symbol] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COMMA_AT] = ACTIONS(241),
    [anon_sym_POUND_SQUOTE] = ACTIONS(241),
    [anon_sym_POUND_BQUOTE] = ACTIONS(241),
    [anon_sym_POUND_COMMA] = ACTIONS(243),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_POUND_LPAREN] = ACTIONS(241),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(241),
  },
  [93] = {
    [sym_comment] = STATE(93),
    [sym_directive] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(285),
    [anon_sym_POUNDf] = ACTIONS(285),
    [anon_sym_POUNDT] = ACTIONS(285),
    [anon_sym_POUNDF] = ACTIONS(285),
    [sym_character] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [sym_number] = ACTIONS(285),
    [sym_symbol] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_COMMA_AT] = ACTIONS(285),
    [anon_sym_POUND_SQUOTE] = ACTIONS(285),
    [anon_sym_POUND_BQUOTE] = ACTIONS(285),
    [anon_sym_POUND_COMMA] = ACTIONS(287),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_POUND_LPAREN] = ACTIONS(285),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(285),
  },
  [94] = {
    [sym_comment] = STATE(94),
    [sym_directive] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(289),
    [anon_sym_POUNDf] = ACTIONS(289),
    [anon_sym_POUNDT] = ACTIONS(289),
    [anon_sym_POUNDF] = ACTIONS(289),
    [sym_character] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_number] = ACTIONS(289),
    [sym_symbol] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(289),
    [anon_sym_POUND_SQUOTE] = ACTIONS(289),
    [anon_sym_POUND_BQUOTE] = ACTIONS(289),
    [anon_sym_POUND_COMMA] = ACTIONS(291),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_POUND_LPAREN] = ACTIONS(289),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(289),
  },
  [95] = {
    [sym_comment] = STATE(95),
    [sym_directive] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(293),
    [anon_sym_POUNDf] = ACTIONS(293),
    [anon_sym_POUNDT] = ACTIONS(293),
    [anon_sym_POUNDF] = ACTIONS(293),
    [sym_character] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [sym_number] = ACTIONS(293),
    [sym_symbol] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_COMMA_AT] = ACTIONS(293),
    [anon_sym_POUND_SQUOTE] = ACTIONS(293),
    [anon_sym_POUND_BQUOTE] = ACTIONS(293),
    [anon_sym_POUND_COMMA] = ACTIONS(295),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_POUND_LPAREN] = ACTIONS(293),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(293),
  },
  [96] = {
    [sym_comment] = STATE(96),
    [sym_directive] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(253),
    [anon_sym_POUNDf] = ACTIONS(253),
    [anon_sym_POUNDT] = ACTIONS(253),
    [anon_sym_POUNDF] = ACTIONS(253),
    [sym_character] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_number] = ACTIONS(253),
    [sym_symbol] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_COMMA_AT] = ACTIONS(253),
    [anon_sym_POUND_SQUOTE] = ACTIONS(253),
    [anon_sym_POUND_BQUOTE] = ACTIONS(253),
    [anon_sym_POUND_COMMA] = ACTIONS(255),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_POUND_LPAREN] = ACTIONS(253),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(253),
  },
  [97] = {
    [sym_comment] = STATE(97),
    [sym_directive] = STATE(97),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(293),
    [anon_sym_POUNDf] = ACTIONS(293),
    [anon_sym_POUNDT] = ACTIONS(293),
    [anon_sym_POUNDF] = ACTIONS(293),
    [sym_character] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [sym_number] = ACTIONS(293),
    [sym_symbol] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_COMMA_AT] = ACTIONS(293),
    [anon_sym_POUND_SQUOTE] = ACTIONS(293),
    [anon_sym_POUND_BQUOTE] = ACTIONS(293),
    [anon_sym_POUND_COMMA] = ACTIONS(295),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_POUND_LPAREN] = ACTIONS(293),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(293),
  },
  [98] = {
    [sym_comment] = STATE(98),
    [sym_directive] = STATE(98),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(297),
    [anon_sym_POUNDf] = ACTIONS(297),
    [anon_sym_POUNDT] = ACTIONS(297),
    [anon_sym_POUNDF] = ACTIONS(297),
    [sym_character] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_number] = ACTIONS(297),
    [sym_symbol] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_COMMA_AT] = ACTIONS(297),
    [anon_sym_POUND_SQUOTE] = ACTIONS(297),
    [anon_sym_POUND_BQUOTE] = ACTIONS(297),
    [anon_sym_POUND_COMMA] = ACTIONS(299),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_POUND_LPAREN] = ACTIONS(297),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(297),
  },
  [99] = {
    [sym_comment] = STATE(99),
    [sym_directive] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(301),
    [anon_sym_POUNDf] = ACTIONS(301),
    [anon_sym_POUNDT] = ACTIONS(301),
    [anon_sym_POUNDF] = ACTIONS(301),
    [sym_character] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_COMMA_AT] = ACTIONS(301),
    [anon_sym_POUND_SQUOTE] = ACTIONS(301),
    [anon_sym_POUND_BQUOTE] = ACTIONS(301),
    [anon_sym_POUND_COMMA] = ACTIONS(303),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_POUND_LPAREN] = ACTIONS(301),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(301),
  },
  [100] = {
    [sym_comment] = STATE(100),
    [sym_directive] = STATE(100),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(305),
    [anon_sym_POUNDf] = ACTIONS(305),
    [anon_sym_POUNDT] = ACTIONS(305),
    [anon_sym_POUNDF] = ACTIONS(305),
    [sym_character] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [sym_number] = ACTIONS(305),
    [sym_symbol] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_COMMA_AT] = ACTIONS(305),
    [anon_sym_POUND_SQUOTE] = ACTIONS(305),
    [anon_sym_POUND_BQUOTE] = ACTIONS(305),
    [anon_sym_POUND_COMMA] = ACTIONS(307),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_POUND_LPAREN] = ACTIONS(305),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(305),
  },
  [101] = {
    [sym_comment] = STATE(101),
    [sym_directive] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(309),
    [anon_sym_POUNDf] = ACTIONS(309),
    [anon_sym_POUNDT] = ACTIONS(309),
    [anon_sym_POUNDF] = ACTIONS(309),
    [sym_character] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_number] = ACTIONS(309),
    [sym_symbol] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_COMMA_AT] = ACTIONS(309),
    [anon_sym_POUND_SQUOTE] = ACTIONS(309),
    [anon_sym_POUND_BQUOTE] = ACTIONS(309),
    [anon_sym_POUND_COMMA] = ACTIONS(311),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_POUND_LPAREN] = ACTIONS(309),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(309),
  },
  [102] = {
    [sym_comment] = STATE(102),
    [sym_directive] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(313),
    [anon_sym_POUNDf] = ACTIONS(313),
    [anon_sym_POUNDT] = ACTIONS(313),
    [anon_sym_POUNDF] = ACTIONS(313),
    [sym_character] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_number] = ACTIONS(313),
    [sym_symbol] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COMMA_AT] = ACTIONS(313),
    [anon_sym_POUND_SQUOTE] = ACTIONS(313),
    [anon_sym_POUND_BQUOTE] = ACTIONS(313),
    [anon_sym_POUND_COMMA] = ACTIONS(315),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_POUND_LPAREN] = ACTIONS(313),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(313),
  },
  [103] = {
    [sym_comment] = STATE(103),
    [sym_directive] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(245),
    [anon_sym_POUNDf] = ACTIONS(245),
    [anon_sym_POUNDT] = ACTIONS(245),
    [anon_sym_POUNDF] = ACTIONS(245),
    [sym_character] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_number] = ACTIONS(245),
    [sym_symbol] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COMMA_AT] = ACTIONS(245),
    [anon_sym_POUND_SQUOTE] = ACTIONS(245),
    [anon_sym_POUND_BQUOTE] = ACTIONS(245),
    [anon_sym_POUND_COMMA] = ACTIONS(247),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_POUND_LPAREN] = ACTIONS(245),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(245),
  },
  [104] = {
    [sym_comment] = STATE(104),
    [sym_directive] = STATE(104),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(285),
    [anon_sym_POUNDf] = ACTIONS(285),
    [anon_sym_POUNDT] = ACTIONS(285),
    [anon_sym_POUNDF] = ACTIONS(285),
    [sym_character] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [sym_number] = ACTIONS(285),
    [sym_symbol] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_COMMA_AT] = ACTIONS(285),
    [anon_sym_POUND_SQUOTE] = ACTIONS(285),
    [anon_sym_POUND_BQUOTE] = ACTIONS(285),
    [anon_sym_POUND_COMMA] = ACTIONS(287),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_POUND_LPAREN] = ACTIONS(285),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(285),
  },
  [105] = {
    [sym_comment] = STATE(105),
    [sym_directive] = STATE(105),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(273),
    [anon_sym_POUNDf] = ACTIONS(273),
    [anon_sym_POUNDT] = ACTIONS(273),
    [anon_sym_POUNDF] = ACTIONS(273),
    [sym_character] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_number] = ACTIONS(273),
    [sym_symbol] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(273),
    [anon_sym_POUND_SQUOTE] = ACTIONS(273),
    [anon_sym_POUND_BQUOTE] = ACTIONS(273),
    [anon_sym_POUND_COMMA] = ACTIONS(275),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_POUND_LPAREN] = ACTIONS(273),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(273),
  },
  [106] = {
    [sym_comment] = STATE(106),
    [sym_directive] = STATE(106),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(261),
    [anon_sym_POUNDf] = ACTIONS(261),
    [anon_sym_POUNDT] = ACTIONS(261),
    [anon_sym_POUNDF] = ACTIONS(261),
    [sym_character] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_number] = ACTIONS(261),
    [sym_symbol] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_COMMA_AT] = ACTIONS(261),
    [anon_sym_POUND_SQUOTE] = ACTIONS(261),
    [anon_sym_POUND_BQUOTE] = ACTIONS(261),
    [anon_sym_POUND_COMMA] = ACTIONS(263),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_POUND_LPAREN] = ACTIONS(261),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(261),
  },
  [107] = {
    [sym_comment] = STATE(107),
    [sym_directive] = STATE(107),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(249),
    [anon_sym_POUNDf] = ACTIONS(249),
    [anon_sym_POUNDT] = ACTIONS(249),
    [anon_sym_POUNDF] = ACTIONS(249),
    [sym_character] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_number] = ACTIONS(249),
    [sym_symbol] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_COMMA_AT] = ACTIONS(249),
    [anon_sym_POUND_SQUOTE] = ACTIONS(249),
    [anon_sym_POUND_BQUOTE] = ACTIONS(249),
    [anon_sym_POUND_COMMA] = ACTIONS(251),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_POUND_LPAREN] = ACTIONS(249),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(249),
  },
  [108] = {
    [sym_comment] = STATE(108),
    [sym_directive] = STATE(108),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(317),
    [anon_sym_POUNDf] = ACTIONS(317),
    [anon_sym_POUNDT] = ACTIONS(317),
    [anon_sym_POUNDF] = ACTIONS(317),
    [sym_character] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_number] = ACTIONS(317),
    [sym_symbol] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_COMMA_AT] = ACTIONS(317),
    [anon_sym_POUND_SQUOTE] = ACTIONS(317),
    [anon_sym_POUND_BQUOTE] = ACTIONS(317),
    [anon_sym_POUND_COMMA] = ACTIONS(319),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_POUND_LPAREN] = ACTIONS(317),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(317),
  },
  [109] = {
    [sym_comment] = STATE(109),
    [sym_directive] = STATE(109),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(257),
    [anon_sym_POUNDf] = ACTIONS(257),
    [anon_sym_POUNDT] = ACTIONS(257),
    [anon_sym_POUNDF] = ACTIONS(257),
    [sym_character] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [sym_number] = ACTIONS(257),
    [sym_symbol] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_COMMA_AT] = ACTIONS(257),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(257),
    [anon_sym_POUND_COMMA] = ACTIONS(259),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_LPAREN] = ACTIONS(257),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(257),
  },
  [110] = {
    [sym_comment] = STATE(110),
    [sym_directive] = STATE(110),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(277),
    [anon_sym_POUNDf] = ACTIONS(277),
    [anon_sym_POUNDT] = ACTIONS(277),
    [anon_sym_POUNDF] = ACTIONS(277),
    [sym_character] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_number] = ACTIONS(277),
    [sym_symbol] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_COMMA_AT] = ACTIONS(277),
    [anon_sym_POUND_SQUOTE] = ACTIONS(277),
    [anon_sym_POUND_BQUOTE] = ACTIONS(277),
    [anon_sym_POUND_COMMA] = ACTIONS(279),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_POUND_LPAREN] = ACTIONS(277),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(277),
  },
  [111] = {
    [sym_comment] = STATE(111),
    [sym_directive] = STATE(111),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(321),
    [anon_sym_POUNDf] = ACTIONS(321),
    [anon_sym_POUNDT] = ACTIONS(321),
    [anon_sym_POUNDF] = ACTIONS(321),
    [sym_character] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym_number] = ACTIONS(321),
    [sym_symbol] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_COMMA_AT] = ACTIONS(321),
    [anon_sym_POUND_SQUOTE] = ACTIONS(321),
    [anon_sym_POUND_BQUOTE] = ACTIONS(321),
    [anon_sym_POUND_COMMA] = ACTIONS(323),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_POUND_LPAREN] = ACTIONS(321),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(321),
  },
  [112] = {
    [sym_comment] = STATE(112),
    [sym_directive] = STATE(112),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(301),
    [anon_sym_POUNDf] = ACTIONS(301),
    [anon_sym_POUNDT] = ACTIONS(301),
    [anon_sym_POUNDF] = ACTIONS(301),
    [sym_character] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_COMMA_AT] = ACTIONS(301),
    [anon_sym_POUND_SQUOTE] = ACTIONS(301),
    [anon_sym_POUND_BQUOTE] = ACTIONS(301),
    [anon_sym_POUND_COMMA] = ACTIONS(303),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_POUND_LPAREN] = ACTIONS(301),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(301),
  },
  [113] = {
    [sym_comment] = STATE(113),
    [sym_directive] = STATE(113),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(289),
    [anon_sym_POUNDf] = ACTIONS(289),
    [anon_sym_POUNDT] = ACTIONS(289),
    [anon_sym_POUNDF] = ACTIONS(289),
    [sym_character] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_number] = ACTIONS(289),
    [sym_symbol] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(289),
    [anon_sym_POUND_SQUOTE] = ACTIONS(289),
    [anon_sym_POUND_BQUOTE] = ACTIONS(289),
    [anon_sym_POUND_COMMA] = ACTIONS(291),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_POUND_LPAREN] = ACTIONS(289),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(289),
  },
  [114] = {
    [sym_comment] = STATE(114),
    [sym_directive] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(317),
    [anon_sym_POUNDf] = ACTIONS(317),
    [anon_sym_POUNDT] = ACTIONS(317),
    [anon_sym_POUNDF] = ACTIONS(317),
    [sym_character] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_number] = ACTIONS(317),
    [sym_symbol] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_COMMA_AT] = ACTIONS(317),
    [anon_sym_POUND_SQUOTE] = ACTIONS(317),
    [anon_sym_POUND_BQUOTE] = ACTIONS(317),
    [anon_sym_POUND_COMMA] = ACTIONS(319),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_POUND_LPAREN] = ACTIONS(317),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(317),
  },
  [115] = {
    [sym_comment] = STATE(115),
    [sym_directive] = STATE(115),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(281),
    [anon_sym_POUNDf] = ACTIONS(281),
    [anon_sym_POUNDT] = ACTIONS(281),
    [anon_sym_POUNDF] = ACTIONS(281),
    [sym_character] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym_number] = ACTIONS(281),
    [sym_symbol] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_COMMA_AT] = ACTIONS(281),
    [anon_sym_POUND_SQUOTE] = ACTIONS(281),
    [anon_sym_POUND_BQUOTE] = ACTIONS(281),
    [anon_sym_POUND_COMMA] = ACTIONS(283),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_POUND_LPAREN] = ACTIONS(281),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(281),
  },
  [116] = {
    [sym_comment] = STATE(116),
    [sym_directive] = STATE(116),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(269),
    [anon_sym_POUNDf] = ACTIONS(269),
    [anon_sym_POUNDT] = ACTIONS(269),
    [anon_sym_POUNDF] = ACTIONS(269),
    [sym_character] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [sym_number] = ACTIONS(269),
    [sym_symbol] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_COMMA_AT] = ACTIONS(269),
    [anon_sym_POUND_SQUOTE] = ACTIONS(269),
    [anon_sym_POUND_BQUOTE] = ACTIONS(269),
    [anon_sym_POUND_COMMA] = ACTIONS(271),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(269),
  },
  [117] = {
    [sym_comment] = STATE(117),
    [sym_directive] = STATE(117),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(265),
    [anon_sym_POUNDf] = ACTIONS(265),
    [anon_sym_POUNDT] = ACTIONS(265),
    [anon_sym_POUNDF] = ACTIONS(265),
    [sym_character] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_number] = ACTIONS(265),
    [sym_symbol] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_COMMA_AT] = ACTIONS(265),
    [anon_sym_POUND_SQUOTE] = ACTIONS(265),
    [anon_sym_POUND_BQUOTE] = ACTIONS(265),
    [anon_sym_POUND_COMMA] = ACTIONS(267),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_POUND_LPAREN] = ACTIONS(265),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(265),
  },
  [118] = {
    [sym_comment] = STATE(118),
    [sym_directive] = STATE(118),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(309),
    [anon_sym_POUNDf] = ACTIONS(309),
    [anon_sym_POUNDT] = ACTIONS(309),
    [anon_sym_POUNDF] = ACTIONS(309),
    [sym_character] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_number] = ACTIONS(309),
    [sym_symbol] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_COMMA_AT] = ACTIONS(309),
    [anon_sym_POUND_SQUOTE] = ACTIONS(309),
    [anon_sym_POUND_BQUOTE] = ACTIONS(309),
    [anon_sym_POUND_COMMA] = ACTIONS(311),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_POUND_LPAREN] = ACTIONS(309),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(309),
  },
  [119] = {
    [sym_comment] = STATE(119),
    [sym_directive] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(305),
    [anon_sym_POUNDf] = ACTIONS(305),
    [anon_sym_POUNDT] = ACTIONS(305),
    [anon_sym_POUNDF] = ACTIONS(305),
    [sym_character] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [sym_number] = ACTIONS(305),
    [sym_symbol] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_COMMA_AT] = ACTIONS(305),
    [anon_sym_POUND_SQUOTE] = ACTIONS(305),
    [anon_sym_POUND_BQUOTE] = ACTIONS(305),
    [anon_sym_POUND_COMMA] = ACTIONS(307),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_POUND_LPAREN] = ACTIONS(305),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(305),
  },
  [120] = {
    [sym_comment] = STATE(120),
    [sym_directive] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(297),
    [anon_sym_POUNDf] = ACTIONS(297),
    [anon_sym_POUNDT] = ACTIONS(297),
    [anon_sym_POUNDF] = ACTIONS(297),
    [sym_character] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_number] = ACTIONS(297),
    [sym_symbol] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_COMMA_AT] = ACTIONS(297),
    [anon_sym_POUND_SQUOTE] = ACTIONS(297),
    [anon_sym_POUND_BQUOTE] = ACTIONS(297),
    [anon_sym_POUND_COMMA] = ACTIONS(299),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_POUND_LPAREN] = ACTIONS(297),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(297),
  },
  [121] = {
    [sym_comment] = STATE(121),
    [sym_directive] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(321),
    [anon_sym_POUNDf] = ACTIONS(321),
    [anon_sym_POUNDT] = ACTIONS(321),
    [anon_sym_POUNDF] = ACTIONS(321),
    [sym_character] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym_number] = ACTIONS(321),
    [sym_symbol] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_COMMA_AT] = ACTIONS(321),
    [anon_sym_POUND_SQUOTE] = ACTIONS(321),
    [anon_sym_POUND_BQUOTE] = ACTIONS(321),
    [anon_sym_POUND_COMMA] = ACTIONS(323),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_POUND_LPAREN] = ACTIONS(321),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(321),
  },
  [122] = {
    [sym_comment] = STATE(122),
    [sym_directive] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(313),
    [anon_sym_POUNDf] = ACTIONS(313),
    [anon_sym_POUNDT] = ACTIONS(313),
    [anon_sym_POUNDF] = ACTIONS(313),
    [sym_character] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_number] = ACTIONS(313),
    [sym_symbol] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COMMA_AT] = ACTIONS(313),
    [anon_sym_POUND_SQUOTE] = ACTIONS(313),
    [anon_sym_POUND_BQUOTE] = ACTIONS(313),
    [anon_sym_POUND_COMMA] = ACTIONS(315),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_POUND_LPAREN] = ACTIONS(313),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(313),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    STATE(123), 2,
      sym_comment,
      sym_directive,
    ACTIONS(327), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(325), 18,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_SQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [42] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    STATE(124), 2,
      sym_comment,
      sym_directive,
    ACTIONS(331), 3,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(329), 18,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_SQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [84] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(125), 2,
      sym_comment,
      sym_directive,
  [111] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(126), 2,
      sym_comment,
      sym_directive,
  [138] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(127), 2,
      sym_comment,
      sym_directive,
  [165] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(128), 2,
      sym_comment,
      sym_directive,
  [192] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(129), 2,
      sym_comment,
      sym_directive,
  [219] = 7,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(130), 3,
      sym_comment,
      sym_directive,
      aux_sym_string_repeat1,
  [244] = 8,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(131), 2,
      sym_comment,
      sym_directive,
  [271] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_byte_vector_repeat1,
    STATE(132), 2,
      sym_comment,
      sym_directive,
  [297] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_byte_vector_repeat1,
    STATE(133), 2,
      sym_comment,
      sym_directive,
  [323] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_byte_vector_repeat1,
    STATE(134), 2,
      sym_comment,
      sym_directive,
  [349] = 7,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(135), 2,
      sym_comment,
      sym_directive,
  [373] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_byte_vector_repeat1,
    STATE(136), 2,
      sym_comment,
      sym_directive,
  [399] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(374), 1,
      sym_number,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(137), 3,
      sym_comment,
      sym_directive,
      aux_sym_byte_vector_repeat1,
  [423] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_byte_vector_repeat1,
    STATE(138), 2,
      sym_comment,
      sym_directive,
  [449] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_byte_vector_repeat1,
    STATE(139), 2,
      sym_comment,
      sym_directive,
  [475] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(383), 2,
      sym_number,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_comment,
      sym_directive,
  [496] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(141), 2,
      sym_comment,
      sym_directive,
  [516] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(142), 2,
      sym_comment,
      sym_directive,
  [536] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(143), 2,
      sym_comment,
      sym_directive,
  [556] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(144), 2,
      sym_comment,
      sym_directive,
  [576] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(145), 2,
      sym_comment,
      sym_directive,
  [596] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(146), 2,
      sym_comment,
      sym_directive,
  [616] = 6,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(337), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(339), 1,
      anon_sym_POUND_BANG,
    ACTIONS(391), 1,
      aux_sym_comment_token2,
    STATE(147), 2,
      sym_comment,
      sym_directive,
  [636] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(393), 1,
      sym_symbol,
    STATE(148), 2,
      sym_comment,
      sym_directive,
  [656] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(149), 2,
      sym_comment,
      sym_directive,
  [676] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    STATE(150), 2,
      sym_comment,
      sym_directive,
  [696] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(399), 1,
      anon_sym_POUND,
    STATE(151), 2,
      sym_comment,
      sym_directive,
  [716] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(152), 2,
      sym_comment,
      sym_directive,
  [736] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(153), 2,
      sym_comment,
      sym_directive,
  [756] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(154), 2,
      sym_comment,
      sym_directive,
  [776] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(155), 2,
      sym_comment,
      sym_directive,
  [796] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(156), 2,
      sym_comment,
      sym_directive,
  [816] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(157), 2,
      sym_comment,
      sym_directive,
  [836] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(158), 2,
      sym_comment,
      sym_directive,
  [856] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(159), 2,
      sym_comment,
      sym_directive,
  [876] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(160), 2,
      sym_comment,
      sym_directive,
  [896] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    STATE(161), 2,
      sym_comment,
      sym_directive,
  [916] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(162), 2,
      sym_comment,
      sym_directive,
  [936] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(163), 2,
      sym_comment,
      sym_directive,
  [956] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(164), 2,
      sym_comment,
      sym_directive,
  [976] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(165), 2,
      sym_comment,
      sym_directive,
  [996] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(166), 2,
      sym_comment,
      sym_directive,
  [1016] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(167), 2,
      sym_comment,
      sym_directive,
  [1036] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(168), 2,
      sym_comment,
      sym_directive,
  [1056] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(169), 2,
      sym_comment,
      sym_directive,
  [1076] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(170), 2,
      sym_comment,
      sym_directive,
  [1096] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(171), 2,
      sym_comment,
      sym_directive,
  [1116] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [1120] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1124] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1128] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1132] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [1136] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1140] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1144] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [1148] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1152] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1156] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1160] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [1164] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [1168] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [1172] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [1176] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1180] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1184] = 1,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
  [1188] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1192] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(123)] = 0,
  [SMALL_STATE(124)] = 42,
  [SMALL_STATE(125)] = 84,
  [SMALL_STATE(126)] = 111,
  [SMALL_STATE(127)] = 138,
  [SMALL_STATE(128)] = 165,
  [SMALL_STATE(129)] = 192,
  [SMALL_STATE(130)] = 219,
  [SMALL_STATE(131)] = 244,
  [SMALL_STATE(132)] = 271,
  [SMALL_STATE(133)] = 297,
  [SMALL_STATE(134)] = 323,
  [SMALL_STATE(135)] = 349,
  [SMALL_STATE(136)] = 373,
  [SMALL_STATE(137)] = 399,
  [SMALL_STATE(138)] = 423,
  [SMALL_STATE(139)] = 449,
  [SMALL_STATE(140)] = 475,
  [SMALL_STATE(141)] = 496,
  [SMALL_STATE(142)] = 516,
  [SMALL_STATE(143)] = 536,
  [SMALL_STATE(144)] = 556,
  [SMALL_STATE(145)] = 576,
  [SMALL_STATE(146)] = 596,
  [SMALL_STATE(147)] = 616,
  [SMALL_STATE(148)] = 636,
  [SMALL_STATE(149)] = 656,
  [SMALL_STATE(150)] = 676,
  [SMALL_STATE(151)] = 696,
  [SMALL_STATE(152)] = 716,
  [SMALL_STATE(153)] = 736,
  [SMALL_STATE(154)] = 756,
  [SMALL_STATE(155)] = 776,
  [SMALL_STATE(156)] = 796,
  [SMALL_STATE(157)] = 816,
  [SMALL_STATE(158)] = 836,
  [SMALL_STATE(159)] = 856,
  [SMALL_STATE(160)] = 876,
  [SMALL_STATE(161)] = 896,
  [SMALL_STATE(162)] = 916,
  [SMALL_STATE(163)] = 936,
  [SMALL_STATE(164)] = 956,
  [SMALL_STATE(165)] = 976,
  [SMALL_STATE(166)] = 996,
  [SMALL_STATE(167)] = 1016,
  [SMALL_STATE(168)] = 1036,
  [SMALL_STATE(169)] = 1056,
  [SMALL_STATE(170)] = 1076,
  [SMALL_STATE(171)] = 1096,
  [SMALL_STATE(172)] = 1116,
  [SMALL_STATE(173)] = 1120,
  [SMALL_STATE(174)] = 1124,
  [SMALL_STATE(175)] = 1128,
  [SMALL_STATE(176)] = 1132,
  [SMALL_STATE(177)] = 1136,
  [SMALL_STATE(178)] = 1140,
  [SMALL_STATE(179)] = 1144,
  [SMALL_STATE(180)] = 1148,
  [SMALL_STATE(181)] = 1152,
  [SMALL_STATE(182)] = 1156,
  [SMALL_STATE(183)] = 1160,
  [SMALL_STATE(184)] = 1164,
  [SMALL_STATE(185)] = 1168,
  [SMALL_STATE(186)] = 1172,
  [SMALL_STATE(187)] = 1176,
  [SMALL_STATE(188)] = 1180,
  [SMALL_STATE(189)] = 1184,
  [SMALL_STATE(190)] = 1188,
  [SMALL_STATE(191)] = 1192,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(103),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(120),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(120),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(133),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_datum, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_datum, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_form, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_form, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_datum, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_datum, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datum, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datum, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation_prefix, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation_prefix, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_test, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_test, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(135),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2), SHIFT_REPEAT(140),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scheme(void) {
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
