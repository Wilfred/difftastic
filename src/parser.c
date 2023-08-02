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
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 93
#define SYMBOL_COUNT 80
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
  sym_number = 16,
  sym_decimal = 17,
  sym_character = 18,
  sym_symbol = 19,
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
  sym_box = 60,
  sym_list = 61,
  sym_vector = 62,
  sym_structure = 63,
  sym_hash = 64,
  sym_graph = 65,
  sym_quote = 66,
  sym_quasiquote = 67,
  sym_syntax = 68,
  sym_quasisyntax = 69,
  sym_unquote = 70,
  sym_unquote_splicing = 71,
  sym_unsyntax = 72,
  sym_unsyntax_splicing = 73,
  sym_extension = 74,
  aux_sym_program_repeat1 = 75,
  aux_sym_block_comment_repeat1 = 76,
  aux_sym_sexp_comment_repeat1 = 77,
  aux_sym__real_string_repeat1 = 78,
  aux_sym_list_repeat1 = 79,
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
  [sym_number] = "number",
  [sym_decimal] = "decimal",
  [sym_character] = "character",
  [sym_symbol] = "symbol",
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
  [sym_number] = sym_number,
  [sym_decimal] = sym_decimal,
  [sym_character] = sym_character,
  [sym_symbol] = sym_symbol,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 3,
  [9] = 7,
  [10] = 6,
  [11] = 11,
  [12] = 11,
  [13] = 4,
  [14] = 11,
  [15] = 4,
  [16] = 5,
  [17] = 3,
  [18] = 5,
  [19] = 6,
  [20] = 7,
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
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 31,
  [38] = 33,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 30,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 41,
  [50] = 48,
  [51] = 24,
  [52] = 47,
  [53] = 40,
  [54] = 46,
  [55] = 28,
  [56] = 42,
  [57] = 27,
  [58] = 40,
  [59] = 26,
  [60] = 36,
  [61] = 25,
  [62] = 33,
  [63] = 63,
  [64] = 31,
  [65] = 65,
  [66] = 65,
  [67] = 30,
  [68] = 44,
  [69] = 45,
  [70] = 63,
  [71] = 42,
  [72] = 72,
  [73] = 35,
  [74] = 46,
  [75] = 47,
  [76] = 34,
  [77] = 48,
  [78] = 41,
  [79] = 72,
  [80] = 23,
  [81] = 35,
  [82] = 29,
  [83] = 28,
  [84] = 27,
  [85] = 26,
  [86] = 25,
  [87] = 23,
  [88] = 44,
  [89] = 45,
  [90] = 34,
  [91] = 63,
  [92] = 72,
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
  [134] = 131,
  [135] = 119,
  [136] = 103,
  [137] = 122,
  [138] = 130,
  [139] = 126,
  [140] = 107,
  [141] = 120,
  [142] = 118,
  [143] = 93,
  [144] = 106,
  [145] = 104,
  [146] = 102,
  [147] = 101,
  [148] = 100,
  [149] = 99,
  [150] = 98,
  [151] = 97,
  [152] = 96,
  [153] = 95,
  [154] = 108,
  [155] = 113,
  [156] = 115,
  [157] = 105,
  [158] = 128,
  [159] = 109,
  [160] = 132,
  [161] = 124,
  [162] = 129,
  [163] = 127,
  [164] = 125,
  [165] = 110,
  [166] = 111,
  [167] = 123,
  [168] = 121,
  [169] = 112,
  [170] = 94,
  [171] = 114,
  [172] = 116,
  [173] = 117,
  [174] = 103,
  [175] = 132,
  [176] = 94,
  [177] = 114,
  [178] = 116,
  [179] = 117,
  [180] = 128,
  [181] = 119,
  [182] = 111,
  [183] = 121,
  [184] = 110,
  [185] = 123,
  [186] = 122,
  [187] = 125,
  [188] = 109,
  [189] = 127,
  [190] = 108,
  [191] = 129,
  [192] = 112,
  [193] = 131,
  [194] = 107,
  [195] = 126,
  [196] = 130,
  [197] = 105,
  [198] = 120,
  [199] = 115,
  [200] = 113,
  [201] = 95,
  [202] = 96,
  [203] = 97,
  [204] = 98,
  [205] = 99,
  [206] = 100,
  [207] = 101,
  [208] = 102,
  [209] = 104,
  [210] = 106,
  [211] = 118,
  [212] = 212,
  [213] = 212,
  [214] = 212,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 218,
  [219] = 218,
  [220] = 220,
  [221] = 218,
  [222] = 220,
  [223] = 218,
  [224] = 220,
  [225] = 225,
  [226] = 225,
  [227] = 225,
  [228] = 228,
  [229] = 220,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 231,
  [234] = 234,
  [235] = 235,
  [236] = 234,
  [237] = 230,
  [238] = 234,
  [239] = 232,
  [240] = 232,
  [241] = 231,
  [242] = 230,
  [243] = 243,
  [244] = 235,
  [245] = 235,
  [246] = 132,
  [247] = 130,
  [248] = 248,
  [249] = 248,
  [250] = 248,
  [251] = 251,
  [252] = 252,
  [253] = 251,
  [254] = 251,
  [255] = 252,
  [256] = 256,
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
      if (eof) ADVANCE(231);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(459);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '{') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(340);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(183);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(182);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(322);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(180);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(350);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(181);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(168);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(184);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(185);
      END_STATE();
    case 61:
      if (lookahead == '<') ADVANCE(251);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == 'v') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(229);
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
      if (lookahead == 'b') ADVANCE(393);
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
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(393);
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
      if (lookahead == 'x') ADVANCE(253);
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
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(393);
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
      if (lookahead == 't') ADVANCE(393);
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
      if (lookahead == 'x') ADVANCE(253);
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
          lookahead == '/') ADVANCE(243);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(389);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(364);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(370);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
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
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(363);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(284);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(364);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(310);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(363);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(412);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(393);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(344);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(352);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(389);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(370);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 212:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == 'U') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 226:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(237);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '|') ADVANCE(238);
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(451);
      END_STATE();
    case 229:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(452);
      END_STATE();
    case 230:
      if (eof) ADVANCE(231);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(243);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'x') ADVANCE(461);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
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
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
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
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(170);
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
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(213);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(213);
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
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(203);
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
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(284);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
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
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
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
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(292);
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
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(310);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '/') ADVANCE(202);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(202);
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
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(322);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '/') ADVANCE(174);
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
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(324);
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
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(324);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(329);
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
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(209);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(338);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(338);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(340);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(192);
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
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '/') ADVANCE(196);
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
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(345);
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
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(349);
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
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(352);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '.') ADVANCE(359);
      if (lookahead == '/') ADVANCE(198);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(191);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
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
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(435);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(229);
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
          lookahead == '/') ADVANCE(243);
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
  [1] = {.lex_state = 230},
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
  [21] = {.lex_state = 230},
  [22] = {.lex_state = 230},
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
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 230},
  [135] = {.lex_state = 230},
  [136] = {.lex_state = 230},
  [137] = {.lex_state = 230},
  [138] = {.lex_state = 230},
  [139] = {.lex_state = 230},
  [140] = {.lex_state = 230},
  [141] = {.lex_state = 230},
  [142] = {.lex_state = 230},
  [143] = {.lex_state = 230},
  [144] = {.lex_state = 230},
  [145] = {.lex_state = 230},
  [146] = {.lex_state = 230},
  [147] = {.lex_state = 230},
  [148] = {.lex_state = 230},
  [149] = {.lex_state = 230},
  [150] = {.lex_state = 230},
  [151] = {.lex_state = 230},
  [152] = {.lex_state = 230},
  [153] = {.lex_state = 230},
  [154] = {.lex_state = 230},
  [155] = {.lex_state = 230},
  [156] = {.lex_state = 230},
  [157] = {.lex_state = 230},
  [158] = {.lex_state = 230},
  [159] = {.lex_state = 230},
  [160] = {.lex_state = 230},
  [161] = {.lex_state = 230},
  [162] = {.lex_state = 230},
  [163] = {.lex_state = 230},
  [164] = {.lex_state = 230},
  [165] = {.lex_state = 230},
  [166] = {.lex_state = 230},
  [167] = {.lex_state = 230},
  [168] = {.lex_state = 230},
  [169] = {.lex_state = 230},
  [170] = {.lex_state = 230},
  [171] = {.lex_state = 230},
  [172] = {.lex_state = 230},
  [173] = {.lex_state = 230},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
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
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 227},
  [219] = {.lex_state = 227},
  [220] = {.lex_state = 227},
  [221] = {.lex_state = 227},
  [222] = {.lex_state = 227},
  [223] = {.lex_state = 227},
  [224] = {.lex_state = 227},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 227},
  [229] = {.lex_state = 227},
  [230] = {.lex_state = 230},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 230},
  [235] = {.lex_state = 230},
  [236] = {.lex_state = 230},
  [237] = {.lex_state = 230},
  [238] = {.lex_state = 230},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 230},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 230},
  [245] = {.lex_state = 230},
  [246] = {.lex_state = 227},
  [247] = {.lex_state = 227},
  [248] = {.lex_state = 230},
  [249] = {.lex_state = 230},
  [250] = {.lex_state = 230},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 226},
  [253] = {.lex_state = 0, .external_lex_state = 1},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 226},
  [256] = {.lex_state = 0},
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
    [sym_program] = STATE(256),
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
    [sym__real_string] = STATE(136),
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
    [sym_number] = ACTIONS(13),
    [sym_character] = ACTIONS(5),
    [sym_symbol] = ACTIONS(13),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUNDreader] = ACTIONS(55),
    [anon_sym_POUNDlang] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(59),
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(61),
    [sym_dot] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(67),
    [anon_sym_POUND_PIPE] = ACTIONS(70),
    [anon_sym_POUND_SEMI] = ACTIONS(73),
    [sym__line_comment] = ACTIONS(67),
    [sym_boolean] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_POUND_LT_LT] = ACTIONS(79),
    [aux_sym_regex_token1] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(64),
    [sym_character] = ACTIONS(61),
    [sym_symbol] = ACTIONS(64),
    [sym_keyword] = ACTIONS(61),
    [anon_sym_POUND_AMP] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_POUNDfl] = ACTIONS(102),
    [anon_sym_POUNDfx] = ACTIONS(102),
    [anon_sym_POUNDs] = ACTIONS(105),
    [anon_sym_POUNDhash] = ACTIONS(108),
    [anon_sym_POUNDhasheq] = ACTIONS(108),
    [anon_sym_POUNDhasheqv] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_POUND_SQUOTE] = ACTIONS(120),
    [anon_sym_POUND_BQUOTE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_COMMA_AT] = ACTIONS(129),
    [anon_sym_POUND_COMMA] = ACTIONS(132),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(135),
    [anon_sym_POUNDreader] = ACTIONS(138),
    [anon_sym_POUNDlang] = ACTIONS(141),
    [anon_sym_POUND_BANG] = ACTIONS(144),
  },
  [3] = {
    [sym__token] = STATE(16),
    [sym__skip] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_sexp_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_syntax] = STATE(16),
    [sym_quasisyntax] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unsyntax] = STATE(16),
    [sym_unsyntax_splicing] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [aux_sym__skip_token1] = ACTIONS(147),
    [sym_dot] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(149),
    [sym_character] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [5] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [6] = {
    [sym__token] = STATE(11),
    [sym__skip] = STATE(11),
    [sym_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_sexp_comment] = STATE(11),
    [sym__datum] = STATE(11),
    [sym_string] = STATE(11),
    [sym_byte_string] = STATE(11),
    [sym_here_string] = STATE(11),
    [sym_regex] = STATE(11),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_structure] = STATE(11),
    [sym_hash] = STATE(11),
    [sym_graph] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_quasiquote] = STATE(11),
    [sym_syntax] = STATE(11),
    [sym_quasisyntax] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_unquote_splicing] = STATE(11),
    [sym_unsyntax] = STATE(11),
    [sym_unsyntax_splicing] = STATE(11),
    [sym_extension] = STATE(11),
    [aux_sym_list_repeat1] = STATE(11),
    [aux_sym__skip_token1] = ACTIONS(211),
    [sym_dot] = ACTIONS(213),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(213),
    [sym_character] = ACTIONS(211),
    [sym_symbol] = ACTIONS(213),
    [sym_keyword] = ACTIONS(211),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(217),
    [sym_dot] = ACTIONS(219),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(219),
    [sym_character] = ACTIONS(217),
    [sym_symbol] = ACTIONS(219),
    [sym_keyword] = ACTIONS(217),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [8] = {
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_sexp_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_here_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [sym_graph] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_quasiquote] = STATE(5),
    [sym_syntax] = STATE(5),
    [sym_quasisyntax] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_unquote_splicing] = STATE(5),
    [sym_unsyntax] = STATE(5),
    [sym_unsyntax_splicing] = STATE(5),
    [sym_extension] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym__skip_token1] = ACTIONS(221),
    [sym_dot] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(223),
    [sym_character] = ACTIONS(221),
    [sym_symbol] = ACTIONS(223),
    [sym_keyword] = ACTIONS(221),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [9] = {
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_sexp_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_quasiquote] = STATE(15),
    [sym_syntax] = STATE(15),
    [sym_quasisyntax] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_unquote_splicing] = STATE(15),
    [sym_unsyntax] = STATE(15),
    [sym_unsyntax_splicing] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__skip_token1] = ACTIONS(225),
    [sym_dot] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [sym_symbol] = ACTIONS(227),
    [sym_keyword] = ACTIONS(225),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [10] = {
    [sym__token] = STATE(14),
    [sym__skip] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_sexp_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_quasiquote] = STATE(14),
    [sym_syntax] = STATE(14),
    [sym_quasisyntax] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_unquote_splicing] = STATE(14),
    [sym_unsyntax] = STATE(14),
    [sym_unsyntax_splicing] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__skip_token1] = ACTIONS(229),
    [sym_dot] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(231),
    [sym_character] = ACTIONS(229),
    [sym_symbol] = ACTIONS(231),
    [sym_keyword] = ACTIONS(229),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [11] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [12] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [13] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [14] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [15] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [16] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [17] = {
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(237),
    [sym_dot] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(239),
    [sym_character] = ACTIONS(237),
    [sym_symbol] = ACTIONS(239),
    [sym_keyword] = ACTIONS(237),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
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
    [sym__real_string] = STATE(103),
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
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [19] = {
    [sym__token] = STATE(12),
    [sym__skip] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_sexp_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym_string] = STATE(12),
    [sym_byte_string] = STATE(12),
    [sym_here_string] = STATE(12),
    [sym_regex] = STATE(12),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_structure] = STATE(12),
    [sym_hash] = STATE(12),
    [sym_graph] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_syntax] = STATE(12),
    [sym_quasisyntax] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_unquote_splicing] = STATE(12),
    [sym_unsyntax] = STATE(12),
    [sym_unsyntax_splicing] = STATE(12),
    [sym_extension] = STATE(12),
    [aux_sym_list_repeat1] = STATE(12),
    [aux_sym__skip_token1] = ACTIONS(243),
    [sym_dot] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(245),
    [sym_character] = ACTIONS(243),
    [sym_symbol] = ACTIONS(245),
    [sym_keyword] = ACTIONS(243),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [20] = {
    [sym__token] = STATE(13),
    [sym__skip] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_sexp_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
    [sym_byte_string] = STATE(13),
    [sym_here_string] = STATE(13),
    [sym_regex] = STATE(13),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_structure] = STATE(13),
    [sym_hash] = STATE(13),
    [sym_graph] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_quasiquote] = STATE(13),
    [sym_syntax] = STATE(13),
    [sym_quasisyntax] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_unquote_splicing] = STATE(13),
    [sym_unsyntax] = STATE(13),
    [sym_unsyntax_splicing] = STATE(13),
    [sym_extension] = STATE(13),
    [aux_sym_list_repeat1] = STATE(13),
    [aux_sym__skip_token1] = ACTIONS(247),
    [sym_dot] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(249),
    [sym_character] = ACTIONS(247),
    [sym_symbol] = ACTIONS(249),
    [sym_keyword] = ACTIONS(247),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [21] = {
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
    [sym__real_string] = STATE(136),
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
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym__skip_token1] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(256),
    [anon_sym_POUND_PIPE] = ACTIONS(259),
    [anon_sym_POUND_SEMI] = ACTIONS(262),
    [sym__line_comment] = ACTIONS(256),
    [sym_boolean] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(268),
    [anon_sym_POUND_LT_LT] = ACTIONS(271),
    [aux_sym_regex_token1] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_number] = ACTIONS(265),
    [sym_character] = ACTIONS(253),
    [sym_symbol] = ACTIONS(265),
    [sym_keyword] = ACTIONS(253),
    [anon_sym_POUND_AMP] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_POUNDfl] = ACTIONS(292),
    [anon_sym_POUNDfx] = ACTIONS(292),
    [anon_sym_POUNDs] = ACTIONS(295),
    [anon_sym_POUNDhash] = ACTIONS(298),
    [anon_sym_POUNDhasheq] = ACTIONS(298),
    [anon_sym_POUNDhasheqv] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_POUND_SQUOTE] = ACTIONS(310),
    [anon_sym_POUND_BQUOTE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_COMMA_AT] = ACTIONS(319),
    [anon_sym_POUND_COMMA] = ACTIONS(322),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(325),
    [anon_sym_POUNDreader] = ACTIONS(328),
    [anon_sym_POUNDlang] = ACTIONS(331),
    [anon_sym_POUND_BANG] = ACTIONS(334),
  },
  [22] = {
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
    [sym__real_string] = STATE(136),
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
    [ts_builtin_sym_end] = ACTIONS(337),
    [aux_sym__skip_token1] = ACTIONS(339),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(341),
    [sym_character] = ACTIONS(339),
    [sym_symbol] = ACTIONS(341),
    [sym_keyword] = ACTIONS(339),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUNDreader] = ACTIONS(55),
    [anon_sym_POUNDlang] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(59),
  },
  [23] = {
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_sexp_comment] = STATE(42),
    [sym__datum] = STATE(185),
    [sym_string] = STATE(185),
    [sym_byte_string] = STATE(185),
    [sym_here_string] = STATE(185),
    [sym_regex] = STATE(185),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(42),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(351),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(351),
    [sym_character] = ACTIONS(361),
    [sym_symbol] = ACTIONS(351),
    [sym_keyword] = ACTIONS(361),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [24] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(180),
    [sym_string] = STATE(180),
    [sym_byte_string] = STATE(180),
    [sym_here_string] = STATE(180),
    [sym_regex] = STATE(180),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(397),
    [sym_character] = ACTIONS(399),
    [sym_symbol] = ACTIONS(397),
    [sym_keyword] = ACTIONS(399),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [25] = {
    [sym__skip] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_block_comment] = STATE(58),
    [sym_sexp_comment] = STATE(58),
    [sym__datum] = STATE(164),
    [sym_string] = STATE(164),
    [sym_byte_string] = STATE(164),
    [sym_here_string] = STATE(164),
    [sym_regex] = STATE(164),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(58),
    [aux_sym__skip_token1] = ACTIONS(401),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(403),
    [sym_character] = ACTIONS(405),
    [sym_symbol] = ACTIONS(403),
    [sym_keyword] = ACTIONS(405),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [26] = {
    [sym__skip] = STATE(60),
    [sym_comment] = STATE(60),
    [sym_block_comment] = STATE(60),
    [sym_sexp_comment] = STATE(60),
    [sym__datum] = STATE(163),
    [sym_string] = STATE(163),
    [sym_byte_string] = STATE(163),
    [sym_here_string] = STATE(163),
    [sym_regex] = STATE(163),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(60),
    [aux_sym__skip_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(411),
    [sym_symbol] = ACTIONS(409),
    [sym_keyword] = ACTIONS(411),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [27] = {
    [sym__skip] = STATE(62),
    [sym_comment] = STATE(62),
    [sym_block_comment] = STATE(62),
    [sym_sexp_comment] = STATE(62),
    [sym__datum] = STATE(162),
    [sym_string] = STATE(162),
    [sym_byte_string] = STATE(162),
    [sym_here_string] = STATE(162),
    [sym_regex] = STATE(162),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(62),
    [aux_sym__skip_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [sym_symbol] = ACTIONS(415),
    [sym_keyword] = ACTIONS(417),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [28] = {
    [sym__skip] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_block_comment] = STATE(64),
    [sym_sexp_comment] = STATE(64),
    [sym__datum] = STATE(134),
    [sym_string] = STATE(134),
    [sym_byte_string] = STATE(134),
    [sym_here_string] = STATE(134),
    [sym_regex] = STATE(134),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(64),
    [aux_sym__skip_token1] = ACTIONS(419),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(421),
    [sym_character] = ACTIONS(423),
    [sym_symbol] = ACTIONS(421),
    [sym_keyword] = ACTIONS(423),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [29] = {
    [sym__skip] = STATE(66),
    [sym_comment] = STATE(66),
    [sym_block_comment] = STATE(66),
    [sym_sexp_comment] = STATE(66),
    [sym__datum] = STATE(161),
    [sym_string] = STATE(161),
    [sym_byte_string] = STATE(161),
    [sym_here_string] = STATE(161),
    [sym_regex] = STATE(161),
    [sym__real_string] = STATE(136),
    [sym_box] = STATE(161),
    [sym_list] = STATE(161),
    [sym_vector] = STATE(161),
    [sym_structure] = STATE(161),
    [sym_hash] = STATE(161),
    [sym_graph] = STATE(161),
    [sym_quote] = STATE(161),
    [sym_quasiquote] = STATE(161),
    [sym_syntax] = STATE(161),
    [sym_quasisyntax] = STATE(161),
    [sym_unquote] = STATE(161),
    [sym_unquote_splicing] = STATE(161),
    [sym_unsyntax] = STATE(161),
    [sym_unsyntax_splicing] = STATE(161),
    [aux_sym_sexp_comment_repeat1] = STATE(66),
    [aux_sym__skip_token1] = ACTIONS(425),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [sym_symbol] = ACTIONS(427),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [30] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(195),
    [sym_string] = STATE(195),
    [sym_byte_string] = STATE(195),
    [sym_here_string] = STATE(195),
    [sym_regex] = STATE(195),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(431),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(433),
    [sym_character] = ACTIONS(435),
    [sym_symbol] = ACTIONS(433),
    [sym_keyword] = ACTIONS(435),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [31] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_byte_string] = STATE(106),
    [sym_here_string] = STATE(106),
    [sym_regex] = STATE(106),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(437),
    [sym_character] = ACTIONS(439),
    [sym_symbol] = ACTIONS(437),
    [sym_keyword] = ACTIONS(439),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [32] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(158),
    [sym_string] = STATE(158),
    [sym_byte_string] = STATE(158),
    [sym_here_string] = STATE(158),
    [sym_regex] = STATE(158),
    [sym__real_string] = STATE(136),
    [sym_box] = STATE(158),
    [sym_list] = STATE(158),
    [sym_vector] = STATE(158),
    [sym_structure] = STATE(158),
    [sym_hash] = STATE(158),
    [sym_graph] = STATE(158),
    [sym_quote] = STATE(158),
    [sym_quasiquote] = STATE(158),
    [sym_syntax] = STATE(158),
    [sym_quasisyntax] = STATE(158),
    [sym_unquote] = STATE(158),
    [sym_unquote_splicing] = STATE(158),
    [sym_unsyntax] = STATE(158),
    [sym_unsyntax_splicing] = STATE(158),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(441),
    [sym_character] = ACTIONS(443),
    [sym_symbol] = ACTIONS(441),
    [sym_keyword] = ACTIONS(443),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [33] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_here_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(445),
    [sym_character] = ACTIONS(447),
    [sym_symbol] = ACTIONS(445),
    [sym_keyword] = ACTIONS(447),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [34] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(198),
    [sym_string] = STATE(198),
    [sym_byte_string] = STATE(198),
    [sym_here_string] = STATE(198),
    [sym_regex] = STATE(198),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(198),
    [sym_list] = STATE(198),
    [sym_vector] = STATE(198),
    [sym_structure] = STATE(198),
    [sym_hash] = STATE(198),
    [sym_graph] = STATE(198),
    [sym_quote] = STATE(198),
    [sym_quasiquote] = STATE(198),
    [sym_syntax] = STATE(198),
    [sym_quasisyntax] = STATE(198),
    [sym_unquote] = STATE(198),
    [sym_unquote_splicing] = STATE(198),
    [sym_unsyntax] = STATE(198),
    [sym_unsyntax_splicing] = STATE(198),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(449),
    [sym_character] = ACTIONS(451),
    [sym_symbol] = ACTIONS(449),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [35] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(211),
    [sym_string] = STATE(211),
    [sym_byte_string] = STATE(211),
    [sym_here_string] = STATE(211),
    [sym_regex] = STATE(211),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(453),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [sym_symbol] = ACTIONS(455),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [36] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(459),
    [sym_character] = ACTIONS(461),
    [sym_symbol] = ACTIONS(459),
    [sym_keyword] = ACTIONS(461),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [37] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(210),
    [sym_string] = STATE(210),
    [sym_byte_string] = STATE(210),
    [sym_here_string] = STATE(210),
    [sym_regex] = STATE(210),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(463),
    [sym_character] = ACTIONS(465),
    [sym_symbol] = ACTIONS(463),
    [sym_keyword] = ACTIONS(465),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [38] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(209),
    [sym_string] = STATE(209),
    [sym_byte_string] = STATE(209),
    [sym_here_string] = STATE(209),
    [sym_regex] = STATE(209),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [sym_symbol] = ACTIONS(467),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [39] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(208),
    [sym_string] = STATE(208),
    [sym_byte_string] = STATE(208),
    [sym_here_string] = STATE(208),
    [sym_regex] = STATE(208),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(471),
    [sym_character] = ACTIONS(473),
    [sym_symbol] = ACTIONS(471),
    [sym_keyword] = ACTIONS(473),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [40] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(207),
    [sym_string] = STATE(207),
    [sym_byte_string] = STATE(207),
    [sym_here_string] = STATE(207),
    [sym_regex] = STATE(207),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(475),
    [sym_character] = ACTIONS(477),
    [sym_symbol] = ACTIONS(475),
    [sym_keyword] = ACTIONS(477),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [41] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(153),
    [sym_string] = STATE(153),
    [sym_byte_string] = STATE(153),
    [sym_here_string] = STATE(153),
    [sym_regex] = STATE(153),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(479),
    [sym_character] = ACTIONS(481),
    [sym_symbol] = ACTIONS(479),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [42] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(206),
    [sym_string] = STATE(206),
    [sym_byte_string] = STATE(206),
    [sym_here_string] = STATE(206),
    [sym_regex] = STATE(206),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(206),
    [sym_list] = STATE(206),
    [sym_vector] = STATE(206),
    [sym_structure] = STATE(206),
    [sym_hash] = STATE(206),
    [sym_graph] = STATE(206),
    [sym_quote] = STATE(206),
    [sym_quasiquote] = STATE(206),
    [sym_syntax] = STATE(206),
    [sym_quasisyntax] = STATE(206),
    [sym_unquote] = STATE(206),
    [sym_unquote_splicing] = STATE(206),
    [sym_unsyntax] = STATE(206),
    [sym_unsyntax_splicing] = STATE(206),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(483),
    [sym_character] = ACTIONS(485),
    [sym_symbol] = ACTIONS(483),
    [sym_keyword] = ACTIONS(485),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [43] = {
    [sym__skip] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(139),
    [sym_string] = STATE(139),
    [sym_byte_string] = STATE(139),
    [sym_here_string] = STATE(139),
    [sym_regex] = STATE(139),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__skip_token1] = ACTIONS(487),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(489),
    [sym_character] = ACTIONS(491),
    [sym_symbol] = ACTIONS(489),
    [sym_keyword] = ACTIONS(491),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [44] = {
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym_sexp_comment] = STATE(54),
    [sym__datum] = STATE(168),
    [sym_string] = STATE(168),
    [sym_byte_string] = STATE(168),
    [sym_here_string] = STATE(168),
    [sym_regex] = STATE(168),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(493),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(495),
    [sym_character] = ACTIONS(497),
    [sym_symbol] = ACTIONS(495),
    [sym_keyword] = ACTIONS(497),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [45] = {
    [sym__skip] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym_sexp_comment] = STATE(52),
    [sym__datum] = STATE(135),
    [sym_string] = STATE(135),
    [sym_byte_string] = STATE(135),
    [sym_here_string] = STATE(135),
    [sym_regex] = STATE(135),
    [sym__real_string] = STATE(136),
    [sym_box] = STATE(135),
    [sym_list] = STATE(135),
    [sym_vector] = STATE(135),
    [sym_structure] = STATE(135),
    [sym_hash] = STATE(135),
    [sym_graph] = STATE(135),
    [sym_quote] = STATE(135),
    [sym_quasiquote] = STATE(135),
    [sym_syntax] = STATE(135),
    [sym_quasisyntax] = STATE(135),
    [sym_unquote] = STATE(135),
    [sym_unquote_splicing] = STATE(135),
    [sym_unsyntax] = STATE(135),
    [sym_unsyntax_splicing] = STATE(135),
    [aux_sym_sexp_comment_repeat1] = STATE(52),
    [aux_sym__skip_token1] = ACTIONS(499),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(501),
    [sym_character] = ACTIONS(503),
    [sym_symbol] = ACTIONS(501),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [46] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(205),
    [sym_string] = STATE(205),
    [sym_byte_string] = STATE(205),
    [sym_here_string] = STATE(205),
    [sym_regex] = STATE(205),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(505),
    [sym_character] = ACTIONS(507),
    [sym_symbol] = ACTIONS(505),
    [sym_keyword] = ACTIONS(507),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [47] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(204),
    [sym_string] = STATE(204),
    [sym_byte_string] = STATE(204),
    [sym_here_string] = STATE(204),
    [sym_regex] = STATE(204),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(509),
    [sym_character] = ACTIONS(511),
    [sym_symbol] = ACTIONS(509),
    [sym_keyword] = ACTIONS(511),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [48] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(203),
    [sym_string] = STATE(203),
    [sym_byte_string] = STATE(203),
    [sym_here_string] = STATE(203),
    [sym_regex] = STATE(203),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(203),
    [sym_list] = STATE(203),
    [sym_vector] = STATE(203),
    [sym_structure] = STATE(203),
    [sym_hash] = STATE(203),
    [sym_graph] = STATE(203),
    [sym_quote] = STATE(203),
    [sym_quasiquote] = STATE(203),
    [sym_syntax] = STATE(203),
    [sym_quasisyntax] = STATE(203),
    [sym_unquote] = STATE(203),
    [sym_unquote_splicing] = STATE(203),
    [sym_unsyntax] = STATE(203),
    [sym_unsyntax_splicing] = STATE(203),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(513),
    [sym_character] = ACTIONS(515),
    [sym_symbol] = ACTIONS(513),
    [sym_keyword] = ACTIONS(515),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [49] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(201),
    [sym_string] = STATE(201),
    [sym_byte_string] = STATE(201),
    [sym_here_string] = STATE(201),
    [sym_regex] = STATE(201),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(201),
    [sym_list] = STATE(201),
    [sym_vector] = STATE(201),
    [sym_structure] = STATE(201),
    [sym_hash] = STATE(201),
    [sym_graph] = STATE(201),
    [sym_quote] = STATE(201),
    [sym_quasiquote] = STATE(201),
    [sym_syntax] = STATE(201),
    [sym_quasisyntax] = STATE(201),
    [sym_unquote] = STATE(201),
    [sym_unquote_splicing] = STATE(201),
    [sym_unsyntax] = STATE(201),
    [sym_unsyntax_splicing] = STATE(201),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(517),
    [sym_character] = ACTIONS(519),
    [sym_symbol] = ACTIONS(517),
    [sym_keyword] = ACTIONS(519),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [50] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(151),
    [sym_string] = STATE(151),
    [sym_byte_string] = STATE(151),
    [sym_here_string] = STATE(151),
    [sym_regex] = STATE(151),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(521),
    [sym_character] = ACTIONS(523),
    [sym_symbol] = ACTIONS(521),
    [sym_keyword] = ACTIONS(523),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [51] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(525),
    [sym_character] = ACTIONS(527),
    [sym_symbol] = ACTIONS(525),
    [sym_keyword] = ACTIONS(527),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [52] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(150),
    [sym_string] = STATE(150),
    [sym_byte_string] = STATE(150),
    [sym_here_string] = STATE(150),
    [sym_regex] = STATE(150),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(529),
    [sym_character] = ACTIONS(531),
    [sym_symbol] = ACTIONS(529),
    [sym_keyword] = ACTIONS(531),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [53] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(533),
    [sym_character] = ACTIONS(535),
    [sym_symbol] = ACTIONS(533),
    [sym_keyword] = ACTIONS(535),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [54] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(149),
    [sym_string] = STATE(149),
    [sym_byte_string] = STATE(149),
    [sym_here_string] = STATE(149),
    [sym_regex] = STATE(149),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(537),
    [sym_character] = ACTIONS(539),
    [sym_symbol] = ACTIONS(537),
    [sym_keyword] = ACTIONS(539),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [55] = {
    [sym__skip] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym_sexp_comment] = STATE(37),
    [sym__datum] = STATE(193),
    [sym_string] = STATE(193),
    [sym_byte_string] = STATE(193),
    [sym_here_string] = STATE(193),
    [sym_regex] = STATE(193),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(541),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(543),
    [sym_character] = ACTIONS(545),
    [sym_symbol] = ACTIONS(543),
    [sym_keyword] = ACTIONS(545),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [56] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(148),
    [sym_string] = STATE(148),
    [sym_byte_string] = STATE(148),
    [sym_here_string] = STATE(148),
    [sym_regex] = STATE(148),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(549),
    [sym_symbol] = ACTIONS(547),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [57] = {
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_sexp_comment] = STATE(38),
    [sym__datum] = STATE(191),
    [sym_string] = STATE(191),
    [sym_byte_string] = STATE(191),
    [sym_here_string] = STATE(191),
    [sym_regex] = STATE(191),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(551),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(553),
    [sym_character] = ACTIONS(555),
    [sym_symbol] = ACTIONS(553),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [58] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(147),
    [sym_string] = STATE(147),
    [sym_byte_string] = STATE(147),
    [sym_here_string] = STATE(147),
    [sym_regex] = STATE(147),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(557),
    [sym_character] = ACTIONS(559),
    [sym_symbol] = ACTIONS(557),
    [sym_keyword] = ACTIONS(559),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [59] = {
    [sym__skip] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym_sexp_comment] = STATE(39),
    [sym__datum] = STATE(189),
    [sym_string] = STATE(189),
    [sym_byte_string] = STATE(189),
    [sym_here_string] = STATE(189),
    [sym_regex] = STATE(189),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(39),
    [aux_sym__skip_token1] = ACTIONS(561),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(563),
    [sym_character] = ACTIONS(565),
    [sym_symbol] = ACTIONS(563),
    [sym_keyword] = ACTIONS(565),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [60] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(146),
    [sym_string] = STATE(146),
    [sym_byte_string] = STATE(146),
    [sym_here_string] = STATE(146),
    [sym_regex] = STATE(146),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(567),
    [sym_character] = ACTIONS(569),
    [sym_symbol] = ACTIONS(567),
    [sym_keyword] = ACTIONS(569),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [61] = {
    [sym__skip] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_sexp_comment] = STATE(40),
    [sym__datum] = STATE(187),
    [sym_string] = STATE(187),
    [sym_byte_string] = STATE(187),
    [sym_here_string] = STATE(187),
    [sym_regex] = STATE(187),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(40),
    [aux_sym__skip_token1] = ACTIONS(571),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(573),
    [sym_character] = ACTIONS(575),
    [sym_symbol] = ACTIONS(573),
    [sym_keyword] = ACTIONS(575),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [62] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(145),
    [sym_string] = STATE(145),
    [sym_byte_string] = STATE(145),
    [sym_here_string] = STATE(145),
    [sym_regex] = STATE(145),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(577),
    [sym_character] = ACTIONS(579),
    [sym_symbol] = ACTIONS(577),
    [sym_keyword] = ACTIONS(579),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [63] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
    [sym__datum] = STATE(173),
    [sym_string] = STATE(173),
    [sym_byte_string] = STATE(173),
    [sym_here_string] = STATE(173),
    [sym_regex] = STATE(173),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(581),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(583),
    [sym_character] = ACTIONS(585),
    [sym_symbol] = ACTIONS(583),
    [sym_keyword] = ACTIONS(585),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [64] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(144),
    [sym_string] = STATE(144),
    [sym_byte_string] = STATE(144),
    [sym_here_string] = STATE(144),
    [sym_regex] = STATE(144),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(587),
    [sym_character] = ACTIONS(589),
    [sym_symbol] = ACTIONS(587),
    [sym_keyword] = ACTIONS(589),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [65] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(591),
    [sym_character] = ACTIONS(593),
    [sym_symbol] = ACTIONS(591),
    [sym_keyword] = ACTIONS(593),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [66] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(143),
    [sym_string] = STATE(143),
    [sym_byte_string] = STATE(143),
    [sym_here_string] = STATE(143),
    [sym_regex] = STATE(143),
    [sym__real_string] = STATE(136),
    [sym_box] = STATE(143),
    [sym_list] = STATE(143),
    [sym_vector] = STATE(143),
    [sym_structure] = STATE(143),
    [sym_hash] = STATE(143),
    [sym_graph] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_syntax] = STATE(143),
    [sym_quasisyntax] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splicing] = STATE(143),
    [sym_unsyntax] = STATE(143),
    [sym_unsyntax_splicing] = STATE(143),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(595),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(595),
    [sym_character] = ACTIONS(597),
    [sym_symbol] = ACTIONS(595),
    [sym_keyword] = ACTIONS(597),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [67] = {
    [sym__skip] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(51),
    [aux_sym__skip_token1] = ACTIONS(599),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(601),
    [sym_character] = ACTIONS(603),
    [sym_symbol] = ACTIONS(601),
    [sym_keyword] = ACTIONS(603),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [68] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym_sexp_comment] = STATE(46),
    [sym__datum] = STATE(183),
    [sym_string] = STATE(183),
    [sym_byte_string] = STATE(183),
    [sym_here_string] = STATE(183),
    [sym_regex] = STATE(183),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(183),
    [sym_list] = STATE(183),
    [sym_vector] = STATE(183),
    [sym_structure] = STATE(183),
    [sym_hash] = STATE(183),
    [sym_graph] = STATE(183),
    [sym_quote] = STATE(183),
    [sym_quasiquote] = STATE(183),
    [sym_syntax] = STATE(183),
    [sym_quasisyntax] = STATE(183),
    [sym_unquote] = STATE(183),
    [sym_unquote_splicing] = STATE(183),
    [sym_unsyntax] = STATE(183),
    [sym_unsyntax_splicing] = STATE(183),
    [aux_sym_sexp_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(605),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(607),
    [sym_character] = ACTIONS(609),
    [sym_symbol] = ACTIONS(607),
    [sym_keyword] = ACTIONS(609),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [69] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(181),
    [sym_string] = STATE(181),
    [sym_byte_string] = STATE(181),
    [sym_here_string] = STATE(181),
    [sym_regex] = STATE(181),
    [sym__real_string] = STATE(174),
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
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(611),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(613),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(613),
    [sym_character] = ACTIONS(615),
    [sym_symbol] = ACTIONS(613),
    [sym_keyword] = ACTIONS(615),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [70] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_sexp_comment] = STATE(48),
    [sym__datum] = STATE(179),
    [sym_string] = STATE(179),
    [sym_byte_string] = STATE(179),
    [sym_here_string] = STATE(179),
    [sym_regex] = STATE(179),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(179),
    [sym_list] = STATE(179),
    [sym_vector] = STATE(179),
    [sym_structure] = STATE(179),
    [sym_hash] = STATE(179),
    [sym_graph] = STATE(179),
    [sym_quote] = STATE(179),
    [sym_quasiquote] = STATE(179),
    [sym_syntax] = STATE(179),
    [sym_quasisyntax] = STATE(179),
    [sym_unquote] = STATE(179),
    [sym_unquote_splicing] = STATE(179),
    [sym_unsyntax] = STATE(179),
    [sym_unsyntax_splicing] = STATE(179),
    [aux_sym_sexp_comment_repeat1] = STATE(48),
    [aux_sym__skip_token1] = ACTIONS(617),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(619),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(619),
    [sym_character] = ACTIONS(621),
    [sym_symbol] = ACTIONS(619),
    [sym_keyword] = ACTIONS(621),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [71] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(623),
    [sym_character] = ACTIONS(625),
    [sym_symbol] = ACTIONS(623),
    [sym_keyword] = ACTIONS(625),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [72] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(192),
    [sym_string] = STATE(192),
    [sym_byte_string] = STATE(192),
    [sym_here_string] = STATE(192),
    [sym_regex] = STATE(192),
    [sym__real_string] = STATE(174),
    [sym_box] = STATE(192),
    [sym_list] = STATE(192),
    [sym_vector] = STATE(192),
    [sym_structure] = STATE(192),
    [sym_hash] = STATE(192),
    [sym_graph] = STATE(192),
    [sym_quote] = STATE(192),
    [sym_quasiquote] = STATE(192),
    [sym_syntax] = STATE(192),
    [sym_quasisyntax] = STATE(192),
    [sym_unquote] = STATE(192),
    [sym_unquote_splicing] = STATE(192),
    [sym_unsyntax] = STATE(192),
    [sym_unsyntax_splicing] = STATE(192),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(627),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_POUND_LT_LT] = ACTIONS(355),
    [aux_sym_regex_token1] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(629),
    [sym_character] = ACTIONS(631),
    [sym_symbol] = ACTIONS(629),
    [sym_keyword] = ACTIONS(631),
    [anon_sym_POUND_AMP] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_POUNDfl] = ACTIONS(371),
    [anon_sym_POUNDfx] = ACTIONS(371),
    [anon_sym_POUNDs] = ACTIONS(373),
    [anon_sym_POUNDhash] = ACTIONS(375),
    [anon_sym_POUNDhasheq] = ACTIONS(375),
    [anon_sym_POUNDhasheqv] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_POUND_SQUOTE] = ACTIONS(383),
    [anon_sym_POUND_BQUOTE] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_COMMA_AT] = ACTIONS(389),
    [anon_sym_POUND_COMMA] = ACTIONS(391),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(393),
  },
  [73] = {
    [sym__skip] = STATE(90),
    [sym_comment] = STATE(90),
    [sym_block_comment] = STATE(90),
    [sym_sexp_comment] = STATE(90),
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_byte_string] = STATE(142),
    [sym_here_string] = STATE(142),
    [sym_regex] = STATE(142),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(90),
    [aux_sym__skip_token1] = ACTIONS(633),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(635),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(635),
    [sym_character] = ACTIONS(637),
    [sym_symbol] = ACTIONS(635),
    [sym_keyword] = ACTIONS(637),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [74] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(639),
    [sym_character] = ACTIONS(641),
    [sym_symbol] = ACTIONS(639),
    [sym_keyword] = ACTIONS(641),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [75] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(643),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(643),
    [sym_character] = ACTIONS(645),
    [sym_symbol] = ACTIONS(643),
    [sym_keyword] = ACTIONS(645),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [76] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_byte_string] = STATE(120),
    [sym_here_string] = STATE(120),
    [sym_regex] = STATE(120),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(647),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(647),
    [sym_character] = ACTIONS(649),
    [sym_symbol] = ACTIONS(647),
    [sym_keyword] = ACTIONS(649),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [77] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_syntax] = STATE(97),
    [sym_quasisyntax] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_unquote_splicing] = STATE(97),
    [sym_unsyntax] = STATE(97),
    [sym_unsyntax_splicing] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(651),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(651),
    [sym_character] = ACTIONS(653),
    [sym_symbol] = ACTIONS(651),
    [sym_keyword] = ACTIONS(653),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [78] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_quasiquote] = STATE(95),
    [sym_syntax] = STATE(95),
    [sym_quasisyntax] = STATE(95),
    [sym_unquote] = STATE(95),
    [sym_unquote_splicing] = STATE(95),
    [sym_unsyntax] = STATE(95),
    [sym_unsyntax_splicing] = STATE(95),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(655),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(655),
    [sym_character] = ACTIONS(657),
    [sym_symbol] = ACTIONS(655),
    [sym_keyword] = ACTIONS(657),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [79] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_sexp_comment] = STATE(41),
    [sym__datum] = STATE(169),
    [sym_string] = STATE(169),
    [sym_byte_string] = STATE(169),
    [sym_here_string] = STATE(169),
    [sym_regex] = STATE(169),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(41),
    [aux_sym__skip_token1] = ACTIONS(659),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(661),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(661),
    [sym_character] = ACTIONS(663),
    [sym_symbol] = ACTIONS(661),
    [sym_keyword] = ACTIONS(663),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [80] = {
    [sym__skip] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_block_comment] = STATE(56),
    [sym_sexp_comment] = STATE(56),
    [sym__datum] = STATE(167),
    [sym_string] = STATE(167),
    [sym_byte_string] = STATE(167),
    [sym_here_string] = STATE(167),
    [sym_regex] = STATE(167),
    [sym__real_string] = STATE(136),
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
    [aux_sym_sexp_comment_repeat1] = STATE(56),
    [aux_sym__skip_token1] = ACTIONS(665),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(667),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(667),
    [sym_character] = ACTIONS(669),
    [sym_symbol] = ACTIONS(667),
    [sym_keyword] = ACTIONS(669),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [81] = {
    [sym__skip] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_block_comment] = STATE(76),
    [sym_sexp_comment] = STATE(76),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_here_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(118),
    [sym_list] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_structure] = STATE(118),
    [sym_hash] = STATE(118),
    [sym_graph] = STATE(118),
    [sym_quote] = STATE(118),
    [sym_quasiquote] = STATE(118),
    [sym_syntax] = STATE(118),
    [sym_quasisyntax] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splicing] = STATE(118),
    [sym_unsyntax] = STATE(118),
    [sym_unsyntax_splicing] = STATE(118),
    [aux_sym_sexp_comment_repeat1] = STATE(76),
    [aux_sym__skip_token1] = ACTIONS(671),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(673),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(673),
    [sym_character] = ACTIONS(675),
    [sym_symbol] = ACTIONS(673),
    [sym_keyword] = ACTIONS(675),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [82] = {
    [sym__skip] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym_sexp_comment] = STATE(65),
    [sym__datum] = STATE(124),
    [sym_string] = STATE(124),
    [sym_byte_string] = STATE(124),
    [sym_here_string] = STATE(124),
    [sym_regex] = STATE(124),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(124),
    [sym_list] = STATE(124),
    [sym_vector] = STATE(124),
    [sym_structure] = STATE(124),
    [sym_hash] = STATE(124),
    [sym_graph] = STATE(124),
    [sym_quote] = STATE(124),
    [sym_quasiquote] = STATE(124),
    [sym_syntax] = STATE(124),
    [sym_quasisyntax] = STATE(124),
    [sym_unquote] = STATE(124),
    [sym_unquote_splicing] = STATE(124),
    [sym_unsyntax] = STATE(124),
    [sym_unsyntax_splicing] = STATE(124),
    [aux_sym_sexp_comment_repeat1] = STATE(65),
    [aux_sym__skip_token1] = ACTIONS(677),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(679),
    [sym_character] = ACTIONS(681),
    [sym_symbol] = ACTIONS(679),
    [sym_keyword] = ACTIONS(681),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [83] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__skip_token1] = ACTIONS(683),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(685),
    [sym_character] = ACTIONS(687),
    [sym_symbol] = ACTIONS(685),
    [sym_keyword] = ACTIONS(687),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [84] = {
    [sym__skip] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(129),
    [sym_list] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_structure] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_graph] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_quasiquote] = STATE(129),
    [sym_syntax] = STATE(129),
    [sym_quasisyntax] = STATE(129),
    [sym_unquote] = STATE(129),
    [sym_unquote_splicing] = STATE(129),
    [sym_unsyntax] = STATE(129),
    [sym_unsyntax_splicing] = STATE(129),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__skip_token1] = ACTIONS(689),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(691),
    [sym_character] = ACTIONS(693),
    [sym_symbol] = ACTIONS(691),
    [sym_keyword] = ACTIONS(693),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [85] = {
    [sym__skip] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym_sexp_comment] = STATE(36),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_syntax] = STATE(127),
    [sym_quasisyntax] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splicing] = STATE(127),
    [sym_unsyntax] = STATE(127),
    [sym_unsyntax_splicing] = STATE(127),
    [aux_sym_sexp_comment_repeat1] = STATE(36),
    [aux_sym__skip_token1] = ACTIONS(695),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(697),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(697),
    [sym_character] = ACTIONS(699),
    [sym_symbol] = ACTIONS(697),
    [sym_keyword] = ACTIONS(699),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [86] = {
    [sym__skip] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym_sexp_comment] = STATE(53),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_byte_string] = STATE(125),
    [sym_here_string] = STATE(125),
    [sym_regex] = STATE(125),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(125),
    [sym_list] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_structure] = STATE(125),
    [sym_hash] = STATE(125),
    [sym_graph] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_syntax] = STATE(125),
    [sym_quasisyntax] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splicing] = STATE(125),
    [sym_unsyntax] = STATE(125),
    [sym_unsyntax_splicing] = STATE(125),
    [aux_sym_sexp_comment_repeat1] = STATE(53),
    [aux_sym__skip_token1] = ACTIONS(701),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(703),
    [sym_character] = ACTIONS(705),
    [sym_symbol] = ACTIONS(703),
    [sym_keyword] = ACTIONS(705),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [87] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_byte_string] = STATE(123),
    [sym_here_string] = STATE(123),
    [sym_regex] = STATE(123),
    [sym__real_string] = STATE(103),
    [sym_box] = STATE(123),
    [sym_list] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_structure] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_graph] = STATE(123),
    [sym_quote] = STATE(123),
    [sym_quasiquote] = STATE(123),
    [sym_syntax] = STATE(123),
    [sym_quasisyntax] = STATE(123),
    [sym_unquote] = STATE(123),
    [sym_unquote_splicing] = STATE(123),
    [sym_unsyntax] = STATE(123),
    [sym_unsyntax_splicing] = STATE(123),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(707),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(709),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(709),
    [sym_character] = ACTIONS(711),
    [sym_symbol] = ACTIONS(709),
    [sym_keyword] = ACTIONS(711),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [88] = {
    [sym__skip] = STATE(74),
    [sym_comment] = STATE(74),
    [sym_block_comment] = STATE(74),
    [sym_sexp_comment] = STATE(74),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(74),
    [aux_sym__skip_token1] = ACTIONS(713),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(715),
    [sym_character] = ACTIONS(717),
    [sym_symbol] = ACTIONS(715),
    [sym_keyword] = ACTIONS(717),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [89] = {
    [sym__skip] = STATE(75),
    [sym_comment] = STATE(75),
    [sym_block_comment] = STATE(75),
    [sym_sexp_comment] = STATE(75),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(75),
    [aux_sym__skip_token1] = ACTIONS(719),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(721),
    [sym_character] = ACTIONS(723),
    [sym_symbol] = ACTIONS(721),
    [sym_keyword] = ACTIONS(723),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [90] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(141),
    [sym_string] = STATE(141),
    [sym_byte_string] = STATE(141),
    [sym_here_string] = STATE(141),
    [sym_regex] = STATE(141),
    [sym__real_string] = STATE(136),
    [sym_box] = STATE(141),
    [sym_list] = STATE(141),
    [sym_vector] = STATE(141),
    [sym_structure] = STATE(141),
    [sym_hash] = STATE(141),
    [sym_graph] = STATE(141),
    [sym_quote] = STATE(141),
    [sym_quasiquote] = STATE(141),
    [sym_syntax] = STATE(141),
    [sym_quasisyntax] = STATE(141),
    [sym_unquote] = STATE(141),
    [sym_unquote_splicing] = STATE(141),
    [sym_unsyntax] = STATE(141),
    [sym_unsyntax_splicing] = STATE(141),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(395),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(725),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(725),
    [sym_character] = ACTIONS(727),
    [sym_symbol] = ACTIONS(725),
    [sym_keyword] = ACTIONS(727),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [91] = {
    [sym__skip] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_block_comment] = STATE(77),
    [sym_sexp_comment] = STATE(77),
    [sym__datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_byte_string] = STATE(117),
    [sym_here_string] = STATE(117),
    [sym_regex] = STATE(117),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(77),
    [aux_sym__skip_token1] = ACTIONS(729),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(731),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(731),
    [sym_character] = ACTIONS(733),
    [sym_symbol] = ACTIONS(731),
    [sym_keyword] = ACTIONS(733),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [92] = {
    [sym__skip] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_here_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(103),
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
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__skip_token1] = ACTIONS(735),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(737),
    [sym_character] = ACTIONS(739),
    [sym_symbol] = ACTIONS(737),
    [sym_keyword] = ACTIONS(739),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(743), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(741), 29,
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
    ACTIONS(747), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(745), 29,
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
    ACTIONS(751), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(749), 29,
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
    ACTIONS(755), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 29,
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
    ACTIONS(759), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 29,
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
    ACTIONS(763), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 29,
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
    ACTIONS(767), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [308] = 2,
    ACTIONS(771), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [352] = 2,
    ACTIONS(775), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [396] = 2,
    ACTIONS(779), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [440] = 2,
    ACTIONS(783), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [484] = 2,
    ACTIONS(787), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [528] = 2,
    ACTIONS(791), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [572] = 2,
    ACTIONS(795), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [616] = 2,
    ACTIONS(799), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [660] = 2,
    ACTIONS(803), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [704] = 2,
    ACTIONS(807), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [748] = 2,
    ACTIONS(811), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [792] = 2,
    ACTIONS(815), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [836] = 2,
    ACTIONS(819), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [880] = 2,
    ACTIONS(823), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [924] = 2,
    ACTIONS(827), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [968] = 2,
    ACTIONS(831), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1012] = 2,
    ACTIONS(835), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1056] = 2,
    ACTIONS(839), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1100] = 2,
    ACTIONS(843), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1144] = 2,
    ACTIONS(847), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1188] = 2,
    ACTIONS(851), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1232] = 2,
    ACTIONS(855), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1276] = 2,
    ACTIONS(859), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1320] = 2,
    ACTIONS(863), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1364] = 2,
    ACTIONS(867), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1408] = 2,
    ACTIONS(871), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1452] = 2,
    ACTIONS(875), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1496] = 2,
    ACTIONS(879), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1540] = 2,
    ACTIONS(883), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1584] = 2,
    ACTIONS(887), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1628] = 2,
    ACTIONS(891), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1672] = 2,
    ACTIONS(895), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1716] = 2,
    ACTIONS(899), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1760] = 7,
    ACTIONS(901), 1,
      aux_sym__skip_token1,
    ACTIONS(907), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(910), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(904), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(133), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(913), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(915), 19,
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
  [1812] = 2,
    ACTIONS(895), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1853] = 2,
    ACTIONS(847), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1894] = 2,
    ACTIONS(783), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1935] = 2,
    ACTIONS(859), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [1976] = 2,
    ACTIONS(891), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2017] = 2,
    ACTIONS(875), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2058] = 2,
    ACTIONS(799), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2099] = 2,
    ACTIONS(851), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2140] = 2,
    ACTIONS(843), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2181] = 2,
    ACTIONS(743), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(741), 27,
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
  [2222] = 2,
    ACTIONS(795), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2263] = 2,
    ACTIONS(787), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2304] = 2,
    ACTIONS(779), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2345] = 2,
    ACTIONS(775), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2386] = 2,
    ACTIONS(771), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2427] = 2,
    ACTIONS(767), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2468] = 2,
    ACTIONS(763), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 27,
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
  [2509] = 2,
    ACTIONS(759), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 27,
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
  [2550] = 2,
    ACTIONS(755), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 27,
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
  [2591] = 2,
    ACTIONS(751), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(749), 27,
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
  [2632] = 2,
    ACTIONS(803), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2673] = 2,
    ACTIONS(823), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2714] = 2,
    ACTIONS(831), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2755] = 2,
    ACTIONS(791), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2796] = 2,
    ACTIONS(883), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2837] = 2,
    ACTIONS(807), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2878] = 2,
    ACTIONS(899), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2919] = 2,
    ACTIONS(867), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [2960] = 2,
    ACTIONS(887), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3001] = 2,
    ACTIONS(879), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3042] = 2,
    ACTIONS(871), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3083] = 2,
    ACTIONS(811), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3124] = 2,
    ACTIONS(815), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3165] = 2,
    ACTIONS(863), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3206] = 2,
    ACTIONS(855), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3247] = 2,
    ACTIONS(819), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3288] = 2,
    ACTIONS(747), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(745), 27,
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
  [3329] = 2,
    ACTIONS(827), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3370] = 2,
    ACTIONS(835), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3411] = 2,
    ACTIONS(839), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3452] = 2,
    ACTIONS(783), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3489] = 2,
    ACTIONS(899), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3526] = 2,
    ACTIONS(747), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(745), 24,
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
  [3563] = 2,
    ACTIONS(827), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3600] = 2,
    ACTIONS(835), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3637] = 2,
    ACTIONS(839), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3674] = 2,
    ACTIONS(883), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3711] = 2,
    ACTIONS(847), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3748] = 2,
    ACTIONS(815), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3785] = 2,
    ACTIONS(855), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3822] = 2,
    ACTIONS(811), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3859] = 2,
    ACTIONS(863), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3896] = 2,
    ACTIONS(859), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3933] = 2,
    ACTIONS(871), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [3970] = 2,
    ACTIONS(807), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4007] = 2,
    ACTIONS(879), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4044] = 2,
    ACTIONS(803), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4081] = 2,
    ACTIONS(887), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4118] = 2,
    ACTIONS(819), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4155] = 2,
    ACTIONS(895), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4192] = 2,
    ACTIONS(799), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4229] = 2,
    ACTIONS(875), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4266] = 2,
    ACTIONS(891), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4303] = 2,
    ACTIONS(791), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4340] = 2,
    ACTIONS(851), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4377] = 2,
    ACTIONS(831), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4414] = 2,
    ACTIONS(823), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4451] = 2,
    ACTIONS(751), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(749), 24,
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
  [4488] = 2,
    ACTIONS(755), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(753), 24,
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
  [4525] = 2,
    ACTIONS(759), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(757), 24,
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
  [4562] = 2,
    ACTIONS(763), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(761), 24,
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
  [4599] = 2,
    ACTIONS(767), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4636] = 2,
    ACTIONS(771), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4673] = 2,
    ACTIONS(775), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4710] = 2,
    ACTIONS(779), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4747] = 2,
    ACTIONS(787), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4784] = 2,
    ACTIONS(795), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4821] = 2,
    ACTIONS(843), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
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
  [4858] = 7,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(917), 1,
      sym_decimal,
    STATE(190), 1,
      sym_list,
    STATE(194), 1,
      sym__real_string,
  [4880] = 7,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(919), 1,
      sym_decimal,
    STATE(107), 1,
      sym__real_string,
    STATE(108), 1,
      sym_list,
  [4902] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(921), 1,
      sym_decimal,
    STATE(140), 1,
      sym__real_string,
    STATE(154), 1,
      sym_list,
  [4924] = 6,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym_list,
  [4943] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(927), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_EQ,
    STATE(156), 1,
      sym_list,
  [4962] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_list,
  [4981] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(937), 1,
      aux_sym_block_comment_token1,
    ACTIONS(939), 1,
      anon_sym_PIPE_POUND,
    STATE(229), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [4995] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(941), 1,
      aux_sym_block_comment_token1,
    ACTIONS(943), 1,
      anon_sym_PIPE_POUND,
    STATE(224), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5009] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(945), 1,
      aux_sym_block_comment_token1,
    ACTIONS(947), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5023] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(949), 1,
      aux_sym_block_comment_token1,
    ACTIONS(951), 1,
      anon_sym_PIPE_POUND,
    STATE(220), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5037] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(945), 1,
      aux_sym_block_comment_token1,
    ACTIONS(953), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5051] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(955), 1,
      aux_sym_block_comment_token1,
    ACTIONS(957), 1,
      anon_sym_PIPE_POUND,
    STATE(222), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5065] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(945), 1,
      aux_sym_block_comment_token1,
    ACTIONS(959), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5079] = 5,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      sym_decimal,
    STATE(108), 1,
      sym_list,
  [5095] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      sym_decimal,
    STATE(190), 1,
      sym_list,
  [5111] = 5,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(965), 1,
      sym_decimal,
    STATE(154), 1,
      sym_list,
  [5127] = 4,
    ACTIONS(967), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(970), 1,
      aux_sym_block_comment_token1,
    ACTIONS(973), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5141] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(945), 1,
      aux_sym_block_comment_token1,
    ACTIONS(975), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5155] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_list,
  [5168] = 3,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(979), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5179] = 3,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(983), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5190] = 3,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(987), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5201] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_list,
  [5214] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_list,
  [5227] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_list,
  [5240] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_list,
  [5253] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_list,
  [5266] = 3,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(983), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5277] = 3,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(983), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5288] = 3,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(995), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5299] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_list,
  [5312] = 3,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(999), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5323] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_list,
  [5336] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_list,
  [5349] = 2,
    ACTIONS(899), 1,
      aux_sym_block_comment_token1,
    ACTIONS(897), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5357] = 2,
    ACTIONS(891), 1,
      aux_sym_block_comment_token1,
    ACTIONS(889), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5365] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym__real_string,
  [5372] = 2,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym__real_string,
  [5379] = 2,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym__real_string,
  [5386] = 1,
    ACTIONS(1002), 1,
      sym__here_string_body,
  [5390] = 1,
    ACTIONS(681), 1,
      sym_lang_name,
  [5394] = 1,
    ACTIONS(1004), 1,
      sym__here_string_body,
  [5398] = 1,
    ACTIONS(1006), 1,
      sym__here_string_body,
  [5402] = 1,
    ACTIONS(429), 1,
      sym_lang_name,
  [5406] = 1,
    ACTIONS(1008), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(134)] = 1812,
  [SMALL_STATE(135)] = 1853,
  [SMALL_STATE(136)] = 1894,
  [SMALL_STATE(137)] = 1935,
  [SMALL_STATE(138)] = 1976,
  [SMALL_STATE(139)] = 2017,
  [SMALL_STATE(140)] = 2058,
  [SMALL_STATE(141)] = 2099,
  [SMALL_STATE(142)] = 2140,
  [SMALL_STATE(143)] = 2181,
  [SMALL_STATE(144)] = 2222,
  [SMALL_STATE(145)] = 2263,
  [SMALL_STATE(146)] = 2304,
  [SMALL_STATE(147)] = 2345,
  [SMALL_STATE(148)] = 2386,
  [SMALL_STATE(149)] = 2427,
  [SMALL_STATE(150)] = 2468,
  [SMALL_STATE(151)] = 2509,
  [SMALL_STATE(152)] = 2550,
  [SMALL_STATE(153)] = 2591,
  [SMALL_STATE(154)] = 2632,
  [SMALL_STATE(155)] = 2673,
  [SMALL_STATE(156)] = 2714,
  [SMALL_STATE(157)] = 2755,
  [SMALL_STATE(158)] = 2796,
  [SMALL_STATE(159)] = 2837,
  [SMALL_STATE(160)] = 2878,
  [SMALL_STATE(161)] = 2919,
  [SMALL_STATE(162)] = 2960,
  [SMALL_STATE(163)] = 3001,
  [SMALL_STATE(164)] = 3042,
  [SMALL_STATE(165)] = 3083,
  [SMALL_STATE(166)] = 3124,
  [SMALL_STATE(167)] = 3165,
  [SMALL_STATE(168)] = 3206,
  [SMALL_STATE(169)] = 3247,
  [SMALL_STATE(170)] = 3288,
  [SMALL_STATE(171)] = 3329,
  [SMALL_STATE(172)] = 3370,
  [SMALL_STATE(173)] = 3411,
  [SMALL_STATE(174)] = 3452,
  [SMALL_STATE(175)] = 3489,
  [SMALL_STATE(176)] = 3526,
  [SMALL_STATE(177)] = 3563,
  [SMALL_STATE(178)] = 3600,
  [SMALL_STATE(179)] = 3637,
  [SMALL_STATE(180)] = 3674,
  [SMALL_STATE(181)] = 3711,
  [SMALL_STATE(182)] = 3748,
  [SMALL_STATE(183)] = 3785,
  [SMALL_STATE(184)] = 3822,
  [SMALL_STATE(185)] = 3859,
  [SMALL_STATE(186)] = 3896,
  [SMALL_STATE(187)] = 3933,
  [SMALL_STATE(188)] = 3970,
  [SMALL_STATE(189)] = 4007,
  [SMALL_STATE(190)] = 4044,
  [SMALL_STATE(191)] = 4081,
  [SMALL_STATE(192)] = 4118,
  [SMALL_STATE(193)] = 4155,
  [SMALL_STATE(194)] = 4192,
  [SMALL_STATE(195)] = 4229,
  [SMALL_STATE(196)] = 4266,
  [SMALL_STATE(197)] = 4303,
  [SMALL_STATE(198)] = 4340,
  [SMALL_STATE(199)] = 4377,
  [SMALL_STATE(200)] = 4414,
  [SMALL_STATE(201)] = 4451,
  [SMALL_STATE(202)] = 4488,
  [SMALL_STATE(203)] = 4525,
  [SMALL_STATE(204)] = 4562,
  [SMALL_STATE(205)] = 4599,
  [SMALL_STATE(206)] = 4636,
  [SMALL_STATE(207)] = 4673,
  [SMALL_STATE(208)] = 4710,
  [SMALL_STATE(209)] = 4747,
  [SMALL_STATE(210)] = 4784,
  [SMALL_STATE(211)] = 4821,
  [SMALL_STATE(212)] = 4858,
  [SMALL_STATE(213)] = 4880,
  [SMALL_STATE(214)] = 4902,
  [SMALL_STATE(215)] = 4924,
  [SMALL_STATE(216)] = 4943,
  [SMALL_STATE(217)] = 4962,
  [SMALL_STATE(218)] = 4981,
  [SMALL_STATE(219)] = 4995,
  [SMALL_STATE(220)] = 5009,
  [SMALL_STATE(221)] = 5023,
  [SMALL_STATE(222)] = 5037,
  [SMALL_STATE(223)] = 5051,
  [SMALL_STATE(224)] = 5065,
  [SMALL_STATE(225)] = 5079,
  [SMALL_STATE(226)] = 5095,
  [SMALL_STATE(227)] = 5111,
  [SMALL_STATE(228)] = 5127,
  [SMALL_STATE(229)] = 5141,
  [SMALL_STATE(230)] = 5155,
  [SMALL_STATE(231)] = 5168,
  [SMALL_STATE(232)] = 5179,
  [SMALL_STATE(233)] = 5190,
  [SMALL_STATE(234)] = 5201,
  [SMALL_STATE(235)] = 5214,
  [SMALL_STATE(236)] = 5227,
  [SMALL_STATE(237)] = 5240,
  [SMALL_STATE(238)] = 5253,
  [SMALL_STATE(239)] = 5266,
  [SMALL_STATE(240)] = 5277,
  [SMALL_STATE(241)] = 5288,
  [SMALL_STATE(242)] = 5299,
  [SMALL_STATE(243)] = 5312,
  [SMALL_STATE(244)] = 5323,
  [SMALL_STATE(245)] = 5336,
  [SMALL_STATE(246)] = 5349,
  [SMALL_STATE(247)] = 5357,
  [SMALL_STATE(248)] = 5365,
  [SMALL_STATE(249)] = 5372,
  [SMALL_STATE(250)] = 5379,
  [SMALL_STATE(251)] = 5386,
  [SMALL_STATE(252)] = 5390,
  [SMALL_STATE(253)] = 5394,
  [SMALL_STATE(254)] = 5398,
  [SMALL_STATE(255)] = 5402,
  [SMALL_STATE(256)] = 5406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(122),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(221),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(67),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(213),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(251),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(250),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(233),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(92),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(225),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(242),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(245),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(245),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(91),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(89),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(88),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(87),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(86),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(85),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(84),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(83),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(82),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(252),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(252),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(223),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(214),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(253),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(248),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(231),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(227),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(237),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(235),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(235),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(80),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(255),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(133),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(186),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(219),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(30),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(218),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(228),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(243),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1008] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
