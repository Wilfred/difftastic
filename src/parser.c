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
  [24] = 23,
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
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 39,
  [52] = 31,
  [53] = 30,
  [54] = 49,
  [55] = 29,
  [56] = 47,
  [57] = 28,
  [58] = 46,
  [59] = 27,
  [60] = 45,
  [61] = 26,
  [62] = 44,
  [63] = 25,
  [64] = 23,
  [65] = 41,
  [66] = 43,
  [67] = 36,
  [68] = 42,
  [69] = 38,
  [70] = 70,
  [71] = 47,
  [72] = 46,
  [73] = 48,
  [74] = 36,
  [75] = 41,
  [76] = 35,
  [77] = 25,
  [78] = 26,
  [79] = 27,
  [80] = 28,
  [81] = 29,
  [82] = 30,
  [83] = 31,
  [84] = 32,
  [85] = 43,
  [86] = 45,
  [87] = 70,
  [88] = 39,
  [89] = 44,
  [90] = 49,
  [91] = 42,
  [92] = 38,
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
  [136] = 123,
  [137] = 128,
  [138] = 98,
  [139] = 99,
  [140] = 96,
  [141] = 94,
  [142] = 100,
  [143] = 116,
  [144] = 101,
  [145] = 102,
  [146] = 103,
  [147] = 104,
  [148] = 105,
  [149] = 112,
  [150] = 107,
  [151] = 108,
  [152] = 109,
  [153] = 110,
  [154] = 121,
  [155] = 111,
  [156] = 132,
  [157] = 122,
  [158] = 106,
  [159] = 117,
  [160] = 95,
  [161] = 97,
  [162] = 113,
  [163] = 114,
  [164] = 115,
  [165] = 119,
  [166] = 120,
  [167] = 134,
  [168] = 133,
  [169] = 131,
  [170] = 130,
  [171] = 125,
  [172] = 124,
  [173] = 93,
  [174] = 129,
  [175] = 126,
  [176] = 127,
  [177] = 118,
  [178] = 94,
  [179] = 106,
  [180] = 126,
  [181] = 114,
  [182] = 127,
  [183] = 128,
  [184] = 129,
  [185] = 130,
  [186] = 124,
  [187] = 131,
  [188] = 123,
  [189] = 133,
  [190] = 122,
  [191] = 134,
  [192] = 121,
  [193] = 120,
  [194] = 95,
  [195] = 119,
  [196] = 118,
  [197] = 115,
  [198] = 117,
  [199] = 116,
  [200] = 97,
  [201] = 125,
  [202] = 93,
  [203] = 132,
  [204] = 111,
  [205] = 110,
  [206] = 109,
  [207] = 108,
  [208] = 107,
  [209] = 112,
  [210] = 105,
  [211] = 104,
  [212] = 103,
  [213] = 102,
  [214] = 101,
  [215] = 99,
  [216] = 96,
  [217] = 98,
  [218] = 218,
  [219] = 218,
  [220] = 218,
  [221] = 221,
  [222] = 221,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 226,
  [230] = 224,
  [231] = 224,
  [232] = 227,
  [233] = 227,
  [234] = 226,
  [235] = 226,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 236,
  [240] = 240,
  [241] = 237,
  [242] = 242,
  [243] = 240,
  [244] = 242,
  [245] = 242,
  [246] = 236,
  [247] = 238,
  [248] = 238,
  [249] = 240,
  [250] = 237,
  [251] = 251,
  [252] = 95,
  [253] = 94,
  [254] = 254,
  [255] = 254,
  [256] = 254,
  [257] = 257,
  [258] = 257,
  [259] = 259,
  [260] = 259,
  [261] = 261,
  [262] = 257,
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
      if (eof) ADVANCE(280);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(281);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(876);
      if (lookahead == ')') ADVANCE(877);
      if (lookahead == ',') ADVANCE(893);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '=') ADVANCE(888);
      if (lookahead == '[') ADVANCE(878);
      if (lookahead == ']') ADVANCE(879);
      if (lookahead == '`') ADVANCE(890);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '|') ADVANCE(287);
      if (lookahead == '}') ADVANCE(881);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(899);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(876);
      if (lookahead == ')') ADVANCE(877);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '[') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == ']') ADVANCE(879);
      if (lookahead == '`') ADVANCE(890);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(881);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(727);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(529);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(873);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(876);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '[') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '`') ADVANCE(890);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '|') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(727);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(529);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(873);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(876);
      if (lookahead == '=') ADVANCE(888);
      if (lookahead == '[') ADVANCE(878);
      if (lookahead == '{') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(30);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(26);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(34);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(42);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(30);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(25);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(355);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(536);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(582);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(582);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(237);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(549);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(235);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(233);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(479);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(479);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(30);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(493);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      END_STATE();
    case 86:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(26);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(34);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == '<') ADVANCE(300);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(683);
      if (lookahead == 'b') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(671);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 93:
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '|') ADVANCE(141);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(874);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(665);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(885);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'q') ADVANCE(886);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(898);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 140:
      if (lookahead == '|') ADVANCE(873);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '|') ADVANCE(874);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(292);
      END_STATE();
    case 143:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(637);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 144:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 145:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(201);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(655);
      END_STATE();
    case 146:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 147:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(636);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 148:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(224);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 149:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      END_STATE();
    case 150:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(660);
      END_STATE();
    case 151:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 152:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 153:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 154:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(218);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 159:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(642);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 160:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 161:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(202);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(641);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 162:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 163:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 164:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 165:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 166:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(656);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 167:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 168:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(225);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 169:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 170:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 178:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 179:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 180:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(547);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 198:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 199:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 200:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(642);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 201:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(655);
      END_STATE();
    case 202:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(641);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 203:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(637);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 204:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(562);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 205:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 206:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(636);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 207:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(656);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 208:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(513);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(564);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 209:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 210:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 211:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 212:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(527);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(572);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(615);
      END_STATE();
    case 213:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 214:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(546);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 215:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(556);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 216:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 217:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 218:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 219:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 220:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 221:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 222:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 223:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 225:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 226:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 227:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 228:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 229:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(615);
      END_STATE();
    case 230:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 231:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 232:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 233:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 234:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(640);
      END_STATE();
    case 235:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(684);
      END_STATE();
    case 237:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(665);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(595);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(660);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 259:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead == '\r') ADVANCE(306);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 275:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(901);
      END_STATE();
    case 276:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(286);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '|') ADVANCE(287);
      END_STATE();
    case 277:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(873);
      END_STATE();
    case 278:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(874);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(876);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '[') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '`') ADVANCE(890);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '|') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(727);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(529);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(873);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(532);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(285);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(292);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead == 'x') ADVANCE(883);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(900);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(875);
      if (lookahead == '\'') ADVANCE(891);
      if (lookahead == ',') ADVANCE(896);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '`') ADVANCE(892);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '|') ADVANCE(285);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(47);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(875);
      if (lookahead == '\'') ADVANCE(891);
      if (lookahead == ',') ADVANCE(896);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '`') ADVANCE(892);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '|') ADVANCE(285);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(47);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(285);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(824);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(529);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(322);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(573);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(775);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(761);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(747);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(745);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(743);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(741);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(336);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(575);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(532);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(337);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(576);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(775);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(761);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(332);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(332);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(747);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(745);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(743);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(332);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(741);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(332);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(746);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(744);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(742);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(774);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(534);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(578);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(776);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(747);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(745);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(743);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(741);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(348);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(355);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(536);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(360);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(580);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(359);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(359);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '/') ADVANCE(198);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(369);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(540);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(584);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(541);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(379);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(585);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(776);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(749);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(372);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(375);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(375);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(747);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(745);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(743);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(741);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(372);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(746);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(744);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(375);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(742);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(375);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(779);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(395);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(780);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(847);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(820);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(828);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '.') ADVANCE(695);
      if (lookahead == '/') ADVANCE(818);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(545);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(589);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(758);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '@') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(757);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(759);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(758);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '@') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(757);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(759);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(857);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(409);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(409);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(409);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(409);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(546);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(590);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(591);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(160);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(430);
      if (lookahead == '.') ADVANCE(462);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(593);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(430);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(161);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(431);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(431);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(431);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(431);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(440);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(443);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(451);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(597);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(780);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(847);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(820);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(448);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(828);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(448);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(783);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(453);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(460);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(857);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(457);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(457);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(470);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(600);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(472);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(161);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(165);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(479);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(487);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(166);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(484);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(484);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(510);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(502);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(605);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(492);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(492);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(493);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(495);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(562);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(512);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(506);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(606);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(166);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(508);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(508);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(513);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(564);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(520);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(608);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(517);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(517);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '.') ADVANCE(523);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(523);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(567);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(526);
      if (lookahead == '.') ADVANCE(528);
      if (lookahead == '/') ADVANCE(212);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(528);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(527);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(572);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(615);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(528);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(322);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '/') ADVANCE(845);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(772);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(763);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(336);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(337);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(772);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(763);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == '/') ADVANCE(860);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(777);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == '.') ADVANCE(547);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(360);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == '.') ADVANCE(552);
      if (lookahead == '/') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(379);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(777);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(544);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(395);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(544);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(781);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(760);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '.') ADVANCE(711);
      if (lookahead == '/') ADVANCE(855);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '.') ADVANCE(558);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(163);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(552);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(451);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(781);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(760);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(460);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(470);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(472);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(163);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(562);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(487);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(167);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(502);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(512);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(167);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(520);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(566);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(566);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(760);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(760);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead == '.') ADVANCE(571);
      if (lookahead == '/') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(571);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(571);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '/') ADVANCE(842);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(529);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(322);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(573);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(773);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(336);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(575);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(532);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(337);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(576);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(773);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(841);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(534);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(578);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '.') ADVANCE(586);
      if (lookahead == '/') ADVANCE(827);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(778);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '.') ADVANCE(591);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(536);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(360);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '.') ADVANCE(592);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '/') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(582);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '.') ADVANCE(596);
      if (lookahead == '/') ADVANCE(239);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(739);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(540);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(584);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(541);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(379);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(585);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(778);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(588);
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == '/') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(395);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(588);
      if (lookahead == '.') ADVANCE(598);
      if (lookahead == '/') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(782);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '.') ADVANCE(719);
      if (lookahead == '/') ADVANCE(836);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(545);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(589);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(592);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(546);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(592);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(547);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(592);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead == '.') ADVANCE(601);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(164);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(595);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(596);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(598);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(451);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(597);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(598);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(782);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(720);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(460);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(470);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(472);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(164);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(604);
      if (lookahead == '.') ADVANCE(606);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(559);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(487);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(604);
      if (lookahead == '.') ADVANCE(607);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(502);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(607);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(562);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(512);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(168);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(564);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(520);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '.') ADVANCE(612);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(612);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(612);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(768);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(229);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(616);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(615);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(616);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(617);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(619);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(740);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(758);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(630);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(758);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(631);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(757);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(759);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(759);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(636);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(637);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(641);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(626);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(642);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(647);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(648);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(656);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(678);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(681);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(682);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '.') ADVANCE(695);
      if (lookahead == '/') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(685);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(717);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '/') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(857);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(690);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(690);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(692);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(695);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(703);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(698);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(719);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(784);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(857);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(700);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(700);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(787);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(705);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(713);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(721);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(708);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(707);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(715);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(723);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(708);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(770);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '.') ADVANCE(711);
      if (lookahead == '/') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '.') ADVANCE(712);
      if (lookahead == '/') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(703);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(785);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(714);
      if (lookahead == '.') ADVANCE(715);
      if (lookahead == '/') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(714);
      if (lookahead == '.') ADVANCE(716);
      if (lookahead == '/') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(716);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(716);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '.') ADVANCE(719);
      if (lookahead == '/') ADVANCE(833);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(717);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '.') ADVANCE(720);
      if (lookahead == '/') ADVANCE(833);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(720);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(703);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(719);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(720);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(786);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(840);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(721);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '.') ADVANCE(724);
      if (lookahead == '/') ADVANCE(840);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(723);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(844);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(534);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(843);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(732);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(832);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(736);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(833);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(833);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(402);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(399);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(545);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(685);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(754);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(756);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(839);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(823);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(705);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(713);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(721);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(840);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(721);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(813);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(631);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(831);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(630);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(834);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(820);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(648);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(828);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(821);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(795);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(838);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(829);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(811);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(619);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(812);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(617);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(830);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(817);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(647);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(835);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(819);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(794);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(837);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(803);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(804);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(805);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(725);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(726);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(794);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(795);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(793);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(618);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(532);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(541);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(619);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(617);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(631);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(443);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(695);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(711);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(719);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(630);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(647);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(453);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(794);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(648);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(795);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(523);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(567);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(707);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(715);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(723);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(531);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(369);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(540);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(649);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(719);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(634);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(797);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(723);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(654);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(801);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(703);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == '|') ADVANCE(140);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '|') ADVANCE(141);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(887);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(897);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(292);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(901);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 279},
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
  [21] = {.lex_state = 279},
  [22] = {.lex_state = 279},
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
  [136] = {.lex_state = 279},
  [137] = {.lex_state = 279},
  [138] = {.lex_state = 279},
  [139] = {.lex_state = 279},
  [140] = {.lex_state = 279},
  [141] = {.lex_state = 279},
  [142] = {.lex_state = 279},
  [143] = {.lex_state = 279},
  [144] = {.lex_state = 279},
  [145] = {.lex_state = 279},
  [146] = {.lex_state = 279},
  [147] = {.lex_state = 279},
  [148] = {.lex_state = 279},
  [149] = {.lex_state = 279},
  [150] = {.lex_state = 279},
  [151] = {.lex_state = 279},
  [152] = {.lex_state = 279},
  [153] = {.lex_state = 279},
  [154] = {.lex_state = 279},
  [155] = {.lex_state = 279},
  [156] = {.lex_state = 279},
  [157] = {.lex_state = 279},
  [158] = {.lex_state = 279},
  [159] = {.lex_state = 279},
  [160] = {.lex_state = 279},
  [161] = {.lex_state = 279},
  [162] = {.lex_state = 279},
  [163] = {.lex_state = 279},
  [164] = {.lex_state = 279},
  [165] = {.lex_state = 279},
  [166] = {.lex_state = 279},
  [167] = {.lex_state = 279},
  [168] = {.lex_state = 279},
  [169] = {.lex_state = 279},
  [170] = {.lex_state = 279},
  [171] = {.lex_state = 279},
  [172] = {.lex_state = 279},
  [173] = {.lex_state = 279},
  [174] = {.lex_state = 279},
  [175] = {.lex_state = 279},
  [176] = {.lex_state = 279},
  [177] = {.lex_state = 279},
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
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 276},
  [226] = {.lex_state = 276},
  [227] = {.lex_state = 276},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 276},
  [234] = {.lex_state = 276},
  [235] = {.lex_state = 276},
  [236] = {.lex_state = 279},
  [237] = {.lex_state = 279},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 279},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 279},
  [242] = {.lex_state = 279},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 279},
  [245] = {.lex_state = 279},
  [246] = {.lex_state = 279},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 279},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 276},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 279},
  [255] = {.lex_state = 279},
  [256] = {.lex_state = 279},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 275},
  [260] = {.lex_state = 275},
  [261] = {.lex_state = 0},
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
    [sym_program] = STATE(261),
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
    [sym__real_string] = STATE(177),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(177),
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
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_here_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(118),
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
    [sym__datum] = STATE(169),
    [sym_string] = STATE(169),
    [sym_byte_string] = STATE(169),
    [sym_here_string] = STATE(169),
    [sym_regex] = STATE(169),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(168),
    [sym_string] = STATE(168),
    [sym_byte_string] = STATE(168),
    [sym_here_string] = STATE(168),
    [sym_regex] = STATE(168),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(167),
    [sym_string] = STATE(167),
    [sym_byte_string] = STATE(167),
    [sym_here_string] = STATE(167),
    [sym_regex] = STATE(167),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(166),
    [sym_string] = STATE(166),
    [sym_byte_string] = STATE(166),
    [sym_here_string] = STATE(166),
    [sym_regex] = STATE(166),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(165),
    [sym_string] = STATE(165),
    [sym_byte_string] = STATE(165),
    [sym_here_string] = STATE(165),
    [sym_regex] = STATE(165),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(164),
    [sym_string] = STATE(164),
    [sym_byte_string] = STATE(164),
    [sym_here_string] = STATE(164),
    [sym_regex] = STATE(164),
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(163),
    [sym_string] = STATE(163),
    [sym_byte_string] = STATE(163),
    [sym_here_string] = STATE(163),
    [sym_regex] = STATE(163),
    [sym__real_string] = STATE(177),
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
    [sym__skip] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_block_comment] = STATE(70),
    [sym_sexp_comment] = STATE(70),
    [sym__datum] = STATE(162),
    [sym_string] = STATE(162),
    [sym_byte_string] = STATE(162),
    [sym_here_string] = STATE(162),
    [sym_regex] = STATE(162),
    [sym__real_string] = STATE(177),
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
    [aux_sym_sexp_comment_repeat1] = STATE(70),
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
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_byte_string] = STATE(140),
    [sym_here_string] = STATE(140),
    [sym_regex] = STATE(140),
    [sym__real_string] = STATE(177),
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
    [sym__skip] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_byte_string] = STATE(96),
    [sym_here_string] = STATE(96),
    [sym_regex] = STATE(96),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(96),
    [sym_symbol] = STATE(96),
    [sym_box] = STATE(96),
    [sym_list] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_structure] = STATE(96),
    [sym_hash] = STATE(96),
    [sym_graph] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_syntax] = STATE(96),
    [sym_quasisyntax] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splicing] = STATE(96),
    [sym_unsyntax] = STATE(96),
    [sym_unsyntax_splicing] = STATE(96),
    [aux_sym_sexp_comment_repeat1] = STATE(51),
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
    [sym__skip] = STATE(69),
    [sym_comment] = STATE(69),
    [sym_block_comment] = STATE(69),
    [sym_sexp_comment] = STATE(69),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(99),
    [sym_symbol] = STATE(99),
    [sym_box] = STATE(99),
    [sym_list] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_structure] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_graph] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_syntax] = STATE(99),
    [sym_quasisyntax] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splicing] = STATE(99),
    [sym_unsyntax] = STATE(99),
    [sym_unsyntax_splicing] = STATE(99),
    [aux_sym_sexp_comment_repeat1] = STATE(69),
    [aux_sym__skip_token1] = ACTIONS(483),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(487),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(487),
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
  [36] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_sexp_comment] = STATE(48),
    [sym__datum] = STATE(175),
    [sym_string] = STATE(175),
    [sym_byte_string] = STATE(175),
    [sym_here_string] = STATE(175),
    [sym_regex] = STATE(175),
    [sym__real_string] = STATE(177),
    [sym_number] = STATE(175),
    [sym_symbol] = STATE(175),
    [sym_box] = STATE(175),
    [sym_list] = STATE(175),
    [sym_vector] = STATE(175),
    [sym_structure] = STATE(175),
    [sym_hash] = STATE(175),
    [sym_graph] = STATE(175),
    [sym_quote] = STATE(175),
    [sym_quasiquote] = STATE(175),
    [sym_syntax] = STATE(175),
    [sym_quasisyntax] = STATE(175),
    [sym_unquote] = STATE(175),
    [sym_unquote_splicing] = STATE(175),
    [sym_unsyntax] = STATE(175),
    [sym_unsyntax_splicing] = STATE(175),
    [aux_sym_sexp_comment_repeat1] = STATE(48),
    [aux_sym__skip_token1] = ACTIONS(489),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(493),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(493),
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
  [37] = {
    [sym__skip] = STATE(88),
    [sym_comment] = STATE(88),
    [sym_block_comment] = STATE(88),
    [sym_sexp_comment] = STATE(88),
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
    [aux_sym_sexp_comment_repeat1] = STATE(88),
    [aux_sym__skip_token1] = ACTIONS(495),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(499),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(499),
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
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
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
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
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
    [sym__real_string] = STATE(177),
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
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_sexp_comment] = STATE(38),
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
    [aux_sym_sexp_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(509),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(513),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(513),
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
  [41] = {
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym_sexp_comment] = STATE(54),
    [sym__datum] = STATE(170),
    [sym_string] = STATE(170),
    [sym_byte_string] = STATE(170),
    [sym_here_string] = STATE(170),
    [sym_regex] = STATE(170),
    [sym__real_string] = STATE(177),
    [sym_number] = STATE(170),
    [sym_symbol] = STATE(170),
    [sym_box] = STATE(170),
    [sym_list] = STATE(170),
    [sym_vector] = STATE(170),
    [sym_structure] = STATE(170),
    [sym_hash] = STATE(170),
    [sym_graph] = STATE(170),
    [sym_quote] = STATE(170),
    [sym_quasiquote] = STATE(170),
    [sym_syntax] = STATE(170),
    [sym_quasisyntax] = STATE(170),
    [sym_unquote] = STATE(170),
    [sym_unquote_splicing] = STATE(170),
    [sym_unsyntax] = STATE(170),
    [sym_unsyntax_splicing] = STATE(170),
    [aux_sym_sexp_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(515),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(519),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(519),
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
  [42] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(214),
    [sym_string] = STATE(214),
    [sym_byte_string] = STATE(214),
    [sym_here_string] = STATE(214),
    [sym_regex] = STATE(214),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(214),
    [sym_symbol] = STATE(214),
    [sym_box] = STATE(214),
    [sym_list] = STATE(214),
    [sym_vector] = STATE(214),
    [sym_structure] = STATE(214),
    [sym_hash] = STATE(214),
    [sym_graph] = STATE(214),
    [sym_quote] = STATE(214),
    [sym_quasiquote] = STATE(214),
    [sym_syntax] = STATE(214),
    [sym_quasisyntax] = STATE(214),
    [sym_unquote] = STATE(214),
    [sym_unquote_splicing] = STATE(214),
    [sym_unsyntax] = STATE(214),
    [sym_unsyntax_splicing] = STATE(214),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(523),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(523),
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
    [sym_boolean] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(527),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(527),
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
    [sym__datum] = STATE(211),
    [sym_string] = STATE(211),
    [sym_byte_string] = STATE(211),
    [sym_here_string] = STATE(211),
    [sym_regex] = STATE(211),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(211),
    [sym_symbol] = STATE(211),
    [sym_box] = STATE(211),
    [sym_list] = STATE(211),
    [sym_vector] = STATE(211),
    [sym_structure] = STATE(211),
    [sym_hash] = STATE(211),
    [sym_graph] = STATE(211),
    [sym_quote] = STATE(211),
    [sym_quasiquote] = STATE(211),
    [sym_syntax] = STATE(211),
    [sym_quasisyntax] = STATE(211),
    [sym_unquote] = STATE(211),
    [sym_unquote_splicing] = STATE(211),
    [sym_unsyntax] = STATE(211),
    [sym_unsyntax_splicing] = STATE(211),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(531),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(531),
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
    [sym_boolean] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(535),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(535),
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
    [sym_boolean] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(539),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(539),
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
    [sym__datum] = STATE(208),
    [sym_string] = STATE(208),
    [sym_byte_string] = STATE(208),
    [sym_here_string] = STATE(208),
    [sym_regex] = STATE(208),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(208),
    [sym_symbol] = STATE(208),
    [sym_box] = STATE(208),
    [sym_list] = STATE(208),
    [sym_vector] = STATE(208),
    [sym_structure] = STATE(208),
    [sym_hash] = STATE(208),
    [sym_graph] = STATE(208),
    [sym_quote] = STATE(208),
    [sym_quasiquote] = STATE(208),
    [sym_syntax] = STATE(208),
    [sym_quasisyntax] = STATE(208),
    [sym_unquote] = STATE(208),
    [sym_unquote_splicing] = STATE(208),
    [sym_unsyntax] = STATE(208),
    [sym_unsyntax_splicing] = STATE(208),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(543),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(543),
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
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(153),
    [sym_string] = STATE(153),
    [sym_byte_string] = STATE(153),
    [sym_here_string] = STATE(153),
    [sym_regex] = STATE(153),
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(547),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(547),
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
    [sym__datum] = STATE(205),
    [sym_string] = STATE(205),
    [sym_byte_string] = STATE(205),
    [sym_here_string] = STATE(205),
    [sym_regex] = STATE(205),
    [sym__real_string] = STATE(196),
    [sym_number] = STATE(205),
    [sym_symbol] = STATE(205),
    [sym_box] = STATE(205),
    [sym_list] = STATE(205),
    [sym_vector] = STATE(205),
    [sym_structure] = STATE(205),
    [sym_hash] = STATE(205),
    [sym_graph] = STATE(205),
    [sym_quote] = STATE(205),
    [sym_quasiquote] = STATE(205),
    [sym_syntax] = STATE(205),
    [sym_quasisyntax] = STATE(205),
    [sym_unquote] = STATE(205),
    [sym_unquote_splicing] = STATE(205),
    [sym_unsyntax] = STATE(205),
    [sym_unsyntax_splicing] = STATE(205),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(555),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(555),
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
  [51] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(118),
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
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(559),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(559),
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
  [52] = {
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_sexp_comment] = STATE(42),
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
    [aux_sym_sexp_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(561),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(565),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(565),
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
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym_sexp_comment] = STATE(43),
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
    [aux_sym_sexp_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(567),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(571),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(571),
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
    [sym__datum] = STATE(151),
    [sym_string] = STATE(151),
    [sym_byte_string] = STATE(151),
    [sym_here_string] = STATE(151),
    [sym_regex] = STATE(151),
    [sym__real_string] = STATE(177),
    [sym_number] = STATE(151),
    [sym_symbol] = STATE(151),
    [sym_box] = STATE(151),
    [sym_list] = STATE(151),
    [sym_vector] = STATE(151),
    [sym_structure] = STATE(151),
    [sym_hash] = STATE(151),
    [sym_graph] = STATE(151),
    [sym_quote] = STATE(151),
    [sym_quasiquote] = STATE(151),
    [sym_syntax] = STATE(151),
    [sym_quasisyntax] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splicing] = STATE(151),
    [sym_unsyntax] = STATE(151),
    [sym_unsyntax_splicing] = STATE(151),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(575),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(575),
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
    [aux_sym__skip_token1] = ACTIONS(577),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(581),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(581),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(585),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(585),
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
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(587),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(591),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(591),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(595),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(595),
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
    [aux_sym_sexp_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(597),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(601),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(601),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(605),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(605),
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
    [aux_sym_sexp_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(607),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(609),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(611),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(611),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(613),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(615),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(615),
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
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(617),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(619),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(621),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(621),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(625),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(625),
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
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(627),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(631),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(631),
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
    [sym__real_string] = STATE(177),
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
    [sym_boolean] = ACTIONS(633),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(635),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(635),
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
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
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
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(637),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(641),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(641),
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
    [sym__real_string] = STATE(177),
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
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(118),
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
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_byte_string] = STATE(142),
    [sym_here_string] = STATE(142),
    [sym_regex] = STATE(142),
    [sym__real_string] = STATE(177),
    [sym_number] = STATE(142),
    [sym_symbol] = STATE(142),
    [sym_box] = STATE(142),
    [sym_list] = STATE(142),
    [sym_vector] = STATE(142),
    [sym_structure] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_graph] = STATE(142),
    [sym_quote] = STATE(142),
    [sym_quasiquote] = STATE(142),
    [sym_syntax] = STATE(142),
    [sym_quasisyntax] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splicing] = STATE(142),
    [sym_unsyntax] = STATE(142),
    [sym_unsyntax_splicing] = STATE(142),
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(651),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(653),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(653),
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
  [71] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(118),
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
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_here_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(118),
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
    [sym_boolean] = ACTIONS(659),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(661),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(661),
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
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(110),
    [sym_string] = STATE(110),
    [sym_byte_string] = STATE(110),
    [sym_here_string] = STATE(110),
    [sym_regex] = STATE(110),
    [sym__real_string] = STATE(118),
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
    [sym_boolean] = ACTIONS(663),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(665),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(665),
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
    [sym__skip] = STATE(73),
    [sym_comment] = STATE(73),
    [sym_block_comment] = STATE(73),
    [sym_sexp_comment] = STATE(73),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_box] = STATE(126),
    [sym_list] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_structure] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_graph] = STATE(126),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [aux_sym_sexp_comment_repeat1] = STATE(73),
    [aux_sym__skip_token1] = ACTIONS(667),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(669),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(671),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(671),
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
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(130),
    [sym_symbol] = STATE(130),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_quasiquote] = STATE(130),
    [sym_syntax] = STATE(130),
    [sym_quasisyntax] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_unquote_splicing] = STATE(130),
    [sym_unsyntax] = STATE(130),
    [sym_unsyntax_splicing] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(90),
    [aux_sym__skip_token1] = ACTIONS(673),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(677),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(677),
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
    [sym__real_string] = STATE(177),
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
    [aux_sym__skip_token1] = ACTIONS(679),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(681),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(683),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(683),
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
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_box] = STATE(131),
    [sym_list] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_structure] = STATE(131),
    [sym_hash] = STATE(131),
    [sym_graph] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_syntax] = STATE(131),
    [sym_quasisyntax] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_unquote_splicing] = STATE(131),
    [sym_unsyntax] = STATE(131),
    [sym_unsyntax_splicing] = STATE(131),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(685),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(687),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(689),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(689),
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
    [sym__skip] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym_sexp_comment] = STATE(72),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(72),
    [aux_sym__skip_token1] = ACTIONS(691),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(695),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(695),
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
    [sym__skip] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(134),
    [sym_string] = STATE(134),
    [sym_byte_string] = STATE(134),
    [sym_here_string] = STATE(134),
    [sym_regex] = STATE(134),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__skip_token1] = ACTIONS(697),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(701),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(701),
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
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_byte_string] = STATE(120),
    [sym_here_string] = STATE(120),
    [sym_regex] = STATE(120),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(120),
    [sym_symbol] = STATE(120),
    [sym_box] = STATE(120),
    [sym_list] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_structure] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_graph] = STATE(120),
    [sym_quote] = STATE(120),
    [sym_quasiquote] = STATE(120),
    [sym_syntax] = STATE(120),
    [sym_quasisyntax] = STATE(120),
    [sym_unquote] = STATE(120),
    [sym_unquote_splicing] = STATE(120),
    [sym_unsyntax] = STATE(120),
    [sym_unsyntax_splicing] = STATE(120),
    [aux_sym_sexp_comment_repeat1] = STATE(89),
    [aux_sym__skip_token1] = ACTIONS(703),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(705),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(707),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(707),
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
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_box] = STATE(119),
    [sym_list] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_structure] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_graph] = STATE(119),
    [sym_quote] = STATE(119),
    [sym_quasiquote] = STATE(119),
    [sym_syntax] = STATE(119),
    [sym_quasisyntax] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splicing] = STATE(119),
    [sym_unsyntax] = STATE(119),
    [sym_unsyntax_splicing] = STATE(119),
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(709),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(711),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(713),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(713),
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
    [sym__skip] = STATE(85),
    [sym_comment] = STATE(85),
    [sym_block_comment] = STATE(85),
    [sym_sexp_comment] = STATE(85),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(85),
    [aux_sym__skip_token1] = ACTIONS(715),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(717),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(719),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(719),
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
    [sym__skip] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_block_comment] = STATE(91),
    [sym_sexp_comment] = STATE(91),
    [sym__datum] = STATE(114),
    [sym_string] = STATE(114),
    [sym_byte_string] = STATE(114),
    [sym_here_string] = STATE(114),
    [sym_regex] = STATE(114),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(91),
    [aux_sym__skip_token1] = ACTIONS(721),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(723),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(725),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(725),
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
  [84] = {
    [sym__skip] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_block_comment] = STATE(87),
    [sym_sexp_comment] = STATE(87),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(118),
    [sym_number] = STATE(113),
    [sym_symbol] = STATE(113),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_quasiquote] = STATE(113),
    [sym_syntax] = STATE(113),
    [sym_quasisyntax] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splicing] = STATE(113),
    [sym_unsyntax] = STATE(113),
    [sym_unsyntax_splicing] = STATE(113),
    [aux_sym_sexp_comment_repeat1] = STATE(87),
    [aux_sym__skip_token1] = ACTIONS(727),
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
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(118),
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
    [sym__datum] = STATE(105),
    [sym_string] = STATE(105),
    [sym_byte_string] = STATE(105),
    [sym_here_string] = STATE(105),
    [sym_regex] = STATE(105),
    [sym__real_string] = STATE(118),
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
    [sym_boolean] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(739),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(739),
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
  [87] = {
    [sym__skip] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_sexp_comment] = STATE(135),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(745),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_POUND_LT_LT] = ACTIONS(375),
    [aux_sym_regex_token1] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_number_token1] = ACTIONS(381),
    [sym_character] = ACTIONS(747),
    [aux_sym_symbol_token1] = ACTIONS(385),
    [sym_keyword] = ACTIONS(747),
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
    [sym__real_string] = STATE(118),
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
    [sym__real_string] = STATE(118),
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
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(118),
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
    [aux_sym_sexp_comment_repeat1] = STATE(135),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(365),
    [anon_sym_POUND_PIPE] = ACTIONS(367),
    [anon_sym_POUND_SEMI] = ACTIONS(369),
    [sym__line_comment] = ACTIONS(365),
    [sym_boolean] = ACTIONS(757),
    [anon_sym_POUND] = ACTIONS(167),
    [anon_sym_POUND_LT_LT] = ACTIONS(169),
    [aux_sym_regex_token1] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [sym_character] = ACTIONS(759),
    [aux_sym_symbol_token1] = ACTIONS(177),
    [sym_keyword] = ACTIONS(759),
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
    [sym__real_string] = STATE(177),
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
  [1941] = 2,
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
  [1982] = 2,
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
  [2023] = 2,
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
  [2064] = 2,
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
  [2105] = 2,
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
  [2146] = 2,
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
  [2187] = 2,
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
  [2228] = 2,
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
  [2269] = 2,
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
  [2310] = 2,
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
  [2351] = 2,
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
  [2392] = 2,
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
  [2433] = 2,
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
  [2474] = 2,
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
  [2515] = 2,
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
  [2556] = 2,
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
  [2597] = 2,
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
  [2638] = 2,
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
  [2679] = 2,
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
  [2720] = 2,
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
  [2761] = 2,
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
  [2802] = 2,
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
  [2843] = 2,
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
  [2884] = 2,
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
  [2925] = 2,
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
  [2966] = 2,
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
  [3007] = 2,
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
  [3048] = 2,
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
  [3089] = 2,
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
  [3130] = 2,
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
  [3294] = 2,
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
  [3335] = 2,
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
  [3376] = 2,
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
  [3499] = 2,
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
  [3540] = 2,
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
  [3581] = 2,
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
  [3622] = 2,
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
  [3659] = 2,
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
  [3696] = 2,
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
  [3733] = 2,
    ACTIONS(851), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(849), 24,
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
  [3807] = 2,
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
  [3844] = 2,
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
  [3881] = 2,
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
  [3918] = 2,
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
  [3955] = 2,
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
  [3992] = 2,
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
  [4029] = 2,
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
  [4066] = 2,
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
  [4103] = 2,
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
  [4140] = 2,
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
  [4177] = 2,
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
  [4214] = 2,
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
  [4251] = 2,
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
  [4288] = 2,
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
  [4325] = 2,
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
  [4362] = 2,
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
  [4399] = 2,
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
  [4436] = 2,
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
  [4473] = 2,
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
  [4510] = 2,
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
  [4547] = 2,
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
  [4584] = 2,
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
  [4621] = 2,
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
  [4658] = 2,
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
  [4695] = 2,
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
  [4732] = 2,
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
  [4769] = 2,
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
  [4806] = 2,
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
  [4843] = 2,
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
  [4880] = 2,
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
  [4917] = 2,
    ACTIONS(803), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(801), 24,
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
  [4991] = 2,
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
  [5028] = 2,
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
  [5065] = 2,
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
    STATE(121), 1,
      sym__real_string,
    STATE(122), 1,
      sym_list,
  [5124] = 7,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      sym_decimal,
    STATE(190), 1,
      sym_list,
    STATE(192), 1,
      sym__real_string,
  [5146] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_decimal,
    STATE(154), 1,
      sym__real_string,
    STATE(157), 1,
      sym_list,
  [5168] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(955), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      anon_sym_EQ,
    STATE(156), 1,
      sym_list,
  [5187] = 6,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(959), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      anon_sym_EQ,
    STATE(203), 1,
      sym_list,
  [5206] = 6,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_list,
  [5225] = 5,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(967), 1,
      sym_decimal,
    STATE(122), 1,
      sym_list,
  [5241] = 4,
    ACTIONS(969), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(972), 1,
      aux_sym_block_comment_token1,
    ACTIONS(975), 1,
      anon_sym_PIPE_POUND,
    STATE(225), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5255] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(979), 1,
      aux_sym_block_comment_token1,
    ACTIONS(981), 1,
      anon_sym_PIPE_POUND,
    STATE(225), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5269] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(983), 1,
      aux_sym_block_comment_token1,
    ACTIONS(985), 1,
      anon_sym_PIPE_POUND,
    STATE(226), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5283] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(987), 1,
      aux_sym_block_comment_token1,
    ACTIONS(989), 1,
      anon_sym_PIPE_POUND,
    STATE(234), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5297] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(979), 1,
      aux_sym_block_comment_token1,
    ACTIONS(991), 1,
      anon_sym_PIPE_POUND,
    STATE(225), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5311] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(993), 1,
      sym_decimal,
    STATE(157), 1,
      sym_list,
  [5327] = 5,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(995), 1,
      sym_decimal,
    STATE(190), 1,
      sym_list,
  [5343] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(997), 1,
      aux_sym_block_comment_token1,
    ACTIONS(999), 1,
      anon_sym_PIPE_POUND,
    STATE(235), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5357] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(1001), 1,
      aux_sym_block_comment_token1,
    ACTIONS(1003), 1,
      anon_sym_PIPE_POUND,
    STATE(229), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5371] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(979), 1,
      aux_sym_block_comment_token1,
    ACTIONS(1005), 1,
      anon_sym_PIPE_POUND,
    STATE(225), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5385] = 4,
    ACTIONS(977), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(979), 1,
      aux_sym_block_comment_token1,
    ACTIONS(1007), 1,
      anon_sym_PIPE_POUND,
    STATE(225), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5399] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_list,
  [5412] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_list,
  [5425] = 3,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1011), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5436] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_list,
  [5449] = 3,
    ACTIONS(1013), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1015), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5460] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_list,
  [5473] = 4,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_list,
  [5486] = 3,
    ACTIONS(1017), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1015), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5497] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_list,
  [5510] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_list,
  [5523] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_list,
  [5536] = 3,
    ACTIONS(1019), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1021), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5547] = 3,
    ACTIONS(1023), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1025), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5558] = 3,
    ACTIONS(1027), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1015), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5569] = 4,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_list,
  [5582] = 3,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1031), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5593] = 2,
    ACTIONS(775), 1,
      aux_sym_block_comment_token1,
    ACTIONS(773), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5601] = 2,
    ACTIONS(771), 1,
      aux_sym_block_comment_token1,
    ACTIONS(769), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5609] = 2,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym__real_string,
  [5616] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym__real_string,
  [5623] = 2,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym__real_string,
  [5630] = 1,
    ACTIONS(1034), 1,
      sym__here_string_body,
  [5634] = 1,
    ACTIONS(1036), 1,
      sym__here_string_body,
  [5638] = 1,
    ACTIONS(731), 1,
      sym_lang_name,
  [5642] = 1,
    ACTIONS(469), 1,
      sym_lang_name,
  [5646] = 1,
    ACTIONS(1038), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(225)] = 5241,
  [SMALL_STATE(226)] = 5255,
  [SMALL_STATE(227)] = 5269,
  [SMALL_STATE(228)] = 5283,
  [SMALL_STATE(229)] = 5297,
  [SMALL_STATE(230)] = 5311,
  [SMALL_STATE(231)] = 5327,
  [SMALL_STATE(232)] = 5343,
  [SMALL_STATE(233)] = 5357,
  [SMALL_STATE(234)] = 5371,
  [SMALL_STATE(235)] = 5385,
  [SMALL_STATE(236)] = 5399,
  [SMALL_STATE(237)] = 5412,
  [SMALL_STATE(238)] = 5425,
  [SMALL_STATE(239)] = 5436,
  [SMALL_STATE(240)] = 5449,
  [SMALL_STATE(241)] = 5460,
  [SMALL_STATE(242)] = 5473,
  [SMALL_STATE(243)] = 5486,
  [SMALL_STATE(244)] = 5497,
  [SMALL_STATE(245)] = 5510,
  [SMALL_STATE(246)] = 5523,
  [SMALL_STATE(247)] = 5536,
  [SMALL_STATE(248)] = 5547,
  [SMALL_STATE(249)] = 5558,
  [SMALL_STATE(250)] = 5569,
  [SMALL_STATE(251)] = 5582,
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
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(97),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(227),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(218),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(258),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(254),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(238),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(116),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(117),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(74),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(224),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(239),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(237),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(237),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(75),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(77),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(78),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(79),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(80),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(81),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(82),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(83),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(84),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(259),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(259),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
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
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(161),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(228),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(220),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(257),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(248),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(159),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(230),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(246),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(241),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(241),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(135),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(200),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(233),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(37),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(232),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(225),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(251),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1038] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
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
