#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LPAREN = 1,
  anon_sym_and = 2,
  anon_sym_catch = 3,
  anon_sym_cond = 4,
  anon_sym_condition_DASHcase = 5,
  anon_sym_defconst = 6,
  anon_sym_defvar = 7,
  anon_sym_function = 8,
  anon_sym_if = 9,
  anon_sym_interactive = 10,
  anon_sym_lambda = 11,
  anon_sym_let = 12,
  anon_sym_let_STAR = 13,
  anon_sym_or = 14,
  anon_sym_prog1 = 15,
  anon_sym_prog2 = 16,
  anon_sym_progn = 17,
  anon_sym_quote = 18,
  anon_sym_save_DASHcurrent_DASHbuffer = 19,
  anon_sym_save_DASHexcursion = 20,
  anon_sym_save_DASHrestriction = 21,
  anon_sym_setq = 22,
  anon_sym_setq_DASHdefault = 23,
  anon_sym_unwind_DASHprotect = 24,
  anon_sym_while = 25,
  anon_sym_RPAREN = 26,
  anon_sym_defun = 27,
  anon_sym_defsubst = 28,
  aux_sym_float_token1 = 29,
  aux_sym_float_token2 = 30,
  aux_sym_float_token3 = 31,
  aux_sym_float_token4 = 32,
  aux_sym_float_token5 = 33,
  aux_sym_integer_token1 = 34,
  aux_sym_integer_token2 = 35,
  aux_sym_char_token1 = 36,
  aux_sym_char_token2 = 37,
  aux_sym_char_token3 = 38,
  aux_sym_char_token4 = 39,
  aux_sym_char_token5 = 40,
  aux_sym_char_token6 = 41,
  aux_sym_char_token7 = 42,
  aux_sym_char_token8 = 43,
  sym_string = 44,
  sym_byte_compiled_file_name = 45,
  anon_sym_nil = 46,
  anon_sym_t = 47,
  aux_sym_symbol_token1 = 48,
  aux_sym_symbol_token2 = 49,
  anon_sym_POUND_POUND = 50,
  anon_sym_POUND_SQUOTE = 51,
  anon_sym_SQUOTE = 52,
  anon_sym_BQUOTE = 53,
  anon_sym_COMMA_AT = 54,
  anon_sym_COMMA = 55,
  sym_dot = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_POUND_LBRACK = 59,
  anon_sym_POUND_LPAREN = 60,
  anon_sym_POUNDs_LPARENhash_DASHtable = 61,
  sym_comment = 62,
  sym_source_file = 63,
  sym__sexp = 64,
  sym_special_form = 65,
  sym_function_definition = 66,
  sym__atom = 67,
  sym_float = 68,
  sym_integer = 69,
  sym_char = 70,
  sym_symbol = 71,
  sym_quote = 72,
  sym_unquote_splice = 73,
  sym_unquote = 74,
  sym_list = 75,
  sym_vector = 76,
  sym_bytecode = 77,
  sym_string_text_properties = 78,
  sym_hash_table = 79,
  aux_sym_source_file_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_and] = "and",
  [anon_sym_catch] = "catch",
  [anon_sym_cond] = "cond",
  [anon_sym_condition_DASHcase] = "condition-case",
  [anon_sym_defconst] = "defconst",
  [anon_sym_defvar] = "defvar",
  [anon_sym_function] = "function",
  [anon_sym_if] = "if",
  [anon_sym_interactive] = "interactive",
  [anon_sym_lambda] = "lambda",
  [anon_sym_let] = "let",
  [anon_sym_let_STAR] = "let*",
  [anon_sym_or] = "or",
  [anon_sym_prog1] = "prog1",
  [anon_sym_prog2] = "prog2",
  [anon_sym_progn] = "progn",
  [anon_sym_quote] = "quote",
  [anon_sym_save_DASHcurrent_DASHbuffer] = "save-current-buffer",
  [anon_sym_save_DASHexcursion] = "save-excursion",
  [anon_sym_save_DASHrestriction] = "save-restriction",
  [anon_sym_setq] = "setq",
  [anon_sym_setq_DASHdefault] = "setq-default",
  [anon_sym_unwind_DASHprotect] = "unwind-protect",
  [anon_sym_while] = "while",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defun] = "defun",
  [anon_sym_defsubst] = "defsubst",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [aux_sym_float_token5] = "float_token5",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [aux_sym_char_token6] = "char_token6",
  [aux_sym_char_token7] = "char_token7",
  [aux_sym_char_token8] = "char_token8",
  [sym_string] = "string",
  [sym_byte_compiled_file_name] = "byte_compiled_file_name",
  [anon_sym_nil] = "nil",
  [anon_sym_t] = "t",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [sym_dot] = "dot",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDs_LPARENhash_DASHtable] = "#s(hash-table",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_special_form] = "special_form",
  [sym_function_definition] = "function_definition",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_symbol] = "symbol",
  [sym_quote] = "quote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_bytecode] = "bytecode",
  [sym_string_text_properties] = "string_text_properties",
  [sym_hash_table] = "hash_table",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_condition_DASHcase] = anon_sym_condition_DASHcase,
  [anon_sym_defconst] = anon_sym_defconst,
  [anon_sym_defvar] = anon_sym_defvar,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_let_STAR] = anon_sym_let_STAR,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_prog1] = anon_sym_prog1,
  [anon_sym_prog2] = anon_sym_prog2,
  [anon_sym_progn] = anon_sym_progn,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_save_DASHcurrent_DASHbuffer] = anon_sym_save_DASHcurrent_DASHbuffer,
  [anon_sym_save_DASHexcursion] = anon_sym_save_DASHexcursion,
  [anon_sym_save_DASHrestriction] = anon_sym_save_DASHrestriction,
  [anon_sym_setq] = anon_sym_setq,
  [anon_sym_setq_DASHdefault] = anon_sym_setq_DASHdefault,
  [anon_sym_unwind_DASHprotect] = anon_sym_unwind_DASHprotect,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_defsubst] = anon_sym_defsubst,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [aux_sym_float_token5] = aux_sym_float_token5,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [aux_sym_char_token6] = aux_sym_char_token6,
  [aux_sym_char_token7] = aux_sym_char_token7,
  [aux_sym_char_token8] = aux_sym_char_token8,
  [sym_string] = sym_string,
  [sym_byte_compiled_file_name] = sym_byte_compiled_file_name,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_t] = anon_sym_t,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_dot] = sym_dot,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDs_LPARENhash_DASHtable] = anon_sym_POUNDs_LPARENhash_DASHtable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_special_form] = sym_special_form,
  [sym_function_definition] = sym_function_definition,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_char] = sym_char,
  [sym_symbol] = sym_symbol,
  [sym_quote] = sym_quote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_bytecode] = sym_bytecode,
  [sym_string_text_properties] = sym_string_text_properties,
  [sym_hash_table] = sym_hash_table,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition_DASHcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHcurrent_DASHbuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHexcursion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHrestriction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setq_DASHdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwind_DASHprotect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsubst] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_compiled_file_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs_LPARENhash_DASHtable] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_bytecode] = {
    .visible = true,
    .named = true,
  },
  [sym_string_text_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_float_token5_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\f'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c >= '"' && c <= '#')))
    : (c <= ')' || (c < '['
      ? (c < ';'
        ? c == ','
        : c <= ';')
      : (c <= ']' || c == '`'))));
}

static inline bool aux_sym_symbol_token2_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\f'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '#')))
    : (c <= ')' || (c < '['
      ? (c < ';'
        ? c == ','
        : c <= ';')
      : (c <= ']' || c == '`'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(291);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(115);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == '\'' ||
          lookahead == ',' ||
          lookahead == '`') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(282);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`') ADVANCE(282);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(291);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 't') ADVANCE(130);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(264);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_condition_DASHcase);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_defconst);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_defvar);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let_STAR);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_prog1);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_prog2);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_progn);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_save_DASHcurrent_DASHbuffer);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_save_DASHexcursion);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_save_DASHrestriction);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_setq);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_setq_DASHdefault);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_unwind_DASHprotect);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_defsubst);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token6);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token7);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token7);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'H' ||
          lookahead == 'M' ||
          lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_char_token8);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(71);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(220);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(251);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(252);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(152);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(247);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(237);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(270);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(171);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(178);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(269);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(246);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(198);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(160);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(190);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(258);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(159);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(260);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(256);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(272);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(265);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(56);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(139);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(157);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(186);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(193);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(138);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(72);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(79);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(59);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(195);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(239);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(224);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(238);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(248);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(172);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(257);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(167);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(196);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(161);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(189);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(148);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(201);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(209);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(210);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(274);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(228);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(223);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(229);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(230);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(231);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(174);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(129);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(183);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(255);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(163);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(175);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(275);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(81);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(245);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(62);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(74);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(75);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(176);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(169);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(141);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(177);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(261);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(197);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(216);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(259);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(217);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(222);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(218);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(219);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(262);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(244);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'q') ADVANCE(76);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(68);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(225);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(61);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(162);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(249);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(208);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(243);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(188);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(232);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(253);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(254);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(185);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(263);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(206);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(166);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(234);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(82);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(77);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(78);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(187);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(203);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(182);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(202);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(140);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(191);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(241);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(205);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(207);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(227);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(165);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(221);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(194);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(211);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(242);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(240);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(181);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(184);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(204);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(173);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_POUNDs_LPARENhash_DASHtable);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_condition_DASHcase] = ACTIONS(1),
    [anon_sym_defconst] = ACTIONS(1),
    [anon_sym_defvar] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_interactive] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_let_STAR] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_prog1] = ACTIONS(1),
    [anon_sym_prog2] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(1),
    [anon_sym_save_DASHexcursion] = ACTIONS(1),
    [anon_sym_save_DASHrestriction] = ACTIONS(1),
    [anon_sym_setq] = ACTIONS(1),
    [anon_sym_setq_DASHdefault] = ACTIONS(1),
    [anon_sym_unwind_DASHprotect] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_defsubst] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_float_token4] = ACTIONS(1),
    [aux_sym_float_token5] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [aux_sym_char_token4] = ACTIONS(1),
    [aux_sym_char_token5] = ACTIONS(1),
    [aux_sym_char_token6] = ACTIONS(1),
    [aux_sym_char_token7] = ACTIONS(1),
    [aux_sym_char_token8] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_byte_compiled_file_name] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__sexp] = STATE(15),
    [sym_special_form] = STATE(15),
    [sym_function_definition] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote_splice] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_bytecode] = STATE(15),
    [sym_string_text_properties] = STATE(15),
    [sym_hash_table] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_byte_compiled_file_name] = ACTIONS(19),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(4),
    [sym_special_form] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_char] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [sym_string_text_properties] = STATE(4),
    [sym_hash_table] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(39),
    [anon_sym_catch] = ACTIONS(39),
    [anon_sym_cond] = ACTIONS(39),
    [anon_sym_condition_DASHcase] = ACTIONS(39),
    [anon_sym_defconst] = ACTIONS(39),
    [anon_sym_defvar] = ACTIONS(39),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_interactive] = ACTIONS(39),
    [anon_sym_lambda] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(39),
    [anon_sym_let_STAR] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(39),
    [anon_sym_prog1] = ACTIONS(39),
    [anon_sym_prog2] = ACTIONS(39),
    [anon_sym_progn] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(39),
    [anon_sym_save_DASHexcursion] = ACTIONS(39),
    [anon_sym_save_DASHrestriction] = ACTIONS(39),
    [anon_sym_setq] = ACTIONS(39),
    [anon_sym_setq_DASHdefault] = ACTIONS(39),
    [anon_sym_unwind_DASHprotect] = ACTIONS(39),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_defun] = ACTIONS(43),
    [anon_sym_defsubst] = ACTIONS(43),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(45),
    [sym_byte_compiled_file_name] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(47),
    [aux_sym_float_token1] = ACTIONS(52),
    [aux_sym_float_token2] = ACTIONS(52),
    [aux_sym_float_token3] = ACTIONS(52),
    [aux_sym_float_token4] = ACTIONS(52),
    [aux_sym_float_token5] = ACTIONS(52),
    [aux_sym_integer_token1] = ACTIONS(55),
    [aux_sym_integer_token2] = ACTIONS(58),
    [aux_sym_char_token1] = ACTIONS(61),
    [aux_sym_char_token2] = ACTIONS(64),
    [aux_sym_char_token3] = ACTIONS(64),
    [aux_sym_char_token4] = ACTIONS(64),
    [aux_sym_char_token5] = ACTIONS(64),
    [aux_sym_char_token6] = ACTIONS(61),
    [aux_sym_char_token7] = ACTIONS(61),
    [aux_sym_char_token8] = ACTIONS(64),
    [sym_string] = ACTIONS(67),
    [sym_byte_compiled_file_name] = ACTIONS(67),
    [anon_sym_nil] = ACTIONS(70),
    [anon_sym_t] = ACTIONS(70),
    [aux_sym_symbol_token1] = ACTIONS(70),
    [aux_sym_symbol_token2] = ACTIONS(70),
    [anon_sym_POUND_POUND] = ACTIONS(73),
    [anon_sym_POUND_SQUOTE] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_COMMA_AT] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_POUND_LBRACK] = ACTIONS(88),
    [anon_sym_POUND_LPAREN] = ACTIONS(91),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(97),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(101),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(5),
    [sym_special_form] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote_splice] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_bytecode] = STATE(5),
    [sym_string_text_properties] = STATE(5),
    [sym_hash_table] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(103),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [sym_byte_compiled_file_name] = ACTIONS(105),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(109),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(17),
    [sym_special_form] = STATE(17),
    [sym_function_definition] = STATE(17),
    [sym__atom] = STATE(17),
    [sym_float] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_unquote_splice] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_bytecode] = STATE(17),
    [sym_string_text_properties] = STATE(17),
    [sym_hash_table] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(113),
    [sym_byte_compiled_file_name] = ACTIONS(113),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(14),
    [sym_special_form] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote_splice] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_bytecode] = STATE(14),
    [sym_string_text_properties] = STATE(14),
    [sym_hash_table] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(117),
    [sym_byte_compiled_file_name] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(7),
    [sym_special_form] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote_splice] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_bytecode] = STATE(7),
    [sym_string_text_properties] = STATE(7),
    [sym_hash_table] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(123),
    [sym_byte_compiled_file_name] = ACTIONS(123),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(9),
    [sym_special_form] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym__atom] = STATE(9),
    [sym_float] = STATE(9),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_unquote_splice] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_bytecode] = STATE(9),
    [sym_string_text_properties] = STATE(9),
    [sym_hash_table] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(127),
    [sym_byte_compiled_file_name] = ACTIONS(127),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(8),
    [sym_special_form] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote_splice] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [sym_string_text_properties] = STATE(8),
    [sym_hash_table] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(133),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(135),
    [sym_byte_compiled_file_name] = ACTIONS(135),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [sym_byte_compiled_file_name] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(6),
    [sym_special_form] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_float] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote_splice] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_bytecode] = STATE(6),
    [sym_string_text_properties] = STATE(6),
    [sym_hash_table] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(139),
    [sym_byte_compiled_file_name] = ACTIONS(139),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(32),
    [sym_special_form] = STATE(32),
    [sym_function_definition] = STATE(32),
    [sym__atom] = STATE(32),
    [sym_float] = STATE(32),
    [sym_integer] = STATE(32),
    [sym_char] = STATE(32),
    [sym_symbol] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_unquote_splice] = STATE(32),
    [sym_unquote] = STATE(32),
    [sym_list] = STATE(32),
    [sym_vector] = STATE(32),
    [sym_bytecode] = STATE(32),
    [sym_string_text_properties] = STATE(32),
    [sym_hash_table] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(141),
    [sym_byte_compiled_file_name] = ACTIONS(141),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(30),
    [sym_special_form] = STATE(30),
    [sym_function_definition] = STATE(30),
    [sym__atom] = STATE(30),
    [sym_float] = STATE(30),
    [sym_integer] = STATE(30),
    [sym_char] = STATE(30),
    [sym_symbol] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_unquote_splice] = STATE(30),
    [sym_unquote] = STATE(30),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_bytecode] = STATE(30),
    [sym_string_text_properties] = STATE(30),
    [sym_hash_table] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(143),
    [sym_byte_compiled_file_name] = ACTIONS(143),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(23),
    [sym_special_form] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym__atom] = STATE(23),
    [sym_float] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_char] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_unquote_splice] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_list] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_bytecode] = STATE(23),
    [sym_string_text_properties] = STATE(23),
    [sym_hash_table] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [aux_sym_float_token3] = ACTIONS(9),
    [aux_sym_float_token4] = ACTIONS(9),
    [aux_sym_float_token5] = ACTIONS(9),
    [aux_sym_integer_token1] = ACTIONS(11),
    [aux_sym_integer_token2] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(17),
    [aux_sym_char_token3] = ACTIONS(17),
    [aux_sym_char_token4] = ACTIONS(17),
    [aux_sym_char_token5] = ACTIONS(17),
    [aux_sym_char_token6] = ACTIONS(15),
    [aux_sym_char_token7] = ACTIONS(15),
    [aux_sym_char_token8] = ACTIONS(17),
    [sym_string] = ACTIONS(145),
    [sym_byte_compiled_file_name] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [aux_sym_symbol_token2] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(147), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [43] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(151), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(155), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(159), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(163), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(167), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(171), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(175), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(179), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(183), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(187), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(191), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(195), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(203), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(207), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(211), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(215), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(219), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(223), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 14,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(227), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(18), 1,
      sym_symbol,
    ACTIONS(21), 4,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_string,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 43,
  [SMALL_STATE(24)] = 86,
  [SMALL_STATE(25)] = 129,
  [SMALL_STATE(26)] = 172,
  [SMALL_STATE(27)] = 215,
  [SMALL_STATE(28)] = 258,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 344,
  [SMALL_STATE(31)] = 387,
  [SMALL_STATE(32)] = 430,
  [SMALL_STATE(33)] = 473,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 559,
  [SMALL_STATE(36)] = 602,
  [SMALL_STATE(37)] = 645,
  [SMALL_STATE(38)] = 688,
  [SMALL_STATE(39)] = 731,
  [SMALL_STATE(40)] = 774,
  [SMALL_STATE(41)] = 817,
  [SMALL_STATE(42)] = 860,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 919,
  [SMALL_STATE(45)] = 926,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elisp(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
