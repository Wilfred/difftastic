#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_bool_lit = 2,
  aux_sym_kwd_lit_token1 = 3,
  sym_nil_lit = 4,
  sym__dec = 5,
  sym__hex = 6,
  sym__radix = 7,
  sym_str_lit = 8,
  sym_buf_lit = 9,
  sym_sym_lit = 10,
  anon_sym_AT_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_AT_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_AT_LBRACE = 17,
  anon_sym_LPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_TILDE = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_PIPE = 22,
  anon_sym_SEMI = 23,
  anon_sym_COMMA = 24,
  sym_long_buf_lit = 25,
  sym_long_str_lit = 26,
  sym_source = 27,
  sym__lit = 28,
  sym_kwd_lit = 29,
  sym_num_lit = 30,
  sym_par_arr_lit = 31,
  sym_sqr_arr_lit = 32,
  sym_struct_lit = 33,
  sym_tbl_lit = 34,
  sym_par_tup_lit = 35,
  sym_sqr_tup_lit = 36,
  sym_qq_lit = 37,
  sym_quote_lit = 38,
  sym_short_fn_lit = 39,
  sym_splice_lit = 40,
  sym_unquote_lit = 41,
  aux_sym_source_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_bool_lit] = "bool_lit",
  [aux_sym_kwd_lit_token1] = "kwd_lit_token1",
  [sym_nil_lit] = "nil_lit",
  [sym__dec] = "_dec",
  [sym__hex] = "_hex",
  [sym__radix] = "_radix",
  [sym_str_lit] = "str_lit",
  [sym_buf_lit] = "buf_lit",
  [sym_sym_lit] = "sym_lit",
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
  [sym_long_buf_lit] = "long_buf_lit",
  [sym_long_str_lit] = "long_str_lit",
  [sym_source] = "source",
  [sym__lit] = "_lit",
  [sym_kwd_lit] = "kwd_lit",
  [sym_num_lit] = "num_lit",
  [sym_par_arr_lit] = "par_arr_lit",
  [sym_sqr_arr_lit] = "sqr_arr_lit",
  [sym_struct_lit] = "struct_lit",
  [sym_tbl_lit] = "tbl_lit",
  [sym_par_tup_lit] = "par_tup_lit",
  [sym_sqr_tup_lit] = "sqr_tup_lit",
  [sym_qq_lit] = "qq_lit",
  [sym_quote_lit] = "quote_lit",
  [sym_short_fn_lit] = "short_fn_lit",
  [sym_splice_lit] = "splice_lit",
  [sym_unquote_lit] = "unquote_lit",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_bool_lit] = sym_bool_lit,
  [aux_sym_kwd_lit_token1] = aux_sym_kwd_lit_token1,
  [sym_nil_lit] = sym_nil_lit,
  [sym__dec] = sym__dec,
  [sym__hex] = sym__hex,
  [sym__radix] = sym__radix,
  [sym_str_lit] = sym_str_lit,
  [sym_buf_lit] = sym_buf_lit,
  [sym_sym_lit] = sym_sym_lit,
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
  [sym_long_buf_lit] = sym_long_buf_lit,
  [sym_long_str_lit] = sym_long_str_lit,
  [sym_source] = sym_source,
  [sym__lit] = sym__lit,
  [sym_kwd_lit] = sym_kwd_lit,
  [sym_num_lit] = sym_num_lit,
  [sym_par_arr_lit] = sym_par_arr_lit,
  [sym_sqr_arr_lit] = sym_sqr_arr_lit,
  [sym_struct_lit] = sym_struct_lit,
  [sym_tbl_lit] = sym_tbl_lit,
  [sym_par_tup_lit] = sym_par_tup_lit,
  [sym_sqr_tup_lit] = sym_sqr_tup_lit,
  [sym_qq_lit] = sym_qq_lit,
  [sym_quote_lit] = sym_quote_lit,
  [sym_short_fn_lit] = sym_short_fn_lit,
  [sym_splice_lit] = sym_splice_lit,
  [sym_unquote_lit] = sym_unquote_lit,
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
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_kwd_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil_lit] = {
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
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_buf_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sym_lit] = {
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
  [sym_long_buf_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_long_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__lit] = {
    .visible = false,
    .named = true,
  },
  [sym_kwd_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_par_arr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_arr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_tbl_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_par_tup_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_tup_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_qq_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_splice_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == 0 ||
          ('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '3') ADVANCE(22);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(86);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
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
      ACCEPT_TOKEN(sym_bool_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_kwd_lit_token1);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_nil_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(19);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == '_') ADVANCE(26);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__radix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__radix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_buf_lit);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == '3') ADVANCE(29);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
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
  [40] = {.lex_state = 0},
};

enum {
  ts_external_token_long_buf_lit = 0,
  ts_external_token_long_str_lit = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_long_buf_lit] = sym_long_buf_lit,
  [ts_external_token_long_str_lit] = sym_long_str_lit,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_long_buf_lit] = true,
    [ts_external_token_long_str_lit] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(1),
    [aux_sym_kwd_lit_token1] = ACTIONS(1),
    [sym_nil_lit] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__radix] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_buf_lit] = ACTIONS(1),
    [sym_sym_lit] = ACTIONS(1),
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
    [sym_long_buf_lit] = ACTIONS(1),
    [sym_long_str_lit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(40),
    [sym__lit] = STATE(3),
    [sym_kwd_lit] = STATE(3),
    [sym_num_lit] = STATE(3),
    [sym_par_arr_lit] = STATE(3),
    [sym_sqr_arr_lit] = STATE(3),
    [sym_struct_lit] = STATE(3),
    [sym_tbl_lit] = STATE(3),
    [sym_par_tup_lit] = STATE(3),
    [sym_sqr_tup_lit] = STATE(3),
    [sym_qq_lit] = STATE(3),
    [sym_quote_lit] = STATE(3),
    [sym_short_fn_lit] = STATE(3),
    [sym_splice_lit] = STATE(3),
    [sym_unquote_lit] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(7),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(13),
    [sym_buf_lit] = ACTIONS(13),
    [sym_sym_lit] = ACTIONS(7),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(13),
    [sym_long_str_lit] = ACTIONS(13),
  },
  [2] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(39),
    [aux_sym_kwd_lit_token1] = ACTIONS(42),
    [sym_nil_lit] = ACTIONS(39),
    [sym__dec] = ACTIONS(45),
    [sym__hex] = ACTIONS(45),
    [sym__radix] = ACTIONS(45),
    [sym_str_lit] = ACTIONS(48),
    [sym_buf_lit] = ACTIONS(48),
    [sym_sym_lit] = ACTIONS(39),
    [anon_sym_AT_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_AT_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_AT_LBRACE] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_long_buf_lit] = ACTIONS(48),
    [sym_long_str_lit] = ACTIONS(48),
  },
  [3] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [4] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [5] = {
    [sym__lit] = STATE(15),
    [sym_kwd_lit] = STATE(15),
    [sym_num_lit] = STATE(15),
    [sym_par_arr_lit] = STATE(15),
    [sym_sqr_arr_lit] = STATE(15),
    [sym_struct_lit] = STATE(15),
    [sym_tbl_lit] = STATE(15),
    [sym_par_tup_lit] = STATE(15),
    [sym_sqr_tup_lit] = STATE(15),
    [sym_qq_lit] = STATE(15),
    [sym_quote_lit] = STATE(15),
    [sym_short_fn_lit] = STATE(15),
    [sym_splice_lit] = STATE(15),
    [sym_unquote_lit] = STATE(15),
    [aux_sym_source_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(92),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(92),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(94),
    [sym_buf_lit] = ACTIONS(94),
    [sym_sym_lit] = ACTIONS(92),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(94),
    [sym_long_str_lit] = ACTIONS(94),
  },
  [6] = {
    [sym__lit] = STATE(14),
    [sym_kwd_lit] = STATE(14),
    [sym_num_lit] = STATE(14),
    [sym_par_arr_lit] = STATE(14),
    [sym_sqr_arr_lit] = STATE(14),
    [sym_struct_lit] = STATE(14),
    [sym_tbl_lit] = STATE(14),
    [sym_par_tup_lit] = STATE(14),
    [sym_sqr_tup_lit] = STATE(14),
    [sym_qq_lit] = STATE(14),
    [sym_quote_lit] = STATE(14),
    [sym_short_fn_lit] = STATE(14),
    [sym_splice_lit] = STATE(14),
    [sym_unquote_lit] = STATE(14),
    [aux_sym_source_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(98),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(98),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(100),
    [sym_buf_lit] = ACTIONS(100),
    [sym_sym_lit] = ACTIONS(98),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(100),
    [sym_long_str_lit] = ACTIONS(100),
  },
  [7] = {
    [sym__lit] = STATE(13),
    [sym_kwd_lit] = STATE(13),
    [sym_num_lit] = STATE(13),
    [sym_par_arr_lit] = STATE(13),
    [sym_sqr_arr_lit] = STATE(13),
    [sym_struct_lit] = STATE(13),
    [sym_tbl_lit] = STATE(13),
    [sym_par_tup_lit] = STATE(13),
    [sym_sqr_tup_lit] = STATE(13),
    [sym_qq_lit] = STATE(13),
    [sym_quote_lit] = STATE(13),
    [sym_short_fn_lit] = STATE(13),
    [sym_splice_lit] = STATE(13),
    [sym_unquote_lit] = STATE(13),
    [aux_sym_source_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(104),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(104),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(106),
    [sym_buf_lit] = ACTIONS(106),
    [sym_sym_lit] = ACTIONS(104),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(106),
    [sym_long_str_lit] = ACTIONS(106),
  },
  [8] = {
    [sym__lit] = STATE(12),
    [sym_kwd_lit] = STATE(12),
    [sym_num_lit] = STATE(12),
    [sym_par_arr_lit] = STATE(12),
    [sym_sqr_arr_lit] = STATE(12),
    [sym_struct_lit] = STATE(12),
    [sym_tbl_lit] = STATE(12),
    [sym_par_tup_lit] = STATE(12),
    [sym_sqr_tup_lit] = STATE(12),
    [sym_qq_lit] = STATE(12),
    [sym_quote_lit] = STATE(12),
    [sym_short_fn_lit] = STATE(12),
    [sym_splice_lit] = STATE(12),
    [sym_unquote_lit] = STATE(12),
    [aux_sym_source_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(110),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(110),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(112),
    [sym_buf_lit] = ACTIONS(112),
    [sym_sym_lit] = ACTIONS(110),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(112),
    [sym_long_str_lit] = ACTIONS(112),
  },
  [9] = {
    [sym__lit] = STATE(11),
    [sym_kwd_lit] = STATE(11),
    [sym_num_lit] = STATE(11),
    [sym_par_arr_lit] = STATE(11),
    [sym_sqr_arr_lit] = STATE(11),
    [sym_struct_lit] = STATE(11),
    [sym_tbl_lit] = STATE(11),
    [sym_par_tup_lit] = STATE(11),
    [sym_sqr_tup_lit] = STATE(11),
    [sym_qq_lit] = STATE(11),
    [sym_quote_lit] = STATE(11),
    [sym_short_fn_lit] = STATE(11),
    [sym_splice_lit] = STATE(11),
    [sym_unquote_lit] = STATE(11),
    [aux_sym_source_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(116),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(116),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(118),
    [sym_buf_lit] = ACTIONS(118),
    [sym_sym_lit] = ACTIONS(116),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(118),
    [sym_long_str_lit] = ACTIONS(118),
  },
  [10] = {
    [sym__lit] = STATE(4),
    [sym_kwd_lit] = STATE(4),
    [sym_num_lit] = STATE(4),
    [sym_par_arr_lit] = STATE(4),
    [sym_sqr_arr_lit] = STATE(4),
    [sym_struct_lit] = STATE(4),
    [sym_tbl_lit] = STATE(4),
    [sym_par_tup_lit] = STATE(4),
    [sym_sqr_tup_lit] = STATE(4),
    [sym_qq_lit] = STATE(4),
    [sym_quote_lit] = STATE(4),
    [sym_short_fn_lit] = STATE(4),
    [sym_splice_lit] = STATE(4),
    [sym_unquote_lit] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(122),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(122),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(124),
    [sym_buf_lit] = ACTIONS(124),
    [sym_sym_lit] = ACTIONS(122),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(124),
    [sym_long_str_lit] = ACTIONS(124),
  },
  [11] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [12] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [13] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [14] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [15] = {
    [sym__lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(86),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(86),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(88),
    [sym_buf_lit] = ACTIONS(88),
    [sym_sym_lit] = ACTIONS(86),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(88),
    [sym_long_str_lit] = ACTIONS(88),
  },
  [16] = {
    [sym__lit] = STATE(21),
    [sym_kwd_lit] = STATE(21),
    [sym_num_lit] = STATE(21),
    [sym_par_arr_lit] = STATE(21),
    [sym_sqr_arr_lit] = STATE(21),
    [sym_struct_lit] = STATE(21),
    [sym_tbl_lit] = STATE(21),
    [sym_par_tup_lit] = STATE(21),
    [sym_sqr_tup_lit] = STATE(21),
    [sym_qq_lit] = STATE(21),
    [sym_quote_lit] = STATE(21),
    [sym_short_fn_lit] = STATE(21),
    [sym_splice_lit] = STATE(21),
    [sym_unquote_lit] = STATE(21),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(138),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(138),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(140),
    [sym_buf_lit] = ACTIONS(140),
    [sym_sym_lit] = ACTIONS(138),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(140),
    [sym_long_str_lit] = ACTIONS(140),
  },
  [17] = {
    [sym__lit] = STATE(32),
    [sym_kwd_lit] = STATE(32),
    [sym_num_lit] = STATE(32),
    [sym_par_arr_lit] = STATE(32),
    [sym_sqr_arr_lit] = STATE(32),
    [sym_struct_lit] = STATE(32),
    [sym_tbl_lit] = STATE(32),
    [sym_par_tup_lit] = STATE(32),
    [sym_sqr_tup_lit] = STATE(32),
    [sym_qq_lit] = STATE(32),
    [sym_quote_lit] = STATE(32),
    [sym_short_fn_lit] = STATE(32),
    [sym_splice_lit] = STATE(32),
    [sym_unquote_lit] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(142),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(142),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(144),
    [sym_buf_lit] = ACTIONS(144),
    [sym_sym_lit] = ACTIONS(142),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(144),
    [sym_long_str_lit] = ACTIONS(144),
  },
  [18] = {
    [sym__lit] = STATE(29),
    [sym_kwd_lit] = STATE(29),
    [sym_num_lit] = STATE(29),
    [sym_par_arr_lit] = STATE(29),
    [sym_sqr_arr_lit] = STATE(29),
    [sym_struct_lit] = STATE(29),
    [sym_tbl_lit] = STATE(29),
    [sym_par_tup_lit] = STATE(29),
    [sym_sqr_tup_lit] = STATE(29),
    [sym_qq_lit] = STATE(29),
    [sym_quote_lit] = STATE(29),
    [sym_short_fn_lit] = STATE(29),
    [sym_splice_lit] = STATE(29),
    [sym_unquote_lit] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(146),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(146),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(148),
    [sym_buf_lit] = ACTIONS(148),
    [sym_sym_lit] = ACTIONS(146),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(148),
    [sym_long_str_lit] = ACTIONS(148),
  },
  [19] = {
    [sym__lit] = STATE(30),
    [sym_kwd_lit] = STATE(30),
    [sym_num_lit] = STATE(30),
    [sym_par_arr_lit] = STATE(30),
    [sym_sqr_arr_lit] = STATE(30),
    [sym_struct_lit] = STATE(30),
    [sym_tbl_lit] = STATE(30),
    [sym_par_tup_lit] = STATE(30),
    [sym_sqr_tup_lit] = STATE(30),
    [sym_qq_lit] = STATE(30),
    [sym_quote_lit] = STATE(30),
    [sym_short_fn_lit] = STATE(30),
    [sym_splice_lit] = STATE(30),
    [sym_unquote_lit] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(150),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(150),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(152),
    [sym_buf_lit] = ACTIONS(152),
    [sym_sym_lit] = ACTIONS(150),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(152),
    [sym_long_str_lit] = ACTIONS(152),
  },
  [20] = {
    [sym__lit] = STATE(31),
    [sym_kwd_lit] = STATE(31),
    [sym_num_lit] = STATE(31),
    [sym_par_arr_lit] = STATE(31),
    [sym_sqr_arr_lit] = STATE(31),
    [sym_struct_lit] = STATE(31),
    [sym_tbl_lit] = STATE(31),
    [sym_par_tup_lit] = STATE(31),
    [sym_sqr_tup_lit] = STATE(31),
    [sym_qq_lit] = STATE(31),
    [sym_quote_lit] = STATE(31),
    [sym_short_fn_lit] = STATE(31),
    [sym_splice_lit] = STATE(31),
    [sym_unquote_lit] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(154),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(154),
    [sym__dec] = ACTIONS(11),
    [sym__hex] = ACTIONS(11),
    [sym__radix] = ACTIONS(11),
    [sym_str_lit] = ACTIONS(156),
    [sym_buf_lit] = ACTIONS(156),
    [sym_sym_lit] = ACTIONS(154),
    [anon_sym_AT_LPAREN] = ACTIONS(15),
    [anon_sym_AT_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AT_LBRACE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_long_buf_lit] = ACTIONS(156),
    [sym_long_str_lit] = ACTIONS(156),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(160),
    [aux_sym_kwd_lit_token1] = ACTIONS(158),
    [sym_nil_lit] = ACTIONS(160),
    [sym__dec] = ACTIONS(160),
    [sym__hex] = ACTIONS(160),
    [sym__radix] = ACTIONS(160),
    [sym_str_lit] = ACTIONS(158),
    [sym_buf_lit] = ACTIONS(158),
    [sym_sym_lit] = ACTIONS(160),
    [anon_sym_AT_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_AT_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_AT_LBRACE] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [sym_long_buf_lit] = ACTIONS(158),
    [sym_long_str_lit] = ACTIONS(158),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(164),
    [aux_sym_kwd_lit_token1] = ACTIONS(162),
    [sym_nil_lit] = ACTIONS(164),
    [sym__dec] = ACTIONS(164),
    [sym__hex] = ACTIONS(164),
    [sym__radix] = ACTIONS(164),
    [sym_str_lit] = ACTIONS(162),
    [sym_buf_lit] = ACTIONS(162),
    [sym_sym_lit] = ACTIONS(164),
    [anon_sym_AT_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_AT_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_AT_LBRACE] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [sym_long_buf_lit] = ACTIONS(162),
    [sym_long_str_lit] = ACTIONS(162),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(168),
    [aux_sym_kwd_lit_token1] = ACTIONS(166),
    [sym_nil_lit] = ACTIONS(168),
    [sym__dec] = ACTIONS(168),
    [sym__hex] = ACTIONS(168),
    [sym__radix] = ACTIONS(168),
    [sym_str_lit] = ACTIONS(166),
    [sym_buf_lit] = ACTIONS(166),
    [sym_sym_lit] = ACTIONS(168),
    [anon_sym_AT_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_AT_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_AT_LBRACE] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [sym_long_buf_lit] = ACTIONS(166),
    [sym_long_str_lit] = ACTIONS(166),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(172),
    [aux_sym_kwd_lit_token1] = ACTIONS(170),
    [sym_nil_lit] = ACTIONS(172),
    [sym__dec] = ACTIONS(172),
    [sym__hex] = ACTIONS(172),
    [sym__radix] = ACTIONS(172),
    [sym_str_lit] = ACTIONS(170),
    [sym_buf_lit] = ACTIONS(170),
    [sym_sym_lit] = ACTIONS(172),
    [anon_sym_AT_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_AT_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_AT_LBRACE] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_long_buf_lit] = ACTIONS(170),
    [sym_long_str_lit] = ACTIONS(170),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(176),
    [aux_sym_kwd_lit_token1] = ACTIONS(174),
    [sym_nil_lit] = ACTIONS(176),
    [sym__dec] = ACTIONS(176),
    [sym__hex] = ACTIONS(176),
    [sym__radix] = ACTIONS(176),
    [sym_str_lit] = ACTIONS(174),
    [sym_buf_lit] = ACTIONS(174),
    [sym_sym_lit] = ACTIONS(176),
    [anon_sym_AT_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_AT_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_AT_LBRACE] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym_long_buf_lit] = ACTIONS(174),
    [sym_long_str_lit] = ACTIONS(174),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(180),
    [aux_sym_kwd_lit_token1] = ACTIONS(178),
    [sym_nil_lit] = ACTIONS(180),
    [sym__dec] = ACTIONS(180),
    [sym__hex] = ACTIONS(180),
    [sym__radix] = ACTIONS(180),
    [sym_str_lit] = ACTIONS(178),
    [sym_buf_lit] = ACTIONS(178),
    [sym_sym_lit] = ACTIONS(180),
    [anon_sym_AT_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_AT_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_AT_LBRACE] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [sym_long_buf_lit] = ACTIONS(178),
    [sym_long_str_lit] = ACTIONS(178),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(184),
    [aux_sym_kwd_lit_token1] = ACTIONS(182),
    [sym_nil_lit] = ACTIONS(184),
    [sym__dec] = ACTIONS(184),
    [sym__hex] = ACTIONS(184),
    [sym__radix] = ACTIONS(184),
    [sym_str_lit] = ACTIONS(182),
    [sym_buf_lit] = ACTIONS(182),
    [sym_sym_lit] = ACTIONS(184),
    [anon_sym_AT_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_AT_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_AT_LBRACE] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_long_buf_lit] = ACTIONS(182),
    [sym_long_str_lit] = ACTIONS(182),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(188),
    [aux_sym_kwd_lit_token1] = ACTIONS(186),
    [sym_nil_lit] = ACTIONS(188),
    [sym__dec] = ACTIONS(188),
    [sym__hex] = ACTIONS(188),
    [sym__radix] = ACTIONS(188),
    [sym_str_lit] = ACTIONS(186),
    [sym_buf_lit] = ACTIONS(186),
    [sym_sym_lit] = ACTIONS(188),
    [anon_sym_AT_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_AT_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_AT_LBRACE] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
    [sym_long_buf_lit] = ACTIONS(186),
    [sym_long_str_lit] = ACTIONS(186),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(192),
    [aux_sym_kwd_lit_token1] = ACTIONS(190),
    [sym_nil_lit] = ACTIONS(192),
    [sym__dec] = ACTIONS(192),
    [sym__hex] = ACTIONS(192),
    [sym__radix] = ACTIONS(192),
    [sym_str_lit] = ACTIONS(190),
    [sym_buf_lit] = ACTIONS(190),
    [sym_sym_lit] = ACTIONS(192),
    [anon_sym_AT_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_AT_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_AT_LBRACE] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_long_buf_lit] = ACTIONS(190),
    [sym_long_str_lit] = ACTIONS(190),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(196),
    [aux_sym_kwd_lit_token1] = ACTIONS(194),
    [sym_nil_lit] = ACTIONS(196),
    [sym__dec] = ACTIONS(196),
    [sym__hex] = ACTIONS(196),
    [sym__radix] = ACTIONS(196),
    [sym_str_lit] = ACTIONS(194),
    [sym_buf_lit] = ACTIONS(194),
    [sym_sym_lit] = ACTIONS(196),
    [anon_sym_AT_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_AT_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_AT_LBRACE] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(194),
    [sym_long_buf_lit] = ACTIONS(194),
    [sym_long_str_lit] = ACTIONS(194),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(200),
    [aux_sym_kwd_lit_token1] = ACTIONS(198),
    [sym_nil_lit] = ACTIONS(200),
    [sym__dec] = ACTIONS(200),
    [sym__hex] = ACTIONS(200),
    [sym__radix] = ACTIONS(200),
    [sym_str_lit] = ACTIONS(198),
    [sym_buf_lit] = ACTIONS(198),
    [sym_sym_lit] = ACTIONS(200),
    [anon_sym_AT_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_AT_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_AT_LBRACE] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [sym_long_buf_lit] = ACTIONS(198),
    [sym_long_str_lit] = ACTIONS(198),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(204),
    [aux_sym_kwd_lit_token1] = ACTIONS(202),
    [sym_nil_lit] = ACTIONS(204),
    [sym__dec] = ACTIONS(204),
    [sym__hex] = ACTIONS(204),
    [sym__radix] = ACTIONS(204),
    [sym_str_lit] = ACTIONS(202),
    [sym_buf_lit] = ACTIONS(202),
    [sym_sym_lit] = ACTIONS(204),
    [anon_sym_AT_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_AT_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_AT_LBRACE] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [sym_long_buf_lit] = ACTIONS(202),
    [sym_long_str_lit] = ACTIONS(202),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(208),
    [aux_sym_kwd_lit_token1] = ACTIONS(206),
    [sym_nil_lit] = ACTIONS(208),
    [sym__dec] = ACTIONS(208),
    [sym__hex] = ACTIONS(208),
    [sym__radix] = ACTIONS(208),
    [sym_str_lit] = ACTIONS(206),
    [sym_buf_lit] = ACTIONS(206),
    [sym_sym_lit] = ACTIONS(208),
    [anon_sym_AT_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_AT_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_AT_LBRACE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [sym_long_buf_lit] = ACTIONS(206),
    [sym_long_str_lit] = ACTIONS(206),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(212),
    [aux_sym_kwd_lit_token1] = ACTIONS(210),
    [sym_nil_lit] = ACTIONS(212),
    [sym__dec] = ACTIONS(212),
    [sym__hex] = ACTIONS(212),
    [sym__radix] = ACTIONS(212),
    [sym_str_lit] = ACTIONS(210),
    [sym_buf_lit] = ACTIONS(210),
    [sym_sym_lit] = ACTIONS(212),
    [anon_sym_AT_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_AT_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_AT_LBRACE] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_long_buf_lit] = ACTIONS(210),
    [sym_long_str_lit] = ACTIONS(210),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(216),
    [aux_sym_kwd_lit_token1] = ACTIONS(214),
    [sym_nil_lit] = ACTIONS(216),
    [sym__dec] = ACTIONS(216),
    [sym__hex] = ACTIONS(216),
    [sym__radix] = ACTIONS(216),
    [sym_str_lit] = ACTIONS(214),
    [sym_buf_lit] = ACTIONS(214),
    [sym_sym_lit] = ACTIONS(216),
    [anon_sym_AT_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_AT_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_AT_LBRACE] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_long_buf_lit] = ACTIONS(214),
    [sym_long_str_lit] = ACTIONS(214),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(220),
    [aux_sym_kwd_lit_token1] = ACTIONS(218),
    [sym_nil_lit] = ACTIONS(220),
    [sym__dec] = ACTIONS(220),
    [sym__hex] = ACTIONS(220),
    [sym__radix] = ACTIONS(220),
    [sym_str_lit] = ACTIONS(218),
    [sym_buf_lit] = ACTIONS(218),
    [sym_sym_lit] = ACTIONS(220),
    [anon_sym_AT_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_AT_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_AT_LBRACE] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_TILDE] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [sym_long_buf_lit] = ACTIONS(218),
    [sym_long_str_lit] = ACTIONS(218),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(224),
    [aux_sym_kwd_lit_token1] = ACTIONS(222),
    [sym_nil_lit] = ACTIONS(224),
    [sym__dec] = ACTIONS(224),
    [sym__hex] = ACTIONS(224),
    [sym__radix] = ACTIONS(224),
    [sym_str_lit] = ACTIONS(222),
    [sym_buf_lit] = ACTIONS(222),
    [sym_sym_lit] = ACTIONS(224),
    [anon_sym_AT_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_AT_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_AT_LBRACE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_long_buf_lit] = ACTIONS(222),
    [sym_long_str_lit] = ACTIONS(222),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(228),
    [aux_sym_kwd_lit_token1] = ACTIONS(226),
    [sym_nil_lit] = ACTIONS(228),
    [sym__dec] = ACTIONS(228),
    [sym__hex] = ACTIONS(228),
    [sym__radix] = ACTIONS(228),
    [sym_str_lit] = ACTIONS(226),
    [sym_buf_lit] = ACTIONS(226),
    [sym_sym_lit] = ACTIONS(228),
    [anon_sym_AT_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_AT_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_AT_LBRACE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(226),
    [sym_long_buf_lit] = ACTIONS(226),
    [sym_long_str_lit] = ACTIONS(226),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [sym_bool_lit] = ACTIONS(232),
    [aux_sym_kwd_lit_token1] = ACTIONS(230),
    [sym_nil_lit] = ACTIONS(232),
    [sym__dec] = ACTIONS(232),
    [sym__hex] = ACTIONS(232),
    [sym__radix] = ACTIONS(232),
    [sym_str_lit] = ACTIONS(230),
    [sym_buf_lit] = ACTIONS(230),
    [sym_sym_lit] = ACTIONS(232),
    [anon_sym_AT_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_AT_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_AT_LBRACE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_long_buf_lit] = ACTIONS(230),
    [sym_long_str_lit] = ACTIONS(230),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(40)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qq_lit, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qq_lit, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbl_lit, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbl_lit, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwd_lit, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwd_lit, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_tup_lit, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_tup_lit, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_tup_lit, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_tup_lit, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_arr_lit, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_arr_lit, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_arr_lit, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_arr_lit, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_lit, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_lit, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_fn_lit, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_fn_lit, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splice_lit, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splice_lit, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_lit, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_lit, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_lit, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_lit, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_arr_lit, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_arr_lit, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_arr_lit, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_arr_lit, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbl_lit, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbl_lit, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_tup_lit, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_tup_lit, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_tup_lit, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_tup_lit, 3),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
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
