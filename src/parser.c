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
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_defsust = 48,
  aux_sym_symbol_token1 = 49,
  aux_sym_symbol_token2 = 50,
  anon_sym_POUND_POUND = 51,
  anon_sym_POUND_SQUOTE = 52,
  anon_sym_SQUOTE = 53,
  anon_sym_BQUOTE = 54,
  anon_sym_COMMA_AT = 55,
  anon_sym_COMMA = 56,
  sym_dot = 57,
  anon_sym_LBRACK = 58,
  anon_sym_RBRACK = 59,
  anon_sym_POUND_LBRACK = 60,
  anon_sym_POUND_LPAREN = 61,
  anon_sym_POUNDs_LPARENhash_DASHtable = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym__sexp = 65,
  sym_special_form = 66,
  sym_function_definition = 67,
  sym__atom = 68,
  sym_float = 69,
  sym_integer = 70,
  sym_char = 71,
  sym_symbol = 72,
  sym_quote = 73,
  sym_unquote_splice = 74,
  sym_unquote = 75,
  sym_list = 76,
  sym_vector = 77,
  sym_bytecode = 78,
  sym_string_text_properties = 79,
  sym_hash_table = 80,
  aux_sym_source_file_repeat1 = 81,
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
  [anon_sym_defsust] = "defsust",
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
  [anon_sym_defsust] = anon_sym_defsust,
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
  [anon_sym_defsust] = {
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
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == 'q') ADVANCE(273);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(202);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(290);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '[') ADVANCE(299);
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
      if (lookahead == '0') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
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
      if (lookahead == 'e') ADVANCE(301);
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
          lookahead == '`') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == 'q') ADVANCE(273);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(202);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(289);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '?' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`') ADVANCE(289);
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
          lookahead != '\n') ADVANCE(289);
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
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 't') ADVANCE(130);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(289);
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
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(270);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_condition_DASHcase);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_defconst);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_defvar);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let_STAR);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_prog1);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_prog2);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_progn);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_save_DASHcurrent_DASHbuffer);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_save_DASHexcursion);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_save_DASHrestriction);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_setq);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_setq_DASHdefault);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_unwind_DASHprotect);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_defsubst);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (aux_sym_float_token5_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
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
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_defsust);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(50);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(71);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(223);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(256);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(257);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(65);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(153);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(252);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(240);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(276);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(172);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(179);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(275);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 's') ADVANCE(258);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(201);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(161);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(192);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(264);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(160);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(266);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(262);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(278);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(271);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(56);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(58);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(140);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(158);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(187);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(195);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(139);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(72);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(79);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(64);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(59);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(198);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(242);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(196);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(227);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(241);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(253);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(173);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(263);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(168);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(248);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(199);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(162);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(191);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(149);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(57);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(204);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(212);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(213);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(281);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(231);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(226);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(232);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(233);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(234);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(175);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(129);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(184);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(261);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(164);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(176);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(282);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(81);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(250);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(62);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(74);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(75);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(177);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(170);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(142);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(178);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(267);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(200);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(219);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(265);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(220);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(225);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(221);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(222);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(268);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(247);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'q') ADVANCE(76);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(68);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(228);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(61);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(73);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(163);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(254);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(211);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(246);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(190);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(235);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(218);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(258);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(259);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(260);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(186);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(269);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 's') ADVANCE(209);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(167);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(66);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(237);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(131);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(82);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(77);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(78);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(188);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(206);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(183);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(205);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(141);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(193);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(244);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(208);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 't') ADVANCE(210);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(166);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(230);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(224);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(197);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(214);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(245);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(243);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(249);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(182);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(185);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(207);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(174);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(50);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym_symbol_token2_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_POUNDs_LPARENhash_DASHtable);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead != 0) ADVANCE(303);
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
    [anon_sym_defsust] = ACTIONS(1),
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
    [sym_source_file] = STATE(44),
    [sym__sexp] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_function_definition] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_char] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote_splice] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_bytecode] = STATE(12),
    [sym_string_text_properties] = STATE(12),
    [sym_hash_table] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_byte_compiled_file_name] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_defsubst] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(47),
    [sym_byte_compiled_file_name] = ACTIONS(47),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_defun] = ACTIONS(54),
    [aux_sym_float_token1] = ACTIONS(57),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_float_token4] = ACTIONS(57),
    [aux_sym_float_token5] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(60),
    [aux_sym_integer_token2] = ACTIONS(63),
    [aux_sym_char_token1] = ACTIONS(66),
    [aux_sym_char_token2] = ACTIONS(69),
    [aux_sym_char_token3] = ACTIONS(69),
    [aux_sym_char_token4] = ACTIONS(69),
    [aux_sym_char_token5] = ACTIONS(69),
    [aux_sym_char_token6] = ACTIONS(66),
    [aux_sym_char_token7] = ACTIONS(66),
    [aux_sym_char_token8] = ACTIONS(69),
    [sym_string] = ACTIONS(72),
    [sym_byte_compiled_file_name] = ACTIONS(72),
    [anon_sym_nil] = ACTIONS(54),
    [anon_sym_t] = ACTIONS(54),
    [anon_sym_defsust] = ACTIONS(54),
    [aux_sym_symbol_token1] = ACTIONS(54),
    [aux_sym_symbol_token2] = ACTIONS(54),
    [anon_sym_POUND_POUND] = ACTIONS(75),
    [anon_sym_POUND_SQUOTE] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_COMMA_AT] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_POUND_LBRACK] = ACTIONS(90),
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(96),
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
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(103),
    [sym_byte_compiled_file_name] = ACTIONS(103),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
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
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(113),
    [sym_byte_compiled_file_name] = ACTIONS(113),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(119),
    [sym_byte_compiled_file_name] = ACTIONS(119),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
  [11] = {
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
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
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
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(127),
    [sym_byte_compiled_file_name] = ACTIONS(127),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(131),
    [sym_byte_compiled_file_name] = ACTIONS(131),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote_splice] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_bytecode] = STATE(11),
    [sym_string_text_properties] = STATE(11),
    [sym_hash_table] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(135),
    [sym_byte_compiled_file_name] = ACTIONS(135),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
  [18] = {
    [sym__sexp] = STATE(28),
    [sym_special_form] = STATE(28),
    [sym_function_definition] = STATE(28),
    [sym__atom] = STATE(28),
    [sym_float] = STATE(28),
    [sym_integer] = STATE(28),
    [sym_char] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_quote] = STATE(28),
    [sym_unquote_splice] = STATE(28),
    [sym_unquote] = STATE(28),
    [sym_list] = STATE(28),
    [sym_vector] = STATE(28),
    [sym_bytecode] = STATE(28),
    [sym_string_text_properties] = STATE(28),
    [sym_hash_table] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(141),
    [sym_byte_compiled_file_name] = ACTIONS(141),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(143),
    [sym_byte_compiled_file_name] = ACTIONS(143),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    [sym__sexp] = STATE(24),
    [sym_special_form] = STATE(24),
    [sym_function_definition] = STATE(24),
    [sym__atom] = STATE(24),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_char] = STATE(24),
    [sym_symbol] = STATE(24),
    [sym_quote] = STATE(24),
    [sym_unquote_splice] = STATE(24),
    [sym_unquote] = STATE(24),
    [sym_list] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_bytecode] = STATE(24),
    [sym_string_text_properties] = STATE(24),
    [sym_hash_table] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(145),
    [sym_byte_compiled_file_name] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [anon_sym_defsust] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
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
    ACTIONS(149), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [45] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [90] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 16,
      anon_sym_defun,
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
      anon_sym_defsust,
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
  [945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(8), 1,
      sym_symbol,
    ACTIONS(9), 6,
      anon_sym_defun,
      anon_sym_nil,
      anon_sym_t,
      anon_sym_defsust,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    ACTIONS(189), 10,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_COMMA,
    ACTIONS(187), 18,
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
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(8), 1,
      sym_symbol,
    ACTIONS(9), 6,
      anon_sym_defun,
      anon_sym_nil,
      anon_sym_t,
      anon_sym_defsust,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 45,
  [SMALL_STATE(23)] = 90,
  [SMALL_STATE(24)] = 135,
  [SMALL_STATE(25)] = 180,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 315,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 540,
  [SMALL_STATE(34)] = 585,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 675,
  [SMALL_STATE(37)] = 720,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 810,
  [SMALL_STATE(40)] = 855,
  [SMALL_STATE(41)] = 900,
  [SMALL_STATE(42)] = 945,
  [SMALL_STATE(43)] = 995,
  [SMALL_STATE(44)] = 1013,
  [SMALL_STATE(45)] = 1020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 4),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
