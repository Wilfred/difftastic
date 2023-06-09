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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 93
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__skip_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND = 6,
  anon_sym_POUND_SEMI = 7,
  sym__line_comment = 8,
  sym_boolean = 9,
  anon_sym_POUND = 10,
  anon_sym_POUND_LT_LT = 11,
  aux_sym_regex_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__real_string_token1 = 14,
  sym_escape_sequence = 15,
  aux_sym_number_token1 = 16,
  sym_decimal = 17,
  sym_character = 18,
  aux_sym_symbol_token1 = 19,
  sym_keyword = 20,
  anon_sym_POUND_AMP = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_POUNDfl = 28,
  anon_sym_POUNDfx = 29,
  anon_sym_POUNDs = 30,
  anon_sym_POUNDhash = 31,
  anon_sym_POUNDhasheq = 32,
  anon_sym_POUNDhasheqv = 33,
  anon_sym_EQ = 34,
  anon_sym_SQUOTE = 35,
  anon_sym_BQUOTE = 36,
  anon_sym_POUND_SQUOTE = 37,
  anon_sym_POUND_BQUOTE = 38,
  anon_sym_COMMA = 39,
  anon_sym_COMMA_AT = 40,
  anon_sym_POUND_COMMA = 41,
  anon_sym_POUND_COMMA_AT = 42,
  anon_sym_POUNDreader = 43,
  anon_sym_POUNDlang = 44,
  anon_sym_POUND_BANG = 45,
  sym_lang_name = 46,
  sym__here_string_body = 47,
  sym_program = 48,
  sym__token = 49,
  sym__skip = 50,
  sym_comment = 51,
  sym_block_comment = 52,
  sym_sexp_comment = 53,
  sym__datum = 54,
  sym_string = 55,
  sym_byte_string = 56,
  sym_here_string = 57,
  sym_regex = 58,
  sym__real_string = 59,
  sym_number = 60,
  sym_symbol = 61,
  sym_box = 62,
  sym_list = 63,
  sym_vector = 64,
  sym_structure = 65,
  sym_hash = 66,
  sym_graph = 67,
  sym_quote = 68,
  sym_quasiquote = 69,
  sym_syntax = 70,
  sym_quasisyntax = 71,
  sym_unquote = 72,
  sym_unquote_splicing = 73,
  sym_unsyntax = 74,
  sym_unsyntax_splicing = 75,
  sym_extension = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym_block_comment_repeat1 = 78,
  aux_sym_sexp_comment_repeat1 = 79,
  aux_sym__real_string_repeat1 = 80,
  aux_sym_list_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skip_token1] = "_skip_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_POUND_SEMI] = "#;",
  [sym__line_comment] = "_line_comment",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LT_LT] = "#<<",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_number_token1] = "number_token1",
  [sym_decimal] = "decimal",
  [sym_character] = "character",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_keyword] = "keyword",
  [anon_sym_POUND_AMP] = "#&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUNDfl] = "#fl",
  [anon_sym_POUNDfx] = "#fx",
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [anon_sym_POUND_BANG] = "#!",
  [sym_lang_name] = "lang_name",
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_sexp_comment] = "sexp_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym_extension] = "extension",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_sexp_comment_repeat1] = "sexp_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skip_token1] = aux_sym__skip_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [sym__line_comment] = sym__line_comment,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_decimal] = sym_decimal,
  [sym_character] = sym_character,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_keyword] = sym_keyword,
  [anon_sym_POUND_AMP] = anon_sym_POUND_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUNDfl] = anon_sym_POUNDfl,
  [anon_sym_POUNDfx] = anon_sym_POUNDfx,
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [sym_lang_name] = sym_lang_name,
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_sexp_comment] = sym_sexp_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym_extension] = sym_extension,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_sexp_comment_repeat1] = aux_sym_sexp_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skip_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
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
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__real_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_AMP] = {
    .visible = true,
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
  [anon_sym_POUNDfl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheqv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
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
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_lang_name] = {
    .visible = true,
    .named = true,
  },
  [sym__here_string_body] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string] = {
    .visible = true,
    .named = true,
  },
  [sym_here_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
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
  [sym_box] = {
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
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasisyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexp_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 3,
  [11] = 5,
  [12] = 7,
  [13] = 6,
  [14] = 5,
  [15] = 6,
  [16] = 7,
  [17] = 8,
  [18] = 9,
  [19] = 8,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 24,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 38,
  [49] = 49,
  [50] = 39,
  [51] = 31,
  [52] = 30,
  [53] = 29,
  [54] = 47,
  [55] = 28,
  [56] = 46,
  [57] = 27,
  [58] = 45,
  [59] = 26,
  [60] = 24,
  [61] = 25,
  [62] = 43,
  [63] = 40,
  [64] = 23,
  [65] = 35,
  [66] = 42,
  [67] = 37,
  [68] = 41,
  [69] = 49,
  [70] = 41,
  [71] = 43,
  [72] = 35,
  [73] = 40,
  [74] = 25,
  [75] = 26,
  [76] = 38,
  [77] = 27,
  [78] = 28,
  [79] = 29,
  [80] = 30,
  [81] = 31,
  [82] = 32,
  [83] = 49,
  [84] = 23,
  [85] = 47,
  [86] = 39,
  [87] = 87,
  [88] = 46,
  [89] = 42,
  [90] = 45,
  [91] = 87,
  [92] = 37,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 124,
  [137] = 110,
  [138] = 100,
  [139] = 101,
  [140] = 102,
  [141] = 120,
  [142] = 118,
  [143] = 119,
  [144] = 103,
  [145] = 104,
  [146] = 105,
  [147] = 106,
  [148] = 107,
  [149] = 108,
  [150] = 109,
  [151] = 96,
  [152] = 111,
  [153] = 112,
  [154] = 114,
  [155] = 113,
  [156] = 97,
  [157] = 94,
  [158] = 95,
  [159] = 98,
  [160] = 125,
  [161] = 123,
  [162] = 115,
  [163] = 116,
  [164] = 117,
  [165] = 121,
  [166] = 122,
  [167] = 134,
  [168] = 133,
  [169] = 132,
  [170] = 131,
  [171] = 99,
  [172] = 126,
  [173] = 93,
  [174] = 130,
  [175] = 127,
  [176] = 128,
  [177] = 129,
  [178] = 125,
  [179] = 126,
  [180] = 128,
  [181] = 93,
  [182] = 129,
  [183] = 130,
  [184] = 131,
  [185] = 132,
  [186] = 105,
  [187] = 133,
  [188] = 124,
  [189] = 134,
  [190] = 98,
  [191] = 122,
  [192] = 123,
  [193] = 121,
  [194] = 96,
  [195] = 117,
  [196] = 120,
  [197] = 116,
  [198] = 99,
  [199] = 100,
  [200] = 118,
  [201] = 94,
  [202] = 115,
  [203] = 95,
  [204] = 108,
  [205] = 97,
  [206] = 113,
  [207] = 112,
  [208] = 111,
  [209] = 110,
  [210] = 109,
  [211] = 127,
  [212] = 107,
  [213] = 106,
  [214] = 119,
  [215] = 104,
  [216] = 103,
  [217] = 101,
  [218] = 218,
  [219] = 218,
  [220] = 218,
  [221] = 221,
  [222] = 221,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 225,
  [229] = 225,
  [230] = 226,
  [231] = 231,
  [232] = 231,
  [233] = 231,
  [234] = 225,
  [235] = 226,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 236,
  [241] = 241,
  [242] = 242,
  [243] = 241,
  [244] = 244,
  [245] = 244,
  [246] = 244,
  [247] = 242,
  [248] = 238,
  [249] = 241,
  [250] = 236,
  [251] = 242,
  [252] = 96,
  [253] = 94,
  [254] = 254,
  [255] = 254,
  [256] = 254,
  [257] = 257,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 257,
  [262] = 258,
};

static inline bool aux_sym__skip_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym_keyword_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '}' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == 133
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 12288
        ? (c < 8287
          ? c == 8239
          : c <= 8287)
        : (c <= 12288 || c == 65279))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(240);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(459);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '{') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(189);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(359);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 61:
      if (lookahead == '<') ADVANCE(260);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(391);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '|') ADVANCE(111);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(452);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(391);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(463);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'q') ADVANCE(464);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 110:
      if (lookahead == '|') ADVANCE(451);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '|') ADVANCE(452);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(252);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 144:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(293);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 193:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 194:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(410);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(391);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(357);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(367);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(365);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 221:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(265);
      if (lookahead == '\r') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 235:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(246);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '|') ADVANCE(247);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(451);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(452);
      END_STATE();
    case 239:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'x') ADVANCE(461);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(293);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(185);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '.') ADVANCE(342);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == '/') ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(347);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(347);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(357);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(360);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(360);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(207);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(365);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(367);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(429);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '|') ADVANCE(111);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(252);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 239},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 239},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 239},
  [137] = {.lex_state = 239},
  [138] = {.lex_state = 239},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 239},
  [141] = {.lex_state = 239},
  [142] = {.lex_state = 239},
  [143] = {.lex_state = 239},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 239},
  [146] = {.lex_state = 239},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 239},
  [149] = {.lex_state = 239},
  [150] = {.lex_state = 239},
  [151] = {.lex_state = 239},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 239},
  [154] = {.lex_state = 239},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 239},
  [157] = {.lex_state = 239},
  [158] = {.lex_state = 239},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 239},
  [161] = {.lex_state = 239},
  [162] = {.lex_state = 239},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 239},
  [165] = {.lex_state = 239},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 239},
  [168] = {.lex_state = 239},
  [169] = {.lex_state = 239},
  [170] = {.lex_state = 239},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 239},
  [173] = {.lex_state = 239},
  [174] = {.lex_state = 239},
  [175] = {.lex_state = 239},
  [176] = {.lex_state = 239},
  [177] = {.lex_state = 239},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 236},
  [225] = {.lex_state = 236},
  [226] = {.lex_state = 236},
  [227] = {.lex_state = 236},
  [228] = {.lex_state = 236},
  [229] = {.lex_state = 236},
  [230] = {.lex_state = 236},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 236},
  [235] = {.lex_state = 236},
  [236] = {.lex_state = 239},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 239},
  [241] = {.lex_state = 239},
  [242] = {.lex_state = 239},
  [243] = {.lex_state = 239},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 239},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 239},
  [250] = {.lex_state = 239},
  [251] = {.lex_state = 239},
  [252] = {.lex_state = 236},
  [253] = {.lex_state = 236},
  [254] = {.lex_state = 239},
  [255] = {.lex_state = 239},
  [256] = {.lex_state = 239},
  [257] = {.lex_state = 235},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 235},
  [262] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token__here_string_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__here_string_body] = sym__here_string_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__here_string_body] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skip_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(260),
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_quasiquote] = STATE(21),
    [sym_syntax] = STATE(21),
    [sym_quasisyntax] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_unquote_splicing] = STATE(21),
    [sym_unsyntax] = STATE(21),
    [sym_unsyntax_splicing] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skip_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(5),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
    [anon_sym_POUNDreader] = ACTIONS(59),
    [anon_sym_POUNDlang] = ACTIONS(61),
    [anon_sym_POUND_BANG] = ACTIONS(63),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(65),
    [sym_dot] = ACTIONS(68),
    [aux_sym_comment_token1] = ACTIONS(71),
    [anon_sym_POUND_PIPE] = ACTIONS(74),
    [anon_sym_POUND_SEMI] = ACTIONS(77),
    [sym__line_comment] = ACTIONS(71),
    [sym_boolean] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_POUND_LT_LT] = ACTIONS(83),
    [aux_sym_regex_token1] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(92),
    [sym_character] = ACTIONS(65),
    [aux_sym_symbol_token1] = ACTIONS(95),
    [sym_keyword] = ACTIONS(65),
    [anon_sym_POUND_AMP] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_POUNDfl] = ACTIONS(112),
    [anon_sym_POUNDfx] = ACTIONS(112),
    [anon_sym_POUNDs] = ACTIONS(115),
    [anon_sym_POUNDhash] = ACTIONS(118),
    [anon_sym_POUNDhasheq] = ACTIONS(118),
    [anon_sym_POUNDhasheqv] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_POUND_SQUOTE] = ACTIONS(130),
    [anon_sym_POUND_BQUOTE] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_COMMA_AT] = ACTIONS(139),
    [anon_sym_POUND_COMMA] = ACTIONS(142),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(145),
    [anon_sym_POUNDreader] = ACTIONS(148),
    [anon_sym_POUNDlang] = ACTIONS(151),
    [anon_sym_POUND_BANG] = ACTIONS(154),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [5] = {
    [sym__token] = STATE(17),
    [sym__skip] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_sexp_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_syntax] = STATE(17),
    [sym_quasisyntax] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_unquote_splicing] = STATE(17),
    [sym_unsyntax] = STATE(17),
    [sym_unsyntax_splicing] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__skip_token1] = ACTIONS(221),
    [sym_dot] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(221),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(221),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [6] = {
    [sym__token] = STATE(20),
    [sym__skip] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_sexp_comment] = STATE(20),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_byte_string] = STATE(20),
    [sym_here_string] = STATE(20),
    [sym_regex] = STATE(20),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_box] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_structure] = STATE(20),
    [sym_hash] = STATE(20),
    [sym_graph] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_syntax] = STATE(20),
    [sym_quasisyntax] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unsyntax] = STATE(20),
    [sym_unsyntax_splicing] = STATE(20),
    [sym_extension] = STATE(20),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym__skip_token1] = ACTIONS(227),
    [sym_dot] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(227),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(227),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym__skip] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_sexp_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_quasiquote] = STATE(4),
    [sym_syntax] = STATE(4),
    [sym_quasisyntax] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_unquote_splicing] = STATE(4),
    [sym_unsyntax] = STATE(4),
    [sym_unsyntax_splicing] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__skip_token1] = ACTIONS(231),
    [sym_dot] = ACTIONS(233),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(231),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [8] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [11] = {
    [sym__token] = STATE(8),
    [sym__skip] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_sexp_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_here_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_quasiquote] = STATE(8),
    [sym_syntax] = STATE(8),
    [sym_quasisyntax] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_unquote_splicing] = STATE(8),
    [sym_unsyntax] = STATE(8),
    [sym_unsyntax_splicing] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [aux_sym__skip_token1] = ACTIONS(237),
    [sym_dot] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(237),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(237),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [12] = {
    [sym__token] = STATE(10),
    [sym__skip] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_sexp_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_here_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_quasiquote] = STATE(10),
    [sym_syntax] = STATE(10),
    [sym_quasisyntax] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_unquote_splicing] = STATE(10),
    [sym_unsyntax] = STATE(10),
    [sym_unsyntax_splicing] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [aux_sym__skip_token1] = ACTIONS(243),
    [sym_dot] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(243),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(243),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [13] = {
    [sym__token] = STATE(18),
    [sym__skip] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym_sexp_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_byte_string] = STATE(18),
    [sym_here_string] = STATE(18),
    [sym_regex] = STATE(18),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_box] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_structure] = STATE(18),
    [sym_hash] = STATE(18),
    [sym_graph] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_syntax] = STATE(18),
    [sym_quasisyntax] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unsyntax] = STATE(18),
    [sym_unsyntax_splicing] = STATE(18),
    [sym_extension] = STATE(18),
    [aux_sym_list_repeat1] = STATE(18),
    [aux_sym__skip_token1] = ACTIONS(249),
    [sym_dot] = ACTIONS(251),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(249),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(249),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [14] = {
    [sym__token] = STATE(19),
    [sym__skip] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_sexp_comment] = STATE(19),
    [sym__datum] = STATE(19),
    [sym_string] = STATE(19),
    [sym_byte_string] = STATE(19),
    [sym_here_string] = STATE(19),
    [sym_regex] = STATE(19),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_box] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_structure] = STATE(19),
    [sym_hash] = STATE(19),
    [sym_graph] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_syntax] = STATE(19),
    [sym_quasisyntax] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unsyntax] = STATE(19),
    [sym_unsyntax_splicing] = STATE(19),
    [sym_extension] = STATE(19),
    [aux_sym_list_repeat1] = STATE(19),
    [aux_sym__skip_token1] = ACTIONS(253),
    [sym_dot] = ACTIONS(255),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(253),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(253),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [15] = {
    [sym__token] = STATE(9),
    [sym__skip] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_sexp_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_syntax] = STATE(9),
    [sym_quasisyntax] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_unquote_splicing] = STATE(9),
    [sym_unsyntax] = STATE(9),
    [sym_unsyntax_splicing] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [aux_sym__skip_token1] = ACTIONS(257),
    [sym_dot] = ACTIONS(259),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(257),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(257),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [16] = {
    [sym__token] = STATE(3),
    [sym__skip] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_sexp_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_quasiquote] = STATE(3),
    [sym_syntax] = STATE(3),
    [sym_quasisyntax] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_unquote_splicing] = STATE(3),
    [sym_unsyntax] = STATE(3),
    [sym_unsyntax_splicing] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__skip_token1] = ACTIONS(261),
    [sym_dot] = ACTIONS(263),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(261),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(261),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [19] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(157),
    [sym_dot] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(161),
    [anon_sym_POUND_PIPE] = ACTIONS(163),
    [anon_sym_POUND_SEMI] = ACTIONS(165),
    [sym__line_comment] = ACTIONS(161),
    [sym_boolean] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(157),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(213),
    [anon_sym_POUNDlang] = ACTIONS(215),
    [anon_sym_POUND_BANG] = ACTIONS(217),
  },
  [21] = {
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym__skip_token1] = ACTIONS(267),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(267),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(267),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
    [anon_sym_POUNDreader] = ACTIONS(59),
    [anon_sym_POUNDlang] = ACTIONS(61),
    [anon_sym_POUND_BANG] = ACTIONS(63),
  },
  [22] = {
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym__skip_token1] = ACTIONS(273),
    [aux_sym_comment_token1] = ACTIONS(276),
    [anon_sym_POUND_PIPE] = ACTIONS(279),
    [anon_sym_POUND_SEMI] = ACTIONS(282),
    [sym__line_comment] = ACTIONS(276),
    [sym_boolean] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(288),
    [anon_sym_POUND_LT_LT] = ACTIONS(291),
    [aux_sym_regex_token1] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_number_token1] = ACTIONS(300),
    [sym_character] = ACTIONS(273),
    [aux_sym_symbol_token1] = ACTIONS(303),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_POUND_AMP] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_POUNDfl] = ACTIONS(318),
    [anon_sym_POUNDfx] = ACTIONS(318),
    [anon_sym_POUNDs] = ACTIONS(321),
    [anon_sym_POUNDhash] = ACTIONS(324),
    [anon_sym_POUNDhasheq] = ACTIONS(324),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_POUND_SQUOTE] = ACTIONS(336),
    [anon_sym_POUND_BQUOTE] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(348),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(351),
    [anon_sym_POUNDreader] = ACTIONS(354),
    [anon_sym_POUNDlang] = ACTIONS(357),
    [anon_sym_POUND_BANG] = ACTIONS(360),
  },
  [23] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(186),
    [sym_string] = STATE(186),
    [sym_byte_string] = STATE(186),
    [sym_here_string] = STATE(186),
    [sym_regex] = STATE(186),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(186),
    [sym_symbol] = STATE(186),
    [sym_box] = STATE(186),
    [sym_list] = STATE(186),
    [sym_vector] = STATE(186),
    [sym_structure] = STATE(186),
    [sym_hash] = STATE(186),
    [sym_graph] = STATE(186),
    [sym_quote] = STATE(186),
    [sym_quasiquote] = STATE(186),
    [sym_syntax] = STATE(186),
    [sym_quasisyntax] = STATE(186),
    [sym_unquote] = STATE(186),
    [sym_unquote_splicing] = STATE(186),
    [sym_unsyntax] = STATE(186),
    [sym_unsyntax_splicing] = STATE(186),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [24] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(107),
    [sym_symbol] = STATE(107),
    [sym_box] = STATE(107),
    [sym_list] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_structure] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_graph] = STATE(107),
    [sym_quote] = STATE(107),
    [sym_quasiquote] = STATE(107),
    [sym_syntax] = STATE(107),
    [sym_quasisyntax] = STATE(107),
    [sym_unquote] = STATE(107),
    [sym_unquote_splicing] = STATE(107),
    [sym_unsyntax] = STATE(107),
    [sym_unsyntax_splicing] = STATE(107),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(421),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(421),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [25] = {
    [sym__skip] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_block_comment] = STATE(56),
    [sym_sexp_comment] = STATE(56),
    [sym__datum] = STATE(168),
    [sym_string] = STATE(168),
    [sym_byte_string] = STATE(168),
    [sym_here_string] = STATE(168),
    [sym_regex] = STATE(168),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(168),
    [sym_symbol] = STATE(168),
    [sym_box] = STATE(168),
    [sym_list] = STATE(168),
    [sym_vector] = STATE(168),
    [sym_structure] = STATE(168),
    [sym_hash] = STATE(168),
    [sym_graph] = STATE(168),
    [sym_quote] = STATE(168),
    [sym_quasiquote] = STATE(168),
    [sym_syntax] = STATE(168),
    [sym_quasisyntax] = STATE(168),
    [sym_unquote] = STATE(168),
    [sym_unquote_splicing] = STATE(168),
    [sym_unsyntax] = STATE(168),
    [sym_unsyntax_splicing] = STATE(168),
    [aux_sym_sexp_comment_repeat1] = STATE(56),
    [aux_sym__skip_token1] = ACTIONS(423),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(427),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(427),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [26] = {
    [sym__skip] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_block_comment] = STATE(58),
    [sym_sexp_comment] = STATE(58),
    [sym__datum] = STATE(167),
    [sym_string] = STATE(167),
    [sym_byte_string] = STATE(167),
    [sym_here_string] = STATE(167),
    [sym_regex] = STATE(167),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(167),
    [sym_symbol] = STATE(167),
    [sym_box] = STATE(167),
    [sym_list] = STATE(167),
    [sym_vector] = STATE(167),
    [sym_structure] = STATE(167),
    [sym_hash] = STATE(167),
    [sym_graph] = STATE(167),
    [sym_quote] = STATE(167),
    [sym_quasiquote] = STATE(167),
    [sym_syntax] = STATE(167),
    [sym_quasisyntax] = STATE(167),
    [sym_unquote] = STATE(167),
    [sym_unquote_splicing] = STATE(167),
    [sym_unsyntax] = STATE(167),
    [sym_unsyntax_splicing] = STATE(167),
    [aux_sym_sexp_comment_repeat1] = STATE(58),
    [aux_sym__skip_token1] = ACTIONS(429),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(433),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(433),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [27] = {
    [sym__skip] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym_sexp_comment] = STATE(60),
    [sym__datum] = STATE(166),
    [sym_string] = STATE(166),
    [sym_byte_string] = STATE(166),
    [sym_here_string] = STATE(166),
    [sym_regex] = STATE(166),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(166),
    [sym_symbol] = STATE(166),
    [sym_box] = STATE(166),
    [sym_list] = STATE(166),
    [sym_vector] = STATE(166),
    [sym_structure] = STATE(166),
    [sym_hash] = STATE(166),
    [sym_graph] = STATE(166),
    [sym_quote] = STATE(166),
    [sym_quasiquote] = STATE(166),
    [sym_syntax] = STATE(166),
    [sym_quasisyntax] = STATE(166),
    [sym_unquote] = STATE(166),
    [sym_unquote_splicing] = STATE(166),
    [sym_unsyntax] = STATE(166),
    [sym_unsyntax_splicing] = STATE(166),
    [aux_sym_sexp_comment_repeat1] = STATE(60),
    [aux_sym__skip_token1] = ACTIONS(435),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(439),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(439),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [28] = {
    [sym__skip] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_block_comment] = STATE(62),
    [sym_sexp_comment] = STATE(62),
    [sym__datum] = STATE(165),
    [sym_string] = STATE(165),
    [sym_byte_string] = STATE(165),
    [sym_here_string] = STATE(165),
    [sym_regex] = STATE(165),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(165),
    [sym_symbol] = STATE(165),
    [sym_box] = STATE(165),
    [sym_list] = STATE(165),
    [sym_vector] = STATE(165),
    [sym_structure] = STATE(165),
    [sym_hash] = STATE(165),
    [sym_graph] = STATE(165),
    [sym_quote] = STATE(165),
    [sym_quasiquote] = STATE(165),
    [sym_syntax] = STATE(165),
    [sym_quasisyntax] = STATE(165),
    [sym_unquote] = STATE(165),
    [sym_unquote_splicing] = STATE(165),
    [sym_unsyntax] = STATE(165),
    [sym_unsyntax_splicing] = STATE(165),
    [aux_sym_sexp_comment_repeat1] = STATE(62),
    [aux_sym__skip_token1] = ACTIONS(441),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(445),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(445),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [29] = {
    [sym__skip] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_block_comment] = STATE(64),
    [sym_sexp_comment] = STATE(64),
    [sym__datum] = STATE(164),
    [sym_string] = STATE(164),
    [sym_byte_string] = STATE(164),
    [sym_here_string] = STATE(164),
    [sym_regex] = STATE(164),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(164),
    [sym_symbol] = STATE(164),
    [sym_box] = STATE(164),
    [sym_list] = STATE(164),
    [sym_vector] = STATE(164),
    [sym_structure] = STATE(164),
    [sym_hash] = STATE(164),
    [sym_graph] = STATE(164),
    [sym_quote] = STATE(164),
    [sym_quasiquote] = STATE(164),
    [sym_syntax] = STATE(164),
    [sym_quasisyntax] = STATE(164),
    [sym_unquote] = STATE(164),
    [sym_unquote_splicing] = STATE(164),
    [sym_unsyntax] = STATE(164),
    [sym_unsyntax_splicing] = STATE(164),
    [aux_sym_sexp_comment_repeat1] = STATE(64),
    [aux_sym__skip_token1] = ACTIONS(447),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(451),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [30] = {
    [sym__skip] = STATE(66),
    [sym_comment] = STATE(66),
    [sym_block_comment] = STATE(66),
    [sym_sexp_comment] = STATE(66),
    [sym__datum] = STATE(163),
    [sym_string] = STATE(163),
    [sym_byte_string] = STATE(163),
    [sym_here_string] = STATE(163),
    [sym_regex] = STATE(163),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(163),
    [sym_symbol] = STATE(163),
    [sym_box] = STATE(163),
    [sym_list] = STATE(163),
    [sym_vector] = STATE(163),
    [sym_structure] = STATE(163),
    [sym_hash] = STATE(163),
    [sym_graph] = STATE(163),
    [sym_quote] = STATE(163),
    [sym_quasiquote] = STATE(163),
    [sym_syntax] = STATE(163),
    [sym_quasisyntax] = STATE(163),
    [sym_unquote] = STATE(163),
    [sym_unquote_splicing] = STATE(163),
    [sym_unsyntax] = STATE(163),
    [sym_unsyntax_splicing] = STATE(163),
    [aux_sym_sexp_comment_repeat1] = STATE(66),
    [aux_sym__skip_token1] = ACTIONS(453),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(457),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [31] = {
    [sym__skip] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_block_comment] = STATE(68),
    [sym_sexp_comment] = STATE(68),
    [sym__datum] = STATE(162),
    [sym_string] = STATE(162),
    [sym_byte_string] = STATE(162),
    [sym_here_string] = STATE(162),
    [sym_regex] = STATE(162),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(162),
    [sym_symbol] = STATE(162),
    [sym_box] = STATE(162),
    [sym_list] = STATE(162),
    [sym_vector] = STATE(162),
    [sym_structure] = STATE(162),
    [sym_hash] = STATE(162),
    [sym_graph] = STATE(162),
    [sym_quote] = STATE(162),
    [sym_quasiquote] = STATE(162),
    [sym_syntax] = STATE(162),
    [sym_quasisyntax] = STATE(162),
    [sym_unquote] = STATE(162),
    [sym_unquote_splicing] = STATE(162),
    [sym_unsyntax] = STATE(162),
    [sym_unsyntax_splicing] = STATE(162),
    [aux_sym_sexp_comment_repeat1] = STATE(68),
    [aux_sym__skip_token1] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(463),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(463),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [32] = {
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym_sexp_comment] = STATE(91),
    [sym__datum] = STATE(154),
    [sym_string] = STATE(154),
    [sym_byte_string] = STATE(154),
    [sym_here_string] = STATE(154),
    [sym_regex] = STATE(154),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(154),
    [sym_symbol] = STATE(154),
    [sym_box] = STATE(154),
    [sym_list] = STATE(154),
    [sym_vector] = STATE(154),
    [sym_structure] = STATE(154),
    [sym_hash] = STATE(154),
    [sym_graph] = STATE(154),
    [sym_quote] = STATE(154),
    [sym_quasiquote] = STATE(154),
    [sym_syntax] = STATE(154),
    [sym_quasisyntax] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splicing] = STATE(154),
    [sym_unsyntax] = STATE(154),
    [sym_unsyntax_splicing] = STATE(154),
    [aux_sym_sexp_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(465),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [33] = {
    [sym__skip] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym_sexp_comment] = STATE(39),
    [sym__datum] = STATE(159),
    [sym_string] = STATE(159),
    [sym_byte_string] = STATE(159),
    [sym_here_string] = STATE(159),
    [sym_regex] = STATE(159),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(159),
    [sym_symbol] = STATE(159),
    [sym_box] = STATE(159),
    [sym_list] = STATE(159),
    [sym_vector] = STATE(159),
    [sym_structure] = STATE(159),
    [sym_hash] = STATE(159),
    [sym_graph] = STATE(159),
    [sym_quote] = STATE(159),
    [sym_quasiquote] = STATE(159),
    [sym_syntax] = STATE(159),
    [sym_quasisyntax] = STATE(159),
    [sym_unquote] = STATE(159),
    [sym_unquote_splicing] = STATE(159),
    [sym_unsyntax] = STATE(159),
    [sym_unsyntax_splicing] = STATE(159),
    [aux_sym_sexp_comment_repeat1] = STATE(39),
    [aux_sym__skip_token1] = ACTIONS(471),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [34] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(98),
    [sym_symbol] = STATE(98),
    [sym_box] = STATE(98),
    [sym_list] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_structure] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_graph] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_syntax] = STATE(98),
    [sym_quasisyntax] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_unquote_splicing] = STATE(98),
    [sym_unsyntax] = STATE(98),
    [sym_unsyntax_splicing] = STATE(98),
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [35] = {
    [sym__skip] = STATE(83),
    [sym_comment] = STATE(83),
    [sym_block_comment] = STATE(83),
    [sym_sexp_comment] = STATE(83),
    [sym__datum] = STATE(176),
    [sym_string] = STATE(176),
    [sym_byte_string] = STATE(176),
    [sym_here_string] = STATE(176),
    [sym_regex] = STATE(176),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(176),
    [sym_symbol] = STATE(176),
    [sym_box] = STATE(176),
    [sym_list] = STATE(176),
    [sym_vector] = STATE(176),
    [sym_structure] = STATE(176),
    [sym_hash] = STATE(176),
    [sym_graph] = STATE(176),
    [sym_quote] = STATE(176),
    [sym_quasiquote] = STATE(176),
    [sym_syntax] = STATE(176),
    [sym_quasisyntax] = STATE(176),
    [sym_unquote] = STATE(176),
    [sym_unquote_splicing] = STATE(176),
    [sym_unsyntax] = STATE(176),
    [sym_unsyntax_splicing] = STATE(176),
    [aux_sym_sexp_comment_repeat1] = STATE(83),
    [aux_sym__skip_token1] = ACTIONS(483),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(487),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(487),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [36] = {
    [sym__skip] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(190),
    [sym_string] = STATE(190),
    [sym_byte_string] = STATE(190),
    [sym_here_string] = STATE(190),
    [sym_regex] = STATE(190),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(190),
    [sym_symbol] = STATE(190),
    [sym_box] = STATE(190),
    [sym_list] = STATE(190),
    [sym_vector] = STATE(190),
    [sym_structure] = STATE(190),
    [sym_hash] = STATE(190),
    [sym_graph] = STATE(190),
    [sym_quote] = STATE(190),
    [sym_quasiquote] = STATE(190),
    [sym_syntax] = STATE(190),
    [sym_quasisyntax] = STATE(190),
    [sym_unquote] = STATE(190),
    [sym_unquote_splicing] = STATE(190),
    [sym_unsyntax] = STATE(190),
    [sym_unsyntax_splicing] = STATE(190),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__skip_token1] = ACTIONS(489),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(493),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(493),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [37] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(199),
    [sym_string] = STATE(199),
    [sym_byte_string] = STATE(199),
    [sym_here_string] = STATE(199),
    [sym_regex] = STATE(199),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(199),
    [sym_symbol] = STATE(199),
    [sym_box] = STATE(199),
    [sym_list] = STATE(199),
    [sym_vector] = STATE(199),
    [sym_structure] = STATE(199),
    [sym_hash] = STATE(199),
    [sym_graph] = STATE(199),
    [sym_quote] = STATE(199),
    [sym_quasiquote] = STATE(199),
    [sym_syntax] = STATE(199),
    [sym_quasisyntax] = STATE(199),
    [sym_unquote] = STATE(199),
    [sym_unquote_splicing] = STATE(199),
    [sym_unsyntax] = STATE(199),
    [sym_unsyntax_splicing] = STATE(199),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(497),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(497),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [38] = {
    [sym__skip] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym_sexp_comment] = STATE(37),
    [sym__datum] = STATE(217),
    [sym_string] = STATE(217),
    [sym_byte_string] = STATE(217),
    [sym_here_string] = STATE(217),
    [sym_regex] = STATE(217),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(217),
    [sym_symbol] = STATE(217),
    [sym_box] = STATE(217),
    [sym_list] = STATE(217),
    [sym_vector] = STATE(217),
    [sym_structure] = STATE(217),
    [sym_hash] = STATE(217),
    [sym_graph] = STATE(217),
    [sym_quote] = STATE(217),
    [sym_quasiquote] = STATE(217),
    [sym_syntax] = STATE(217),
    [sym_quasisyntax] = STATE(217),
    [sym_unquote] = STATE(217),
    [sym_unquote_splicing] = STATE(217),
    [sym_unsyntax] = STATE(217),
    [sym_unsyntax_splicing] = STATE(217),
    [aux_sym_sexp_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(499),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(503),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [39] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(173),
    [sym_string] = STATE(173),
    [sym_byte_string] = STATE(173),
    [sym_here_string] = STATE(173),
    [sym_regex] = STATE(173),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(173),
    [sym_symbol] = STATE(173),
    [sym_box] = STATE(173),
    [sym_list] = STATE(173),
    [sym_vector] = STATE(173),
    [sym_structure] = STATE(173),
    [sym_hash] = STATE(173),
    [sym_graph] = STATE(173),
    [sym_quote] = STATE(173),
    [sym_quasiquote] = STATE(173),
    [sym_syntax] = STATE(173),
    [sym_quasisyntax] = STATE(173),
    [sym_unquote] = STATE(173),
    [sym_unquote_splicing] = STATE(173),
    [sym_unsyntax] = STATE(173),
    [sym_unsyntax_splicing] = STATE(173),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(507),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(507),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [40] = {
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym_sexp_comment] = STATE(54),
    [sym__datum] = STATE(169),
    [sym_string] = STATE(169),
    [sym_byte_string] = STATE(169),
    [sym_here_string] = STATE(169),
    [sym_regex] = STATE(169),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(169),
    [sym_symbol] = STATE(169),
    [sym_box] = STATE(169),
    [sym_list] = STATE(169),
    [sym_vector] = STATE(169),
    [sym_structure] = STATE(169),
    [sym_hash] = STATE(169),
    [sym_graph] = STATE(169),
    [sym_quote] = STATE(169),
    [sym_quasiquote] = STATE(169),
    [sym_syntax] = STATE(169),
    [sym_quasisyntax] = STATE(169),
    [sym_unquote] = STATE(169),
    [sym_unquote_splicing] = STATE(169),
    [sym_unsyntax] = STATE(169),
    [sym_unsyntax_splicing] = STATE(169),
    [aux_sym_sexp_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(509),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(513),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(513),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [41] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(216),
    [sym_string] = STATE(216),
    [sym_byte_string] = STATE(216),
    [sym_here_string] = STATE(216),
    [sym_regex] = STATE(216),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(216),
    [sym_symbol] = STATE(216),
    [sym_box] = STATE(216),
    [sym_list] = STATE(216),
    [sym_vector] = STATE(216),
    [sym_structure] = STATE(216),
    [sym_hash] = STATE(216),
    [sym_graph] = STATE(216),
    [sym_quote] = STATE(216),
    [sym_quasiquote] = STATE(216),
    [sym_syntax] = STATE(216),
    [sym_quasisyntax] = STATE(216),
    [sym_unquote] = STATE(216),
    [sym_unquote_splicing] = STATE(216),
    [sym_unsyntax] = STATE(216),
    [sym_unsyntax_splicing] = STATE(216),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(517),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(517),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [42] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(215),
    [sym_string] = STATE(215),
    [sym_byte_string] = STATE(215),
    [sym_here_string] = STATE(215),
    [sym_regex] = STATE(215),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(215),
    [sym_symbol] = STATE(215),
    [sym_box] = STATE(215),
    [sym_list] = STATE(215),
    [sym_vector] = STATE(215),
    [sym_structure] = STATE(215),
    [sym_hash] = STATE(215),
    [sym_graph] = STATE(215),
    [sym_quote] = STATE(215),
    [sym_quasiquote] = STATE(215),
    [sym_syntax] = STATE(215),
    [sym_quasisyntax] = STATE(215),
    [sym_unquote] = STATE(215),
    [sym_unquote_splicing] = STATE(215),
    [sym_unsyntax] = STATE(215),
    [sym_unsyntax_splicing] = STATE(215),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(521),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [43] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(213),
    [sym_string] = STATE(213),
    [sym_byte_string] = STATE(213),
    [sym_here_string] = STATE(213),
    [sym_regex] = STATE(213),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(213),
    [sym_symbol] = STATE(213),
    [sym_box] = STATE(213),
    [sym_list] = STATE(213),
    [sym_vector] = STATE(213),
    [sym_structure] = STATE(213),
    [sym_hash] = STATE(213),
    [sym_graph] = STATE(213),
    [sym_quote] = STATE(213),
    [sym_quasiquote] = STATE(213),
    [sym_syntax] = STATE(213),
    [sym_quasisyntax] = STATE(213),
    [sym_unquote] = STATE(213),
    [sym_unquote_splicing] = STATE(213),
    [sym_unsyntax] = STATE(213),
    [sym_unsyntax_splicing] = STATE(213),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(525),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [44] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(212),
    [sym_string] = STATE(212),
    [sym_byte_string] = STATE(212),
    [sym_here_string] = STATE(212),
    [sym_regex] = STATE(212),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(212),
    [sym_symbol] = STATE(212),
    [sym_box] = STATE(212),
    [sym_list] = STATE(212),
    [sym_vector] = STATE(212),
    [sym_structure] = STATE(212),
    [sym_hash] = STATE(212),
    [sym_graph] = STATE(212),
    [sym_quote] = STATE(212),
    [sym_quasiquote] = STATE(212),
    [sym_syntax] = STATE(212),
    [sym_quasisyntax] = STATE(212),
    [sym_unquote] = STATE(212),
    [sym_unquote_splicing] = STATE(212),
    [sym_unsyntax] = STATE(212),
    [sym_unsyntax_splicing] = STATE(212),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(529),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [45] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(204),
    [sym_string] = STATE(204),
    [sym_byte_string] = STATE(204),
    [sym_here_string] = STATE(204),
    [sym_regex] = STATE(204),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(204),
    [sym_symbol] = STATE(204),
    [sym_box] = STATE(204),
    [sym_list] = STATE(204),
    [sym_vector] = STATE(204),
    [sym_structure] = STATE(204),
    [sym_hash] = STATE(204),
    [sym_graph] = STATE(204),
    [sym_quote] = STATE(204),
    [sym_quasiquote] = STATE(204),
    [sym_syntax] = STATE(204),
    [sym_quasisyntax] = STATE(204),
    [sym_unquote] = STATE(204),
    [sym_unquote_splicing] = STATE(204),
    [sym_unsyntax] = STATE(204),
    [sym_unsyntax_splicing] = STATE(204),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(533),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(533),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [46] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(210),
    [sym_string] = STATE(210),
    [sym_byte_string] = STATE(210),
    [sym_here_string] = STATE(210),
    [sym_regex] = STATE(210),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(210),
    [sym_symbol] = STATE(210),
    [sym_box] = STATE(210),
    [sym_list] = STATE(210),
    [sym_vector] = STATE(210),
    [sym_structure] = STATE(210),
    [sym_hash] = STATE(210),
    [sym_graph] = STATE(210),
    [sym_quote] = STATE(210),
    [sym_quasiquote] = STATE(210),
    [sym_syntax] = STATE(210),
    [sym_quasisyntax] = STATE(210),
    [sym_unquote] = STATE(210),
    [sym_unquote_splicing] = STATE(210),
    [sym_unsyntax] = STATE(210),
    [sym_unsyntax_splicing] = STATE(210),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(537),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [47] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(209),
    [sym_string] = STATE(209),
    [sym_byte_string] = STATE(209),
    [sym_here_string] = STATE(209),
    [sym_regex] = STATE(209),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(209),
    [sym_symbol] = STATE(209),
    [sym_box] = STATE(209),
    [sym_list] = STATE(209),
    [sym_vector] = STATE(209),
    [sym_structure] = STATE(209),
    [sym_hash] = STATE(209),
    [sym_graph] = STATE(209),
    [sym_quote] = STATE(209),
    [sym_quasiquote] = STATE(209),
    [sym_syntax] = STATE(209),
    [sym_quasisyntax] = STATE(209),
    [sym_unquote] = STATE(209),
    [sym_unquote_splicing] = STATE(209),
    [sym_unsyntax] = STATE(209),
    [sym_unsyntax_splicing] = STATE(209),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(541),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(541),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [48] = {
    [sym__skip] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_block_comment] = STATE(67),
    [sym_sexp_comment] = STATE(67),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(101),
    [sym_symbol] = STATE(101),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_syntax] = STATE(101),
    [sym_quasisyntax] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splicing] = STATE(101),
    [sym_unsyntax] = STATE(101),
    [sym_unsyntax_splicing] = STATE(101),
    [aux_sym_sexp_comment_repeat1] = STATE(67),
    [aux_sym__skip_token1] = ACTIONS(543),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(547),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(547),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [49] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(207),
    [sym_string] = STATE(207),
    [sym_byte_string] = STATE(207),
    [sym_here_string] = STATE(207),
    [sym_regex] = STATE(207),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(207),
    [sym_symbol] = STATE(207),
    [sym_box] = STATE(207),
    [sym_list] = STATE(207),
    [sym_vector] = STATE(207),
    [sym_structure] = STATE(207),
    [sym_hash] = STATE(207),
    [sym_graph] = STATE(207),
    [sym_quote] = STATE(207),
    [sym_quasiquote] = STATE(207),
    [sym_syntax] = STATE(207),
    [sym_quasisyntax] = STATE(207),
    [sym_unquote] = STATE(207),
    [sym_unquote_splicing] = STATE(207),
    [sym_unsyntax] = STATE(207),
    [sym_unsyntax_splicing] = STATE(207),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(549),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(551),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(551),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [50] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(93),
    [sym_symbol] = STATE(93),
    [sym_box] = STATE(93),
    [sym_list] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_structure] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_graph] = STATE(93),
    [sym_quote] = STATE(93),
    [sym_quasiquote] = STATE(93),
    [sym_syntax] = STATE(93),
    [sym_quasisyntax] = STATE(93),
    [sym_unquote] = STATE(93),
    [sym_unquote_splicing] = STATE(93),
    [sym_unsyntax] = STATE(93),
    [sym_unsyntax_splicing] = STATE(93),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(555),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [51] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_sexp_comment] = STATE(41),
    [sym__datum] = STATE(202),
    [sym_string] = STATE(202),
    [sym_byte_string] = STATE(202),
    [sym_here_string] = STATE(202),
    [sym_regex] = STATE(202),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(202),
    [sym_symbol] = STATE(202),
    [sym_box] = STATE(202),
    [sym_list] = STATE(202),
    [sym_vector] = STATE(202),
    [sym_structure] = STATE(202),
    [sym_hash] = STATE(202),
    [sym_graph] = STATE(202),
    [sym_quote] = STATE(202),
    [sym_quasiquote] = STATE(202),
    [sym_syntax] = STATE(202),
    [sym_quasisyntax] = STATE(202),
    [sym_unquote] = STATE(202),
    [sym_unquote_splicing] = STATE(202),
    [sym_unsyntax] = STATE(202),
    [sym_unsyntax_splicing] = STATE(202),
    [aux_sym_sexp_comment_repeat1] = STATE(41),
    [aux_sym__skip_token1] = ACTIONS(557),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(559),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(561),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(561),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [52] = {
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_sexp_comment] = STATE(42),
    [sym__datum] = STATE(197),
    [sym_string] = STATE(197),
    [sym_byte_string] = STATE(197),
    [sym_here_string] = STATE(197),
    [sym_regex] = STATE(197),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(197),
    [sym_symbol] = STATE(197),
    [sym_box] = STATE(197),
    [sym_list] = STATE(197),
    [sym_vector] = STATE(197),
    [sym_structure] = STATE(197),
    [sym_hash] = STATE(197),
    [sym_graph] = STATE(197),
    [sym_quote] = STATE(197),
    [sym_quasiquote] = STATE(197),
    [sym_syntax] = STATE(197),
    [sym_quasisyntax] = STATE(197),
    [sym_unquote] = STATE(197),
    [sym_unquote_splicing] = STATE(197),
    [sym_unsyntax] = STATE(197),
    [sym_unsyntax_splicing] = STATE(197),
    [aux_sym_sexp_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(563),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(567),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(567),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [53] = {
    [sym__skip] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_sexp_comment] = STATE(23),
    [sym__datum] = STATE(195),
    [sym_string] = STATE(195),
    [sym_byte_string] = STATE(195),
    [sym_here_string] = STATE(195),
    [sym_regex] = STATE(195),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(195),
    [sym_symbol] = STATE(195),
    [sym_box] = STATE(195),
    [sym_list] = STATE(195),
    [sym_vector] = STATE(195),
    [sym_structure] = STATE(195),
    [sym_hash] = STATE(195),
    [sym_graph] = STATE(195),
    [sym_quote] = STATE(195),
    [sym_quasiquote] = STATE(195),
    [sym_syntax] = STATE(195),
    [sym_quasisyntax] = STATE(195),
    [sym_unquote] = STATE(195),
    [sym_unquote_splicing] = STATE(195),
    [sym_unsyntax] = STATE(195),
    [sym_unsyntax_splicing] = STATE(195),
    [aux_sym_sexp_comment_repeat1] = STATE(23),
    [aux_sym__skip_token1] = ACTIONS(569),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(573),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(573),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [54] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(137),
    [sym_string] = STATE(137),
    [sym_byte_string] = STATE(137),
    [sym_here_string] = STATE(137),
    [sym_regex] = STATE(137),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(137),
    [sym_symbol] = STATE(137),
    [sym_box] = STATE(137),
    [sym_list] = STATE(137),
    [sym_vector] = STATE(137),
    [sym_structure] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_graph] = STATE(137),
    [sym_quote] = STATE(137),
    [sym_quasiquote] = STATE(137),
    [sym_syntax] = STATE(137),
    [sym_quasisyntax] = STATE(137),
    [sym_unquote] = STATE(137),
    [sym_unquote_splicing] = STATE(137),
    [sym_unsyntax] = STATE(137),
    [sym_unsyntax_splicing] = STATE(137),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(577),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(577),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [55] = {
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym_sexp_comment] = STATE(43),
    [sym__datum] = STATE(193),
    [sym_string] = STATE(193),
    [sym_byte_string] = STATE(193),
    [sym_here_string] = STATE(193),
    [sym_regex] = STATE(193),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(193),
    [sym_symbol] = STATE(193),
    [sym_box] = STATE(193),
    [sym_list] = STATE(193),
    [sym_vector] = STATE(193),
    [sym_structure] = STATE(193),
    [sym_hash] = STATE(193),
    [sym_graph] = STATE(193),
    [sym_quote] = STATE(193),
    [sym_quasiquote] = STATE(193),
    [sym_syntax] = STATE(193),
    [sym_quasisyntax] = STATE(193),
    [sym_unquote] = STATE(193),
    [sym_unquote_splicing] = STATE(193),
    [sym_unsyntax] = STATE(193),
    [sym_unsyntax_splicing] = STATE(193),
    [aux_sym_sexp_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(579),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(583),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(583),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [56] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(150),
    [sym_string] = STATE(150),
    [sym_byte_string] = STATE(150),
    [sym_here_string] = STATE(150),
    [sym_regex] = STATE(150),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(150),
    [sym_symbol] = STATE(150),
    [sym_box] = STATE(150),
    [sym_list] = STATE(150),
    [sym_vector] = STATE(150),
    [sym_structure] = STATE(150),
    [sym_hash] = STATE(150),
    [sym_graph] = STATE(150),
    [sym_quote] = STATE(150),
    [sym_quasiquote] = STATE(150),
    [sym_syntax] = STATE(150),
    [sym_quasisyntax] = STATE(150),
    [sym_unquote] = STATE(150),
    [sym_unquote_splicing] = STATE(150),
    [sym_unsyntax] = STATE(150),
    [sym_unsyntax_splicing] = STATE(150),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(587),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(587),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [57] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_sexp_comment] = STATE(44),
    [sym__datum] = STATE(191),
    [sym_string] = STATE(191),
    [sym_byte_string] = STATE(191),
    [sym_here_string] = STATE(191),
    [sym_regex] = STATE(191),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(191),
    [sym_symbol] = STATE(191),
    [sym_box] = STATE(191),
    [sym_list] = STATE(191),
    [sym_vector] = STATE(191),
    [sym_structure] = STATE(191),
    [sym_hash] = STATE(191),
    [sym_graph] = STATE(191),
    [sym_quote] = STATE(191),
    [sym_quasiquote] = STATE(191),
    [sym_syntax] = STATE(191),
    [sym_quasisyntax] = STATE(191),
    [sym_unquote] = STATE(191),
    [sym_unquote_splicing] = STATE(191),
    [sym_unsyntax] = STATE(191),
    [sym_unsyntax_splicing] = STATE(191),
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(589),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(593),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(593),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [58] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(149),
    [sym_string] = STATE(149),
    [sym_byte_string] = STATE(149),
    [sym_here_string] = STATE(149),
    [sym_regex] = STATE(149),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(149),
    [sym_symbol] = STATE(149),
    [sym_box] = STATE(149),
    [sym_list] = STATE(149),
    [sym_vector] = STATE(149),
    [sym_structure] = STATE(149),
    [sym_hash] = STATE(149),
    [sym_graph] = STATE(149),
    [sym_quote] = STATE(149),
    [sym_quasiquote] = STATE(149),
    [sym_syntax] = STATE(149),
    [sym_quasisyntax] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splicing] = STATE(149),
    [sym_unsyntax] = STATE(149),
    [sym_unsyntax_splicing] = STATE(149),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(595),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(597),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(597),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [59] = {
    [sym__skip] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym_sexp_comment] = STATE(45),
    [sym__datum] = STATE(189),
    [sym_string] = STATE(189),
    [sym_byte_string] = STATE(189),
    [sym_here_string] = STATE(189),
    [sym_regex] = STATE(189),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(189),
    [sym_symbol] = STATE(189),
    [sym_box] = STATE(189),
    [sym_list] = STATE(189),
    [sym_vector] = STATE(189),
    [sym_structure] = STATE(189),
    [sym_hash] = STATE(189),
    [sym_graph] = STATE(189),
    [sym_quote] = STATE(189),
    [sym_quasiquote] = STATE(189),
    [sym_syntax] = STATE(189),
    [sym_quasisyntax] = STATE(189),
    [sym_unquote] = STATE(189),
    [sym_unquote_splicing] = STATE(189),
    [sym_unsyntax] = STATE(189),
    [sym_unsyntax_splicing] = STATE(189),
    [aux_sym_sexp_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(599),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(603),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(603),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [60] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(148),
    [sym_string] = STATE(148),
    [sym_byte_string] = STATE(148),
    [sym_here_string] = STATE(148),
    [sym_regex] = STATE(148),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(148),
    [sym_symbol] = STATE(148),
    [sym_box] = STATE(148),
    [sym_list] = STATE(148),
    [sym_vector] = STATE(148),
    [sym_structure] = STATE(148),
    [sym_hash] = STATE(148),
    [sym_graph] = STATE(148),
    [sym_quote] = STATE(148),
    [sym_quasiquote] = STATE(148),
    [sym_syntax] = STATE(148),
    [sym_quasisyntax] = STATE(148),
    [sym_unquote] = STATE(148),
    [sym_unquote_splicing] = STATE(148),
    [sym_unsyntax] = STATE(148),
    [sym_unsyntax_splicing] = STATE(148),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(607),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(607),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [61] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym_sexp_comment] = STATE(46),
    [sym__datum] = STATE(187),
    [sym_string] = STATE(187),
    [sym_byte_string] = STATE(187),
    [sym_here_string] = STATE(187),
    [sym_regex] = STATE(187),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(187),
    [sym_symbol] = STATE(187),
    [sym_box] = STATE(187),
    [sym_list] = STATE(187),
    [sym_vector] = STATE(187),
    [sym_structure] = STATE(187),
    [sym_hash] = STATE(187),
    [sym_graph] = STATE(187),
    [sym_quote] = STATE(187),
    [sym_quasiquote] = STATE(187),
    [sym_syntax] = STATE(187),
    [sym_quasisyntax] = STATE(187),
    [sym_unquote] = STATE(187),
    [sym_unquote_splicing] = STATE(187),
    [sym_unsyntax] = STATE(187),
    [sym_unsyntax_splicing] = STATE(187),
    [aux_sym_sexp_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(609),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(611),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(613),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(613),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [62] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(147),
    [sym_string] = STATE(147),
    [sym_byte_string] = STATE(147),
    [sym_here_string] = STATE(147),
    [sym_regex] = STATE(147),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(147),
    [sym_symbol] = STATE(147),
    [sym_box] = STATE(147),
    [sym_list] = STATE(147),
    [sym_vector] = STATE(147),
    [sym_structure] = STATE(147),
    [sym_hash] = STATE(147),
    [sym_graph] = STATE(147),
    [sym_quote] = STATE(147),
    [sym_quasiquote] = STATE(147),
    [sym_syntax] = STATE(147),
    [sym_quasisyntax] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splicing] = STATE(147),
    [sym_unsyntax] = STATE(147),
    [sym_unsyntax_splicing] = STATE(147),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(615),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(617),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(617),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [63] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(185),
    [sym_string] = STATE(185),
    [sym_byte_string] = STATE(185),
    [sym_here_string] = STATE(185),
    [sym_regex] = STATE(185),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(185),
    [sym_symbol] = STATE(185),
    [sym_box] = STATE(185),
    [sym_list] = STATE(185),
    [sym_vector] = STATE(185),
    [sym_structure] = STATE(185),
    [sym_hash] = STATE(185),
    [sym_graph] = STATE(185),
    [sym_quote] = STATE(185),
    [sym_quasiquote] = STATE(185),
    [sym_syntax] = STATE(185),
    [sym_quasisyntax] = STATE(185),
    [sym_unquote] = STATE(185),
    [sym_unquote_splicing] = STATE(185),
    [sym_unsyntax] = STATE(185),
    [sym_unsyntax_splicing] = STATE(185),
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(619),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(621),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(623),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(623),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [64] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(146),
    [sym_string] = STATE(146),
    [sym_byte_string] = STATE(146),
    [sym_here_string] = STATE(146),
    [sym_regex] = STATE(146),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(146),
    [sym_symbol] = STATE(146),
    [sym_box] = STATE(146),
    [sym_list] = STATE(146),
    [sym_vector] = STATE(146),
    [sym_structure] = STATE(146),
    [sym_hash] = STATE(146),
    [sym_graph] = STATE(146),
    [sym_quote] = STATE(146),
    [sym_quasiquote] = STATE(146),
    [sym_syntax] = STATE(146),
    [sym_quasisyntax] = STATE(146),
    [sym_unquote] = STATE(146),
    [sym_unquote_splicing] = STATE(146),
    [sym_unsyntax] = STATE(146),
    [sym_unsyntax_splicing] = STATE(146),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(625),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(627),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(627),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [65] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(180),
    [sym_string] = STATE(180),
    [sym_byte_string] = STATE(180),
    [sym_here_string] = STATE(180),
    [sym_regex] = STATE(180),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(180),
    [sym_symbol] = STATE(180),
    [sym_box] = STATE(180),
    [sym_list] = STATE(180),
    [sym_vector] = STATE(180),
    [sym_structure] = STATE(180),
    [sym_hash] = STATE(180),
    [sym_graph] = STATE(180),
    [sym_quote] = STATE(180),
    [sym_quasiquote] = STATE(180),
    [sym_syntax] = STATE(180),
    [sym_quasisyntax] = STATE(180),
    [sym_unquote] = STATE(180),
    [sym_unquote_splicing] = STATE(180),
    [sym_unsyntax] = STATE(180),
    [sym_unsyntax_splicing] = STATE(180),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(629),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(631),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(633),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(633),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [66] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(145),
    [sym_string] = STATE(145),
    [sym_byte_string] = STATE(145),
    [sym_here_string] = STATE(145),
    [sym_regex] = STATE(145),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(145),
    [sym_symbol] = STATE(145),
    [sym_box] = STATE(145),
    [sym_list] = STATE(145),
    [sym_vector] = STATE(145),
    [sym_structure] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_graph] = STATE(145),
    [sym_quote] = STATE(145),
    [sym_quasiquote] = STATE(145),
    [sym_syntax] = STATE(145),
    [sym_quasisyntax] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splicing] = STATE(145),
    [sym_unsyntax] = STATE(145),
    [sym_unsyntax_splicing] = STATE(145),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(635),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(637),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(637),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [67] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(100),
    [sym_symbol] = STATE(100),
    [sym_box] = STATE(100),
    [sym_list] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_structure] = STATE(100),
    [sym_hash] = STATE(100),
    [sym_graph] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_quasiquote] = STATE(100),
    [sym_syntax] = STATE(100),
    [sym_quasisyntax] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splicing] = STATE(100),
    [sym_unsyntax] = STATE(100),
    [sym_unsyntax_splicing] = STATE(100),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(641),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(641),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [68] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(144),
    [sym_string] = STATE(144),
    [sym_byte_string] = STATE(144),
    [sym_here_string] = STATE(144),
    [sym_regex] = STATE(144),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(144),
    [sym_symbol] = STATE(144),
    [sym_box] = STATE(144),
    [sym_list] = STATE(144),
    [sym_vector] = STATE(144),
    [sym_structure] = STATE(144),
    [sym_hash] = STATE(144),
    [sym_graph] = STATE(144),
    [sym_quote] = STATE(144),
    [sym_quasiquote] = STATE(144),
    [sym_syntax] = STATE(144),
    [sym_quasisyntax] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_unquote_splicing] = STATE(144),
    [sym_unsyntax] = STATE(144),
    [sym_unsyntax_splicing] = STATE(144),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(643),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(645),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(645),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [69] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_here_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(112),
    [sym_symbol] = STATE(112),
    [sym_box] = STATE(112),
    [sym_list] = STATE(112),
    [sym_vector] = STATE(112),
    [sym_structure] = STATE(112),
    [sym_hash] = STATE(112),
    [sym_graph] = STATE(112),
    [sym_quote] = STATE(112),
    [sym_quasiquote] = STATE(112),
    [sym_syntax] = STATE(112),
    [sym_quasisyntax] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splicing] = STATE(112),
    [sym_unsyntax] = STATE(112),
    [sym_unsyntax_splicing] = STATE(112),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(647),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(649),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(649),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [70] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_here_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(103),
    [sym_symbol] = STATE(103),
    [sym_box] = STATE(103),
    [sym_list] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_structure] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_graph] = STATE(103),
    [sym_quote] = STATE(103),
    [sym_quasiquote] = STATE(103),
    [sym_syntax] = STATE(103),
    [sym_quasisyntax] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splicing] = STATE(103),
    [sym_unsyntax] = STATE(103),
    [sym_unsyntax_splicing] = STATE(103),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(651),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(653),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(653),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [71] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_byte_string] = STATE(106),
    [sym_here_string] = STATE(106),
    [sym_regex] = STATE(106),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(106),
    [sym_symbol] = STATE(106),
    [sym_box] = STATE(106),
    [sym_list] = STATE(106),
    [sym_vector] = STATE(106),
    [sym_structure] = STATE(106),
    [sym_hash] = STATE(106),
    [sym_graph] = STATE(106),
    [sym_quote] = STATE(106),
    [sym_quasiquote] = STATE(106),
    [sym_syntax] = STATE(106),
    [sym_quasisyntax] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splicing] = STATE(106),
    [sym_unsyntax] = STATE(106),
    [sym_unsyntax_splicing] = STATE(106),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(655),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(657),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(657),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [72] = {
    [sym__skip] = STATE(69),
    [sym_comment] = STATE(69),
    [sym_block_comment] = STATE(69),
    [sym_sexp_comment] = STATE(69),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(128),
    [sym_symbol] = STATE(128),
    [sym_box] = STATE(128),
    [sym_list] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_structure] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_graph] = STATE(128),
    [sym_quote] = STATE(128),
    [sym_quasiquote] = STATE(128),
    [sym_syntax] = STATE(128),
    [sym_quasisyntax] = STATE(128),
    [sym_unquote] = STATE(128),
    [sym_unquote_splicing] = STATE(128),
    [sym_unsyntax] = STATE(128),
    [sym_unsyntax_splicing] = STATE(128),
    [aux_sym_sexp_comment_repeat1] = STATE(69),
    [aux_sym__skip_token1] = ACTIONS(659),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(661),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(663),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(663),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [73] = {
    [sym__skip] = STATE(85),
    [sym_comment] = STATE(85),
    [sym_block_comment] = STATE(85),
    [sym_sexp_comment] = STATE(85),
    [sym__datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_byte_string] = STATE(132),
    [sym_here_string] = STATE(132),
    [sym_regex] = STATE(132),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(132),
    [sym_symbol] = STATE(132),
    [sym_box] = STATE(132),
    [sym_list] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_structure] = STATE(132),
    [sym_hash] = STATE(132),
    [sym_graph] = STATE(132),
    [sym_quote] = STATE(132),
    [sym_quasiquote] = STATE(132),
    [sym_syntax] = STATE(132),
    [sym_quasisyntax] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_unquote_splicing] = STATE(132),
    [sym_unsyntax] = STATE(132),
    [sym_unsyntax_splicing] = STATE(132),
    [aux_sym_sexp_comment_repeat1] = STATE(85),
    [aux_sym__skip_token1] = ACTIONS(665),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(667),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(669),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(669),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [74] = {
    [sym__skip] = STATE(88),
    [sym_comment] = STATE(88),
    [sym_block_comment] = STATE(88),
    [sym_sexp_comment] = STATE(88),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(133),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym_quote] = STATE(133),
    [sym_quasiquote] = STATE(133),
    [sym_syntax] = STATE(133),
    [sym_quasisyntax] = STATE(133),
    [sym_unquote] = STATE(133),
    [sym_unquote_splicing] = STATE(133),
    [sym_unsyntax] = STATE(133),
    [sym_unsyntax_splicing] = STATE(133),
    [aux_sym_sexp_comment_repeat1] = STATE(88),
    [aux_sym__skip_token1] = ACTIONS(671),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(673),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(675),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(675),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [75] = {
    [sym__skip] = STATE(90),
    [sym_comment] = STATE(90),
    [sym_block_comment] = STATE(90),
    [sym_sexp_comment] = STATE(90),
    [sym__datum] = STATE(134),
    [sym_string] = STATE(134),
    [sym_byte_string] = STATE(134),
    [sym_here_string] = STATE(134),
    [sym_regex] = STATE(134),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(134),
    [sym_symbol] = STATE(134),
    [sym_box] = STATE(134),
    [sym_list] = STATE(134),
    [sym_vector] = STATE(134),
    [sym_structure] = STATE(134),
    [sym_hash] = STATE(134),
    [sym_graph] = STATE(134),
    [sym_quote] = STATE(134),
    [sym_quasiquote] = STATE(134),
    [sym_syntax] = STATE(134),
    [sym_quasisyntax] = STATE(134),
    [sym_unquote] = STATE(134),
    [sym_unquote_splicing] = STATE(134),
    [sym_unsyntax] = STATE(134),
    [sym_unsyntax_splicing] = STATE(134),
    [aux_sym_sexp_comment_repeat1] = STATE(90),
    [aux_sym__skip_token1] = ACTIONS(677),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(681),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(681),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [76] = {
    [sym__skip] = STATE(92),
    [sym_comment] = STATE(92),
    [sym_block_comment] = STATE(92),
    [sym_sexp_comment] = STATE(92),
    [sym__datum] = STATE(139),
    [sym_string] = STATE(139),
    [sym_byte_string] = STATE(139),
    [sym_here_string] = STATE(139),
    [sym_regex] = STATE(139),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(139),
    [sym_symbol] = STATE(139),
    [sym_box] = STATE(139),
    [sym_list] = STATE(139),
    [sym_vector] = STATE(139),
    [sym_structure] = STATE(139),
    [sym_hash] = STATE(139),
    [sym_graph] = STATE(139),
    [sym_quote] = STATE(139),
    [sym_quasiquote] = STATE(139),
    [sym_syntax] = STATE(139),
    [sym_quasisyntax] = STATE(139),
    [sym_unquote] = STATE(139),
    [sym_unquote_splicing] = STATE(139),
    [sym_unsyntax] = STATE(139),
    [sym_unsyntax_splicing] = STATE(139),
    [aux_sym_sexp_comment_repeat1] = STATE(92),
    [aux_sym__skip_token1] = ACTIONS(683),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(687),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(687),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [77] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(122),
    [sym_string] = STATE(122),
    [sym_byte_string] = STATE(122),
    [sym_here_string] = STATE(122),
    [sym_regex] = STATE(122),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(122),
    [sym_symbol] = STATE(122),
    [sym_box] = STATE(122),
    [sym_list] = STATE(122),
    [sym_vector] = STATE(122),
    [sym_structure] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_graph] = STATE(122),
    [sym_quote] = STATE(122),
    [sym_quasiquote] = STATE(122),
    [sym_syntax] = STATE(122),
    [sym_quasisyntax] = STATE(122),
    [sym_unquote] = STATE(122),
    [sym_unquote_splicing] = STATE(122),
    [sym_unsyntax] = STATE(122),
    [sym_unsyntax_splicing] = STATE(122),
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(689),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(693),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(693),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [78] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(121),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym_quote] = STATE(121),
    [sym_quasiquote] = STATE(121),
    [sym_syntax] = STATE(121),
    [sym_quasisyntax] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splicing] = STATE(121),
    [sym_unsyntax] = STATE(121),
    [sym_unsyntax_splicing] = STATE(121),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(695),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(697),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(699),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(699),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [79] = {
    [sym__skip] = STATE(84),
    [sym_comment] = STATE(84),
    [sym_block_comment] = STATE(84),
    [sym_sexp_comment] = STATE(84),
    [sym__datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_byte_string] = STATE(117),
    [sym_here_string] = STATE(117),
    [sym_regex] = STATE(117),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(117),
    [sym_symbol] = STATE(117),
    [sym_box] = STATE(117),
    [sym_list] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_structure] = STATE(117),
    [sym_hash] = STATE(117),
    [sym_graph] = STATE(117),
    [sym_quote] = STATE(117),
    [sym_quasiquote] = STATE(117),
    [sym_syntax] = STATE(117),
    [sym_quasisyntax] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splicing] = STATE(117),
    [sym_unsyntax] = STATE(117),
    [sym_unsyntax_splicing] = STATE(117),
    [aux_sym_sexp_comment_repeat1] = STATE(84),
    [aux_sym__skip_token1] = ACTIONS(701),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(705),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(705),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [80] = {
    [sym__skip] = STATE(89),
    [sym_comment] = STATE(89),
    [sym_block_comment] = STATE(89),
    [sym_sexp_comment] = STATE(89),
    [sym__datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_byte_string] = STATE(116),
    [sym_here_string] = STATE(116),
    [sym_regex] = STATE(116),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(116),
    [sym_symbol] = STATE(116),
    [sym_box] = STATE(116),
    [sym_list] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_structure] = STATE(116),
    [sym_hash] = STATE(116),
    [sym_graph] = STATE(116),
    [sym_quote] = STATE(116),
    [sym_quasiquote] = STATE(116),
    [sym_syntax] = STATE(116),
    [sym_quasisyntax] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splicing] = STATE(116),
    [sym_unsyntax] = STATE(116),
    [sym_unsyntax_splicing] = STATE(116),
    [aux_sym_sexp_comment_repeat1] = STATE(89),
    [aux_sym__skip_token1] = ACTIONS(707),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(709),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(711),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(711),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [81] = {
    [sym__skip] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_block_comment] = STATE(70),
    [sym_sexp_comment] = STATE(70),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(115),
    [sym_symbol] = STATE(115),
    [sym_box] = STATE(115),
    [sym_list] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_structure] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_graph] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_syntax] = STATE(115),
    [sym_quasisyntax] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splicing] = STATE(115),
    [sym_unsyntax] = STATE(115),
    [sym_unsyntax_splicing] = STATE(115),
    [aux_sym_sexp_comment_repeat1] = STATE(70),
    [aux_sym__skip_token1] = ACTIONS(713),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(717),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(717),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [82] = {
    [sym__skip] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_block_comment] = STATE(87),
    [sym_sexp_comment] = STATE(87),
    [sym__datum] = STATE(114),
    [sym_string] = STATE(114),
    [sym_byte_string] = STATE(114),
    [sym_here_string] = STATE(114),
    [sym_regex] = STATE(114),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(114),
    [sym_symbol] = STATE(114),
    [sym_box] = STATE(114),
    [sym_list] = STATE(114),
    [sym_vector] = STATE(114),
    [sym_structure] = STATE(114),
    [sym_hash] = STATE(114),
    [sym_graph] = STATE(114),
    [sym_quote] = STATE(114),
    [sym_quasiquote] = STATE(114),
    [sym_syntax] = STATE(114),
    [sym_quasisyntax] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splicing] = STATE(114),
    [sym_unsyntax] = STATE(114),
    [sym_unsyntax_splicing] = STATE(114),
    [aux_sym_sexp_comment_repeat1] = STATE(87),
    [aux_sym__skip_token1] = ACTIONS(719),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(723),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(723),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [83] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(153),
    [sym_string] = STATE(153),
    [sym_byte_string] = STATE(153),
    [sym_here_string] = STATE(153),
    [sym_regex] = STATE(153),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(153),
    [sym_symbol] = STATE(153),
    [sym_box] = STATE(153),
    [sym_list] = STATE(153),
    [sym_vector] = STATE(153),
    [sym_structure] = STATE(153),
    [sym_hash] = STATE(153),
    [sym_graph] = STATE(153),
    [sym_quote] = STATE(153),
    [sym_quasiquote] = STATE(153),
    [sym_syntax] = STATE(153),
    [sym_quasisyntax] = STATE(153),
    [sym_unquote] = STATE(153),
    [sym_unquote_splicing] = STATE(153),
    [sym_unsyntax] = STATE(153),
    [sym_unsyntax_splicing] = STATE(153),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(725),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(727),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(727),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [84] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(105),
    [sym_string] = STATE(105),
    [sym_byte_string] = STATE(105),
    [sym_here_string] = STATE(105),
    [sym_regex] = STATE(105),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(105),
    [sym_symbol] = STATE(105),
    [sym_box] = STATE(105),
    [sym_list] = STATE(105),
    [sym_vector] = STATE(105),
    [sym_structure] = STATE(105),
    [sym_hash] = STATE(105),
    [sym_graph] = STATE(105),
    [sym_quote] = STATE(105),
    [sym_quasiquote] = STATE(105),
    [sym_syntax] = STATE(105),
    [sym_quasisyntax] = STATE(105),
    [sym_unquote] = STATE(105),
    [sym_unquote_splicing] = STATE(105),
    [sym_unsyntax] = STATE(105),
    [sym_unsyntax_splicing] = STATE(105),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(729),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(731),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(731),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [85] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(110),
    [sym_string] = STATE(110),
    [sym_byte_string] = STATE(110),
    [sym_here_string] = STATE(110),
    [sym_regex] = STATE(110),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(110),
    [sym_symbol] = STATE(110),
    [sym_box] = STATE(110),
    [sym_list] = STATE(110),
    [sym_vector] = STATE(110),
    [sym_structure] = STATE(110),
    [sym_hash] = STATE(110),
    [sym_graph] = STATE(110),
    [sym_quote] = STATE(110),
    [sym_quasiquote] = STATE(110),
    [sym_syntax] = STATE(110),
    [sym_quasisyntax] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splicing] = STATE(110),
    [sym_unsyntax] = STATE(110),
    [sym_unsyntax_splicing] = STATE(110),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(733),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(735),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(735),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [86] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(181),
    [sym_string] = STATE(181),
    [sym_byte_string] = STATE(181),
    [sym_here_string] = STATE(181),
    [sym_regex] = STATE(181),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(181),
    [sym_symbol] = STATE(181),
    [sym_box] = STATE(181),
    [sym_list] = STATE(181),
    [sym_vector] = STATE(181),
    [sym_structure] = STATE(181),
    [sym_hash] = STATE(181),
    [sym_graph] = STATE(181),
    [sym_quote] = STATE(181),
    [sym_quasiquote] = STATE(181),
    [sym_syntax] = STATE(181),
    [sym_quasisyntax] = STATE(181),
    [sym_unquote] = STATE(181),
    [sym_unquote_splicing] = STATE(181),
    [sym_unsyntax] = STATE(181),
    [sym_unsyntax_splicing] = STATE(181),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(739),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(739),
    [anon_sym_POUND_AMP] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_POUNDfl] = ACTIONS(395),
    [anon_sym_POUNDfx] = ACTIONS(395),
    [anon_sym_POUNDs] = ACTIONS(397),
    [anon_sym_POUNDhash] = ACTIONS(399),
    [anon_sym_POUNDhasheq] = ACTIONS(399),
    [anon_sym_POUNDhasheqv] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_POUND_SQUOTE] = ACTIONS(407),
    [anon_sym_POUND_BQUOTE] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_COMMA_AT] = ACTIONS(413),
    [anon_sym_POUND_COMMA] = ACTIONS(415),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(417),
  },
  [87] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(102),
    [sym_symbol] = STATE(102),
    [sym_box] = STATE(102),
    [sym_list] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_structure] = STATE(102),
    [sym_hash] = STATE(102),
    [sym_graph] = STATE(102),
    [sym_quote] = STATE(102),
    [sym_quasiquote] = STATE(102),
    [sym_syntax] = STATE(102),
    [sym_quasisyntax] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splicing] = STATE(102),
    [sym_unsyntax] = STATE(102),
    [sym_unsyntax_splicing] = STATE(102),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(741),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(743),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(743),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [88] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(109),
    [sym_string] = STATE(109),
    [sym_byte_string] = STATE(109),
    [sym_here_string] = STATE(109),
    [sym_regex] = STATE(109),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(109),
    [sym_symbol] = STATE(109),
    [sym_box] = STATE(109),
    [sym_list] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_structure] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_graph] = STATE(109),
    [sym_quote] = STATE(109),
    [sym_quasiquote] = STATE(109),
    [sym_syntax] = STATE(109),
    [sym_quasisyntax] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splicing] = STATE(109),
    [sym_unsyntax] = STATE(109),
    [sym_unsyntax_splicing] = STATE(109),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(745),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(747),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(747),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [89] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_here_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(104),
    [sym_symbol] = STATE(104),
    [sym_box] = STATE(104),
    [sym_list] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_structure] = STATE(104),
    [sym_hash] = STATE(104),
    [sym_graph] = STATE(104),
    [sym_quote] = STATE(104),
    [sym_quasiquote] = STATE(104),
    [sym_syntax] = STATE(104),
    [sym_quasisyntax] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splicing] = STATE(104),
    [sym_unsyntax] = STATE(104),
    [sym_unsyntax_splicing] = STATE(104),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(749),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(751),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(751),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [90] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(120),
    [sym_number] = STATE(108),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym_quote] = STATE(108),
    [sym_quasiquote] = STATE(108),
    [sym_syntax] = STATE(108),
    [sym_quasisyntax] = STATE(108),
    [sym_unquote] = STATE(108),
    [sym_unquote_splicing] = STATE(108),
    [sym_unsyntax] = STATE(108),
    [sym_unsyntax_splicing] = STATE(108),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(753),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(755),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(755),
    [anon_sym_POUND_AMP] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_POUNDfl] = ACTIONS(189),
    [anon_sym_POUNDfx] = ACTIONS(189),
    [anon_sym_POUNDs] = ACTIONS(191),
    [anon_sym_POUNDhash] = ACTIONS(193),
    [anon_sym_POUNDhasheq] = ACTIONS(193),
    [anon_sym_POUNDhasheqv] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(201),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
  },
  [91] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_byte_string] = STATE(140),
    [sym_here_string] = STATE(140),
    [sym_regex] = STATE(140),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(140),
    [sym_symbol] = STATE(140),
    [sym_box] = STATE(140),
    [sym_list] = STATE(140),
    [sym_vector] = STATE(140),
    [sym_structure] = STATE(140),
    [sym_hash] = STATE(140),
    [sym_graph] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_quasiquote] = STATE(140),
    [sym_syntax] = STATE(140),
    [sym_quasisyntax] = STATE(140),
    [sym_unquote] = STATE(140),
    [sym_unquote_splicing] = STATE(140),
    [sym_unsyntax] = STATE(140),
    [sym_unsyntax_splicing] = STATE(140),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(757),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(759),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(759),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
  [92] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(138),
    [sym_string] = STATE(138),
    [sym_byte_string] = STATE(138),
    [sym_here_string] = STATE(138),
    [sym_regex] = STATE(138),
    [sym__real_string] = STATE(141),
    [sym_number] = STATE(138),
    [sym_symbol] = STATE(138),
    [sym_box] = STATE(138),
    [sym_list] = STATE(138),
    [sym_vector] = STATE(138),
    [sym_structure] = STATE(138),
    [sym_hash] = STATE(138),
    [sym_graph] = STATE(138),
    [sym_quote] = STATE(138),
    [sym_quasiquote] = STATE(138),
    [sym_syntax] = STATE(138),
    [sym_quasisyntax] = STATE(138),
    [sym_unquote] = STATE(138),
    [sym_unquote_splicing] = STATE(138),
    [sym_unsyntax] = STATE(138),
    [sym_unsyntax_splicing] = STATE(138),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(761),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(763),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(763),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_SQUOTE] = ACTIONS(47),
    [anon_sym_POUND_BQUOTE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUND_COMMA] = ACTIONS(55),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(767), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [44] = 2,
    ACTIONS(771), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [88] = 2,
    ACTIONS(775), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [132] = 2,
    ACTIONS(779), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [176] = 2,
    ACTIONS(783), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [220] = 2,
    ACTIONS(787), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [264] = 2,
    ACTIONS(791), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [308] = 2,
    ACTIONS(795), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [352] = 2,
    ACTIONS(799), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [396] = 2,
    ACTIONS(803), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [440] = 2,
    ACTIONS(807), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [484] = 2,
    ACTIONS(811), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [528] = 2,
    ACTIONS(815), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [572] = 2,
    ACTIONS(819), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [616] = 2,
    ACTIONS(823), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [660] = 2,
    ACTIONS(827), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [704] = 2,
    ACTIONS(831), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [748] = 2,
    ACTIONS(835), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [792] = 2,
    ACTIONS(839), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [836] = 2,
    ACTIONS(843), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [880] = 2,
    ACTIONS(847), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [924] = 2,
    ACTIONS(851), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [968] = 2,
    ACTIONS(855), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1012] = 2,
    ACTIONS(859), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1056] = 2,
    ACTIONS(863), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1100] = 2,
    ACTIONS(867), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1144] = 2,
    ACTIONS(871), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1188] = 2,
    ACTIONS(875), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1232] = 2,
    ACTIONS(879), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1276] = 2,
    ACTIONS(883), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1320] = 2,
    ACTIONS(887), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1364] = 2,
    ACTIONS(891), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1408] = 2,
    ACTIONS(895), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1452] = 2,
    ACTIONS(899), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1496] = 2,
    ACTIONS(903), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(901), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1540] = 2,
    ACTIONS(907), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(905), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1584] = 2,
    ACTIONS(911), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(909), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1628] = 2,
    ACTIONS(915), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(913), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1672] = 2,
    ACTIONS(919), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(917), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1716] = 2,
    ACTIONS(923), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(921), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1760] = 2,
    ACTIONS(927), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(925), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1804] = 2,
    ACTIONS(931), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(929), 29,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1848] = 7,
    ACTIONS(933), 1,
      aux_sym__skip_token1,
    ACTIONS(939), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(942), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(936), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(135), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(945), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(947), 19,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [1900] = 2,
    ACTIONS(891), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1941] = 2,
    ACTIONS(835), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1982] = 2,
    ACTIONS(795), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2023] = 2,
    ACTIONS(799), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2064] = 2,
    ACTIONS(803), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2105] = 2,
    ACTIONS(875), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2146] = 2,
    ACTIONS(867), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2187] = 2,
    ACTIONS(871), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2228] = 2,
    ACTIONS(807), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2269] = 2,
    ACTIONS(811), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2310] = 2,
    ACTIONS(815), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2351] = 2,
    ACTIONS(819), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2392] = 2,
    ACTIONS(823), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2433] = 2,
    ACTIONS(827), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2474] = 2,
    ACTIONS(831), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2515] = 2,
    ACTIONS(779), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2556] = 2,
    ACTIONS(839), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2597] = 2,
    ACTIONS(843), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2638] = 2,
    ACTIONS(851), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2679] = 2,
    ACTIONS(847), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2720] = 2,
    ACTIONS(783), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2761] = 2,
    ACTIONS(771), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2802] = 2,
    ACTIONS(775), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2843] = 2,
    ACTIONS(787), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2884] = 2,
    ACTIONS(895), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2925] = 2,
    ACTIONS(887), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2966] = 2,
    ACTIONS(855), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3007] = 2,
    ACTIONS(859), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3048] = 2,
    ACTIONS(863), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3089] = 2,
    ACTIONS(879), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3130] = 2,
    ACTIONS(883), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3171] = 2,
    ACTIONS(931), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(929), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3212] = 2,
    ACTIONS(927), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(925), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3253] = 2,
    ACTIONS(923), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(921), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3294] = 2,
    ACTIONS(919), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(917), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3335] = 2,
    ACTIONS(791), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3376] = 2,
    ACTIONS(899), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3417] = 2,
    ACTIONS(767), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3458] = 2,
    ACTIONS(915), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(913), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3499] = 2,
    ACTIONS(903), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(901), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3540] = 2,
    ACTIONS(907), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(905), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3581] = 2,
    ACTIONS(911), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(909), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3622] = 2,
    ACTIONS(895), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(893), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3659] = 2,
    ACTIONS(899), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(897), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3696] = 2,
    ACTIONS(907), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(905), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3733] = 2,
    ACTIONS(767), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(765), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3770] = 2,
    ACTIONS(911), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(909), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3807] = 2,
    ACTIONS(915), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(913), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3844] = 2,
    ACTIONS(919), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(917), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3881] = 2,
    ACTIONS(923), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(921), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3918] = 2,
    ACTIONS(815), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(813), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3955] = 2,
    ACTIONS(927), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(925), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3992] = 2,
    ACTIONS(891), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(889), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4029] = 2,
    ACTIONS(931), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(929), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4066] = 2,
    ACTIONS(787), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(785), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4103] = 2,
    ACTIONS(883), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(881), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4140] = 2,
    ACTIONS(887), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(885), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4177] = 2,
    ACTIONS(879), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(877), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4214] = 2,
    ACTIONS(779), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(777), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4251] = 2,
    ACTIONS(863), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(861), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4288] = 2,
    ACTIONS(875), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(873), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4325] = 2,
    ACTIONS(859), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(857), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4362] = 2,
    ACTIONS(791), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(789), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4399] = 2,
    ACTIONS(795), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(793), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4436] = 2,
    ACTIONS(867), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(865), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4473] = 2,
    ACTIONS(771), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(769), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4510] = 2,
    ACTIONS(855), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(853), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4547] = 2,
    ACTIONS(775), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(773), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4584] = 2,
    ACTIONS(827), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(825), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4621] = 2,
    ACTIONS(783), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(781), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4658] = 2,
    ACTIONS(847), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(845), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4695] = 2,
    ACTIONS(843), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(841), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4732] = 2,
    ACTIONS(839), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(837), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4769] = 2,
    ACTIONS(835), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(833), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4806] = 2,
    ACTIONS(831), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(829), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4843] = 2,
    ACTIONS(903), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(901), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4880] = 2,
    ACTIONS(823), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(821), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4917] = 2,
    ACTIONS(819), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(817), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4954] = 2,
    ACTIONS(871), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(869), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4991] = 2,
    ACTIONS(811), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(809), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [5028] = 2,
    ACTIONS(807), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(805), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [5065] = 2,
    ACTIONS(799), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(797), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [5102] = 7,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(949), 1,
      sym_decimal,
    STATE(123), 1,
      sym__real_string,
    STATE(124), 1,
      sym_list,
  [5124] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      sym_decimal,
    STATE(136), 1,
      sym_list,
    STATE(161), 1,
      sym__real_string,
  [5146] = 7,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_decimal,
    STATE(188), 1,
      sym_list,
    STATE(192), 1,
      sym__real_string,
  [5168] = 6,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(955), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_list,
  [5187] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(959), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      anon_sym_EQ,
    STATE(156), 1,
      sym_list,
  [5206] = 6,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_list,
  [5225] = 4,
    ACTIONS(967), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(970), 1,
      aux_sym_block_comment_token1,
    ACTIONS(973), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5239] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(977), 1,
      aux_sym_block_comment_token1,
    ACTIONS(979), 1,
      anon_sym_PIPE_POUND,
    STATE(235), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5253] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(981), 1,
      aux_sym_block_comment_token1,
    ACTIONS(983), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5267] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(981), 1,
      aux_sym_block_comment_token1,
    ACTIONS(985), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5281] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(987), 1,
      aux_sym_block_comment_token1,
    ACTIONS(989), 1,
      anon_sym_PIPE_POUND,
    STATE(226), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5295] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(991), 1,
      aux_sym_block_comment_token1,
    ACTIONS(993), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5309] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(981), 1,
      aux_sym_block_comment_token1,
    ACTIONS(995), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5323] = 5,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(997), 1,
      sym_decimal,
    STATE(188), 1,
      sym_list,
  [5339] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(999), 1,
      sym_decimal,
    STATE(136), 1,
      sym_list,
  [5355] = 5,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(1001), 1,
      sym_decimal,
    STATE(124), 1,
      sym_list,
  [5371] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(1003), 1,
      aux_sym_block_comment_token1,
    ACTIONS(1005), 1,
      anon_sym_PIPE_POUND,
    STATE(230), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5385] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(981), 1,
      aux_sym_block_comment_token1,
    ACTIONS(1007), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5399] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_list,
  [5412] = 3,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1011), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5423] = 3,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1016), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5434] = 3,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1016), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5445] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_list,
  [5458] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_list,
  [5471] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_list,
  [5484] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_list,
  [5497] = 3,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1022), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5508] = 3,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1026), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5519] = 3,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1030), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5530] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_list,
  [5543] = 3,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1016), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5554] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_list,
  [5567] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_list,
  [5580] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_list,
  [5593] = 2,
    ACTIONS(779), 1,
      aux_sym_block_comment_token1,
    ACTIONS(777), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5601] = 2,
    ACTIONS(771), 1,
      aux_sym_block_comment_token1,
    ACTIONS(769), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5609] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym__real_string,
  [5616] = 2,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym__real_string,
  [5623] = 2,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym__real_string,
  [5630] = 1,
    ACTIONS(469), 1,
      sym_lang_name,
  [5634] = 1,
    ACTIONS(1034), 1,
      sym__here_string_body,
  [5638] = 1,
    ACTIONS(1036), 1,
      sym__here_string_body,
  [5642] = 1,
    ACTIONS(1038), 1,
      ts_builtin_sym_end,
  [5646] = 1,
    ACTIONS(723), 1,
      sym_lang_name,
  [5650] = 1,
    ACTIONS(1040), 1,
      sym__here_string_body,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(93)] = 0,
  [SMALL_STATE(94)] = 44,
  [SMALL_STATE(95)] = 88,
  [SMALL_STATE(96)] = 132,
  [SMALL_STATE(97)] = 176,
  [SMALL_STATE(98)] = 220,
  [SMALL_STATE(99)] = 264,
  [SMALL_STATE(100)] = 308,
  [SMALL_STATE(101)] = 352,
  [SMALL_STATE(102)] = 396,
  [SMALL_STATE(103)] = 440,
  [SMALL_STATE(104)] = 484,
  [SMALL_STATE(105)] = 528,
  [SMALL_STATE(106)] = 572,
  [SMALL_STATE(107)] = 616,
  [SMALL_STATE(108)] = 660,
  [SMALL_STATE(109)] = 704,
  [SMALL_STATE(110)] = 748,
  [SMALL_STATE(111)] = 792,
  [SMALL_STATE(112)] = 836,
  [SMALL_STATE(113)] = 880,
  [SMALL_STATE(114)] = 924,
  [SMALL_STATE(115)] = 968,
  [SMALL_STATE(116)] = 1012,
  [SMALL_STATE(117)] = 1056,
  [SMALL_STATE(118)] = 1100,
  [SMALL_STATE(119)] = 1144,
  [SMALL_STATE(120)] = 1188,
  [SMALL_STATE(121)] = 1232,
  [SMALL_STATE(122)] = 1276,
  [SMALL_STATE(123)] = 1320,
  [SMALL_STATE(124)] = 1364,
  [SMALL_STATE(125)] = 1408,
  [SMALL_STATE(126)] = 1452,
  [SMALL_STATE(127)] = 1496,
  [SMALL_STATE(128)] = 1540,
  [SMALL_STATE(129)] = 1584,
  [SMALL_STATE(130)] = 1628,
  [SMALL_STATE(131)] = 1672,
  [SMALL_STATE(132)] = 1716,
  [SMALL_STATE(133)] = 1760,
  [SMALL_STATE(134)] = 1804,
  [SMALL_STATE(135)] = 1848,
  [SMALL_STATE(136)] = 1900,
  [SMALL_STATE(137)] = 1941,
  [SMALL_STATE(138)] = 1982,
  [SMALL_STATE(139)] = 2023,
  [SMALL_STATE(140)] = 2064,
  [SMALL_STATE(141)] = 2105,
  [SMALL_STATE(142)] = 2146,
  [SMALL_STATE(143)] = 2187,
  [SMALL_STATE(144)] = 2228,
  [SMALL_STATE(145)] = 2269,
  [SMALL_STATE(146)] = 2310,
  [SMALL_STATE(147)] = 2351,
  [SMALL_STATE(148)] = 2392,
  [SMALL_STATE(149)] = 2433,
  [SMALL_STATE(150)] = 2474,
  [SMALL_STATE(151)] = 2515,
  [SMALL_STATE(152)] = 2556,
  [SMALL_STATE(153)] = 2597,
  [SMALL_STATE(154)] = 2638,
  [SMALL_STATE(155)] = 2679,
  [SMALL_STATE(156)] = 2720,
  [SMALL_STATE(157)] = 2761,
  [SMALL_STATE(158)] = 2802,
  [SMALL_STATE(159)] = 2843,
  [SMALL_STATE(160)] = 2884,
  [SMALL_STATE(161)] = 2925,
  [SMALL_STATE(162)] = 2966,
  [SMALL_STATE(163)] = 3007,
  [SMALL_STATE(164)] = 3048,
  [SMALL_STATE(165)] = 3089,
  [SMALL_STATE(166)] = 3130,
  [SMALL_STATE(167)] = 3171,
  [SMALL_STATE(168)] = 3212,
  [SMALL_STATE(169)] = 3253,
  [SMALL_STATE(170)] = 3294,
  [SMALL_STATE(171)] = 3335,
  [SMALL_STATE(172)] = 3376,
  [SMALL_STATE(173)] = 3417,
  [SMALL_STATE(174)] = 3458,
  [SMALL_STATE(175)] = 3499,
  [SMALL_STATE(176)] = 3540,
  [SMALL_STATE(177)] = 3581,
  [SMALL_STATE(178)] = 3622,
  [SMALL_STATE(179)] = 3659,
  [SMALL_STATE(180)] = 3696,
  [SMALL_STATE(181)] = 3733,
  [SMALL_STATE(182)] = 3770,
  [SMALL_STATE(183)] = 3807,
  [SMALL_STATE(184)] = 3844,
  [SMALL_STATE(185)] = 3881,
  [SMALL_STATE(186)] = 3918,
  [SMALL_STATE(187)] = 3955,
  [SMALL_STATE(188)] = 3992,
  [SMALL_STATE(189)] = 4029,
  [SMALL_STATE(190)] = 4066,
  [SMALL_STATE(191)] = 4103,
  [SMALL_STATE(192)] = 4140,
  [SMALL_STATE(193)] = 4177,
  [SMALL_STATE(194)] = 4214,
  [SMALL_STATE(195)] = 4251,
  [SMALL_STATE(196)] = 4288,
  [SMALL_STATE(197)] = 4325,
  [SMALL_STATE(198)] = 4362,
  [SMALL_STATE(199)] = 4399,
  [SMALL_STATE(200)] = 4436,
  [SMALL_STATE(201)] = 4473,
  [SMALL_STATE(202)] = 4510,
  [SMALL_STATE(203)] = 4547,
  [SMALL_STATE(204)] = 4584,
  [SMALL_STATE(205)] = 4621,
  [SMALL_STATE(206)] = 4658,
  [SMALL_STATE(207)] = 4695,
  [SMALL_STATE(208)] = 4732,
  [SMALL_STATE(209)] = 4769,
  [SMALL_STATE(210)] = 4806,
  [SMALL_STATE(211)] = 4843,
  [SMALL_STATE(212)] = 4880,
  [SMALL_STATE(213)] = 4917,
  [SMALL_STATE(214)] = 4954,
  [SMALL_STATE(215)] = 4991,
  [SMALL_STATE(216)] = 5028,
  [SMALL_STATE(217)] = 5065,
  [SMALL_STATE(218)] = 5102,
  [SMALL_STATE(219)] = 5124,
  [SMALL_STATE(220)] = 5146,
  [SMALL_STATE(221)] = 5168,
  [SMALL_STATE(222)] = 5187,
  [SMALL_STATE(223)] = 5206,
  [SMALL_STATE(224)] = 5225,
  [SMALL_STATE(225)] = 5239,
  [SMALL_STATE(226)] = 5253,
  [SMALL_STATE(227)] = 5267,
  [SMALL_STATE(228)] = 5281,
  [SMALL_STATE(229)] = 5295,
  [SMALL_STATE(230)] = 5309,
  [SMALL_STATE(231)] = 5323,
  [SMALL_STATE(232)] = 5339,
  [SMALL_STATE(233)] = 5355,
  [SMALL_STATE(234)] = 5371,
  [SMALL_STATE(235)] = 5385,
  [SMALL_STATE(236)] = 5399,
  [SMALL_STATE(237)] = 5412,
  [SMALL_STATE(238)] = 5423,
  [SMALL_STATE(239)] = 5434,
  [SMALL_STATE(240)] = 5445,
  [SMALL_STATE(241)] = 5458,
  [SMALL_STATE(242)] = 5471,
  [SMALL_STATE(243)] = 5484,
  [SMALL_STATE(244)] = 5497,
  [SMALL_STATE(245)] = 5508,
  [SMALL_STATE(246)] = 5519,
  [SMALL_STATE(247)] = 5530,
  [SMALL_STATE(248)] = 5543,
  [SMALL_STATE(249)] = 5554,
  [SMALL_STATE(250)] = 5567,
  [SMALL_STATE(251)] = 5580,
  [SMALL_STATE(252)] = 5593,
  [SMALL_STATE(253)] = 5601,
  [SMALL_STATE(254)] = 5609,
  [SMALL_STATE(255)] = 5616,
  [SMALL_STATE(256)] = 5623,
  [SMALL_STATE(257)] = 5630,
  [SMALL_STATE(258)] = 5634,
  [SMALL_STATE(259)] = 5638,
  [SMALL_STATE(260)] = 5642,
  [SMALL_STATE(261)] = 5646,
  [SMALL_STATE(262)] = 5650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(228),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(218),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(262),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(256),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(244),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(118),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(119),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(233),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(240),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(242),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(242),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(73),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(74),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(75),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(77),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(78),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(79),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(80),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(81),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(82),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(261),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(261),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(229),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(259),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(254),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(246),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(232),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(236),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(247),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(247),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(257),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(257),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(135),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(198),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(234),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(36),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(225),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(224),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(237),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1038] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_racket_external_scanner_create(void);
void tree_sitter_racket_external_scanner_destroy(void *);
bool tree_sitter_racket_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_racket_external_scanner_serialize(void *, char *);
void tree_sitter_racket_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_racket_external_scanner_create,
      tree_sitter_racket_external_scanner_destroy,
      tree_sitter_racket_external_scanner_scan,
      tree_sitter_racket_external_scanner_serialize,
      tree_sitter_racket_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
