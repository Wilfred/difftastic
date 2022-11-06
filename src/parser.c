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
#define STATE_COUNT 260
#define LARGE_STATE_COUNT 93
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
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
  sym__all_comment = 51,
  sym_comment = 52,
  sym_block_comment = 53,
  sym_sexp_comment = 54,
  sym__datum = 55,
  sym_string = 56,
  sym_byte_string = 57,
  sym_here_string = 58,
  sym_regex = 59,
  sym__real_string = 60,
  sym_symbol = 61,
  sym_box = 62,
  sym_list = 63,
  sym_vector = 64,
  sym_structure = 65,
  sym_hash = 66,
  sym_graph = 67,
  sym__abbrev = 68,
  sym_quote = 69,
  sym_quasiquote = 70,
  sym_syntax = 71,
  sym_quasisyntax = 72,
  sym_unquote = 73,
  sym_unquote_splicing = 74,
  sym_unsyntax = 75,
  sym_unsyntax_splicing = 76,
  sym_extension = 77,
  aux_sym_program_repeat1 = 78,
  aux_sym_block_comment_repeat1 = 79,
  aux_sym_sexp_comment_repeat1 = 80,
  aux_sym__real_string_repeat1 = 81,
  aux_sym_list_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
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
  [sym__all_comment] = "_all_comment",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_sexp_comment] = "sexp_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_symbol] = "symbol",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym__abbrev] = "_abbrev",
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
  [aux_sym__token_token1] = aux_sym__token_token1,
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
  [sym__all_comment] = sym__all_comment,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_sexp_comment] = sym_sexp_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_symbol] = sym_symbol,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym__abbrev] = sym__abbrev,
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
  [aux_sym__token_token1] = {
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
  [sym__all_comment] = {
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
  [sym__abbrev] = {
    .visible = false,
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 5,
  [12] = 6,
  [13] = 9,
  [14] = 4,
  [15] = 3,
  [16] = 9,
  [17] = 4,
  [18] = 3,
  [19] = 8,
  [20] = 6,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 31,
  [38] = 32,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 30,
  [45] = 23,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 42,
  [50] = 33,
  [51] = 48,
  [52] = 40,
  [53] = 47,
  [54] = 28,
  [55] = 43,
  [56] = 27,
  [57] = 41,
  [58] = 28,
  [59] = 40,
  [60] = 25,
  [61] = 36,
  [62] = 62,
  [63] = 32,
  [64] = 64,
  [65] = 31,
  [66] = 41,
  [67] = 67,
  [68] = 68,
  [69] = 46,
  [70] = 64,
  [71] = 68,
  [72] = 43,
  [73] = 47,
  [74] = 35,
  [75] = 48,
  [76] = 34,
  [77] = 42,
  [78] = 62,
  [79] = 33,
  [80] = 30,
  [81] = 67,
  [82] = 29,
  [83] = 34,
  [84] = 35,
  [85] = 68,
  [86] = 64,
  [87] = 46,
  [88] = 23,
  [89] = 62,
  [90] = 25,
  [91] = 24,
  [92] = 27,
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
  [135] = 133,
  [136] = 111,
  [137] = 114,
  [138] = 105,
  [139] = 126,
  [140] = 130,
  [141] = 109,
  [142] = 122,
  [143] = 120,
  [144] = 93,
  [145] = 115,
  [146] = 108,
  [147] = 107,
  [148] = 101,
  [149] = 103,
  [150] = 95,
  [151] = 96,
  [152] = 97,
  [153] = 98,
  [154] = 99,
  [155] = 110,
  [156] = 100,
  [157] = 102,
  [158] = 124,
  [159] = 106,
  [160] = 132,
  [161] = 112,
  [162] = 104,
  [163] = 128,
  [164] = 131,
  [165] = 129,
  [166] = 127,
  [167] = 125,
  [168] = 113,
  [169] = 94,
  [170] = 123,
  [171] = 121,
  [172] = 116,
  [173] = 117,
  [174] = 118,
  [175] = 119,
  [176] = 103,
  [177] = 101,
  [178] = 112,
  [179] = 116,
  [180] = 117,
  [181] = 118,
  [182] = 119,
  [183] = 106,
  [184] = 121,
  [185] = 110,
  [186] = 123,
  [187] = 114,
  [188] = 125,
  [189] = 109,
  [190] = 127,
  [191] = 126,
  [192] = 129,
  [193] = 130,
  [194] = 131,
  [195] = 105,
  [196] = 133,
  [197] = 104,
  [198] = 113,
  [199] = 132,
  [200] = 111,
  [201] = 122,
  [202] = 102,
  [203] = 100,
  [204] = 99,
  [205] = 98,
  [206] = 97,
  [207] = 96,
  [208] = 95,
  [209] = 124,
  [210] = 94,
  [211] = 107,
  [212] = 108,
  [213] = 115,
  [214] = 120,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 218,
  [219] = 218,
  [220] = 218,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 221,
  [225] = 221,
  [226] = 223,
  [227] = 227,
  [228] = 228,
  [229] = 223,
  [230] = 228,
  [231] = 228,
  [232] = 223,
  [233] = 233,
  [234] = 234,
  [235] = 234,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 233,
  [240] = 237,
  [241] = 241,
  [242] = 237,
  [243] = 236,
  [244] = 234,
  [245] = 236,
  [246] = 233,
  [247] = 238,
  [248] = 238,
  [249] = 104,
  [250] = 126,
  [251] = 251,
  [252] = 251,
  [253] = 251,
  [254] = 254,
  [255] = 255,
  [256] = 254,
  [257] = 257,
  [258] = 254,
  [259] = 255,
};

static inline bool aux_sym__token_token1_character_set_1(int32_t c) {
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
      ? (c < '\r'
        ? c == '\n'
        : (c <= '\r' || c == '"'))
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 'v'
      ? (c < 'r'
        ? c == 'n'
        : (c <= 'r' || c == 't'))
      : (c <= 'v' || (c < 8232
        ? c == 133
        : c <= 8233)))));
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
      if (eof) ADVANCE(207);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '=') ADVANCE(407);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(400);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(400);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '=') ADVANCE(407);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '{') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == '<') ADVANCE(227);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == 'v') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(106);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(405);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 105:
      if (lookahead == '|') ADVANCE(389);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '|') ADVANCE(393);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(219);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(332);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 190:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead == 'U') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 202:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(213);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '|') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(389);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__token_token1);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(219);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(402);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(419);
      if (lookahead == '%') ADVANCE(389);
      if (lookahead == '&') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(107);
      if (lookahead == '%') ADVANCE(389);
      if (lookahead == '&') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(212);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(363);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(364);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(365);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(178);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(366);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '|') ADVANCE(105);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(106);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(219);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 206},
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
  [21] = {.lex_state = 206},
  [22] = {.lex_state = 206},
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
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 206},
  [136] = {.lex_state = 206},
  [137] = {.lex_state = 206},
  [138] = {.lex_state = 206},
  [139] = {.lex_state = 206},
  [140] = {.lex_state = 206},
  [141] = {.lex_state = 206},
  [142] = {.lex_state = 206},
  [143] = {.lex_state = 206},
  [144] = {.lex_state = 206},
  [145] = {.lex_state = 206},
  [146] = {.lex_state = 206},
  [147] = {.lex_state = 206},
  [148] = {.lex_state = 206},
  [149] = {.lex_state = 206},
  [150] = {.lex_state = 206},
  [151] = {.lex_state = 206},
  [152] = {.lex_state = 206},
  [153] = {.lex_state = 206},
  [154] = {.lex_state = 206},
  [155] = {.lex_state = 206},
  [156] = {.lex_state = 206},
  [157] = {.lex_state = 206},
  [158] = {.lex_state = 206},
  [159] = {.lex_state = 206},
  [160] = {.lex_state = 206},
  [161] = {.lex_state = 206},
  [162] = {.lex_state = 206},
  [163] = {.lex_state = 206},
  [164] = {.lex_state = 206},
  [165] = {.lex_state = 206},
  [166] = {.lex_state = 206},
  [167] = {.lex_state = 206},
  [168] = {.lex_state = 206},
  [169] = {.lex_state = 206},
  [170] = {.lex_state = 206},
  [171] = {.lex_state = 206},
  [172] = {.lex_state = 206},
  [173] = {.lex_state = 206},
  [174] = {.lex_state = 206},
  [175] = {.lex_state = 206},
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
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 203},
  [222] = {.lex_state = 203},
  [223] = {.lex_state = 203},
  [224] = {.lex_state = 203},
  [225] = {.lex_state = 203},
  [226] = {.lex_state = 203},
  [227] = {.lex_state = 203},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 203},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 203},
  [233] = {.lex_state = 206},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 206},
  [238] = {.lex_state = 206},
  [239] = {.lex_state = 206},
  [240] = {.lex_state = 206},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 206},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 206},
  [247] = {.lex_state = 206},
  [248] = {.lex_state = 206},
  [249] = {.lex_state = 203},
  [250] = {.lex_state = 203},
  [251] = {.lex_state = 206},
  [252] = {.lex_state = 206},
  [253] = {.lex_state = 206},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 202},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 202},
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
    [aux_sym__token_token1] = ACTIONS(1),
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
    [sym_program] = STATE(257),
    [sym__token] = STATE(22),
    [sym__all_comment] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym__abbrev] = STATE(22),
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
    [aux_sym__token_token1] = ACTIONS(5),
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
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
    [anon_sym_POUNDreader] = ACTIONS(57),
    [anon_sym_POUNDlang] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(61),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(63),
    [sym_dot] = ACTIONS(66),
    [aux_sym_comment_token1] = ACTIONS(69),
    [anon_sym_POUND_PIPE] = ACTIONS(72),
    [anon_sym_POUND_SEMI] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(69),
    [sym_boolean] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_POUND_LT_LT] = ACTIONS(81),
    [aux_sym_regex_token1] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_number] = ACTIONS(66),
    [sym_character] = ACTIONS(63),
    [aux_sym_symbol_token1] = ACTIONS(90),
    [sym_keyword] = ACTIONS(63),
    [anon_sym_POUND_AMP] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_POUNDfl] = ACTIONS(107),
    [anon_sym_POUNDfx] = ACTIONS(107),
    [anon_sym_POUNDs] = ACTIONS(110),
    [anon_sym_POUNDhash] = ACTIONS(113),
    [anon_sym_POUNDhasheq] = ACTIONS(113),
    [anon_sym_POUNDhasheqv] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_POUND_SQUOTE] = ACTIONS(125),
    [anon_sym_POUND_BQUOTE] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COMMA_AT] = ACTIONS(134),
    [anon_sym_POUND_COMMA] = ACTIONS(137),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(140),
    [anon_sym_POUNDreader] = ACTIONS(143),
    [anon_sym_POUNDlang] = ACTIONS(146),
    [anon_sym_POUND_BANG] = ACTIONS(149),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [5] = {
    [sym__token] = STATE(14),
    [sym__all_comment] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_sexp_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym__abbrev] = STATE(14),
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
    [aux_sym__token_token1] = ACTIONS(212),
    [sym_dot] = ACTIONS(214),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(214),
    [sym_character] = ACTIONS(212),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(212),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [6] = {
    [sym__token] = STATE(9),
    [sym__all_comment] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_sexp_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(9),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym__abbrev] = STATE(9),
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
    [aux_sym__token_token1] = ACTIONS(218),
    [sym_dot] = ACTIONS(220),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(220),
    [sym_character] = ACTIONS(218),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(218),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym__all_comment] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_sexp_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym__abbrev] = STATE(4),
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
    [aux_sym__token_token1] = ACTIONS(224),
    [sym_dot] = ACTIONS(226),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(226),
    [sym_character] = ACTIONS(224),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(224),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [8] = {
    [sym__token] = STATE(3),
    [sym__all_comment] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_sexp_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym__abbrev] = STATE(3),
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
    [aux_sym__token_token1] = ACTIONS(228),
    [sym_dot] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(230),
    [sym_character] = ACTIONS(228),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(228),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [10] = {
    [sym__token] = STATE(18),
    [sym__all_comment] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym_sexp_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_byte_string] = STATE(18),
    [sym_here_string] = STATE(18),
    [sym_regex] = STATE(18),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(18),
    [sym_box] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_structure] = STATE(18),
    [sym_hash] = STATE(18),
    [sym_graph] = STATE(18),
    [sym__abbrev] = STATE(18),
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
    [aux_sym__token_token1] = ACTIONS(232),
    [sym_dot] = ACTIONS(234),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(234),
    [sym_character] = ACTIONS(232),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(232),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [11] = {
    [sym__token] = STATE(17),
    [sym__all_comment] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_sexp_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym__abbrev] = STATE(17),
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
    [aux_sym__token_token1] = ACTIONS(238),
    [sym_dot] = ACTIONS(240),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(240),
    [sym_character] = ACTIONS(238),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(238),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [12] = {
    [sym__token] = STATE(16),
    [sym__all_comment] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_sexp_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(16),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym__abbrev] = STATE(16),
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
    [aux_sym__token_token1] = ACTIONS(242),
    [sym_dot] = ACTIONS(244),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(244),
    [sym_character] = ACTIONS(242),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(242),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [13] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym__all_comment] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
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
    [aux_sym__token_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [19] = {
    [sym__token] = STATE(15),
    [sym__all_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_sexp_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym__abbrev] = STATE(15),
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
    [aux_sym__token_token1] = ACTIONS(250),
    [sym_dot] = ACTIONS(252),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(252),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(252),
    [sym_character] = ACTIONS(250),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(250),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [20] = {
    [sym__token] = STATE(13),
    [sym__all_comment] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_sexp_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
    [sym_byte_string] = STATE(13),
    [sym_here_string] = STATE(13),
    [sym_regex] = STATE(13),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(13),
    [sym_box] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_structure] = STATE(13),
    [sym_hash] = STATE(13),
    [sym_graph] = STATE(13),
    [sym__abbrev] = STATE(13),
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
    [aux_sym__token_token1] = ACTIONS(254),
    [sym_dot] = ACTIONS(256),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(256),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(256),
    [sym_character] = ACTIONS(254),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(254),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [21] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym__abbrev] = STATE(21),
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
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym__token_token1] = ACTIONS(260),
    [aux_sym_comment_token1] = ACTIONS(263),
    [anon_sym_POUND_PIPE] = ACTIONS(266),
    [anon_sym_POUND_SEMI] = ACTIONS(269),
    [sym__line_comment] = ACTIONS(263),
    [sym_boolean] = ACTIONS(272),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_POUND_LT_LT] = ACTIONS(278),
    [aux_sym_regex_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym_number] = ACTIONS(272),
    [sym_character] = ACTIONS(260),
    [aux_sym_symbol_token1] = ACTIONS(287),
    [sym_keyword] = ACTIONS(260),
    [anon_sym_POUND_AMP] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_POUNDfl] = ACTIONS(302),
    [anon_sym_POUNDfx] = ACTIONS(302),
    [anon_sym_POUNDs] = ACTIONS(305),
    [anon_sym_POUNDhash] = ACTIONS(308),
    [anon_sym_POUNDhasheq] = ACTIONS(308),
    [anon_sym_POUNDhasheqv] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_POUND_SQUOTE] = ACTIONS(320),
    [anon_sym_POUND_BQUOTE] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_COMMA_AT] = ACTIONS(329),
    [anon_sym_POUND_COMMA] = ACTIONS(332),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(335),
    [anon_sym_POUNDreader] = ACTIONS(338),
    [anon_sym_POUNDlang] = ACTIONS(341),
    [anon_sym_POUND_BANG] = ACTIONS(344),
  },
  [22] = {
    [sym__token] = STATE(21),
    [sym__all_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym__abbrev] = STATE(21),
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
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym__token_token1] = ACTIONS(349),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(351),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(351),
    [sym_character] = ACTIONS(349),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(349),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
    [anon_sym_POUNDreader] = ACTIONS(57),
    [anon_sym_POUNDlang] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(61),
  },
  [23] = {
    [sym__skip] = STATE(43),
    [sym__all_comment] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym_sexp_comment] = STATE(43),
    [sym__datum] = STATE(186),
    [sym_string] = STATE(186),
    [sym_byte_string] = STATE(186),
    [sym_here_string] = STATE(186),
    [sym_regex] = STATE(186),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(186),
    [sym_box] = STATE(186),
    [sym_list] = STATE(186),
    [sym_vector] = STATE(186),
    [sym_structure] = STATE(186),
    [sym_hash] = STATE(186),
    [sym_graph] = STATE(186),
    [sym__abbrev] = STATE(186),
    [sym_quote] = STATE(186),
    [sym_quasiquote] = STATE(186),
    [sym_syntax] = STATE(186),
    [sym_quasisyntax] = STATE(186),
    [sym_unquote] = STATE(186),
    [sym_unquote_splicing] = STATE(186),
    [sym_unsyntax] = STATE(186),
    [sym_unsyntax_splicing] = STATE(186),
    [aux_sym_sexp_comment_repeat1] = STATE(43),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(361),
    [sym_character] = ACTIONS(371),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(371),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [24] = {
    [sym__skip] = STATE(39),
    [sym__all_comment] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym_sexp_comment] = STATE(39),
    [sym__datum] = STATE(192),
    [sym_string] = STATE(192),
    [sym_byte_string] = STATE(192),
    [sym_here_string] = STATE(192),
    [sym_regex] = STATE(192),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(192),
    [sym_box] = STATE(192),
    [sym_list] = STATE(192),
    [sym_vector] = STATE(192),
    [sym_structure] = STATE(192),
    [sym_hash] = STATE(192),
    [sym_graph] = STATE(192),
    [sym__abbrev] = STATE(192),
    [sym_quote] = STATE(192),
    [sym_quasiquote] = STATE(192),
    [sym_syntax] = STATE(192),
    [sym_quasisyntax] = STATE(192),
    [sym_unquote] = STATE(192),
    [sym_unquote_splicing] = STATE(192),
    [sym_unsyntax] = STATE(192),
    [sym_unsyntax_splicing] = STATE(192),
    [aux_sym_sexp_comment_repeat1] = STATE(39),
    [aux_sym__token_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(411),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(411),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [25] = {
    [sym__skip] = STATE(59),
    [sym__all_comment] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_block_comment] = STATE(59),
    [sym_sexp_comment] = STATE(59),
    [sym__datum] = STATE(166),
    [sym_string] = STATE(166),
    [sym_byte_string] = STATE(166),
    [sym_here_string] = STATE(166),
    [sym_regex] = STATE(166),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(166),
    [sym_box] = STATE(166),
    [sym_list] = STATE(166),
    [sym_vector] = STATE(166),
    [sym_structure] = STATE(166),
    [sym_hash] = STATE(166),
    [sym_graph] = STATE(166),
    [sym__abbrev] = STATE(166),
    [sym_quote] = STATE(166),
    [sym_quasiquote] = STATE(166),
    [sym_syntax] = STATE(166),
    [sym_quasisyntax] = STATE(166),
    [sym_unquote] = STATE(166),
    [sym_unquote_splicing] = STATE(166),
    [sym_unsyntax] = STATE(166),
    [sym_unsyntax_splicing] = STATE(166),
    [aux_sym_sexp_comment_repeat1] = STATE(59),
    [aux_sym__token_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(417),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [26] = {
    [sym__skip] = STATE(61),
    [sym__all_comment] = STATE(61),
    [sym_comment] = STATE(61),
    [sym_block_comment] = STATE(61),
    [sym_sexp_comment] = STATE(61),
    [sym__datum] = STATE(165),
    [sym_string] = STATE(165),
    [sym_byte_string] = STATE(165),
    [sym_here_string] = STATE(165),
    [sym_regex] = STATE(165),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(165),
    [sym_box] = STATE(165),
    [sym_list] = STATE(165),
    [sym_vector] = STATE(165),
    [sym_structure] = STATE(165),
    [sym_hash] = STATE(165),
    [sym_graph] = STATE(165),
    [sym__abbrev] = STATE(165),
    [sym_quote] = STATE(165),
    [sym_quasiquote] = STATE(165),
    [sym_syntax] = STATE(165),
    [sym_quasisyntax] = STATE(165),
    [sym_unquote] = STATE(165),
    [sym_unquote_splicing] = STATE(165),
    [sym_unsyntax] = STATE(165),
    [sym_unsyntax_splicing] = STATE(165),
    [aux_sym_sexp_comment_repeat1] = STATE(61),
    [aux_sym__token_token1] = ACTIONS(419),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(421),
    [sym_character] = ACTIONS(423),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(423),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [27] = {
    [sym__skip] = STATE(63),
    [sym__all_comment] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_block_comment] = STATE(63),
    [sym_sexp_comment] = STATE(63),
    [sym__datum] = STATE(164),
    [sym_string] = STATE(164),
    [sym_byte_string] = STATE(164),
    [sym_here_string] = STATE(164),
    [sym_regex] = STATE(164),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(164),
    [sym_box] = STATE(164),
    [sym_list] = STATE(164),
    [sym_vector] = STATE(164),
    [sym_structure] = STATE(164),
    [sym_hash] = STATE(164),
    [sym_graph] = STATE(164),
    [sym__abbrev] = STATE(164),
    [sym_quote] = STATE(164),
    [sym_quasiquote] = STATE(164),
    [sym_syntax] = STATE(164),
    [sym_quasisyntax] = STATE(164),
    [sym_unquote] = STATE(164),
    [sym_unquote_splicing] = STATE(164),
    [sym_unsyntax] = STATE(164),
    [sym_unsyntax_splicing] = STATE(164),
    [aux_sym_sexp_comment_repeat1] = STATE(63),
    [aux_sym__token_token1] = ACTIONS(425),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [28] = {
    [sym__skip] = STATE(65),
    [sym__all_comment] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_block_comment] = STATE(65),
    [sym_sexp_comment] = STATE(65),
    [sym__datum] = STATE(135),
    [sym_string] = STATE(135),
    [sym_byte_string] = STATE(135),
    [sym_here_string] = STATE(135),
    [sym_regex] = STATE(135),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(135),
    [sym_box] = STATE(135),
    [sym_list] = STATE(135),
    [sym_vector] = STATE(135),
    [sym_structure] = STATE(135),
    [sym_hash] = STATE(135),
    [sym_graph] = STATE(135),
    [sym__abbrev] = STATE(135),
    [sym_quote] = STATE(135),
    [sym_quasiquote] = STATE(135),
    [sym_syntax] = STATE(135),
    [sym_quasisyntax] = STATE(135),
    [sym_unquote] = STATE(135),
    [sym_unquote_splicing] = STATE(135),
    [sym_unsyntax] = STATE(135),
    [sym_unsyntax_splicing] = STATE(135),
    [aux_sym_sexp_comment_repeat1] = STATE(65),
    [aux_sym__token_token1] = ACTIONS(431),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(433),
    [sym_character] = ACTIONS(435),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(435),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [29] = {
    [sym__skip] = STATE(67),
    [sym__all_comment] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_block_comment] = STATE(67),
    [sym_sexp_comment] = STATE(67),
    [sym__datum] = STATE(163),
    [sym_string] = STATE(163),
    [sym_byte_string] = STATE(163),
    [sym_here_string] = STATE(163),
    [sym_regex] = STATE(163),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(163),
    [sym_box] = STATE(163),
    [sym_list] = STATE(163),
    [sym_vector] = STATE(163),
    [sym_structure] = STATE(163),
    [sym_hash] = STATE(163),
    [sym_graph] = STATE(163),
    [sym__abbrev] = STATE(163),
    [sym_quote] = STATE(163),
    [sym_quasiquote] = STATE(163),
    [sym_syntax] = STATE(163),
    [sym_quasisyntax] = STATE(163),
    [sym_unquote] = STATE(163),
    [sym_unquote_splicing] = STATE(163),
    [sym_unsyntax] = STATE(163),
    [sym_unsyntax_splicing] = STATE(163),
    [aux_sym_sexp_comment_repeat1] = STATE(67),
    [aux_sym__token_token1] = ACTIONS(437),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(439),
    [sym_character] = ACTIONS(441),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(441),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [30] = {
    [sym__skip] = STATE(79),
    [sym__all_comment] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(193),
    [sym_string] = STATE(193),
    [sym_byte_string] = STATE(193),
    [sym_here_string] = STATE(193),
    [sym_regex] = STATE(193),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(193),
    [sym_box] = STATE(193),
    [sym_list] = STATE(193),
    [sym_vector] = STATE(193),
    [sym_structure] = STATE(193),
    [sym_hash] = STATE(193),
    [sym_graph] = STATE(193),
    [sym__abbrev] = STATE(193),
    [sym_quote] = STATE(193),
    [sym_quasiquote] = STATE(193),
    [sym_syntax] = STATE(193),
    [sym_quasisyntax] = STATE(193),
    [sym_unquote] = STATE(193),
    [sym_unquote_splicing] = STATE(193),
    [sym_unsyntax] = STATE(193),
    [sym_unsyntax_splicing] = STATE(193),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__token_token1] = ACTIONS(443),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(445),
    [sym_character] = ACTIONS(447),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(447),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [31] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(115),
    [sym_box] = STATE(115),
    [sym_list] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_structure] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_graph] = STATE(115),
    [sym__abbrev] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_syntax] = STATE(115),
    [sym_quasisyntax] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splicing] = STATE(115),
    [sym_unsyntax] = STATE(115),
    [sym_unsyntax_splicing] = STATE(115),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(451),
    [sym_character] = ACTIONS(453),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(453),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [32] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym__abbrev] = STATE(108),
    [sym_quote] = STATE(108),
    [sym_quasiquote] = STATE(108),
    [sym_syntax] = STATE(108),
    [sym_quasisyntax] = STATE(108),
    [sym_unquote] = STATE(108),
    [sym_unquote_splicing] = STATE(108),
    [sym_unsyntax] = STATE(108),
    [sym_unsyntax_splicing] = STATE(108),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [33] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(160),
    [sym_string] = STATE(160),
    [sym_byte_string] = STATE(160),
    [sym_here_string] = STATE(160),
    [sym_regex] = STATE(160),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(160),
    [sym_box] = STATE(160),
    [sym_list] = STATE(160),
    [sym_vector] = STATE(160),
    [sym_structure] = STATE(160),
    [sym_hash] = STATE(160),
    [sym_graph] = STATE(160),
    [sym__abbrev] = STATE(160),
    [sym_quote] = STATE(160),
    [sym_quasiquote] = STATE(160),
    [sym_syntax] = STATE(160),
    [sym_quasisyntax] = STATE(160),
    [sym_unquote] = STATE(160),
    [sym_unquote_splicing] = STATE(160),
    [sym_unsyntax] = STATE(160),
    [sym_unsyntax_splicing] = STATE(160),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(459),
    [sym_character] = ACTIONS(461),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(461),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [34] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(201),
    [sym_string] = STATE(201),
    [sym_byte_string] = STATE(201),
    [sym_here_string] = STATE(201),
    [sym_regex] = STATE(201),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(201),
    [sym_box] = STATE(201),
    [sym_list] = STATE(201),
    [sym_vector] = STATE(201),
    [sym_structure] = STATE(201),
    [sym_hash] = STATE(201),
    [sym_graph] = STATE(201),
    [sym__abbrev] = STATE(201),
    [sym_quote] = STATE(201),
    [sym_quasiquote] = STATE(201),
    [sym_syntax] = STATE(201),
    [sym_quasisyntax] = STATE(201),
    [sym_unquote] = STATE(201),
    [sym_unquote_splicing] = STATE(201),
    [sym_unsyntax] = STATE(201),
    [sym_unsyntax_splicing] = STATE(201),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(463),
    [sym_character] = ACTIONS(465),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(465),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [35] = {
    [sym__skip] = STATE(34),
    [sym__all_comment] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(214),
    [sym_string] = STATE(214),
    [sym_byte_string] = STATE(214),
    [sym_here_string] = STATE(214),
    [sym_regex] = STATE(214),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(214),
    [sym_box] = STATE(214),
    [sym_list] = STATE(214),
    [sym_vector] = STATE(214),
    [sym_structure] = STATE(214),
    [sym_hash] = STATE(214),
    [sym_graph] = STATE(214),
    [sym__abbrev] = STATE(214),
    [sym_quote] = STATE(214),
    [sym_quasiquote] = STATE(214),
    [sym_syntax] = STATE(214),
    [sym_quasisyntax] = STATE(214),
    [sym_unquote] = STATE(214),
    [sym_unquote_splicing] = STATE(214),
    [sym_unsyntax] = STATE(214),
    [sym_unsyntax_splicing] = STATE(214),
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__token_token1] = ACTIONS(467),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(469),
    [sym_character] = ACTIONS(471),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(471),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [36] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(107),
    [sym_box] = STATE(107),
    [sym_list] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_structure] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_graph] = STATE(107),
    [sym__abbrev] = STATE(107),
    [sym_quote] = STATE(107),
    [sym_quasiquote] = STATE(107),
    [sym_syntax] = STATE(107),
    [sym_quasisyntax] = STATE(107),
    [sym_unquote] = STATE(107),
    [sym_unquote_splicing] = STATE(107),
    [sym_unsyntax] = STATE(107),
    [sym_unsyntax_splicing] = STATE(107),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [37] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(213),
    [sym_string] = STATE(213),
    [sym_byte_string] = STATE(213),
    [sym_here_string] = STATE(213),
    [sym_regex] = STATE(213),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(213),
    [sym_box] = STATE(213),
    [sym_list] = STATE(213),
    [sym_vector] = STATE(213),
    [sym_structure] = STATE(213),
    [sym_hash] = STATE(213),
    [sym_graph] = STATE(213),
    [sym__abbrev] = STATE(213),
    [sym_quote] = STATE(213),
    [sym_quasiquote] = STATE(213),
    [sym_syntax] = STATE(213),
    [sym_quasisyntax] = STATE(213),
    [sym_unquote] = STATE(213),
    [sym_unquote_splicing] = STATE(213),
    [sym_unsyntax] = STATE(213),
    [sym_unsyntax_splicing] = STATE(213),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(477),
    [sym_character] = ACTIONS(479),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(479),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [38] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(212),
    [sym_string] = STATE(212),
    [sym_byte_string] = STATE(212),
    [sym_here_string] = STATE(212),
    [sym_regex] = STATE(212),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(212),
    [sym_box] = STATE(212),
    [sym_list] = STATE(212),
    [sym_vector] = STATE(212),
    [sym_structure] = STATE(212),
    [sym_hash] = STATE(212),
    [sym_graph] = STATE(212),
    [sym__abbrev] = STATE(212),
    [sym_quote] = STATE(212),
    [sym_quasiquote] = STATE(212),
    [sym_syntax] = STATE(212),
    [sym_quasisyntax] = STATE(212),
    [sym_unquote] = STATE(212),
    [sym_unquote_splicing] = STATE(212),
    [sym_unsyntax] = STATE(212),
    [sym_unsyntax_splicing] = STATE(212),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(481),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(481),
    [sym_character] = ACTIONS(483),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(483),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [39] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(211),
    [sym_string] = STATE(211),
    [sym_byte_string] = STATE(211),
    [sym_here_string] = STATE(211),
    [sym_regex] = STATE(211),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(211),
    [sym_box] = STATE(211),
    [sym_list] = STATE(211),
    [sym_vector] = STATE(211),
    [sym_structure] = STATE(211),
    [sym_hash] = STATE(211),
    [sym_graph] = STATE(211),
    [sym__abbrev] = STATE(211),
    [sym_quote] = STATE(211),
    [sym_quasiquote] = STATE(211),
    [sym_syntax] = STATE(211),
    [sym_quasisyntax] = STATE(211),
    [sym_unquote] = STATE(211),
    [sym_unquote_splicing] = STATE(211),
    [sym_unsyntax] = STATE(211),
    [sym_unsyntax_splicing] = STATE(211),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(485),
    [sym_character] = ACTIONS(487),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(487),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [40] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(177),
    [sym_string] = STATE(177),
    [sym_byte_string] = STATE(177),
    [sym_here_string] = STATE(177),
    [sym_regex] = STATE(177),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(177),
    [sym_box] = STATE(177),
    [sym_list] = STATE(177),
    [sym_vector] = STATE(177),
    [sym_structure] = STATE(177),
    [sym_hash] = STATE(177),
    [sym_graph] = STATE(177),
    [sym__abbrev] = STATE(177),
    [sym_quote] = STATE(177),
    [sym_quasiquote] = STATE(177),
    [sym_syntax] = STATE(177),
    [sym_quasisyntax] = STATE(177),
    [sym_unquote] = STATE(177),
    [sym_unquote_splicing] = STATE(177),
    [sym_unsyntax] = STATE(177),
    [sym_unsyntax_splicing] = STATE(177),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(489),
    [sym_character] = ACTIONS(491),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(491),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [41] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(176),
    [sym_string] = STATE(176),
    [sym_byte_string] = STATE(176),
    [sym_here_string] = STATE(176),
    [sym_regex] = STATE(176),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(176),
    [sym_box] = STATE(176),
    [sym_list] = STATE(176),
    [sym_vector] = STATE(176),
    [sym_structure] = STATE(176),
    [sym_hash] = STATE(176),
    [sym_graph] = STATE(176),
    [sym__abbrev] = STATE(176),
    [sym_quote] = STATE(176),
    [sym_quasiquote] = STATE(176),
    [sym_syntax] = STATE(176),
    [sym_quasisyntax] = STATE(176),
    [sym_unquote] = STATE(176),
    [sym_unquote_splicing] = STATE(176),
    [sym_unsyntax] = STATE(176),
    [sym_unsyntax_splicing] = STATE(176),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(493),
    [sym_character] = ACTIONS(495),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(495),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [42] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(154),
    [sym_string] = STATE(154),
    [sym_byte_string] = STATE(154),
    [sym_here_string] = STATE(154),
    [sym_regex] = STATE(154),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(154),
    [sym_box] = STATE(154),
    [sym_list] = STATE(154),
    [sym_vector] = STATE(154),
    [sym_structure] = STATE(154),
    [sym_hash] = STATE(154),
    [sym_graph] = STATE(154),
    [sym__abbrev] = STATE(154),
    [sym_quote] = STATE(154),
    [sym_quasiquote] = STATE(154),
    [sym_syntax] = STATE(154),
    [sym_quasisyntax] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splicing] = STATE(154),
    [sym_unsyntax] = STATE(154),
    [sym_unsyntax_splicing] = STATE(154),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(497),
    [sym_character] = ACTIONS(499),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(499),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [43] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(208),
    [sym_string] = STATE(208),
    [sym_byte_string] = STATE(208),
    [sym_here_string] = STATE(208),
    [sym_regex] = STATE(208),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(208),
    [sym_box] = STATE(208),
    [sym_list] = STATE(208),
    [sym_vector] = STATE(208),
    [sym_structure] = STATE(208),
    [sym_hash] = STATE(208),
    [sym_graph] = STATE(208),
    [sym__abbrev] = STATE(208),
    [sym_quote] = STATE(208),
    [sym_quasiquote] = STATE(208),
    [sym_syntax] = STATE(208),
    [sym_quasisyntax] = STATE(208),
    [sym_unquote] = STATE(208),
    [sym_unquote_splicing] = STATE(208),
    [sym_unsyntax] = STATE(208),
    [sym_unsyntax_splicing] = STATE(208),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(501),
    [sym_character] = ACTIONS(503),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [44] = {
    [sym__skip] = STATE(33),
    [sym__all_comment] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_byte_string] = STATE(140),
    [sym_here_string] = STATE(140),
    [sym_regex] = STATE(140),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(140),
    [sym_box] = STATE(140),
    [sym_list] = STATE(140),
    [sym_vector] = STATE(140),
    [sym_structure] = STATE(140),
    [sym_hash] = STATE(140),
    [sym_graph] = STATE(140),
    [sym__abbrev] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_quasiquote] = STATE(140),
    [sym_syntax] = STATE(140),
    [sym_quasisyntax] = STATE(140),
    [sym_unquote] = STATE(140),
    [sym_unquote_splicing] = STATE(140),
    [sym_unsyntax] = STATE(140),
    [sym_unsyntax_splicing] = STATE(140),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__token_token1] = ACTIONS(505),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(507),
    [sym_character] = ACTIONS(509),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(509),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [45] = {
    [sym__skip] = STATE(55),
    [sym__all_comment] = STATE(55),
    [sym_comment] = STATE(55),
    [sym_block_comment] = STATE(55),
    [sym_sexp_comment] = STATE(55),
    [sym__datum] = STATE(170),
    [sym_string] = STATE(170),
    [sym_byte_string] = STATE(170),
    [sym_here_string] = STATE(170),
    [sym_regex] = STATE(170),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(170),
    [sym_box] = STATE(170),
    [sym_list] = STATE(170),
    [sym_vector] = STATE(170),
    [sym_structure] = STATE(170),
    [sym_hash] = STATE(170),
    [sym_graph] = STATE(170),
    [sym__abbrev] = STATE(170),
    [sym_quote] = STATE(170),
    [sym_quasiquote] = STATE(170),
    [sym_syntax] = STATE(170),
    [sym_quasisyntax] = STATE(170),
    [sym_unquote] = STATE(170),
    [sym_unquote_splicing] = STATE(170),
    [sym_unsyntax] = STATE(170),
    [sym_unsyntax_splicing] = STATE(170),
    [aux_sym_sexp_comment_repeat1] = STATE(55),
    [aux_sym__token_token1] = ACTIONS(511),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(513),
    [sym_character] = ACTIONS(515),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(515),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [46] = {
    [sym__skip] = STATE(53),
    [sym__all_comment] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym_sexp_comment] = STATE(53),
    [sym__datum] = STATE(171),
    [sym_string] = STATE(171),
    [sym_byte_string] = STATE(171),
    [sym_here_string] = STATE(171),
    [sym_regex] = STATE(171),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(171),
    [sym_box] = STATE(171),
    [sym_list] = STATE(171),
    [sym_vector] = STATE(171),
    [sym_structure] = STATE(171),
    [sym_hash] = STATE(171),
    [sym_graph] = STATE(171),
    [sym__abbrev] = STATE(171),
    [sym_quote] = STATE(171),
    [sym_quasiquote] = STATE(171),
    [sym_syntax] = STATE(171),
    [sym_quasisyntax] = STATE(171),
    [sym_unquote] = STATE(171),
    [sym_unquote_splicing] = STATE(171),
    [sym_unsyntax] = STATE(171),
    [sym_unsyntax_splicing] = STATE(171),
    [aux_sym_sexp_comment_repeat1] = STATE(53),
    [aux_sym__token_token1] = ACTIONS(517),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(519),
    [sym_character] = ACTIONS(521),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [47] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(207),
    [sym_string] = STATE(207),
    [sym_byte_string] = STATE(207),
    [sym_here_string] = STATE(207),
    [sym_regex] = STATE(207),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(207),
    [sym_box] = STATE(207),
    [sym_list] = STATE(207),
    [sym_vector] = STATE(207),
    [sym_structure] = STATE(207),
    [sym_hash] = STATE(207),
    [sym_graph] = STATE(207),
    [sym__abbrev] = STATE(207),
    [sym_quote] = STATE(207),
    [sym_quasiquote] = STATE(207),
    [sym_syntax] = STATE(207),
    [sym_quasisyntax] = STATE(207),
    [sym_unquote] = STATE(207),
    [sym_unquote_splicing] = STATE(207),
    [sym_unsyntax] = STATE(207),
    [sym_unsyntax_splicing] = STATE(207),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(523),
    [sym_character] = ACTIONS(525),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [48] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(206),
    [sym_string] = STATE(206),
    [sym_byte_string] = STATE(206),
    [sym_here_string] = STATE(206),
    [sym_regex] = STATE(206),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(206),
    [sym_box] = STATE(206),
    [sym_list] = STATE(206),
    [sym_vector] = STATE(206),
    [sym_structure] = STATE(206),
    [sym_hash] = STATE(206),
    [sym_graph] = STATE(206),
    [sym__abbrev] = STATE(206),
    [sym_quote] = STATE(206),
    [sym_quasiquote] = STATE(206),
    [sym_syntax] = STATE(206),
    [sym_quasisyntax] = STATE(206),
    [sym_unquote] = STATE(206),
    [sym_unquote_splicing] = STATE(206),
    [sym_unsyntax] = STATE(206),
    [sym_unsyntax_splicing] = STATE(206),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(527),
    [sym_character] = ACTIONS(529),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [49] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(204),
    [sym_string] = STATE(204),
    [sym_byte_string] = STATE(204),
    [sym_here_string] = STATE(204),
    [sym_regex] = STATE(204),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(204),
    [sym_box] = STATE(204),
    [sym_list] = STATE(204),
    [sym_vector] = STATE(204),
    [sym_structure] = STATE(204),
    [sym_hash] = STATE(204),
    [sym_graph] = STATE(204),
    [sym__abbrev] = STATE(204),
    [sym_quote] = STATE(204),
    [sym_quasiquote] = STATE(204),
    [sym_syntax] = STATE(204),
    [sym_quasisyntax] = STATE(204),
    [sym_unquote] = STATE(204),
    [sym_unquote_splicing] = STATE(204),
    [sym_unsyntax] = STATE(204),
    [sym_unsyntax_splicing] = STATE(204),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(531),
    [sym_character] = ACTIONS(533),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(533),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [50] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_byte_string] = STATE(132),
    [sym_here_string] = STATE(132),
    [sym_regex] = STATE(132),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(132),
    [sym_box] = STATE(132),
    [sym_list] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_structure] = STATE(132),
    [sym_hash] = STATE(132),
    [sym_graph] = STATE(132),
    [sym__abbrev] = STATE(132),
    [sym_quote] = STATE(132),
    [sym_quasiquote] = STATE(132),
    [sym_syntax] = STATE(132),
    [sym_quasisyntax] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_unquote_splicing] = STATE(132),
    [sym_unsyntax] = STATE(132),
    [sym_unsyntax_splicing] = STATE(132),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(535),
    [sym_character] = ACTIONS(537),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [51] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(152),
    [sym_string] = STATE(152),
    [sym_byte_string] = STATE(152),
    [sym_here_string] = STATE(152),
    [sym_regex] = STATE(152),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(152),
    [sym_box] = STATE(152),
    [sym_list] = STATE(152),
    [sym_vector] = STATE(152),
    [sym_structure] = STATE(152),
    [sym_hash] = STATE(152),
    [sym_graph] = STATE(152),
    [sym__abbrev] = STATE(152),
    [sym_quote] = STATE(152),
    [sym_quasiquote] = STATE(152),
    [sym_syntax] = STATE(152),
    [sym_quasisyntax] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_unquote_splicing] = STATE(152),
    [sym_unsyntax] = STATE(152),
    [sym_unsyntax_splicing] = STATE(152),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(539),
    [sym_character] = ACTIONS(541),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(541),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [52] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(101),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym__abbrev] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_syntax] = STATE(101),
    [sym_quasisyntax] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splicing] = STATE(101),
    [sym_unsyntax] = STATE(101),
    [sym_unsyntax_splicing] = STATE(101),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(543),
    [sym_character] = ACTIONS(545),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(545),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [53] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(151),
    [sym_string] = STATE(151),
    [sym_byte_string] = STATE(151),
    [sym_here_string] = STATE(151),
    [sym_regex] = STATE(151),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(151),
    [sym_box] = STATE(151),
    [sym_list] = STATE(151),
    [sym_vector] = STATE(151),
    [sym_structure] = STATE(151),
    [sym_hash] = STATE(151),
    [sym_graph] = STATE(151),
    [sym__abbrev] = STATE(151),
    [sym_quote] = STATE(151),
    [sym_quasiquote] = STATE(151),
    [sym_syntax] = STATE(151),
    [sym_quasisyntax] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splicing] = STATE(151),
    [sym_unsyntax] = STATE(151),
    [sym_unsyntax_splicing] = STATE(151),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(549),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [54] = {
    [sym__skip] = STATE(37),
    [sym__all_comment] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym_sexp_comment] = STATE(37),
    [sym__datum] = STATE(196),
    [sym_string] = STATE(196),
    [sym_byte_string] = STATE(196),
    [sym_here_string] = STATE(196),
    [sym_regex] = STATE(196),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(196),
    [sym_box] = STATE(196),
    [sym_list] = STATE(196),
    [sym_vector] = STATE(196),
    [sym_structure] = STATE(196),
    [sym_hash] = STATE(196),
    [sym_graph] = STATE(196),
    [sym__abbrev] = STATE(196),
    [sym_quote] = STATE(196),
    [sym_quasiquote] = STATE(196),
    [sym_syntax] = STATE(196),
    [sym_quasisyntax] = STATE(196),
    [sym_unquote] = STATE(196),
    [sym_unquote_splicing] = STATE(196),
    [sym_unsyntax] = STATE(196),
    [sym_unsyntax_splicing] = STATE(196),
    [aux_sym_sexp_comment_repeat1] = STATE(37),
    [aux_sym__token_token1] = ACTIONS(551),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(553),
    [sym_character] = ACTIONS(555),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [55] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(150),
    [sym_string] = STATE(150),
    [sym_byte_string] = STATE(150),
    [sym_here_string] = STATE(150),
    [sym_regex] = STATE(150),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(150),
    [sym_box] = STATE(150),
    [sym_list] = STATE(150),
    [sym_vector] = STATE(150),
    [sym_structure] = STATE(150),
    [sym_hash] = STATE(150),
    [sym_graph] = STATE(150),
    [sym__abbrev] = STATE(150),
    [sym_quote] = STATE(150),
    [sym_quasiquote] = STATE(150),
    [sym_syntax] = STATE(150),
    [sym_quasisyntax] = STATE(150),
    [sym_unquote] = STATE(150),
    [sym_unquote_splicing] = STATE(150),
    [sym_unsyntax] = STATE(150),
    [sym_unsyntax_splicing] = STATE(150),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(557),
    [sym_character] = ACTIONS(559),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(559),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [56] = {
    [sym__skip] = STATE(38),
    [sym__all_comment] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_sexp_comment] = STATE(38),
    [sym__datum] = STATE(194),
    [sym_string] = STATE(194),
    [sym_byte_string] = STATE(194),
    [sym_here_string] = STATE(194),
    [sym_regex] = STATE(194),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(194),
    [sym_box] = STATE(194),
    [sym_list] = STATE(194),
    [sym_vector] = STATE(194),
    [sym_structure] = STATE(194),
    [sym_hash] = STATE(194),
    [sym_graph] = STATE(194),
    [sym__abbrev] = STATE(194),
    [sym_quote] = STATE(194),
    [sym_quasiquote] = STATE(194),
    [sym_syntax] = STATE(194),
    [sym_quasisyntax] = STATE(194),
    [sym_unquote] = STATE(194),
    [sym_unquote_splicing] = STATE(194),
    [sym_unsyntax] = STATE(194),
    [sym_unsyntax_splicing] = STATE(194),
    [aux_sym_sexp_comment_repeat1] = STATE(38),
    [aux_sym__token_token1] = ACTIONS(561),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(563),
    [sym_character] = ACTIONS(565),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(565),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [57] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(149),
    [sym_string] = STATE(149),
    [sym_byte_string] = STATE(149),
    [sym_here_string] = STATE(149),
    [sym_regex] = STATE(149),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(149),
    [sym_box] = STATE(149),
    [sym_list] = STATE(149),
    [sym_vector] = STATE(149),
    [sym_structure] = STATE(149),
    [sym_hash] = STATE(149),
    [sym_graph] = STATE(149),
    [sym__abbrev] = STATE(149),
    [sym_quote] = STATE(149),
    [sym_quasiquote] = STATE(149),
    [sym_syntax] = STATE(149),
    [sym_quasisyntax] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splicing] = STATE(149),
    [sym_unsyntax] = STATE(149),
    [sym_unsyntax_splicing] = STATE(149),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(567),
    [sym_character] = ACTIONS(569),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(569),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [58] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym__abbrev] = STATE(133),
    [sym_quote] = STATE(133),
    [sym_quasiquote] = STATE(133),
    [sym_syntax] = STATE(133),
    [sym_quasisyntax] = STATE(133),
    [sym_unquote] = STATE(133),
    [sym_unquote_splicing] = STATE(133),
    [sym_unsyntax] = STATE(133),
    [sym_unsyntax_splicing] = STATE(133),
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(571),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(573),
    [sym_character] = ACTIONS(575),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(575),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [59] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(148),
    [sym_string] = STATE(148),
    [sym_byte_string] = STATE(148),
    [sym_here_string] = STATE(148),
    [sym_regex] = STATE(148),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(148),
    [sym_box] = STATE(148),
    [sym_list] = STATE(148),
    [sym_vector] = STATE(148),
    [sym_structure] = STATE(148),
    [sym_hash] = STATE(148),
    [sym_graph] = STATE(148),
    [sym__abbrev] = STATE(148),
    [sym_quote] = STATE(148),
    [sym_quasiquote] = STATE(148),
    [sym_syntax] = STATE(148),
    [sym_quasisyntax] = STATE(148),
    [sym_unquote] = STATE(148),
    [sym_unquote_splicing] = STATE(148),
    [sym_unsyntax] = STATE(148),
    [sym_unsyntax_splicing] = STATE(148),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(577),
    [sym_character] = ACTIONS(579),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(579),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [60] = {
    [sym__skip] = STATE(40),
    [sym__all_comment] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_sexp_comment] = STATE(40),
    [sym__datum] = STATE(190),
    [sym_string] = STATE(190),
    [sym_byte_string] = STATE(190),
    [sym_here_string] = STATE(190),
    [sym_regex] = STATE(190),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(190),
    [sym_box] = STATE(190),
    [sym_list] = STATE(190),
    [sym_vector] = STATE(190),
    [sym_structure] = STATE(190),
    [sym_hash] = STATE(190),
    [sym_graph] = STATE(190),
    [sym__abbrev] = STATE(190),
    [sym_quote] = STATE(190),
    [sym_quasiquote] = STATE(190),
    [sym_syntax] = STATE(190),
    [sym_quasisyntax] = STATE(190),
    [sym_unquote] = STATE(190),
    [sym_unquote_splicing] = STATE(190),
    [sym_unsyntax] = STATE(190),
    [sym_unsyntax_splicing] = STATE(190),
    [aux_sym_sexp_comment_repeat1] = STATE(40),
    [aux_sym__token_token1] = ACTIONS(581),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(583),
    [sym_character] = ACTIONS(585),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(585),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [61] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(147),
    [sym_string] = STATE(147),
    [sym_byte_string] = STATE(147),
    [sym_here_string] = STATE(147),
    [sym_regex] = STATE(147),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(147),
    [sym_box] = STATE(147),
    [sym_list] = STATE(147),
    [sym_vector] = STATE(147),
    [sym_structure] = STATE(147),
    [sym_hash] = STATE(147),
    [sym_graph] = STATE(147),
    [sym__abbrev] = STATE(147),
    [sym_quote] = STATE(147),
    [sym_quasiquote] = STATE(147),
    [sym_syntax] = STATE(147),
    [sym_quasisyntax] = STATE(147),
    [sym_unquote] = STATE(147),
    [sym_unquote_splicing] = STATE(147),
    [sym_unsyntax] = STATE(147),
    [sym_unsyntax_splicing] = STATE(147),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(587),
    [sym_character] = ACTIONS(589),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(589),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [62] = {
    [sym__skip] = STATE(41),
    [sym__all_comment] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_sexp_comment] = STATE(41),
    [sym__datum] = STATE(188),
    [sym_string] = STATE(188),
    [sym_byte_string] = STATE(188),
    [sym_here_string] = STATE(188),
    [sym_regex] = STATE(188),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(188),
    [sym_box] = STATE(188),
    [sym_list] = STATE(188),
    [sym_vector] = STATE(188),
    [sym_structure] = STATE(188),
    [sym_hash] = STATE(188),
    [sym_graph] = STATE(188),
    [sym__abbrev] = STATE(188),
    [sym_quote] = STATE(188),
    [sym_quasiquote] = STATE(188),
    [sym_syntax] = STATE(188),
    [sym_quasisyntax] = STATE(188),
    [sym_unquote] = STATE(188),
    [sym_unquote_splicing] = STATE(188),
    [sym_unsyntax] = STATE(188),
    [sym_unsyntax_splicing] = STATE(188),
    [aux_sym_sexp_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(591),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(593),
    [sym_character] = ACTIONS(595),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(595),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [63] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(146),
    [sym_string] = STATE(146),
    [sym_byte_string] = STATE(146),
    [sym_here_string] = STATE(146),
    [sym_regex] = STATE(146),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(146),
    [sym_box] = STATE(146),
    [sym_list] = STATE(146),
    [sym_vector] = STATE(146),
    [sym_structure] = STATE(146),
    [sym_hash] = STATE(146),
    [sym_graph] = STATE(146),
    [sym__abbrev] = STATE(146),
    [sym_quote] = STATE(146),
    [sym_quasiquote] = STATE(146),
    [sym_syntax] = STATE(146),
    [sym_quasisyntax] = STATE(146),
    [sym_unquote] = STATE(146),
    [sym_unquote_splicing] = STATE(146),
    [sym_unsyntax] = STATE(146),
    [sym_unsyntax_splicing] = STATE(146),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(597),
    [sym_character] = ACTIONS(599),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(599),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [64] = {
    [sym__skip] = STATE(51),
    [sym__all_comment] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(175),
    [sym_string] = STATE(175),
    [sym_byte_string] = STATE(175),
    [sym_here_string] = STATE(175),
    [sym_regex] = STATE(175),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(175),
    [sym_box] = STATE(175),
    [sym_list] = STATE(175),
    [sym_vector] = STATE(175),
    [sym_structure] = STATE(175),
    [sym_hash] = STATE(175),
    [sym_graph] = STATE(175),
    [sym__abbrev] = STATE(175),
    [sym_quote] = STATE(175),
    [sym_quasiquote] = STATE(175),
    [sym_syntax] = STATE(175),
    [sym_quasisyntax] = STATE(175),
    [sym_unquote] = STATE(175),
    [sym_unquote_splicing] = STATE(175),
    [sym_unsyntax] = STATE(175),
    [sym_unsyntax_splicing] = STATE(175),
    [aux_sym_sexp_comment_repeat1] = STATE(51),
    [aux_sym__token_token1] = ACTIONS(601),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(603),
    [sym_character] = ACTIONS(605),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(605),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [65] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(145),
    [sym_string] = STATE(145),
    [sym_byte_string] = STATE(145),
    [sym_here_string] = STATE(145),
    [sym_regex] = STATE(145),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(145),
    [sym_box] = STATE(145),
    [sym_list] = STATE(145),
    [sym_vector] = STATE(145),
    [sym_structure] = STATE(145),
    [sym_hash] = STATE(145),
    [sym_graph] = STATE(145),
    [sym__abbrev] = STATE(145),
    [sym_quote] = STATE(145),
    [sym_quasiquote] = STATE(145),
    [sym_syntax] = STATE(145),
    [sym_quasisyntax] = STATE(145),
    [sym_unquote] = STATE(145),
    [sym_unquote_splicing] = STATE(145),
    [sym_unsyntax] = STATE(145),
    [sym_unsyntax_splicing] = STATE(145),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(607),
    [sym_character] = ACTIONS(609),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(609),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [66] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_here_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(103),
    [sym_box] = STATE(103),
    [sym_list] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_structure] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_graph] = STATE(103),
    [sym__abbrev] = STATE(103),
    [sym_quote] = STATE(103),
    [sym_quasiquote] = STATE(103),
    [sym_syntax] = STATE(103),
    [sym_quasisyntax] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splicing] = STATE(103),
    [sym_unsyntax] = STATE(103),
    [sym_unsyntax_splicing] = STATE(103),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(611),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(611),
    [sym_character] = ACTIONS(613),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(613),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [67] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(144),
    [sym_string] = STATE(144),
    [sym_byte_string] = STATE(144),
    [sym_here_string] = STATE(144),
    [sym_regex] = STATE(144),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(144),
    [sym_box] = STATE(144),
    [sym_list] = STATE(144),
    [sym_vector] = STATE(144),
    [sym_structure] = STATE(144),
    [sym_hash] = STATE(144),
    [sym_graph] = STATE(144),
    [sym__abbrev] = STATE(144),
    [sym_quote] = STATE(144),
    [sym_quasiquote] = STATE(144),
    [sym_syntax] = STATE(144),
    [sym_quasisyntax] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_unquote_splicing] = STATE(144),
    [sym_unsyntax] = STATE(144),
    [sym_unsyntax_splicing] = STATE(144),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(615),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(615),
    [sym_character] = ACTIONS(617),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(617),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [68] = {
    [sym__skip] = STATE(42),
    [sym__all_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_sexp_comment] = STATE(42),
    [sym__datum] = STATE(169),
    [sym_string] = STATE(169),
    [sym_byte_string] = STATE(169),
    [sym_here_string] = STATE(169),
    [sym_regex] = STATE(169),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(169),
    [sym_box] = STATE(169),
    [sym_list] = STATE(169),
    [sym_vector] = STATE(169),
    [sym_structure] = STATE(169),
    [sym_hash] = STATE(169),
    [sym_graph] = STATE(169),
    [sym__abbrev] = STATE(169),
    [sym_quote] = STATE(169),
    [sym_quasiquote] = STATE(169),
    [sym_syntax] = STATE(169),
    [sym_quasisyntax] = STATE(169),
    [sym_unquote] = STATE(169),
    [sym_unquote_splicing] = STATE(169),
    [sym_unsyntax] = STATE(169),
    [sym_unsyntax_splicing] = STATE(169),
    [aux_sym_sexp_comment_repeat1] = STATE(42),
    [aux_sym__token_token1] = ACTIONS(619),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(621),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(621),
    [sym_character] = ACTIONS(623),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(623),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [69] = {
    [sym__skip] = STATE(47),
    [sym__all_comment] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(184),
    [sym_string] = STATE(184),
    [sym_byte_string] = STATE(184),
    [sym_here_string] = STATE(184),
    [sym_regex] = STATE(184),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(184),
    [sym_box] = STATE(184),
    [sym_list] = STATE(184),
    [sym_vector] = STATE(184),
    [sym_structure] = STATE(184),
    [sym_hash] = STATE(184),
    [sym_graph] = STATE(184),
    [sym__abbrev] = STATE(184),
    [sym_quote] = STATE(184),
    [sym_quasiquote] = STATE(184),
    [sym_syntax] = STATE(184),
    [sym_quasisyntax] = STATE(184),
    [sym_unquote] = STATE(184),
    [sym_unquote_splicing] = STATE(184),
    [sym_unsyntax] = STATE(184),
    [sym_unsyntax_splicing] = STATE(184),
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__token_token1] = ACTIONS(625),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(627),
    [sym_character] = ACTIONS(629),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(629),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [70] = {
    [sym__skip] = STATE(48),
    [sym__all_comment] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_sexp_comment] = STATE(48),
    [sym__datum] = STATE(182),
    [sym_string] = STATE(182),
    [sym_byte_string] = STATE(182),
    [sym_here_string] = STATE(182),
    [sym_regex] = STATE(182),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(182),
    [sym_box] = STATE(182),
    [sym_list] = STATE(182),
    [sym_vector] = STATE(182),
    [sym_structure] = STATE(182),
    [sym_hash] = STATE(182),
    [sym_graph] = STATE(182),
    [sym__abbrev] = STATE(182),
    [sym_quote] = STATE(182),
    [sym_quasiquote] = STATE(182),
    [sym_syntax] = STATE(182),
    [sym_quasisyntax] = STATE(182),
    [sym_unquote] = STATE(182),
    [sym_unquote_splicing] = STATE(182),
    [sym_unsyntax] = STATE(182),
    [sym_unsyntax_splicing] = STATE(182),
    [aux_sym_sexp_comment_repeat1] = STATE(48),
    [aux_sym__token_token1] = ACTIONS(631),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(633),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(633),
    [sym_character] = ACTIONS(635),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(635),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [71] = {
    [sym__skip] = STATE(49),
    [sym__all_comment] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(210),
    [sym_string] = STATE(210),
    [sym_byte_string] = STATE(210),
    [sym_here_string] = STATE(210),
    [sym_regex] = STATE(210),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(210),
    [sym_box] = STATE(210),
    [sym_list] = STATE(210),
    [sym_vector] = STATE(210),
    [sym_structure] = STATE(210),
    [sym_hash] = STATE(210),
    [sym_graph] = STATE(210),
    [sym__abbrev] = STATE(210),
    [sym_quote] = STATE(210),
    [sym_quasiquote] = STATE(210),
    [sym_syntax] = STATE(210),
    [sym_quasisyntax] = STATE(210),
    [sym_unquote] = STATE(210),
    [sym_unquote_splicing] = STATE(210),
    [sym_unsyntax] = STATE(210),
    [sym_unsyntax_splicing] = STATE(210),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__token_token1] = ACTIONS(637),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(639),
    [sym_character] = ACTIONS(641),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(641),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [72] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(95),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym__abbrev] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_quasiquote] = STATE(95),
    [sym_syntax] = STATE(95),
    [sym_quasisyntax] = STATE(95),
    [sym_unquote] = STATE(95),
    [sym_unquote_splicing] = STATE(95),
    [sym_unsyntax] = STATE(95),
    [sym_unsyntax_splicing] = STATE(95),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(643),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(643),
    [sym_character] = ACTIONS(645),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(645),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [73] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_byte_string] = STATE(96),
    [sym_here_string] = STATE(96),
    [sym_regex] = STATE(96),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(96),
    [sym_box] = STATE(96),
    [sym_list] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_structure] = STATE(96),
    [sym_hash] = STATE(96),
    [sym_graph] = STATE(96),
    [sym__abbrev] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_syntax] = STATE(96),
    [sym_quasisyntax] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splicing] = STATE(96),
    [sym_unsyntax] = STATE(96),
    [sym_unsyntax_splicing] = STATE(96),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(647),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(647),
    [sym_character] = ACTIONS(649),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(649),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [74] = {
    [sym__skip] = STATE(83),
    [sym__all_comment] = STATE(83),
    [sym_comment] = STATE(83),
    [sym_block_comment] = STATE(83),
    [sym_sexp_comment] = STATE(83),
    [sym__datum] = STATE(143),
    [sym_string] = STATE(143),
    [sym_byte_string] = STATE(143),
    [sym_here_string] = STATE(143),
    [sym_regex] = STATE(143),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(143),
    [sym_box] = STATE(143),
    [sym_list] = STATE(143),
    [sym_vector] = STATE(143),
    [sym_structure] = STATE(143),
    [sym_hash] = STATE(143),
    [sym_graph] = STATE(143),
    [sym__abbrev] = STATE(143),
    [sym_quote] = STATE(143),
    [sym_quasiquote] = STATE(143),
    [sym_syntax] = STATE(143),
    [sym_quasisyntax] = STATE(143),
    [sym_unquote] = STATE(143),
    [sym_unquote_splicing] = STATE(143),
    [sym_unsyntax] = STATE(143),
    [sym_unsyntax_splicing] = STATE(143),
    [aux_sym_sexp_comment_repeat1] = STATE(83),
    [aux_sym__token_token1] = ACTIONS(651),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(653),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(653),
    [sym_character] = ACTIONS(655),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(655),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [75] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(97),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [sym__abbrev] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_syntax] = STATE(97),
    [sym_quasisyntax] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_unquote_splicing] = STATE(97),
    [sym_unsyntax] = STATE(97),
    [sym_unsyntax_splicing] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(657),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(657),
    [sym_character] = ACTIONS(659),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(659),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [76] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(122),
    [sym_string] = STATE(122),
    [sym_byte_string] = STATE(122),
    [sym_here_string] = STATE(122),
    [sym_regex] = STATE(122),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(122),
    [sym_box] = STATE(122),
    [sym_list] = STATE(122),
    [sym_vector] = STATE(122),
    [sym_structure] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_graph] = STATE(122),
    [sym__abbrev] = STATE(122),
    [sym_quote] = STATE(122),
    [sym_quasiquote] = STATE(122),
    [sym_syntax] = STATE(122),
    [sym_quasisyntax] = STATE(122),
    [sym_unquote] = STATE(122),
    [sym_unquote_splicing] = STATE(122),
    [sym_unsyntax] = STATE(122),
    [sym_unsyntax_splicing] = STATE(122),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(661),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(661),
    [sym_character] = ACTIONS(663),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(663),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [77] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(99),
    [sym_box] = STATE(99),
    [sym_list] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_structure] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_graph] = STATE(99),
    [sym__abbrev] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_syntax] = STATE(99),
    [sym_quasisyntax] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splicing] = STATE(99),
    [sym_unsyntax] = STATE(99),
    [sym_unsyntax_splicing] = STATE(99),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(665),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(665),
    [sym_character] = ACTIONS(667),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(667),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [78] = {
    [sym__skip] = STATE(57),
    [sym__all_comment] = STATE(57),
    [sym_comment] = STATE(57),
    [sym_block_comment] = STATE(57),
    [sym_sexp_comment] = STATE(57),
    [sym__datum] = STATE(167),
    [sym_string] = STATE(167),
    [sym_byte_string] = STATE(167),
    [sym_here_string] = STATE(167),
    [sym_regex] = STATE(167),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(167),
    [sym_box] = STATE(167),
    [sym_list] = STATE(167),
    [sym_vector] = STATE(167),
    [sym_structure] = STATE(167),
    [sym_hash] = STATE(167),
    [sym_graph] = STATE(167),
    [sym__abbrev] = STATE(167),
    [sym_quote] = STATE(167),
    [sym_quasiquote] = STATE(167),
    [sym_syntax] = STATE(167),
    [sym_quasisyntax] = STATE(167),
    [sym_unquote] = STATE(167),
    [sym_unquote_splicing] = STATE(167),
    [sym_unsyntax] = STATE(167),
    [sym_unsyntax_splicing] = STATE(167),
    [aux_sym_sexp_comment_repeat1] = STATE(57),
    [aux_sym__token_token1] = ACTIONS(669),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(671),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(671),
    [sym_character] = ACTIONS(673),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(673),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [79] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(199),
    [sym_string] = STATE(199),
    [sym_byte_string] = STATE(199),
    [sym_here_string] = STATE(199),
    [sym_regex] = STATE(199),
    [sym__real_string] = STATE(195),
    [sym_symbol] = STATE(199),
    [sym_box] = STATE(199),
    [sym_list] = STATE(199),
    [sym_vector] = STATE(199),
    [sym_structure] = STATE(199),
    [sym_hash] = STATE(199),
    [sym_graph] = STATE(199),
    [sym__abbrev] = STATE(199),
    [sym_quote] = STATE(199),
    [sym_quasiquote] = STATE(199),
    [sym_syntax] = STATE(199),
    [sym_quasisyntax] = STATE(199),
    [sym_unquote] = STATE(199),
    [sym_unquote_splicing] = STATE(199),
    [sym_unsyntax] = STATE(199),
    [sym_unsyntax_splicing] = STATE(199),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LT_LT] = ACTIONS(365),
    [aux_sym_regex_token1] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_number] = ACTIONS(675),
    [sym_character] = ACTIONS(677),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [sym_keyword] = ACTIONS(677),
    [anon_sym_POUND_AMP] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_POUNDfl] = ACTIONS(383),
    [anon_sym_POUNDfx] = ACTIONS(383),
    [anon_sym_POUNDs] = ACTIONS(385),
    [anon_sym_POUNDhash] = ACTIONS(387),
    [anon_sym_POUNDhasheq] = ACTIONS(387),
    [anon_sym_POUNDhasheqv] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_POUND_SQUOTE] = ACTIONS(395),
    [anon_sym_POUND_BQUOTE] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_AT] = ACTIONS(401),
    [anon_sym_POUND_COMMA] = ACTIONS(403),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(405),
  },
  [80] = {
    [sym__skip] = STATE(50),
    [sym__all_comment] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(130),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym__abbrev] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_quasiquote] = STATE(130),
    [sym_syntax] = STATE(130),
    [sym_quasisyntax] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_unquote_splicing] = STATE(130),
    [sym_unsyntax] = STATE(130),
    [sym_unsyntax_splicing] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__token_token1] = ACTIONS(679),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(681),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(681),
    [sym_character] = ACTIONS(683),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(683),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [81] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(93),
    [sym_box] = STATE(93),
    [sym_list] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_structure] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_graph] = STATE(93),
    [sym__abbrev] = STATE(93),
    [sym_quote] = STATE(93),
    [sym_quasiquote] = STATE(93),
    [sym_syntax] = STATE(93),
    [sym_quasisyntax] = STATE(93),
    [sym_unquote] = STATE(93),
    [sym_unquote_splicing] = STATE(93),
    [sym_unsyntax] = STATE(93),
    [sym_unsyntax_splicing] = STATE(93),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(685),
    [sym_character] = ACTIONS(687),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(687),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [82] = {
    [sym__skip] = STATE(81),
    [sym__all_comment] = STATE(81),
    [sym_comment] = STATE(81),
    [sym_block_comment] = STATE(81),
    [sym_sexp_comment] = STATE(81),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(128),
    [sym_box] = STATE(128),
    [sym_list] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_structure] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_graph] = STATE(128),
    [sym__abbrev] = STATE(128),
    [sym_quote] = STATE(128),
    [sym_quasiquote] = STATE(128),
    [sym_syntax] = STATE(128),
    [sym_quasisyntax] = STATE(128),
    [sym_unquote] = STATE(128),
    [sym_unquote_splicing] = STATE(128),
    [sym_unsyntax] = STATE(128),
    [sym_unsyntax_splicing] = STATE(128),
    [aux_sym_sexp_comment_repeat1] = STATE(81),
    [aux_sym__token_token1] = ACTIONS(689),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(691),
    [sym_character] = ACTIONS(693),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(693),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [83] = {
    [sym__skip] = STATE(134),
    [sym__all_comment] = STATE(134),
    [sym_comment] = STATE(134),
    [sym_block_comment] = STATE(134),
    [sym_sexp_comment] = STATE(134),
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_byte_string] = STATE(142),
    [sym_here_string] = STATE(142),
    [sym_regex] = STATE(142),
    [sym__real_string] = STATE(138),
    [sym_symbol] = STATE(142),
    [sym_box] = STATE(142),
    [sym_list] = STATE(142),
    [sym_vector] = STATE(142),
    [sym_structure] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_graph] = STATE(142),
    [sym__abbrev] = STATE(142),
    [sym_quote] = STATE(142),
    [sym_quasiquote] = STATE(142),
    [sym_syntax] = STATE(142),
    [sym_quasisyntax] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splicing] = STATE(142),
    [sym_unsyntax] = STATE(142),
    [sym_unsyntax_splicing] = STATE(142),
    [aux_sym_sexp_comment_repeat1] = STATE(134),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(695),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(695),
    [sym_character] = ACTIONS(697),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(697),
    [anon_sym_POUND_AMP] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUNDfl] = ACTIONS(33),
    [anon_sym_POUNDfx] = ACTIONS(33),
    [anon_sym_POUNDs] = ACTIONS(35),
    [anon_sym_POUNDhash] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(37),
    [anon_sym_POUNDhasheqv] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [84] = {
    [sym__skip] = STATE(76),
    [sym__all_comment] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_block_comment] = STATE(76),
    [sym_sexp_comment] = STATE(76),
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_byte_string] = STATE(120),
    [sym_here_string] = STATE(120),
    [sym_regex] = STATE(120),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(120),
    [sym_box] = STATE(120),
    [sym_list] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_structure] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_graph] = STATE(120),
    [sym__abbrev] = STATE(120),
    [sym_quote] = STATE(120),
    [sym_quasiquote] = STATE(120),
    [sym_syntax] = STATE(120),
    [sym_quasisyntax] = STATE(120),
    [sym_unquote] = STATE(120),
    [sym_unquote_splicing] = STATE(120),
    [sym_unsyntax] = STATE(120),
    [sym_unsyntax_splicing] = STATE(120),
    [aux_sym_sexp_comment_repeat1] = STATE(76),
    [aux_sym__token_token1] = ACTIONS(699),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(701),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(701),
    [sym_character] = ACTIONS(703),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(703),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [85] = {
    [sym__skip] = STATE(77),
    [sym__all_comment] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_block_comment] = STATE(77),
    [sym_sexp_comment] = STATE(77),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_byte_string] = STATE(94),
    [sym_here_string] = STATE(94),
    [sym_regex] = STATE(94),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(94),
    [sym_box] = STATE(94),
    [sym_list] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_structure] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_graph] = STATE(94),
    [sym__abbrev] = STATE(94),
    [sym_quote] = STATE(94),
    [sym_quasiquote] = STATE(94),
    [sym_syntax] = STATE(94),
    [sym_quasisyntax] = STATE(94),
    [sym_unquote] = STATE(94),
    [sym_unquote_splicing] = STATE(94),
    [sym_unsyntax] = STATE(94),
    [sym_unsyntax_splicing] = STATE(94),
    [aux_sym_sexp_comment_repeat1] = STATE(77),
    [aux_sym__token_token1] = ACTIONS(705),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(707),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(707),
    [sym_character] = ACTIONS(709),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(709),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [86] = {
    [sym__skip] = STATE(75),
    [sym__all_comment] = STATE(75),
    [sym_comment] = STATE(75),
    [sym_block_comment] = STATE(75),
    [sym_sexp_comment] = STATE(75),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(119),
    [sym_box] = STATE(119),
    [sym_list] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_structure] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_graph] = STATE(119),
    [sym__abbrev] = STATE(119),
    [sym_quote] = STATE(119),
    [sym_quasiquote] = STATE(119),
    [sym_syntax] = STATE(119),
    [sym_quasisyntax] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splicing] = STATE(119),
    [sym_unsyntax] = STATE(119),
    [sym_unsyntax_splicing] = STATE(119),
    [aux_sym_sexp_comment_repeat1] = STATE(75),
    [aux_sym__token_token1] = ACTIONS(711),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(713),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(713),
    [sym_character] = ACTIONS(715),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(715),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [87] = {
    [sym__skip] = STATE(73),
    [sym__all_comment] = STATE(73),
    [sym_comment] = STATE(73),
    [sym_block_comment] = STATE(73),
    [sym_sexp_comment] = STATE(73),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym__abbrev] = STATE(121),
    [sym_quote] = STATE(121),
    [sym_quasiquote] = STATE(121),
    [sym_syntax] = STATE(121),
    [sym_quasisyntax] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splicing] = STATE(121),
    [sym_unsyntax] = STATE(121),
    [sym_unsyntax_splicing] = STATE(121),
    [aux_sym_sexp_comment_repeat1] = STATE(73),
    [aux_sym__token_token1] = ACTIONS(717),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(719),
    [sym_character] = ACTIONS(721),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(721),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [88] = {
    [sym__skip] = STATE(72),
    [sym__all_comment] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym_sexp_comment] = STATE(72),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_byte_string] = STATE(123),
    [sym_here_string] = STATE(123),
    [sym_regex] = STATE(123),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(123),
    [sym_box] = STATE(123),
    [sym_list] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_structure] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_graph] = STATE(123),
    [sym__abbrev] = STATE(123),
    [sym_quote] = STATE(123),
    [sym_quasiquote] = STATE(123),
    [sym_syntax] = STATE(123),
    [sym_quasisyntax] = STATE(123),
    [sym_unquote] = STATE(123),
    [sym_unquote_splicing] = STATE(123),
    [sym_unsyntax] = STATE(123),
    [sym_unsyntax_splicing] = STATE(123),
    [aux_sym_sexp_comment_repeat1] = STATE(72),
    [aux_sym__token_token1] = ACTIONS(723),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(725),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(725),
    [sym_character] = ACTIONS(727),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(727),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [89] = {
    [sym__skip] = STATE(66),
    [sym__all_comment] = STATE(66),
    [sym_comment] = STATE(66),
    [sym_block_comment] = STATE(66),
    [sym_sexp_comment] = STATE(66),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_byte_string] = STATE(125),
    [sym_here_string] = STATE(125),
    [sym_regex] = STATE(125),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(125),
    [sym_box] = STATE(125),
    [sym_list] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_structure] = STATE(125),
    [sym_hash] = STATE(125),
    [sym_graph] = STATE(125),
    [sym__abbrev] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_syntax] = STATE(125),
    [sym_quasisyntax] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splicing] = STATE(125),
    [sym_unsyntax] = STATE(125),
    [sym_unsyntax_splicing] = STATE(125),
    [aux_sym_sexp_comment_repeat1] = STATE(66),
    [aux_sym__token_token1] = ACTIONS(729),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(731),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(731),
    [sym_character] = ACTIONS(733),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(733),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [90] = {
    [sym__skip] = STATE(52),
    [sym__all_comment] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym_sexp_comment] = STATE(52),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(127),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym__abbrev] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_syntax] = STATE(127),
    [sym_quasisyntax] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splicing] = STATE(127),
    [sym_unsyntax] = STATE(127),
    [sym_unsyntax_splicing] = STATE(127),
    [aux_sym_sexp_comment_repeat1] = STATE(52),
    [aux_sym__token_token1] = ACTIONS(735),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(737),
    [sym_character] = ACTIONS(739),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(739),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [91] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym_sexp_comment] = STATE(36),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(129),
    [sym_box] = STATE(129),
    [sym_list] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_structure] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_graph] = STATE(129),
    [sym__abbrev] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_quasiquote] = STATE(129),
    [sym_syntax] = STATE(129),
    [sym_quasisyntax] = STATE(129),
    [sym_unquote] = STATE(129),
    [sym_unquote_splicing] = STATE(129),
    [sym_unsyntax] = STATE(129),
    [sym_unsyntax_splicing] = STATE(129),
    [aux_sym_sexp_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(741),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(743),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(743),
    [sym_character] = ACTIONS(745),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(745),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [92] = {
    [sym__skip] = STATE(32),
    [sym__all_comment] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(105),
    [sym_symbol] = STATE(131),
    [sym_box] = STATE(131),
    [sym_list] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_structure] = STATE(131),
    [sym_hash] = STATE(131),
    [sym_graph] = STATE(131),
    [sym__abbrev] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_syntax] = STATE(131),
    [sym_quasisyntax] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_unquote_splicing] = STATE(131),
    [sym_unsyntax] = STATE(131),
    [sym_unsyntax_splicing] = STATE(131),
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__token_token1] = ACTIONS(747),
    [aux_sym_comment_token1] = ACTIONS(355),
    [anon_sym_POUND_PIPE] = ACTIONS(357),
    [anon_sym_POUND_SEMI] = ACTIONS(359),
    [sym__line_comment] = ACTIONS(355),
    [sym_boolean] = ACTIONS(749),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(749),
    [sym_character] = ACTIONS(751),
    [aux_sym_symbol_token1] = ACTIONS(170),
    [sym_keyword] = ACTIONS(751),
    [anon_sym_POUND_AMP] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_POUNDfl] = ACTIONS(182),
    [anon_sym_POUNDfx] = ACTIONS(182),
    [anon_sym_POUNDs] = ACTIONS(184),
    [anon_sym_POUNDhash] = ACTIONS(186),
    [anon_sym_POUNDhasheq] = ACTIONS(186),
    [anon_sym_POUNDhasheqv] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(755), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(759), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(763), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(767), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(771), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(775), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(779), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(783), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(787), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(791), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(795), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(799), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(803), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(807), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(811), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(815), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(819), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(823), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(827), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(831), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(835), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(839), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(843), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(847), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(851), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(855), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(859), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(863), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(867), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(871), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(875), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(879), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(883), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(887), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(891), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(895), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(899), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(903), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(901), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(907), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(905), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(911), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(909), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
    ACTIONS(915), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(913), 29,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [1804] = 7,
    ACTIONS(917), 1,
      aux_sym__token_token1,
    ACTIONS(923), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(926), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(920), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(134), 6,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(929), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(931), 19,
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
  [1857] = 2,
    ACTIONS(915), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(913), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [1898] = 2,
    ACTIONS(827), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [1939] = 2,
    ACTIONS(839), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [1980] = 2,
    ACTIONS(803), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2021] = 2,
    ACTIONS(887), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2062] = 2,
    ACTIONS(903), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(901), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2103] = 2,
    ACTIONS(819), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2144] = 2,
    ACTIONS(871), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2185] = 2,
    ACTIONS(863), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2226] = 2,
    ACTIONS(755), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2267] = 2,
    ACTIONS(843), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2308] = 2,
    ACTIONS(815), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2349] = 2,
    ACTIONS(811), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2390] = 2,
    ACTIONS(787), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2431] = 2,
    ACTIONS(795), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2472] = 2,
    ACTIONS(763), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2513] = 2,
    ACTIONS(767), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2554] = 2,
    ACTIONS(771), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2595] = 2,
    ACTIONS(775), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2636] = 2,
    ACTIONS(779), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2677] = 2,
    ACTIONS(823), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2718] = 2,
    ACTIONS(783), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2759] = 2,
    ACTIONS(791), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2800] = 2,
    ACTIONS(879), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2841] = 2,
    ACTIONS(807), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2882] = 2,
    ACTIONS(911), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(909), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2923] = 2,
    ACTIONS(831), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [2964] = 2,
    ACTIONS(799), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3005] = 2,
    ACTIONS(895), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3046] = 2,
    ACTIONS(907), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(905), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3087] = 2,
    ACTIONS(899), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3128] = 2,
    ACTIONS(891), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3169] = 2,
    ACTIONS(883), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3210] = 2,
    ACTIONS(835), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3251] = 2,
    ACTIONS(759), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3292] = 2,
    ACTIONS(875), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3333] = 2,
    ACTIONS(867), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3374] = 2,
    ACTIONS(847), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3415] = 2,
    ACTIONS(851), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3456] = 2,
    ACTIONS(855), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3497] = 2,
    ACTIONS(859), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 27,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3538] = 2,
    ACTIONS(795), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(793), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3575] = 2,
    ACTIONS(787), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(785), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3612] = 2,
    ACTIONS(831), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(829), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3649] = 2,
    ACTIONS(847), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(845), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3686] = 2,
    ACTIONS(851), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(849), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3723] = 2,
    ACTIONS(855), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(853), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3760] = 2,
    ACTIONS(859), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(857), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3797] = 2,
    ACTIONS(807), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(805), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3834] = 2,
    ACTIONS(867), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(865), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3871] = 2,
    ACTIONS(823), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(821), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3908] = 2,
    ACTIONS(875), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(873), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3945] = 2,
    ACTIONS(839), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(837), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [3982] = 2,
    ACTIONS(883), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(881), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4019] = 2,
    ACTIONS(819), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(817), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4056] = 2,
    ACTIONS(891), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(889), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4093] = 2,
    ACTIONS(887), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(885), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4130] = 2,
    ACTIONS(899), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(897), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4167] = 2,
    ACTIONS(903), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(901), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4204] = 2,
    ACTIONS(907), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(905), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4241] = 2,
    ACTIONS(803), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(801), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4278] = 2,
    ACTIONS(915), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(913), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4315] = 2,
    ACTIONS(799), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(797), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4352] = 2,
    ACTIONS(835), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(833), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4389] = 2,
    ACTIONS(911), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(909), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4426] = 2,
    ACTIONS(827), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(825), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4463] = 2,
    ACTIONS(871), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(869), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4500] = 2,
    ACTIONS(791), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(789), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4537] = 2,
    ACTIONS(783), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(781), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4574] = 2,
    ACTIONS(779), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(777), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4611] = 2,
    ACTIONS(775), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(773), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4648] = 2,
    ACTIONS(771), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(769), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4685] = 2,
    ACTIONS(767), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(765), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4722] = 2,
    ACTIONS(763), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(761), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4759] = 2,
    ACTIONS(879), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(877), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4796] = 2,
    ACTIONS(759), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(757), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4833] = 2,
    ACTIONS(811), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(809), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4870] = 2,
    ACTIONS(815), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(813), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4907] = 2,
    ACTIONS(843), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(841), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4944] = 2,
    ACTIONS(863), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(861), 24,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
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
  [4981] = 7,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(933), 1,
      sym_decimal,
    STATE(109), 1,
      sym__real_string,
    STATE(110), 1,
      sym_list,
  [5003] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      sym_decimal,
    STATE(141), 1,
      sym__real_string,
    STATE(155), 1,
      sym_list,
  [5025] = 7,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(937), 1,
      sym_decimal,
    STATE(185), 1,
      sym_list,
    STATE(189), 1,
      sym__real_string,
  [5047] = 6,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(939), 1,
      anon_sym_POUND,
    ACTIONS(941), 1,
      anon_sym_EQ,
    STATE(102), 1,
      sym_list,
  [5066] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_list,
  [5085] = 6,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(947), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_list,
  [5104] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(953), 1,
      aux_sym_block_comment_token1,
    ACTIONS(955), 1,
      anon_sym_PIPE_POUND,
    STATE(232), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5118] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(957), 1,
      aux_sym_block_comment_token1,
    ACTIONS(959), 1,
      anon_sym_PIPE_POUND,
    STATE(229), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5132] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(961), 1,
      aux_sym_block_comment_token1,
    ACTIONS(963), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5146] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(965), 1,
      aux_sym_block_comment_token1,
    ACTIONS(967), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5160] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(969), 1,
      aux_sym_block_comment_token1,
    ACTIONS(971), 1,
      anon_sym_PIPE_POUND,
    STATE(226), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5174] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(961), 1,
      aux_sym_block_comment_token1,
    ACTIONS(973), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5188] = 4,
    ACTIONS(975), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(978), 1,
      aux_sym_block_comment_token1,
    ACTIONS(981), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5202] = 5,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(983), 1,
      sym_decimal,
    STATE(110), 1,
      sym_list,
  [5218] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(961), 1,
      aux_sym_block_comment_token1,
    ACTIONS(985), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5232] = 5,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(987), 1,
      sym_decimal,
    STATE(185), 1,
      sym_list,
  [5248] = 5,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(989), 1,
      sym_decimal,
    STATE(155), 1,
      sym_list,
  [5264] = 4,
    ACTIONS(951), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(961), 1,
      aux_sym_block_comment_token1,
    ACTIONS(991), 1,
      anon_sym_PIPE_POUND,
    STATE(227), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5278] = 4,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_list,
  [5291] = 3,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(995), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5302] = 3,
    ACTIONS(997), 1,
      anon_sym_DQUOTE,
    STATE(236), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(999), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5313] = 3,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1003), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5324] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_list,
  [5337] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_list,
  [5350] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_list,
  [5363] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_list,
  [5376] = 3,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1007), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5387] = 4,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_list,
  [5400] = 3,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1003), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5411] = 3,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1014), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5422] = 3,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1003), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5433] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_list,
  [5446] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_list,
  [5459] = 4,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_list,
  [5472] = 2,
    ACTIONS(799), 1,
      aux_sym_block_comment_token1,
    ACTIONS(797), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5480] = 2,
    ACTIONS(887), 1,
      aux_sym_block_comment_token1,
    ACTIONS(885), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5488] = 2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym__real_string,
  [5495] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym__real_string,
  [5502] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym__real_string,
  [5509] = 1,
    ACTIONS(1018), 1,
      sym__here_string_body,
  [5513] = 1,
    ACTIONS(693), 1,
      sym_lang_name,
  [5517] = 1,
    ACTIONS(1020), 1,
      sym__here_string_body,
  [5521] = 1,
    ACTIONS(1022), 1,
      ts_builtin_sym_end,
  [5525] = 1,
    ACTIONS(1024), 1,
      sym__here_string_body,
  [5529] = 1,
    ACTIONS(441), 1,
      sym_lang_name,
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
  [SMALL_STATE(135)] = 1857,
  [SMALL_STATE(136)] = 1898,
  [SMALL_STATE(137)] = 1939,
  [SMALL_STATE(138)] = 1980,
  [SMALL_STATE(139)] = 2021,
  [SMALL_STATE(140)] = 2062,
  [SMALL_STATE(141)] = 2103,
  [SMALL_STATE(142)] = 2144,
  [SMALL_STATE(143)] = 2185,
  [SMALL_STATE(144)] = 2226,
  [SMALL_STATE(145)] = 2267,
  [SMALL_STATE(146)] = 2308,
  [SMALL_STATE(147)] = 2349,
  [SMALL_STATE(148)] = 2390,
  [SMALL_STATE(149)] = 2431,
  [SMALL_STATE(150)] = 2472,
  [SMALL_STATE(151)] = 2513,
  [SMALL_STATE(152)] = 2554,
  [SMALL_STATE(153)] = 2595,
  [SMALL_STATE(154)] = 2636,
  [SMALL_STATE(155)] = 2677,
  [SMALL_STATE(156)] = 2718,
  [SMALL_STATE(157)] = 2759,
  [SMALL_STATE(158)] = 2800,
  [SMALL_STATE(159)] = 2841,
  [SMALL_STATE(160)] = 2882,
  [SMALL_STATE(161)] = 2923,
  [SMALL_STATE(162)] = 2964,
  [SMALL_STATE(163)] = 3005,
  [SMALL_STATE(164)] = 3046,
  [SMALL_STATE(165)] = 3087,
  [SMALL_STATE(166)] = 3128,
  [SMALL_STATE(167)] = 3169,
  [SMALL_STATE(168)] = 3210,
  [SMALL_STATE(169)] = 3251,
  [SMALL_STATE(170)] = 3292,
  [SMALL_STATE(171)] = 3333,
  [SMALL_STATE(172)] = 3374,
  [SMALL_STATE(173)] = 3415,
  [SMALL_STATE(174)] = 3456,
  [SMALL_STATE(175)] = 3497,
  [SMALL_STATE(176)] = 3538,
  [SMALL_STATE(177)] = 3575,
  [SMALL_STATE(178)] = 3612,
  [SMALL_STATE(179)] = 3649,
  [SMALL_STATE(180)] = 3686,
  [SMALL_STATE(181)] = 3723,
  [SMALL_STATE(182)] = 3760,
  [SMALL_STATE(183)] = 3797,
  [SMALL_STATE(184)] = 3834,
  [SMALL_STATE(185)] = 3871,
  [SMALL_STATE(186)] = 3908,
  [SMALL_STATE(187)] = 3945,
  [SMALL_STATE(188)] = 3982,
  [SMALL_STATE(189)] = 4019,
  [SMALL_STATE(190)] = 4056,
  [SMALL_STATE(191)] = 4093,
  [SMALL_STATE(192)] = 4130,
  [SMALL_STATE(193)] = 4167,
  [SMALL_STATE(194)] = 4204,
  [SMALL_STATE(195)] = 4241,
  [SMALL_STATE(196)] = 4278,
  [SMALL_STATE(197)] = 4315,
  [SMALL_STATE(198)] = 4352,
  [SMALL_STATE(199)] = 4389,
  [SMALL_STATE(200)] = 4426,
  [SMALL_STATE(201)] = 4463,
  [SMALL_STATE(202)] = 4500,
  [SMALL_STATE(203)] = 4537,
  [SMALL_STATE(204)] = 4574,
  [SMALL_STATE(205)] = 4611,
  [SMALL_STATE(206)] = 4648,
  [SMALL_STATE(207)] = 4685,
  [SMALL_STATE(208)] = 4722,
  [SMALL_STATE(209)] = 4759,
  [SMALL_STATE(210)] = 4796,
  [SMALL_STATE(211)] = 4833,
  [SMALL_STATE(212)] = 4870,
  [SMALL_STATE(213)] = 4907,
  [SMALL_STATE(214)] = 4944,
  [SMALL_STATE(215)] = 4981,
  [SMALL_STATE(216)] = 5003,
  [SMALL_STATE(217)] = 5025,
  [SMALL_STATE(218)] = 5047,
  [SMALL_STATE(219)] = 5066,
  [SMALL_STATE(220)] = 5085,
  [SMALL_STATE(221)] = 5104,
  [SMALL_STATE(222)] = 5118,
  [SMALL_STATE(223)] = 5132,
  [SMALL_STATE(224)] = 5146,
  [SMALL_STATE(225)] = 5160,
  [SMALL_STATE(226)] = 5174,
  [SMALL_STATE(227)] = 5188,
  [SMALL_STATE(228)] = 5202,
  [SMALL_STATE(229)] = 5218,
  [SMALL_STATE(230)] = 5232,
  [SMALL_STATE(231)] = 5248,
  [SMALL_STATE(232)] = 5264,
  [SMALL_STATE(233)] = 5278,
  [SMALL_STATE(234)] = 5291,
  [SMALL_STATE(235)] = 5302,
  [SMALL_STATE(236)] = 5313,
  [SMALL_STATE(237)] = 5324,
  [SMALL_STATE(238)] = 5337,
  [SMALL_STATE(239)] = 5350,
  [SMALL_STATE(240)] = 5363,
  [SMALL_STATE(241)] = 5376,
  [SMALL_STATE(242)] = 5387,
  [SMALL_STATE(243)] = 5400,
  [SMALL_STATE(244)] = 5411,
  [SMALL_STATE(245)] = 5422,
  [SMALL_STATE(246)] = 5433,
  [SMALL_STATE(247)] = 5446,
  [SMALL_STATE(248)] = 5459,
  [SMALL_STATE(249)] = 5472,
  [SMALL_STATE(250)] = 5480,
  [SMALL_STATE(251)] = 5488,
  [SMALL_STATE(252)] = 5495,
  [SMALL_STATE(253)] = 5502,
  [SMALL_STATE(254)] = 5509,
  [SMALL_STATE(255)] = 5513,
  [SMALL_STATE(256)] = 5517,
  [SMALL_STATE(257)] = 5521,
  [SMALL_STATE(258)] = 5525,
  [SMALL_STATE(259)] = 5529,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(124),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(224),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(80),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(215),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(254),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(251),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(235),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(114),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(85),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(228),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(246),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(247),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(247),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(86),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(87),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(88),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(89),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(91),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(92),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(58),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(82),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(255),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(255),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(216),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(256),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(252),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(234),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(231),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(239),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(238),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(238),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(259),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(259),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(134),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(209),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(222),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(30),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(221),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(227),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(241),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1022] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
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
