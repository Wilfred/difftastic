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
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 86
#define SYMBOL_COUNT 77
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
  sym_unquote = 70,
  sym_extension = 71,
  aux_sym_program_repeat1 = 72,
  aux_sym_block_comment_repeat1 = 73,
  aux_sym_sexp_comment_repeat1 = 74,
  aux_sym__real_string_repeat1 = 75,
  aux_sym_list_repeat1 = 76,
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
  [sym_unquote] = "unquote",
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
  [sym_unquote] = sym_unquote,
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
  [sym_unquote] = {
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
  [8] = 8,
  [9] = 7,
  [10] = 6,
  [11] = 5,
  [12] = 8,
  [13] = 4,
  [14] = 3,
  [15] = 8,
  [16] = 4,
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
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 25,
  [34] = 26,
  [35] = 35,
  [36] = 25,
  [37] = 24,
  [38] = 38,
  [39] = 35,
  [40] = 29,
  [41] = 41,
  [42] = 24,
  [43] = 41,
  [44] = 23,
  [45] = 32,
  [46] = 41,
  [47] = 30,
  [48] = 28,
  [49] = 49,
  [50] = 23,
  [51] = 32,
  [52] = 28,
  [53] = 49,
  [54] = 38,
  [55] = 38,
  [56] = 29,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 76,
  [88] = 64,
  [89] = 58,
  [90] = 70,
  [91] = 75,
  [92] = 85,
  [93] = 73,
  [94] = 69,
  [95] = 77,
  [96] = 79,
  [97] = 67,
  [98] = 57,
  [99] = 61,
  [100] = 72,
  [101] = 71,
  [102] = 59,
  [103] = 60,
  [104] = 63,
  [105] = 78,
  [106] = 80,
  [107] = 62,
  [108] = 65,
  [109] = 68,
  [110] = 81,
  [111] = 66,
  [112] = 74,
  [113] = 84,
  [114] = 82,
  [115] = 83,
  [116] = 72,
  [117] = 73,
  [118] = 75,
  [119] = 85,
  [120] = 79,
  [121] = 80,
  [122] = 81,
  [123] = 82,
  [124] = 83,
  [125] = 84,
  [126] = 77,
  [127] = 64,
  [128] = 74,
  [129] = 66,
  [130] = 68,
  [131] = 76,
  [132] = 62,
  [133] = 78,
  [134] = 63,
  [135] = 70,
  [136] = 60,
  [137] = 59,
  [138] = 58,
  [139] = 61,
  [140] = 57,
  [141] = 67,
  [142] = 71,
  [143] = 143,
  [144] = 143,
  [145] = 143,
  [146] = 146,
  [147] = 146,
  [148] = 146,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 149,
  [154] = 154,
  [155] = 151,
  [156] = 150,
  [157] = 151,
  [158] = 150,
  [159] = 149,
  [160] = 151,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 161,
  [167] = 167,
  [168] = 167,
  [169] = 167,
  [170] = 163,
  [171] = 171,
  [172] = 162,
  [173] = 161,
  [174] = 163,
  [175] = 165,
  [176] = 165,
  [177] = 85,
  [178] = 62,
  [179] = 179,
  [180] = 179,
  [181] = 179,
  [182] = 182,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 183,
  [187] = 182,
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
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 206},
  [88] = {.lex_state = 206},
  [89] = {.lex_state = 206},
  [90] = {.lex_state = 206},
  [91] = {.lex_state = 206},
  [92] = {.lex_state = 206},
  [93] = {.lex_state = 206},
  [94] = {.lex_state = 206},
  [95] = {.lex_state = 206},
  [96] = {.lex_state = 206},
  [97] = {.lex_state = 206},
  [98] = {.lex_state = 206},
  [99] = {.lex_state = 206},
  [100] = {.lex_state = 206},
  [101] = {.lex_state = 206},
  [102] = {.lex_state = 206},
  [103] = {.lex_state = 206},
  [104] = {.lex_state = 206},
  [105] = {.lex_state = 206},
  [106] = {.lex_state = 206},
  [107] = {.lex_state = 206},
  [108] = {.lex_state = 206},
  [109] = {.lex_state = 206},
  [110] = {.lex_state = 206},
  [111] = {.lex_state = 206},
  [112] = {.lex_state = 206},
  [113] = {.lex_state = 206},
  [114] = {.lex_state = 206},
  [115] = {.lex_state = 206},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 203},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 203},
  [152] = {.lex_state = 203},
  [153] = {.lex_state = 203},
  [154] = {.lex_state = 203},
  [155] = {.lex_state = 203},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 203},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 203},
  [160] = {.lex_state = 203},
  [161] = {.lex_state = 206},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 206},
  [166] = {.lex_state = 206},
  [167] = {.lex_state = 206},
  [168] = {.lex_state = 206},
  [169] = {.lex_state = 206},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 206},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 206},
  [176] = {.lex_state = 206},
  [177] = {.lex_state = 203},
  [178] = {.lex_state = 203},
  [179] = {.lex_state = 206},
  [180] = {.lex_state = 206},
  [181] = {.lex_state = 206},
  [182] = {.lex_state = 202},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 202},
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
    [sym_program] = STATE(185),
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
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym__abbrev] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(53),
    [sym_dot] = ACTIONS(56),
    [aux_sym_comment_token1] = ACTIONS(59),
    [anon_sym_POUND_PIPE] = ACTIONS(62),
    [anon_sym_POUND_SEMI] = ACTIONS(65),
    [sym__line_comment] = ACTIONS(59),
    [sym_boolean] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_POUND_LT_LT] = ACTIONS(71),
    [aux_sym_regex_token1] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(56),
    [sym_character] = ACTIONS(53),
    [aux_sym_symbol_token1] = ACTIONS(80),
    [sym_keyword] = ACTIONS(53),
    [anon_sym_POUND_AMP] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_POUNDfl] = ACTIONS(97),
    [anon_sym_POUNDfx] = ACTIONS(97),
    [anon_sym_POUNDs] = ACTIONS(100),
    [anon_sym_POUNDhash] = ACTIONS(103),
    [anon_sym_POUNDhasheq] = ACTIONS(103),
    [anon_sym_POUNDhasheqv] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(109),
    [anon_sym_POUND_BQUOTE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_COMMA_AT] = ACTIONS(115),
    [anon_sym_POUND_COMMA] = ACTIONS(112),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(115),
    [anon_sym_POUNDreader] = ACTIONS(118),
    [anon_sym_POUNDlang] = ACTIONS(121),
    [anon_sym_POUND_BANG] = ACTIONS(124),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [5] = {
    [sym__token] = STATE(8),
    [sym__all_comment] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_sexp_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_here_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(8),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym__abbrev] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [aux_sym__token_token1] = ACTIONS(177),
    [sym_dot] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(179),
    [sym_character] = ACTIONS(177),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(177),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [6] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym__abbrev] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__token_token1] = ACTIONS(183),
    [sym_dot] = ACTIONS(185),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(185),
    [sym_character] = ACTIONS(183),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(183),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [7] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym__abbrev] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__token_token1] = ACTIONS(187),
    [sym_dot] = ACTIONS(189),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(189),
    [sym_character] = ACTIONS(187),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(187),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [8] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [9] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym__abbrev] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__token_token1] = ACTIONS(191),
    [sym_dot] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(193),
    [sym_character] = ACTIONS(191),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(191),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [10] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(16),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym__abbrev] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [aux_sym__token_token1] = ACTIONS(197),
    [sym_dot] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(199),
    [sym_character] = ACTIONS(197),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(197),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [11] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym__abbrev] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__token_token1] = ACTIONS(201),
    [sym_dot] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(203),
    [sym_character] = ACTIONS(201),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(201),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [12] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym__abbrev] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [18] = {
    [sym__token] = STATE(12),
    [sym__all_comment] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_sexp_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym_string] = STATE(12),
    [sym_byte_string] = STATE(12),
    [sym_here_string] = STATE(12),
    [sym_regex] = STATE(12),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(12),
    [sym_box] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_structure] = STATE(12),
    [sym_hash] = STATE(12),
    [sym_graph] = STATE(12),
    [sym__abbrev] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_extension] = STATE(12),
    [aux_sym_list_repeat1] = STATE(12),
    [aux_sym__token_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [19] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(13),
    [sym_box] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_structure] = STATE(13),
    [sym_hash] = STATE(13),
    [sym_graph] = STATE(13),
    [sym__abbrev] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_extension] = STATE(13),
    [aux_sym_list_repeat1] = STATE(13),
    [aux_sym__token_token1] = ACTIONS(215),
    [sym_dot] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(217),
    [sym_character] = ACTIONS(215),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(215),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [20] = {
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
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym__abbrev] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__token_token1] = ACTIONS(219),
    [sym_dot] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(221),
    [sym_character] = ACTIONS(219),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(219),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [21] = {
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
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym__abbrev] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__token_token1] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(225),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
  },
  [22] = {
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
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym__abbrev] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym__token_token1] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(234),
    [anon_sym_POUND_PIPE] = ACTIONS(237),
    [anon_sym_POUND_SEMI] = ACTIONS(240),
    [sym__line_comment] = ACTIONS(234),
    [sym_boolean] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_POUND_LT_LT] = ACTIONS(249),
    [aux_sym_regex_token1] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [sym_number] = ACTIONS(243),
    [sym_character] = ACTIONS(231),
    [aux_sym_symbol_token1] = ACTIONS(258),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_POUND_AMP] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_POUNDfl] = ACTIONS(273),
    [anon_sym_POUNDfx] = ACTIONS(273),
    [anon_sym_POUNDs] = ACTIONS(276),
    [anon_sym_POUNDhash] = ACTIONS(279),
    [anon_sym_POUNDhasheq] = ACTIONS(279),
    [anon_sym_POUNDhasheqv] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_POUND_SQUOTE] = ACTIONS(285),
    [anon_sym_POUND_BQUOTE] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_COMMA_AT] = ACTIONS(291),
    [anon_sym_POUND_COMMA] = ACTIONS(288),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(291),
    [anon_sym_POUNDreader] = ACTIONS(294),
    [anon_sym_POUNDlang] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
  },
  [23] = {
    [sym__skip] = STATE(33),
    [sym__all_comment] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_byte_string] = STATE(125),
    [sym_here_string] = STATE(125),
    [sym_regex] = STATE(125),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(125),
    [sym_box] = STATE(125),
    [sym_list] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_structure] = STATE(125),
    [sym_hash] = STATE(125),
    [sym_graph] = STATE(125),
    [sym__abbrev] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_unquote] = STATE(125),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(311),
    [sym_character] = ACTIONS(321),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(321),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [24] = {
    [sym__skip] = STATE(47),
    [sym__all_comment] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_byte_string] = STATE(87),
    [sym_here_string] = STATE(87),
    [sym_regex] = STATE(87),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(87),
    [sym_box] = STATE(87),
    [sym_list] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_structure] = STATE(87),
    [sym_hash] = STATE(87),
    [sym_graph] = STATE(87),
    [sym__abbrev] = STATE(87),
    [sym_quote] = STATE(87),
    [sym_unquote] = STATE(87),
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__token_token1] = ACTIONS(347),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(349),
    [sym_character] = ACTIONS(351),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(351),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [25] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(72),
    [sym_string] = STATE(72),
    [sym_byte_string] = STATE(72),
    [sym_here_string] = STATE(72),
    [sym_regex] = STATE(72),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(72),
    [sym_box] = STATE(72),
    [sym_list] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_structure] = STATE(72),
    [sym_hash] = STATE(72),
    [sym_graph] = STATE(72),
    [sym__abbrev] = STATE(72),
    [sym_quote] = STATE(72),
    [sym_unquote] = STATE(72),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(355),
    [sym_character] = ACTIONS(357),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(357),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [26] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym__abbrev] = STATE(133),
    [sym_quote] = STATE(133),
    [sym_unquote] = STATE(133),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(359),
    [sym_character] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(361),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [27] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(105),
    [sym_string] = STATE(105),
    [sym_byte_string] = STATE(105),
    [sym_here_string] = STATE(105),
    [sym_regex] = STATE(105),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(105),
    [sym_box] = STATE(105),
    [sym_list] = STATE(105),
    [sym_vector] = STATE(105),
    [sym_structure] = STATE(105),
    [sym_hash] = STATE(105),
    [sym_graph] = STATE(105),
    [sym__abbrev] = STATE(105),
    [sym_quote] = STATE(105),
    [sym_unquote] = STATE(105),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(363),
    [sym_character] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(365),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [28] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(138),
    [sym_string] = STATE(138),
    [sym_byte_string] = STATE(138),
    [sym_here_string] = STATE(138),
    [sym_regex] = STATE(138),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(138),
    [sym_box] = STATE(138),
    [sym_list] = STATE(138),
    [sym_vector] = STATE(138),
    [sym_structure] = STATE(138),
    [sym_hash] = STATE(138),
    [sym_graph] = STATE(138),
    [sym__abbrev] = STATE(138),
    [sym_quote] = STATE(138),
    [sym_unquote] = STATE(138),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(369),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(369),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [29] = {
    [sym__skip] = STATE(28),
    [sym__all_comment] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_sexp_comment] = STATE(28),
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_byte_string] = STATE(142),
    [sym_here_string] = STATE(142),
    [sym_regex] = STATE(142),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(142),
    [sym_box] = STATE(142),
    [sym_list] = STATE(142),
    [sym_vector] = STATE(142),
    [sym_structure] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_graph] = STATE(142),
    [sym__abbrev] = STATE(142),
    [sym_quote] = STATE(142),
    [sym_unquote] = STATE(142),
    [aux_sym_sexp_comment_repeat1] = STATE(28),
    [aux_sym__token_token1] = ACTIONS(371),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(373),
    [sym_character] = ACTIONS(375),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(375),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [30] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(67),
    [sym_string] = STATE(67),
    [sym_byte_string] = STATE(67),
    [sym_here_string] = STATE(67),
    [sym_regex] = STATE(67),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(67),
    [sym_box] = STATE(67),
    [sym_list] = STATE(67),
    [sym_vector] = STATE(67),
    [sym_structure] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_graph] = STATE(67),
    [sym__abbrev] = STATE(67),
    [sym_quote] = STATE(67),
    [sym_unquote] = STATE(67),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(377),
    [sym_character] = ACTIONS(379),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(379),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [31] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(141),
    [sym_string] = STATE(141),
    [sym_byte_string] = STATE(141),
    [sym_here_string] = STATE(141),
    [sym_regex] = STATE(141),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(141),
    [sym_box] = STATE(141),
    [sym_list] = STATE(141),
    [sym_vector] = STATE(141),
    [sym_structure] = STATE(141),
    [sym_hash] = STATE(141),
    [sym_graph] = STATE(141),
    [sym__abbrev] = STATE(141),
    [sym_quote] = STATE(141),
    [sym_unquote] = STATE(141),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [32] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_byte_string] = STATE(140),
    [sym_here_string] = STATE(140),
    [sym_regex] = STATE(140),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(140),
    [sym_box] = STATE(140),
    [sym_list] = STATE(140),
    [sym_vector] = STATE(140),
    [sym_structure] = STATE(140),
    [sym_hash] = STATE(140),
    [sym_graph] = STATE(140),
    [sym__abbrev] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_unquote] = STATE(140),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(387),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [33] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_byte_string] = STATE(116),
    [sym_here_string] = STATE(116),
    [sym_regex] = STATE(116),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(116),
    [sym_box] = STATE(116),
    [sym_list] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_structure] = STATE(116),
    [sym_hash] = STATE(116),
    [sym_graph] = STATE(116),
    [sym__abbrev] = STATE(116),
    [sym_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(389),
    [sym_character] = ACTIONS(391),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(391),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [34] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(78),
    [sym_string] = STATE(78),
    [sym_byte_string] = STATE(78),
    [sym_here_string] = STATE(78),
    [sym_regex] = STATE(78),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(78),
    [sym_box] = STATE(78),
    [sym_list] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_structure] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_graph] = STATE(78),
    [sym__abbrev] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_unquote] = STATE(78),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(393),
    [sym_character] = ACTIONS(395),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(395),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [35] = {
    [sym__skip] = STATE(53),
    [sym__all_comment] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym_sexp_comment] = STATE(53),
    [sym__datum] = STATE(65),
    [sym_string] = STATE(65),
    [sym_byte_string] = STATE(65),
    [sym_here_string] = STATE(65),
    [sym_regex] = STATE(65),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(65),
    [sym_box] = STATE(65),
    [sym_list] = STATE(65),
    [sym_vector] = STATE(65),
    [sym_structure] = STATE(65),
    [sym_hash] = STATE(65),
    [sym_graph] = STATE(65),
    [sym__abbrev] = STATE(65),
    [sym_quote] = STATE(65),
    [sym_unquote] = STATE(65),
    [aux_sym_sexp_comment_repeat1] = STATE(53),
    [aux_sym__token_token1] = ACTIONS(397),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(399),
    [sym_character] = ACTIONS(401),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(401),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [36] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(100),
    [sym_box] = STATE(100),
    [sym_list] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_structure] = STATE(100),
    [sym_hash] = STATE(100),
    [sym_graph] = STATE(100),
    [sym__abbrev] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_unquote] = STATE(100),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(403),
    [sym_character] = ACTIONS(405),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(405),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [37] = {
    [sym__skip] = STATE(31),
    [sym__all_comment] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(131),
    [sym_box] = STATE(131),
    [sym_list] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_structure] = STATE(131),
    [sym_hash] = STATE(131),
    [sym_graph] = STATE(131),
    [sym__abbrev] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_unquote] = STATE(131),
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(411),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(411),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [38] = {
    [sym__skip] = STATE(27),
    [sym__all_comment] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(95),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym__abbrev] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_unquote] = STATE(95),
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__token_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [39] = {
    [sym__skip] = STATE(49),
    [sym__all_comment] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym__abbrev] = STATE(108),
    [sym_quote] = STATE(108),
    [sym_unquote] = STATE(108),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__token_token1] = ACTIONS(419),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [40] = {
    [sym__skip] = STATE(48),
    [sym__all_comment] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_sexp_comment] = STATE(48),
    [sym__datum] = STATE(71),
    [sym_string] = STATE(71),
    [sym_byte_string] = STATE(71),
    [sym_here_string] = STATE(71),
    [sym_regex] = STATE(71),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(71),
    [sym_box] = STATE(71),
    [sym_list] = STATE(71),
    [sym_vector] = STATE(71),
    [sym_structure] = STATE(71),
    [sym_hash] = STATE(71),
    [sym_graph] = STATE(71),
    [sym__abbrev] = STATE(71),
    [sym_quote] = STATE(71),
    [sym_unquote] = STATE(71),
    [aux_sym_sexp_comment_repeat1] = STATE(48),
    [aux_sym__token_token1] = ACTIONS(425),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [41] = {
    [sym__skip] = STATE(32),
    [sym__all_comment] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(130),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym__abbrev] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_unquote] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__token_token1] = ACTIONS(431),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(433),
    [sym_character] = ACTIONS(435),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(435),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [42] = {
    [sym__skip] = STATE(30),
    [sym__all_comment] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_byte_string] = STATE(76),
    [sym_here_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(76),
    [sym_box] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_structure] = STATE(76),
    [sym_hash] = STATE(76),
    [sym_graph] = STATE(76),
    [sym__abbrev] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_unquote] = STATE(76),
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(437),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(439),
    [sym_character] = ACTIONS(441),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(441),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [43] = {
    [sym__skip] = STATE(51),
    [sym__all_comment] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(68),
    [sym_string] = STATE(68),
    [sym_byte_string] = STATE(68),
    [sym_here_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(68),
    [sym_box] = STATE(68),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_structure] = STATE(68),
    [sym_hash] = STATE(68),
    [sym_graph] = STATE(68),
    [sym__abbrev] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_unquote] = STATE(68),
    [aux_sym_sexp_comment_repeat1] = STATE(51),
    [aux_sym__token_token1] = ACTIONS(443),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(445),
    [sym_character] = ACTIONS(447),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(447),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [44] = {
    [sym__skip] = STATE(25),
    [sym__all_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_sexp_comment] = STATE(25),
    [sym__datum] = STATE(84),
    [sym_string] = STATE(84),
    [sym_byte_string] = STATE(84),
    [sym_here_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(84),
    [sym_box] = STATE(84),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_structure] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_graph] = STATE(84),
    [sym__abbrev] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_unquote] = STATE(84),
    [aux_sym_sexp_comment_repeat1] = STATE(25),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(451),
    [sym_character] = ACTIONS(453),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(453),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [45] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(98),
    [sym_box] = STATE(98),
    [sym_list] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_structure] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_graph] = STATE(98),
    [sym__abbrev] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_unquote] = STATE(98),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(457),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [46] = {
    [sym__skip] = STATE(45),
    [sym__all_comment] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym_sexp_comment] = STATE(45),
    [sym__datum] = STATE(109),
    [sym_string] = STATE(109),
    [sym_byte_string] = STATE(109),
    [sym_here_string] = STATE(109),
    [sym_regex] = STATE(109),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(109),
    [sym_box] = STATE(109),
    [sym_list] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_structure] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_graph] = STATE(109),
    [sym__abbrev] = STATE(109),
    [sym_quote] = STATE(109),
    [sym_unquote] = STATE(109),
    [aux_sym_sexp_comment_repeat1] = STATE(45),
    [aux_sym__token_token1] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(461),
    [sym_character] = ACTIONS(463),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(463),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [47] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(97),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [sym__abbrev] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_unquote] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(465),
    [sym_character] = ACTIONS(467),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(467),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [48] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(58),
    [sym_string] = STATE(58),
    [sym_byte_string] = STATE(58),
    [sym_here_string] = STATE(58),
    [sym_regex] = STATE(58),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(58),
    [sym_box] = STATE(58),
    [sym_list] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_structure] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_graph] = STATE(58),
    [sym__abbrev] = STATE(58),
    [sym_quote] = STATE(58),
    [sym_unquote] = STATE(58),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(469),
    [sym_character] = ACTIONS(471),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(471),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [49] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_byte_string] = STATE(94),
    [sym_here_string] = STATE(94),
    [sym_regex] = STATE(94),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(94),
    [sym_box] = STATE(94),
    [sym_list] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_structure] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_graph] = STATE(94),
    [sym__abbrev] = STATE(94),
    [sym_quote] = STATE(94),
    [sym_unquote] = STATE(94),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(475),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [50] = {
    [sym__skip] = STATE(36),
    [sym__all_comment] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym_sexp_comment] = STATE(36),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(113),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym__abbrev] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_unquote] = STATE(113),
    [aux_sym_sexp_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(479),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(481),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [51] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(57),
    [sym_string] = STATE(57),
    [sym_byte_string] = STATE(57),
    [sym_here_string] = STATE(57),
    [sym_regex] = STATE(57),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(57),
    [sym_box] = STATE(57),
    [sym_list] = STATE(57),
    [sym_vector] = STATE(57),
    [sym_structure] = STATE(57),
    [sym_hash] = STATE(57),
    [sym_graph] = STATE(57),
    [sym__abbrev] = STATE(57),
    [sym_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(483),
    [sym_character] = ACTIONS(485),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(485),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [52] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(89),
    [sym_string] = STATE(89),
    [sym_byte_string] = STATE(89),
    [sym_here_string] = STATE(89),
    [sym_regex] = STATE(89),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(89),
    [sym_box] = STATE(89),
    [sym_list] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_structure] = STATE(89),
    [sym_hash] = STATE(89),
    [sym_graph] = STATE(89),
    [sym__abbrev] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_unquote] = STATE(89),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(487),
    [sym_character] = ACTIONS(489),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(489),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [53] = {
    [sym__skip] = STATE(86),
    [sym__all_comment] = STATE(86),
    [sym_comment] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_sexp_comment] = STATE(86),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_byte_string] = STATE(69),
    [sym_here_string] = STATE(69),
    [sym_regex] = STATE(69),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(69),
    [sym_box] = STATE(69),
    [sym_list] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_structure] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_graph] = STATE(69),
    [sym__abbrev] = STATE(69),
    [sym_quote] = STATE(69),
    [sym_unquote] = STATE(69),
    [aux_sym_sexp_comment_repeat1] = STATE(86),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(491),
    [sym_character] = ACTIONS(493),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(493),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [54] = {
    [sym__skip] = STATE(34),
    [sym__all_comment] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(77),
    [sym_string] = STATE(77),
    [sym_byte_string] = STATE(77),
    [sym_here_string] = STATE(77),
    [sym_regex] = STATE(77),
    [sym__real_string] = STATE(75),
    [sym_symbol] = STATE(77),
    [sym_box] = STATE(77),
    [sym_list] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_structure] = STATE(77),
    [sym_hash] = STATE(77),
    [sym_graph] = STATE(77),
    [sym__abbrev] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_unquote] = STATE(77),
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__token_token1] = ACTIONS(495),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(497),
    [sym_character] = ACTIONS(499),
    [aux_sym_symbol_token1] = ACTIONS(145),
    [sym_keyword] = ACTIONS(499),
    [anon_sym_POUND_AMP] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(157),
    [anon_sym_POUNDfx] = ACTIONS(157),
    [anon_sym_POUNDs] = ACTIONS(159),
    [anon_sym_POUNDhash] = ACTIONS(161),
    [anon_sym_POUNDhasheq] = ACTIONS(161),
    [anon_sym_POUNDhasheqv] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(165),
    [anon_sym_POUND_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COMMA_AT] = ACTIONS(169),
    [anon_sym_POUND_COMMA] = ACTIONS(167),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(169),
  },
  [55] = {
    [sym__skip] = STATE(26),
    [sym__all_comment] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(118),
    [sym_symbol] = STATE(126),
    [sym_box] = STATE(126),
    [sym_list] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_structure] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_graph] = STATE(126),
    [sym__abbrev] = STATE(126),
    [sym_quote] = STATE(126),
    [sym_unquote] = STATE(126),
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__token_token1] = ACTIONS(501),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_POUND_LT_LT] = ACTIONS(315),
    [aux_sym_regex_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_number] = ACTIONS(503),
    [sym_character] = ACTIONS(505),
    [aux_sym_symbol_token1] = ACTIONS(323),
    [sym_keyword] = ACTIONS(505),
    [anon_sym_POUND_AMP] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUNDfl] = ACTIONS(333),
    [anon_sym_POUNDfx] = ACTIONS(333),
    [anon_sym_POUNDs] = ACTIONS(335),
    [anon_sym_POUNDhash] = ACTIONS(337),
    [anon_sym_POUNDhasheq] = ACTIONS(337),
    [anon_sym_POUNDhasheqv] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_POUND_SQUOTE] = ACTIONS(341),
    [anon_sym_POUND_BQUOTE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COMMA_AT] = ACTIONS(345),
    [anon_sym_POUND_COMMA] = ACTIONS(343),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(345),
  },
  [56] = {
    [sym__skip] = STATE(52),
    [sym__all_comment] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym_sexp_comment] = STATE(52),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(91),
    [sym_symbol] = STATE(101),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym__abbrev] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [aux_sym_sexp_comment_repeat1] = STATE(52),
    [aux_sym__token_token1] = ACTIONS(507),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(509),
    [sym_character] = ACTIONS(511),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(511),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(45),
  },
  [57] = {
    [aux_sym__token_token1] = ACTIONS(513),
    [sym_dot] = ACTIONS(515),
    [aux_sym_comment_token1] = ACTIONS(513),
    [anon_sym_POUND_PIPE] = ACTIONS(513),
    [anon_sym_POUND_SEMI] = ACTIONS(513),
    [sym__line_comment] = ACTIONS(513),
    [sym_boolean] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_POUND_LT_LT] = ACTIONS(513),
    [aux_sym_regex_token1] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_number] = ACTIONS(515),
    [sym_character] = ACTIONS(513),
    [aux_sym_symbol_token1] = ACTIONS(515),
    [sym_keyword] = ACTIONS(513),
    [anon_sym_POUND_AMP] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_POUNDfl] = ACTIONS(513),
    [anon_sym_POUNDfx] = ACTIONS(513),
    [anon_sym_POUNDs] = ACTIONS(513),
    [anon_sym_POUNDhash] = ACTIONS(515),
    [anon_sym_POUNDhasheq] = ACTIONS(515),
    [anon_sym_POUNDhasheqv] = ACTIONS(513),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(513),
    [anon_sym_POUND_BQUOTE] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_COMMA_AT] = ACTIONS(513),
    [anon_sym_POUND_COMMA] = ACTIONS(515),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(513),
    [anon_sym_POUNDreader] = ACTIONS(513),
    [anon_sym_POUNDlang] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(515),
  },
  [58] = {
    [aux_sym__token_token1] = ACTIONS(517),
    [sym_dot] = ACTIONS(519),
    [aux_sym_comment_token1] = ACTIONS(517),
    [anon_sym_POUND_PIPE] = ACTIONS(517),
    [anon_sym_POUND_SEMI] = ACTIONS(517),
    [sym__line_comment] = ACTIONS(517),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_POUND_LT_LT] = ACTIONS(517),
    [aux_sym_regex_token1] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym_number] = ACTIONS(519),
    [sym_character] = ACTIONS(517),
    [aux_sym_symbol_token1] = ACTIONS(519),
    [sym_keyword] = ACTIONS(517),
    [anon_sym_POUND_AMP] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_POUNDfl] = ACTIONS(517),
    [anon_sym_POUNDfx] = ACTIONS(517),
    [anon_sym_POUNDs] = ACTIONS(517),
    [anon_sym_POUNDhash] = ACTIONS(519),
    [anon_sym_POUNDhasheq] = ACTIONS(519),
    [anon_sym_POUNDhasheqv] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [anon_sym_POUND_SQUOTE] = ACTIONS(517),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(517),
    [anon_sym_POUND_COMMA] = ACTIONS(519),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(517),
    [anon_sym_POUNDreader] = ACTIONS(517),
    [anon_sym_POUNDlang] = ACTIONS(517),
    [anon_sym_POUND_BANG] = ACTIONS(519),
  },
  [59] = {
    [aux_sym__token_token1] = ACTIONS(521),
    [sym_dot] = ACTIONS(523),
    [aux_sym_comment_token1] = ACTIONS(521),
    [anon_sym_POUND_PIPE] = ACTIONS(521),
    [anon_sym_POUND_SEMI] = ACTIONS(521),
    [sym__line_comment] = ACTIONS(521),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(523),
    [anon_sym_POUND_LT_LT] = ACTIONS(521),
    [aux_sym_regex_token1] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym_number] = ACTIONS(523),
    [sym_character] = ACTIONS(521),
    [aux_sym_symbol_token1] = ACTIONS(523),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_POUNDfl] = ACTIONS(521),
    [anon_sym_POUNDfx] = ACTIONS(521),
    [anon_sym_POUNDs] = ACTIONS(521),
    [anon_sym_POUNDhash] = ACTIONS(523),
    [anon_sym_POUNDhasheq] = ACTIONS(523),
    [anon_sym_POUNDhasheqv] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [anon_sym_POUND_SQUOTE] = ACTIONS(521),
    [anon_sym_POUND_BQUOTE] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUNDreader] = ACTIONS(521),
    [anon_sym_POUNDlang] = ACTIONS(521),
    [anon_sym_POUND_BANG] = ACTIONS(523),
  },
  [60] = {
    [aux_sym__token_token1] = ACTIONS(525),
    [sym_dot] = ACTIONS(527),
    [aux_sym_comment_token1] = ACTIONS(525),
    [anon_sym_POUND_PIPE] = ACTIONS(525),
    [anon_sym_POUND_SEMI] = ACTIONS(525),
    [sym__line_comment] = ACTIONS(525),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_POUND_LT_LT] = ACTIONS(525),
    [aux_sym_regex_token1] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [sym_number] = ACTIONS(527),
    [sym_character] = ACTIONS(525),
    [aux_sym_symbol_token1] = ACTIONS(527),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(525),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_POUNDfl] = ACTIONS(525),
    [anon_sym_POUNDfx] = ACTIONS(525),
    [anon_sym_POUNDs] = ACTIONS(525),
    [anon_sym_POUNDhash] = ACTIONS(527),
    [anon_sym_POUNDhasheq] = ACTIONS(527),
    [anon_sym_POUNDhasheqv] = ACTIONS(525),
    [anon_sym_SQUOTE] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [anon_sym_POUND_SQUOTE] = ACTIONS(525),
    [anon_sym_POUND_BQUOTE] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_COMMA_AT] = ACTIONS(525),
    [anon_sym_POUND_COMMA] = ACTIONS(527),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
    [anon_sym_POUNDreader] = ACTIONS(525),
    [anon_sym_POUNDlang] = ACTIONS(525),
    [anon_sym_POUND_BANG] = ACTIONS(527),
  },
  [61] = {
    [aux_sym__token_token1] = ACTIONS(529),
    [sym_dot] = ACTIONS(531),
    [aux_sym_comment_token1] = ACTIONS(529),
    [anon_sym_POUND_PIPE] = ACTIONS(529),
    [anon_sym_POUND_SEMI] = ACTIONS(529),
    [sym__line_comment] = ACTIONS(529),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_POUND_LT_LT] = ACTIONS(529),
    [aux_sym_regex_token1] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_number] = ACTIONS(531),
    [sym_character] = ACTIONS(529),
    [aux_sym_symbol_token1] = ACTIONS(531),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_POUNDfl] = ACTIONS(529),
    [anon_sym_POUNDfx] = ACTIONS(529),
    [anon_sym_POUNDs] = ACTIONS(529),
    [anon_sym_POUNDhash] = ACTIONS(531),
    [anon_sym_POUNDhasheq] = ACTIONS(531),
    [anon_sym_POUNDhasheqv] = ACTIONS(529),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_BQUOTE] = ACTIONS(529),
    [anon_sym_POUND_SQUOTE] = ACTIONS(529),
    [anon_sym_POUND_BQUOTE] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_COMMA_AT] = ACTIONS(529),
    [anon_sym_POUND_COMMA] = ACTIONS(531),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(529),
    [anon_sym_POUNDreader] = ACTIONS(529),
    [anon_sym_POUNDlang] = ACTIONS(529),
    [anon_sym_POUND_BANG] = ACTIONS(531),
  },
  [62] = {
    [aux_sym__token_token1] = ACTIONS(533),
    [sym_dot] = ACTIONS(535),
    [aux_sym_comment_token1] = ACTIONS(533),
    [anon_sym_POUND_PIPE] = ACTIONS(533),
    [anon_sym_POUND_SEMI] = ACTIONS(533),
    [sym__line_comment] = ACTIONS(533),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(535),
    [anon_sym_POUND_LT_LT] = ACTIONS(533),
    [aux_sym_regex_token1] = ACTIONS(533),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [sym_number] = ACTIONS(535),
    [sym_character] = ACTIONS(533),
    [aux_sym_symbol_token1] = ACTIONS(535),
    [sym_keyword] = ACTIONS(533),
    [anon_sym_POUND_AMP] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_POUNDfl] = ACTIONS(533),
    [anon_sym_POUNDfx] = ACTIONS(533),
    [anon_sym_POUNDs] = ACTIONS(533),
    [anon_sym_POUNDhash] = ACTIONS(535),
    [anon_sym_POUNDhasheq] = ACTIONS(535),
    [anon_sym_POUNDhasheqv] = ACTIONS(533),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [anon_sym_POUND_SQUOTE] = ACTIONS(533),
    [anon_sym_POUND_BQUOTE] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_COMMA_AT] = ACTIONS(533),
    [anon_sym_POUND_COMMA] = ACTIONS(535),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(533),
    [anon_sym_POUNDreader] = ACTIONS(533),
    [anon_sym_POUNDlang] = ACTIONS(533),
    [anon_sym_POUND_BANG] = ACTIONS(535),
  },
  [63] = {
    [aux_sym__token_token1] = ACTIONS(537),
    [sym_dot] = ACTIONS(539),
    [aux_sym_comment_token1] = ACTIONS(537),
    [anon_sym_POUND_PIPE] = ACTIONS(537),
    [anon_sym_POUND_SEMI] = ACTIONS(537),
    [sym__line_comment] = ACTIONS(537),
    [sym_boolean] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LT_LT] = ACTIONS(537),
    [aux_sym_regex_token1] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym_number] = ACTIONS(539),
    [sym_character] = ACTIONS(537),
    [aux_sym_symbol_token1] = ACTIONS(539),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_POUNDfl] = ACTIONS(537),
    [anon_sym_POUNDfx] = ACTIONS(537),
    [anon_sym_POUNDs] = ACTIONS(537),
    [anon_sym_POUNDhash] = ACTIONS(539),
    [anon_sym_POUNDhasheq] = ACTIONS(539),
    [anon_sym_POUNDhasheqv] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [anon_sym_POUND_SQUOTE] = ACTIONS(537),
    [anon_sym_POUND_BQUOTE] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_COMMA_AT] = ACTIONS(537),
    [anon_sym_POUND_COMMA] = ACTIONS(539),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(537),
    [anon_sym_POUNDreader] = ACTIONS(537),
    [anon_sym_POUNDlang] = ACTIONS(537),
    [anon_sym_POUND_BANG] = ACTIONS(539),
  },
  [64] = {
    [aux_sym__token_token1] = ACTIONS(541),
    [sym_dot] = ACTIONS(543),
    [aux_sym_comment_token1] = ACTIONS(541),
    [anon_sym_POUND_PIPE] = ACTIONS(541),
    [anon_sym_POUND_SEMI] = ACTIONS(541),
    [sym__line_comment] = ACTIONS(541),
    [sym_boolean] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_POUND_LT_LT] = ACTIONS(541),
    [aux_sym_regex_token1] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [sym_number] = ACTIONS(543),
    [sym_character] = ACTIONS(541),
    [aux_sym_symbol_token1] = ACTIONS(543),
    [sym_keyword] = ACTIONS(541),
    [anon_sym_POUND_AMP] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_POUNDfl] = ACTIONS(541),
    [anon_sym_POUNDfx] = ACTIONS(541),
    [anon_sym_POUNDs] = ACTIONS(541),
    [anon_sym_POUNDhash] = ACTIONS(543),
    [anon_sym_POUNDhasheq] = ACTIONS(543),
    [anon_sym_POUNDhasheqv] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [anon_sym_POUND_SQUOTE] = ACTIONS(541),
    [anon_sym_POUND_BQUOTE] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_COMMA_AT] = ACTIONS(541),
    [anon_sym_POUND_COMMA] = ACTIONS(543),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(541),
    [anon_sym_POUNDreader] = ACTIONS(541),
    [anon_sym_POUNDlang] = ACTIONS(541),
    [anon_sym_POUND_BANG] = ACTIONS(543),
  },
  [65] = {
    [aux_sym__token_token1] = ACTIONS(545),
    [sym_dot] = ACTIONS(547),
    [aux_sym_comment_token1] = ACTIONS(545),
    [anon_sym_POUND_PIPE] = ACTIONS(545),
    [anon_sym_POUND_SEMI] = ACTIONS(545),
    [sym__line_comment] = ACTIONS(545),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_POUND_LT_LT] = ACTIONS(545),
    [aux_sym_regex_token1] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(545),
    [aux_sym_symbol_token1] = ACTIONS(547),
    [sym_keyword] = ACTIONS(545),
    [anon_sym_POUND_AMP] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_POUNDfl] = ACTIONS(545),
    [anon_sym_POUNDfx] = ACTIONS(545),
    [anon_sym_POUNDs] = ACTIONS(545),
    [anon_sym_POUNDhash] = ACTIONS(547),
    [anon_sym_POUNDhasheq] = ACTIONS(547),
    [anon_sym_POUNDhasheqv] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [anon_sym_POUND_SQUOTE] = ACTIONS(545),
    [anon_sym_POUND_BQUOTE] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_COMMA_AT] = ACTIONS(545),
    [anon_sym_POUND_COMMA] = ACTIONS(547),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(545),
    [anon_sym_POUNDreader] = ACTIONS(545),
    [anon_sym_POUNDlang] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(547),
  },
  [66] = {
    [aux_sym__token_token1] = ACTIONS(549),
    [sym_dot] = ACTIONS(551),
    [aux_sym_comment_token1] = ACTIONS(549),
    [anon_sym_POUND_PIPE] = ACTIONS(549),
    [anon_sym_POUND_SEMI] = ACTIONS(549),
    [sym__line_comment] = ACTIONS(549),
    [sym_boolean] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(551),
    [anon_sym_POUND_LT_LT] = ACTIONS(549),
    [aux_sym_regex_token1] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_number] = ACTIONS(551),
    [sym_character] = ACTIONS(549),
    [aux_sym_symbol_token1] = ACTIONS(551),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_POUNDfl] = ACTIONS(549),
    [anon_sym_POUNDfx] = ACTIONS(549),
    [anon_sym_POUNDs] = ACTIONS(549),
    [anon_sym_POUNDhash] = ACTIONS(551),
    [anon_sym_POUNDhasheq] = ACTIONS(551),
    [anon_sym_POUNDhasheqv] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(549),
    [anon_sym_POUND_SQUOTE] = ACTIONS(549),
    [anon_sym_POUND_BQUOTE] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_COMMA_AT] = ACTIONS(549),
    [anon_sym_POUND_COMMA] = ACTIONS(551),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(549),
    [anon_sym_POUNDreader] = ACTIONS(549),
    [anon_sym_POUNDlang] = ACTIONS(549),
    [anon_sym_POUND_BANG] = ACTIONS(551),
  },
  [67] = {
    [aux_sym__token_token1] = ACTIONS(553),
    [sym_dot] = ACTIONS(555),
    [aux_sym_comment_token1] = ACTIONS(553),
    [anon_sym_POUND_PIPE] = ACTIONS(553),
    [anon_sym_POUND_SEMI] = ACTIONS(553),
    [sym__line_comment] = ACTIONS(553),
    [sym_boolean] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(555),
    [anon_sym_POUND_LT_LT] = ACTIONS(553),
    [aux_sym_regex_token1] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym_number] = ACTIONS(555),
    [sym_character] = ACTIONS(553),
    [aux_sym_symbol_token1] = ACTIONS(555),
    [sym_keyword] = ACTIONS(553),
    [anon_sym_POUND_AMP] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_POUNDfl] = ACTIONS(553),
    [anon_sym_POUNDfx] = ACTIONS(553),
    [anon_sym_POUNDs] = ACTIONS(553),
    [anon_sym_POUNDhash] = ACTIONS(555),
    [anon_sym_POUNDhasheq] = ACTIONS(555),
    [anon_sym_POUNDhasheqv] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [anon_sym_POUND_SQUOTE] = ACTIONS(553),
    [anon_sym_POUND_BQUOTE] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_COMMA_AT] = ACTIONS(553),
    [anon_sym_POUND_COMMA] = ACTIONS(555),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(553),
    [anon_sym_POUNDreader] = ACTIONS(553),
    [anon_sym_POUNDlang] = ACTIONS(553),
    [anon_sym_POUND_BANG] = ACTIONS(555),
  },
  [68] = {
    [aux_sym__token_token1] = ACTIONS(557),
    [sym_dot] = ACTIONS(559),
    [aux_sym_comment_token1] = ACTIONS(557),
    [anon_sym_POUND_PIPE] = ACTIONS(557),
    [anon_sym_POUND_SEMI] = ACTIONS(557),
    [sym__line_comment] = ACTIONS(557),
    [sym_boolean] = ACTIONS(559),
    [anon_sym_POUND] = ACTIONS(559),
    [anon_sym_POUND_LT_LT] = ACTIONS(557),
    [aux_sym_regex_token1] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [sym_number] = ACTIONS(559),
    [sym_character] = ACTIONS(557),
    [aux_sym_symbol_token1] = ACTIONS(559),
    [sym_keyword] = ACTIONS(557),
    [anon_sym_POUND_AMP] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_POUNDfl] = ACTIONS(557),
    [anon_sym_POUNDfx] = ACTIONS(557),
    [anon_sym_POUNDs] = ACTIONS(557),
    [anon_sym_POUNDhash] = ACTIONS(559),
    [anon_sym_POUNDhasheq] = ACTIONS(559),
    [anon_sym_POUNDhasheqv] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [anon_sym_POUND_SQUOTE] = ACTIONS(557),
    [anon_sym_POUND_BQUOTE] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(559),
    [anon_sym_COMMA_AT] = ACTIONS(557),
    [anon_sym_POUND_COMMA] = ACTIONS(559),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(557),
    [anon_sym_POUNDreader] = ACTIONS(557),
    [anon_sym_POUNDlang] = ACTIONS(557),
    [anon_sym_POUND_BANG] = ACTIONS(559),
  },
  [69] = {
    [aux_sym__token_token1] = ACTIONS(561),
    [sym_dot] = ACTIONS(563),
    [aux_sym_comment_token1] = ACTIONS(561),
    [anon_sym_POUND_PIPE] = ACTIONS(561),
    [anon_sym_POUND_SEMI] = ACTIONS(561),
    [sym__line_comment] = ACTIONS(561),
    [sym_boolean] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_POUND_LT_LT] = ACTIONS(561),
    [aux_sym_regex_token1] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_number] = ACTIONS(563),
    [sym_character] = ACTIONS(561),
    [aux_sym_symbol_token1] = ACTIONS(563),
    [sym_keyword] = ACTIONS(561),
    [anon_sym_POUND_AMP] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_LBRACE] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_POUNDfl] = ACTIONS(561),
    [anon_sym_POUNDfx] = ACTIONS(561),
    [anon_sym_POUNDs] = ACTIONS(561),
    [anon_sym_POUNDhash] = ACTIONS(563),
    [anon_sym_POUNDhasheq] = ACTIONS(563),
    [anon_sym_POUNDhasheqv] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_POUND_SQUOTE] = ACTIONS(561),
    [anon_sym_POUND_BQUOTE] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_COMMA_AT] = ACTIONS(561),
    [anon_sym_POUND_COMMA] = ACTIONS(563),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(561),
    [anon_sym_POUNDreader] = ACTIONS(561),
    [anon_sym_POUNDlang] = ACTIONS(561),
    [anon_sym_POUND_BANG] = ACTIONS(563),
  },
  [70] = {
    [aux_sym__token_token1] = ACTIONS(565),
    [sym_dot] = ACTIONS(567),
    [aux_sym_comment_token1] = ACTIONS(565),
    [anon_sym_POUND_PIPE] = ACTIONS(565),
    [anon_sym_POUND_SEMI] = ACTIONS(565),
    [sym__line_comment] = ACTIONS(565),
    [sym_boolean] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(567),
    [anon_sym_POUND_LT_LT] = ACTIONS(565),
    [aux_sym_regex_token1] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym_number] = ACTIONS(567),
    [sym_character] = ACTIONS(565),
    [aux_sym_symbol_token1] = ACTIONS(567),
    [sym_keyword] = ACTIONS(565),
    [anon_sym_POUND_AMP] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_RBRACK] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_POUNDfl] = ACTIONS(565),
    [anon_sym_POUNDfx] = ACTIONS(565),
    [anon_sym_POUNDs] = ACTIONS(565),
    [anon_sym_POUNDhash] = ACTIONS(567),
    [anon_sym_POUNDhasheq] = ACTIONS(567),
    [anon_sym_POUNDhasheqv] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [anon_sym_POUND_SQUOTE] = ACTIONS(565),
    [anon_sym_POUND_BQUOTE] = ACTIONS(565),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_COMMA_AT] = ACTIONS(565),
    [anon_sym_POUND_COMMA] = ACTIONS(567),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(565),
    [anon_sym_POUNDreader] = ACTIONS(565),
    [anon_sym_POUNDlang] = ACTIONS(565),
    [anon_sym_POUND_BANG] = ACTIONS(567),
  },
  [71] = {
    [aux_sym__token_token1] = ACTIONS(569),
    [sym_dot] = ACTIONS(571),
    [aux_sym_comment_token1] = ACTIONS(569),
    [anon_sym_POUND_PIPE] = ACTIONS(569),
    [anon_sym_POUND_SEMI] = ACTIONS(569),
    [sym__line_comment] = ACTIONS(569),
    [sym_boolean] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(571),
    [anon_sym_POUND_LT_LT] = ACTIONS(569),
    [aux_sym_regex_token1] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [sym_number] = ACTIONS(571),
    [sym_character] = ACTIONS(569),
    [aux_sym_symbol_token1] = ACTIONS(571),
    [sym_keyword] = ACTIONS(569),
    [anon_sym_POUND_AMP] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_POUNDfl] = ACTIONS(569),
    [anon_sym_POUNDfx] = ACTIONS(569),
    [anon_sym_POUNDs] = ACTIONS(569),
    [anon_sym_POUNDhash] = ACTIONS(571),
    [anon_sym_POUNDhasheq] = ACTIONS(571),
    [anon_sym_POUNDhasheqv] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(569),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [anon_sym_POUND_SQUOTE] = ACTIONS(569),
    [anon_sym_POUND_BQUOTE] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_COMMA_AT] = ACTIONS(569),
    [anon_sym_POUND_COMMA] = ACTIONS(571),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(569),
    [anon_sym_POUNDreader] = ACTIONS(569),
    [anon_sym_POUNDlang] = ACTIONS(569),
    [anon_sym_POUND_BANG] = ACTIONS(571),
  },
  [72] = {
    [aux_sym__token_token1] = ACTIONS(573),
    [sym_dot] = ACTIONS(575),
    [aux_sym_comment_token1] = ACTIONS(573),
    [anon_sym_POUND_PIPE] = ACTIONS(573),
    [anon_sym_POUND_SEMI] = ACTIONS(573),
    [sym__line_comment] = ACTIONS(573),
    [sym_boolean] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(575),
    [anon_sym_POUND_LT_LT] = ACTIONS(573),
    [aux_sym_regex_token1] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym_number] = ACTIONS(575),
    [sym_character] = ACTIONS(573),
    [aux_sym_symbol_token1] = ACTIONS(575),
    [sym_keyword] = ACTIONS(573),
    [anon_sym_POUND_AMP] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_POUNDfl] = ACTIONS(573),
    [anon_sym_POUNDfx] = ACTIONS(573),
    [anon_sym_POUNDs] = ACTIONS(573),
    [anon_sym_POUNDhash] = ACTIONS(575),
    [anon_sym_POUNDhasheq] = ACTIONS(575),
    [anon_sym_POUNDhasheqv] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(573),
    [anon_sym_POUND_SQUOTE] = ACTIONS(573),
    [anon_sym_POUND_BQUOTE] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_COMMA_AT] = ACTIONS(573),
    [anon_sym_POUND_COMMA] = ACTIONS(575),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(573),
    [anon_sym_POUNDreader] = ACTIONS(573),
    [anon_sym_POUNDlang] = ACTIONS(573),
    [anon_sym_POUND_BANG] = ACTIONS(575),
  },
  [73] = {
    [aux_sym__token_token1] = ACTIONS(577),
    [sym_dot] = ACTIONS(579),
    [aux_sym_comment_token1] = ACTIONS(577),
    [anon_sym_POUND_PIPE] = ACTIONS(577),
    [anon_sym_POUND_SEMI] = ACTIONS(577),
    [sym__line_comment] = ACTIONS(577),
    [sym_boolean] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_POUND_LT_LT] = ACTIONS(577),
    [aux_sym_regex_token1] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [sym_number] = ACTIONS(579),
    [sym_character] = ACTIONS(577),
    [aux_sym_symbol_token1] = ACTIONS(579),
    [sym_keyword] = ACTIONS(577),
    [anon_sym_POUND_AMP] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_POUNDfl] = ACTIONS(577),
    [anon_sym_POUNDfx] = ACTIONS(577),
    [anon_sym_POUNDs] = ACTIONS(577),
    [anon_sym_POUNDhash] = ACTIONS(579),
    [anon_sym_POUNDhasheq] = ACTIONS(579),
    [anon_sym_POUNDhasheqv] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [anon_sym_POUND_SQUOTE] = ACTIONS(577),
    [anon_sym_POUND_BQUOTE] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_COMMA_AT] = ACTIONS(577),
    [anon_sym_POUND_COMMA] = ACTIONS(579),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(577),
    [anon_sym_POUNDreader] = ACTIONS(577),
    [anon_sym_POUNDlang] = ACTIONS(577),
    [anon_sym_POUND_BANG] = ACTIONS(579),
  },
  [74] = {
    [aux_sym__token_token1] = ACTIONS(581),
    [sym_dot] = ACTIONS(583),
    [aux_sym_comment_token1] = ACTIONS(581),
    [anon_sym_POUND_PIPE] = ACTIONS(581),
    [anon_sym_POUND_SEMI] = ACTIONS(581),
    [sym__line_comment] = ACTIONS(581),
    [sym_boolean] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_POUND_LT_LT] = ACTIONS(581),
    [aux_sym_regex_token1] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [sym_number] = ACTIONS(583),
    [sym_character] = ACTIONS(581),
    [aux_sym_symbol_token1] = ACTIONS(583),
    [sym_keyword] = ACTIONS(581),
    [anon_sym_POUND_AMP] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_POUNDfl] = ACTIONS(581),
    [anon_sym_POUNDfx] = ACTIONS(581),
    [anon_sym_POUNDs] = ACTIONS(581),
    [anon_sym_POUNDhash] = ACTIONS(583),
    [anon_sym_POUNDhasheq] = ACTIONS(583),
    [anon_sym_POUNDhasheqv] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_POUND_SQUOTE] = ACTIONS(581),
    [anon_sym_POUND_BQUOTE] = ACTIONS(581),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_COMMA_AT] = ACTIONS(581),
    [anon_sym_POUND_COMMA] = ACTIONS(583),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(581),
    [anon_sym_POUNDreader] = ACTIONS(581),
    [anon_sym_POUNDlang] = ACTIONS(581),
    [anon_sym_POUND_BANG] = ACTIONS(583),
  },
  [75] = {
    [aux_sym__token_token1] = ACTIONS(585),
    [sym_dot] = ACTIONS(587),
    [aux_sym_comment_token1] = ACTIONS(585),
    [anon_sym_POUND_PIPE] = ACTIONS(585),
    [anon_sym_POUND_SEMI] = ACTIONS(585),
    [sym__line_comment] = ACTIONS(585),
    [sym_boolean] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(587),
    [anon_sym_POUND_LT_LT] = ACTIONS(585),
    [aux_sym_regex_token1] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [sym_number] = ACTIONS(587),
    [sym_character] = ACTIONS(585),
    [aux_sym_symbol_token1] = ACTIONS(587),
    [sym_keyword] = ACTIONS(585),
    [anon_sym_POUND_AMP] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_POUNDfl] = ACTIONS(585),
    [anon_sym_POUNDfx] = ACTIONS(585),
    [anon_sym_POUNDs] = ACTIONS(585),
    [anon_sym_POUNDhash] = ACTIONS(587),
    [anon_sym_POUNDhasheq] = ACTIONS(587),
    [anon_sym_POUNDhasheqv] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_POUND_SQUOTE] = ACTIONS(585),
    [anon_sym_POUND_BQUOTE] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_COMMA_AT] = ACTIONS(585),
    [anon_sym_POUND_COMMA] = ACTIONS(587),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(585),
    [anon_sym_POUNDreader] = ACTIONS(585),
    [anon_sym_POUNDlang] = ACTIONS(585),
    [anon_sym_POUND_BANG] = ACTIONS(587),
  },
  [76] = {
    [aux_sym__token_token1] = ACTIONS(589),
    [sym_dot] = ACTIONS(591),
    [aux_sym_comment_token1] = ACTIONS(589),
    [anon_sym_POUND_PIPE] = ACTIONS(589),
    [anon_sym_POUND_SEMI] = ACTIONS(589),
    [sym__line_comment] = ACTIONS(589),
    [sym_boolean] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LT_LT] = ACTIONS(589),
    [aux_sym_regex_token1] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [sym_number] = ACTIONS(591),
    [sym_character] = ACTIONS(589),
    [aux_sym_symbol_token1] = ACTIONS(591),
    [sym_keyword] = ACTIONS(589),
    [anon_sym_POUND_AMP] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_POUNDfl] = ACTIONS(589),
    [anon_sym_POUNDfx] = ACTIONS(589),
    [anon_sym_POUNDs] = ACTIONS(589),
    [anon_sym_POUNDhash] = ACTIONS(591),
    [anon_sym_POUNDhasheq] = ACTIONS(591),
    [anon_sym_POUNDhasheqv] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_POUND_SQUOTE] = ACTIONS(589),
    [anon_sym_POUND_BQUOTE] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_COMMA_AT] = ACTIONS(589),
    [anon_sym_POUND_COMMA] = ACTIONS(591),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(589),
    [anon_sym_POUNDreader] = ACTIONS(589),
    [anon_sym_POUNDlang] = ACTIONS(589),
    [anon_sym_POUND_BANG] = ACTIONS(591),
  },
  [77] = {
    [aux_sym__token_token1] = ACTIONS(593),
    [sym_dot] = ACTIONS(595),
    [aux_sym_comment_token1] = ACTIONS(593),
    [anon_sym_POUND_PIPE] = ACTIONS(593),
    [anon_sym_POUND_SEMI] = ACTIONS(593),
    [sym__line_comment] = ACTIONS(593),
    [sym_boolean] = ACTIONS(595),
    [anon_sym_POUND] = ACTIONS(595),
    [anon_sym_POUND_LT_LT] = ACTIONS(593),
    [aux_sym_regex_token1] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym_number] = ACTIONS(595),
    [sym_character] = ACTIONS(593),
    [aux_sym_symbol_token1] = ACTIONS(595),
    [sym_keyword] = ACTIONS(593),
    [anon_sym_POUND_AMP] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(593),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_POUNDfl] = ACTIONS(593),
    [anon_sym_POUNDfx] = ACTIONS(593),
    [anon_sym_POUNDs] = ACTIONS(593),
    [anon_sym_POUNDhash] = ACTIONS(595),
    [anon_sym_POUNDhasheq] = ACTIONS(595),
    [anon_sym_POUNDhasheqv] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [anon_sym_POUND_SQUOTE] = ACTIONS(593),
    [anon_sym_POUND_BQUOTE] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_COMMA_AT] = ACTIONS(593),
    [anon_sym_POUND_COMMA] = ACTIONS(595),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(593),
    [anon_sym_POUNDreader] = ACTIONS(593),
    [anon_sym_POUNDlang] = ACTIONS(593),
    [anon_sym_POUND_BANG] = ACTIONS(595),
  },
  [78] = {
    [aux_sym__token_token1] = ACTIONS(597),
    [sym_dot] = ACTIONS(599),
    [aux_sym_comment_token1] = ACTIONS(597),
    [anon_sym_POUND_PIPE] = ACTIONS(597),
    [anon_sym_POUND_SEMI] = ACTIONS(597),
    [sym__line_comment] = ACTIONS(597),
    [sym_boolean] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(599),
    [anon_sym_POUND_LT_LT] = ACTIONS(597),
    [aux_sym_regex_token1] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_number] = ACTIONS(599),
    [sym_character] = ACTIONS(597),
    [aux_sym_symbol_token1] = ACTIONS(599),
    [sym_keyword] = ACTIONS(597),
    [anon_sym_POUND_AMP] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_RBRACK] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_POUNDfl] = ACTIONS(597),
    [anon_sym_POUNDfx] = ACTIONS(597),
    [anon_sym_POUNDs] = ACTIONS(597),
    [anon_sym_POUNDhash] = ACTIONS(599),
    [anon_sym_POUNDhasheq] = ACTIONS(599),
    [anon_sym_POUNDhasheqv] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [anon_sym_BQUOTE] = ACTIONS(597),
    [anon_sym_POUND_SQUOTE] = ACTIONS(597),
    [anon_sym_POUND_BQUOTE] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_COMMA_AT] = ACTIONS(597),
    [anon_sym_POUND_COMMA] = ACTIONS(599),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(597),
    [anon_sym_POUNDreader] = ACTIONS(597),
    [anon_sym_POUNDlang] = ACTIONS(597),
    [anon_sym_POUND_BANG] = ACTIONS(599),
  },
  [79] = {
    [aux_sym__token_token1] = ACTIONS(601),
    [sym_dot] = ACTIONS(603),
    [aux_sym_comment_token1] = ACTIONS(601),
    [anon_sym_POUND_PIPE] = ACTIONS(601),
    [anon_sym_POUND_SEMI] = ACTIONS(601),
    [sym__line_comment] = ACTIONS(601),
    [sym_boolean] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_POUND_LT_LT] = ACTIONS(601),
    [aux_sym_regex_token1] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym_number] = ACTIONS(603),
    [sym_character] = ACTIONS(601),
    [aux_sym_symbol_token1] = ACTIONS(603),
    [sym_keyword] = ACTIONS(601),
    [anon_sym_POUND_AMP] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_POUNDfl] = ACTIONS(601),
    [anon_sym_POUNDfx] = ACTIONS(601),
    [anon_sym_POUNDs] = ACTIONS(601),
    [anon_sym_POUNDhash] = ACTIONS(603),
    [anon_sym_POUNDhasheq] = ACTIONS(603),
    [anon_sym_POUNDhasheqv] = ACTIONS(601),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [anon_sym_POUND_SQUOTE] = ACTIONS(601),
    [anon_sym_POUND_BQUOTE] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_COMMA_AT] = ACTIONS(601),
    [anon_sym_POUND_COMMA] = ACTIONS(603),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(601),
    [anon_sym_POUNDreader] = ACTIONS(601),
    [anon_sym_POUNDlang] = ACTIONS(601),
    [anon_sym_POUND_BANG] = ACTIONS(603),
  },
  [80] = {
    [aux_sym__token_token1] = ACTIONS(605),
    [sym_dot] = ACTIONS(607),
    [aux_sym_comment_token1] = ACTIONS(605),
    [anon_sym_POUND_PIPE] = ACTIONS(605),
    [anon_sym_POUND_SEMI] = ACTIONS(605),
    [sym__line_comment] = ACTIONS(605),
    [sym_boolean] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_POUND_LT_LT] = ACTIONS(605),
    [aux_sym_regex_token1] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym_number] = ACTIONS(607),
    [sym_character] = ACTIONS(605),
    [aux_sym_symbol_token1] = ACTIONS(607),
    [sym_keyword] = ACTIONS(605),
    [anon_sym_POUND_AMP] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_POUNDfl] = ACTIONS(605),
    [anon_sym_POUNDfx] = ACTIONS(605),
    [anon_sym_POUNDs] = ACTIONS(605),
    [anon_sym_POUNDhash] = ACTIONS(607),
    [anon_sym_POUNDhasheq] = ACTIONS(607),
    [anon_sym_POUNDhasheqv] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [anon_sym_POUND_SQUOTE] = ACTIONS(605),
    [anon_sym_POUND_BQUOTE] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_COMMA_AT] = ACTIONS(605),
    [anon_sym_POUND_COMMA] = ACTIONS(607),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(605),
    [anon_sym_POUNDreader] = ACTIONS(605),
    [anon_sym_POUNDlang] = ACTIONS(605),
    [anon_sym_POUND_BANG] = ACTIONS(607),
  },
  [81] = {
    [aux_sym__token_token1] = ACTIONS(609),
    [sym_dot] = ACTIONS(611),
    [aux_sym_comment_token1] = ACTIONS(609),
    [anon_sym_POUND_PIPE] = ACTIONS(609),
    [anon_sym_POUND_SEMI] = ACTIONS(609),
    [sym__line_comment] = ACTIONS(609),
    [sym_boolean] = ACTIONS(611),
    [anon_sym_POUND] = ACTIONS(611),
    [anon_sym_POUND_LT_LT] = ACTIONS(609),
    [aux_sym_regex_token1] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym_number] = ACTIONS(611),
    [sym_character] = ACTIONS(609),
    [aux_sym_symbol_token1] = ACTIONS(611),
    [sym_keyword] = ACTIONS(609),
    [anon_sym_POUND_AMP] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_LBRACK] = ACTIONS(609),
    [anon_sym_RBRACK] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_POUNDfl] = ACTIONS(609),
    [anon_sym_POUNDfx] = ACTIONS(609),
    [anon_sym_POUNDs] = ACTIONS(609),
    [anon_sym_POUNDhash] = ACTIONS(611),
    [anon_sym_POUNDhasheq] = ACTIONS(611),
    [anon_sym_POUNDhasheqv] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(609),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_POUND_SQUOTE] = ACTIONS(609),
    [anon_sym_POUND_BQUOTE] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_COMMA_AT] = ACTIONS(609),
    [anon_sym_POUND_COMMA] = ACTIONS(611),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(609),
    [anon_sym_POUNDreader] = ACTIONS(609),
    [anon_sym_POUNDlang] = ACTIONS(609),
    [anon_sym_POUND_BANG] = ACTIONS(611),
  },
  [82] = {
    [aux_sym__token_token1] = ACTIONS(613),
    [sym_dot] = ACTIONS(615),
    [aux_sym_comment_token1] = ACTIONS(613),
    [anon_sym_POUND_PIPE] = ACTIONS(613),
    [anon_sym_POUND_SEMI] = ACTIONS(613),
    [sym__line_comment] = ACTIONS(613),
    [sym_boolean] = ACTIONS(615),
    [anon_sym_POUND] = ACTIONS(615),
    [anon_sym_POUND_LT_LT] = ACTIONS(613),
    [aux_sym_regex_token1] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [sym_number] = ACTIONS(615),
    [sym_character] = ACTIONS(613),
    [aux_sym_symbol_token1] = ACTIONS(615),
    [sym_keyword] = ACTIONS(613),
    [anon_sym_POUND_AMP] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_RBRACK] = ACTIONS(613),
    [anon_sym_LBRACE] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_POUNDfl] = ACTIONS(613),
    [anon_sym_POUNDfx] = ACTIONS(613),
    [anon_sym_POUNDs] = ACTIONS(613),
    [anon_sym_POUNDhash] = ACTIONS(615),
    [anon_sym_POUNDhasheq] = ACTIONS(615),
    [anon_sym_POUNDhasheqv] = ACTIONS(613),
    [anon_sym_SQUOTE] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(613),
    [anon_sym_POUND_SQUOTE] = ACTIONS(613),
    [anon_sym_POUND_BQUOTE] = ACTIONS(613),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_COMMA_AT] = ACTIONS(613),
    [anon_sym_POUND_COMMA] = ACTIONS(615),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(613),
    [anon_sym_POUNDreader] = ACTIONS(613),
    [anon_sym_POUNDlang] = ACTIONS(613),
    [anon_sym_POUND_BANG] = ACTIONS(615),
  },
  [83] = {
    [aux_sym__token_token1] = ACTIONS(617),
    [sym_dot] = ACTIONS(619),
    [aux_sym_comment_token1] = ACTIONS(617),
    [anon_sym_POUND_PIPE] = ACTIONS(617),
    [anon_sym_POUND_SEMI] = ACTIONS(617),
    [sym__line_comment] = ACTIONS(617),
    [sym_boolean] = ACTIONS(619),
    [anon_sym_POUND] = ACTIONS(619),
    [anon_sym_POUND_LT_LT] = ACTIONS(617),
    [aux_sym_regex_token1] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_number] = ACTIONS(619),
    [sym_character] = ACTIONS(617),
    [aux_sym_symbol_token1] = ACTIONS(619),
    [sym_keyword] = ACTIONS(617),
    [anon_sym_POUND_AMP] = ACTIONS(617),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [anon_sym_LBRACE] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_POUNDfl] = ACTIONS(617),
    [anon_sym_POUNDfx] = ACTIONS(617),
    [anon_sym_POUNDs] = ACTIONS(617),
    [anon_sym_POUNDhash] = ACTIONS(619),
    [anon_sym_POUNDhasheq] = ACTIONS(619),
    [anon_sym_POUNDhasheqv] = ACTIONS(617),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_BQUOTE] = ACTIONS(617),
    [anon_sym_POUND_SQUOTE] = ACTIONS(617),
    [anon_sym_POUND_BQUOTE] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_COMMA_AT] = ACTIONS(617),
    [anon_sym_POUND_COMMA] = ACTIONS(619),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(617),
    [anon_sym_POUNDreader] = ACTIONS(617),
    [anon_sym_POUNDlang] = ACTIONS(617),
    [anon_sym_POUND_BANG] = ACTIONS(619),
  },
  [84] = {
    [aux_sym__token_token1] = ACTIONS(621),
    [sym_dot] = ACTIONS(623),
    [aux_sym_comment_token1] = ACTIONS(621),
    [anon_sym_POUND_PIPE] = ACTIONS(621),
    [anon_sym_POUND_SEMI] = ACTIONS(621),
    [sym__line_comment] = ACTIONS(621),
    [sym_boolean] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(623),
    [anon_sym_POUND_LT_LT] = ACTIONS(621),
    [aux_sym_regex_token1] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [sym_number] = ACTIONS(623),
    [sym_character] = ACTIONS(621),
    [aux_sym_symbol_token1] = ACTIONS(623),
    [sym_keyword] = ACTIONS(621),
    [anon_sym_POUND_AMP] = ACTIONS(621),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(621),
    [anon_sym_POUNDfl] = ACTIONS(621),
    [anon_sym_POUNDfx] = ACTIONS(621),
    [anon_sym_POUNDs] = ACTIONS(621),
    [anon_sym_POUNDhash] = ACTIONS(623),
    [anon_sym_POUNDhasheq] = ACTIONS(623),
    [anon_sym_POUNDhasheqv] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_BQUOTE] = ACTIONS(621),
    [anon_sym_POUND_SQUOTE] = ACTIONS(621),
    [anon_sym_POUND_BQUOTE] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_COMMA_AT] = ACTIONS(621),
    [anon_sym_POUND_COMMA] = ACTIONS(623),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(621),
    [anon_sym_POUNDreader] = ACTIONS(621),
    [anon_sym_POUNDlang] = ACTIONS(621),
    [anon_sym_POUND_BANG] = ACTIONS(623),
  },
  [85] = {
    [aux_sym__token_token1] = ACTIONS(625),
    [sym_dot] = ACTIONS(627),
    [aux_sym_comment_token1] = ACTIONS(625),
    [anon_sym_POUND_PIPE] = ACTIONS(625),
    [anon_sym_POUND_SEMI] = ACTIONS(625),
    [sym__line_comment] = ACTIONS(625),
    [sym_boolean] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(627),
    [anon_sym_POUND_LT_LT] = ACTIONS(625),
    [aux_sym_regex_token1] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [sym_number] = ACTIONS(627),
    [sym_character] = ACTIONS(625),
    [aux_sym_symbol_token1] = ACTIONS(627),
    [sym_keyword] = ACTIONS(625),
    [anon_sym_POUND_AMP] = ACTIONS(625),
    [anon_sym_LPAREN] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(625),
    [anon_sym_RBRACK] = ACTIONS(625),
    [anon_sym_LBRACE] = ACTIONS(625),
    [anon_sym_RBRACE] = ACTIONS(625),
    [anon_sym_POUNDfl] = ACTIONS(625),
    [anon_sym_POUNDfx] = ACTIONS(625),
    [anon_sym_POUNDs] = ACTIONS(625),
    [anon_sym_POUNDhash] = ACTIONS(627),
    [anon_sym_POUNDhasheq] = ACTIONS(627),
    [anon_sym_POUNDhasheqv] = ACTIONS(625),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(625),
    [anon_sym_POUND_SQUOTE] = ACTIONS(625),
    [anon_sym_POUND_BQUOTE] = ACTIONS(625),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_COMMA_AT] = ACTIONS(625),
    [anon_sym_POUND_COMMA] = ACTIONS(627),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(625),
    [anon_sym_POUNDreader] = ACTIONS(625),
    [anon_sym_POUNDlang] = ACTIONS(625),
    [anon_sym_POUND_BANG] = ACTIONS(627),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(629), 1,
      aux_sym__token_token1,
    ACTIONS(635), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(638), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(632), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(86), 6,
      sym__skip,
      sym__all_comment,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(641), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(643), 19,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [53] = 2,
    ACTIONS(591), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(589), 27,
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
  [94] = 2,
    ACTIONS(543), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(541), 27,
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
  [135] = 2,
    ACTIONS(519), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(517), 27,
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
  [176] = 2,
    ACTIONS(567), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(565), 27,
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
  [217] = 2,
    ACTIONS(587), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(585), 27,
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
  [258] = 2,
    ACTIONS(627), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(625), 27,
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
  [299] = 2,
    ACTIONS(579), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(577), 27,
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
  [340] = 2,
    ACTIONS(563), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(561), 27,
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
  [381] = 2,
    ACTIONS(595), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(593), 27,
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
  [422] = 2,
    ACTIONS(603), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(601), 27,
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
  [463] = 2,
    ACTIONS(555), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(553), 27,
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
  [504] = 2,
    ACTIONS(515), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(513), 27,
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
  [545] = 2,
    ACTIONS(531), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(529), 27,
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
  [586] = 2,
    ACTIONS(575), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(573), 27,
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
  [627] = 2,
    ACTIONS(571), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(569), 27,
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
  [668] = 2,
    ACTIONS(523), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(521), 27,
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
  [709] = 2,
    ACTIONS(527), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(525), 27,
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
  [750] = 2,
    ACTIONS(539), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(537), 27,
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
  [791] = 2,
    ACTIONS(599), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(597), 27,
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
  [832] = 2,
    ACTIONS(607), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(605), 27,
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
  [873] = 2,
    ACTIONS(535), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(533), 27,
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
  [914] = 2,
    ACTIONS(547), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(545), 27,
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
  [955] = 2,
    ACTIONS(559), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(557), 27,
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
  [996] = 2,
    ACTIONS(611), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(609), 27,
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
  [1037] = 2,
    ACTIONS(551), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(549), 27,
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
  [1078] = 2,
    ACTIONS(583), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(581), 27,
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
  [1119] = 2,
    ACTIONS(623), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(621), 27,
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
  [1160] = 2,
    ACTIONS(615), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(613), 27,
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
  [1201] = 2,
    ACTIONS(619), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(617), 27,
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
  [1242] = 2,
    ACTIONS(575), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(573), 24,
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
  [1279] = 2,
    ACTIONS(579), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(577), 24,
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
  [1316] = 2,
    ACTIONS(587), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(585), 24,
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
  [1353] = 2,
    ACTIONS(627), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(625), 24,
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
  [1390] = 2,
    ACTIONS(603), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(601), 24,
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
  [1427] = 2,
    ACTIONS(607), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(605), 24,
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
  [1464] = 2,
    ACTIONS(611), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(609), 24,
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
  [1501] = 2,
    ACTIONS(615), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(613), 24,
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
  [1538] = 2,
    ACTIONS(619), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(617), 24,
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
  [1575] = 2,
    ACTIONS(623), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(621), 24,
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
  [1612] = 2,
    ACTIONS(595), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(593), 24,
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
  [1649] = 2,
    ACTIONS(543), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(541), 24,
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
  [1686] = 2,
    ACTIONS(583), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(581), 24,
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
  [1723] = 2,
    ACTIONS(551), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(549), 24,
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
  [1760] = 2,
    ACTIONS(559), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(557), 24,
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
  [1797] = 2,
    ACTIONS(591), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(589), 24,
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
  [1834] = 2,
    ACTIONS(535), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(533), 24,
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
  [1871] = 2,
    ACTIONS(599), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(597), 24,
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
  [1908] = 2,
    ACTIONS(539), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(537), 24,
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
  [1945] = 2,
    ACTIONS(567), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(565), 24,
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
  [1982] = 2,
    ACTIONS(527), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(525), 24,
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
  [2019] = 2,
    ACTIONS(523), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(521), 24,
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
  [2056] = 2,
    ACTIONS(519), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(517), 24,
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
  [2093] = 2,
    ACTIONS(531), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(529), 24,
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
  [2130] = 2,
    ACTIONS(515), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(513), 24,
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
  [2167] = 2,
    ACTIONS(555), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(553), 24,
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
  [2204] = 2,
    ACTIONS(571), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(569), 24,
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
  [2241] = 7,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      sym_decimal,
    STATE(120), 1,
      sym__real_string,
    STATE(121), 1,
      sym_list,
  [2263] = 7,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_decimal,
    STATE(79), 1,
      sym__real_string,
    STATE(80), 1,
      sym_list,
  [2285] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(649), 1,
      sym_decimal,
    STATE(96), 1,
      sym__real_string,
    STATE(106), 1,
      sym_list,
  [2307] = 6,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_list,
  [2326] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(655), 1,
      anon_sym_POUND,
    ACTIONS(657), 1,
      anon_sym_EQ,
    STATE(103), 1,
      sym_list,
  [2345] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_list,
  [2364] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(665), 1,
      aux_sym_block_comment_token1,
    ACTIONS(667), 1,
      anon_sym_PIPE_POUND,
    STATE(155), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2378] = 5,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      sym_decimal,
    STATE(106), 1,
      sym_list,
  [2394] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(671), 1,
      aux_sym_block_comment_token1,
    ACTIONS(673), 1,
      anon_sym_PIPE_POUND,
    STATE(154), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2408] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(675), 1,
      aux_sym_block_comment_token1,
    ACTIONS(677), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2422] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(679), 1,
      aux_sym_block_comment_token1,
    ACTIONS(681), 1,
      anon_sym_PIPE_POUND,
    STATE(157), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2436] = 4,
    ACTIONS(683), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(686), 1,
      aux_sym_block_comment_token1,
    ACTIONS(689), 1,
      anon_sym_PIPE_POUND,
    STATE(154), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2450] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(671), 1,
      aux_sym_block_comment_token1,
    ACTIONS(691), 1,
      anon_sym_PIPE_POUND,
    STATE(154), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2464] = 5,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(693), 1,
      sym_decimal,
    STATE(80), 1,
      sym_list,
  [2480] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(671), 1,
      aux_sym_block_comment_token1,
    ACTIONS(695), 1,
      anon_sym_PIPE_POUND,
    STATE(154), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2494] = 5,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      sym_decimal,
    STATE(121), 1,
      sym_list,
  [2510] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    ACTIONS(701), 1,
      anon_sym_PIPE_POUND,
    STATE(160), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2524] = 4,
    ACTIONS(663), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(671), 1,
      aux_sym_block_comment_token1,
    ACTIONS(703), 1,
      anon_sym_PIPE_POUND,
    STATE(154), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2538] = 4,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_list,
  [2551] = 3,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(707), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2562] = 3,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(711), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2573] = 3,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(715), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2584] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_list,
  [2597] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_list,
  [2610] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_list,
  [2623] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_list,
  [2636] = 4,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_list,
  [2649] = 3,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(711), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2660] = 3,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(721), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2671] = 3,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(726), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2682] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_list,
  [2695] = 3,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(711), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2706] = 4,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_list,
  [2719] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_list,
  [2732] = 2,
    ACTIONS(627), 1,
      aux_sym_block_comment_token1,
    ACTIONS(625), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2740] = 2,
    ACTIONS(535), 1,
      aux_sym_block_comment_token1,
    ACTIONS(533), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2748] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym__real_string,
  [2755] = 2,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym__real_string,
  [2762] = 2,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym__real_string,
  [2769] = 1,
    ACTIONS(401), 1,
      sym_lang_name,
  [2773] = 1,
    ACTIONS(730), 1,
      sym__here_string_body,
  [2777] = 1,
    ACTIONS(732), 1,
      sym__here_string_body,
  [2781] = 1,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
  [2785] = 1,
    ACTIONS(736), 1,
      sym__here_string_body,
  [2789] = 1,
    ACTIONS(423), 1,
      sym_lang_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(86)] = 0,
  [SMALL_STATE(87)] = 53,
  [SMALL_STATE(88)] = 94,
  [SMALL_STATE(89)] = 135,
  [SMALL_STATE(90)] = 176,
  [SMALL_STATE(91)] = 217,
  [SMALL_STATE(92)] = 258,
  [SMALL_STATE(93)] = 299,
  [SMALL_STATE(94)] = 340,
  [SMALL_STATE(95)] = 381,
  [SMALL_STATE(96)] = 422,
  [SMALL_STATE(97)] = 463,
  [SMALL_STATE(98)] = 504,
  [SMALL_STATE(99)] = 545,
  [SMALL_STATE(100)] = 586,
  [SMALL_STATE(101)] = 627,
  [SMALL_STATE(102)] = 668,
  [SMALL_STATE(103)] = 709,
  [SMALL_STATE(104)] = 750,
  [SMALL_STATE(105)] = 791,
  [SMALL_STATE(106)] = 832,
  [SMALL_STATE(107)] = 873,
  [SMALL_STATE(108)] = 914,
  [SMALL_STATE(109)] = 955,
  [SMALL_STATE(110)] = 996,
  [SMALL_STATE(111)] = 1037,
  [SMALL_STATE(112)] = 1078,
  [SMALL_STATE(113)] = 1119,
  [SMALL_STATE(114)] = 1160,
  [SMALL_STATE(115)] = 1201,
  [SMALL_STATE(116)] = 1242,
  [SMALL_STATE(117)] = 1279,
  [SMALL_STATE(118)] = 1316,
  [SMALL_STATE(119)] = 1353,
  [SMALL_STATE(120)] = 1390,
  [SMALL_STATE(121)] = 1427,
  [SMALL_STATE(122)] = 1464,
  [SMALL_STATE(123)] = 1501,
  [SMALL_STATE(124)] = 1538,
  [SMALL_STATE(125)] = 1575,
  [SMALL_STATE(126)] = 1612,
  [SMALL_STATE(127)] = 1649,
  [SMALL_STATE(128)] = 1686,
  [SMALL_STATE(129)] = 1723,
  [SMALL_STATE(130)] = 1760,
  [SMALL_STATE(131)] = 1797,
  [SMALL_STATE(132)] = 1834,
  [SMALL_STATE(133)] = 1871,
  [SMALL_STATE(134)] = 1908,
  [SMALL_STATE(135)] = 1945,
  [SMALL_STATE(136)] = 1982,
  [SMALL_STATE(137)] = 2019,
  [SMALL_STATE(138)] = 2056,
  [SMALL_STATE(139)] = 2093,
  [SMALL_STATE(140)] = 2130,
  [SMALL_STATE(141)] = 2167,
  [SMALL_STATE(142)] = 2204,
  [SMALL_STATE(143)] = 2241,
  [SMALL_STATE(144)] = 2263,
  [SMALL_STATE(145)] = 2285,
  [SMALL_STATE(146)] = 2307,
  [SMALL_STATE(147)] = 2326,
  [SMALL_STATE(148)] = 2345,
  [SMALL_STATE(149)] = 2364,
  [SMALL_STATE(150)] = 2378,
  [SMALL_STATE(151)] = 2394,
  [SMALL_STATE(152)] = 2408,
  [SMALL_STATE(153)] = 2422,
  [SMALL_STATE(154)] = 2436,
  [SMALL_STATE(155)] = 2450,
  [SMALL_STATE(156)] = 2464,
  [SMALL_STATE(157)] = 2480,
  [SMALL_STATE(158)] = 2494,
  [SMALL_STATE(159)] = 2510,
  [SMALL_STATE(160)] = 2524,
  [SMALL_STATE(161)] = 2538,
  [SMALL_STATE(162)] = 2551,
  [SMALL_STATE(163)] = 2562,
  [SMALL_STATE(164)] = 2573,
  [SMALL_STATE(165)] = 2584,
  [SMALL_STATE(166)] = 2597,
  [SMALL_STATE(167)] = 2610,
  [SMALL_STATE(168)] = 2623,
  [SMALL_STATE(169)] = 2636,
  [SMALL_STATE(170)] = 2649,
  [SMALL_STATE(171)] = 2660,
  [SMALL_STATE(172)] = 2671,
  [SMALL_STATE(173)] = 2682,
  [SMALL_STATE(174)] = 2695,
  [SMALL_STATE(175)] = 2706,
  [SMALL_STATE(176)] = 2719,
  [SMALL_STATE(177)] = 2732,
  [SMALL_STATE(178)] = 2740,
  [SMALL_STATE(179)] = 2748,
  [SMALL_STATE(180)] = 2755,
  [SMALL_STATE(181)] = 2762,
  [SMALL_STATE(182)] = 2769,
  [SMALL_STATE(183)] = 2773,
  [SMALL_STATE(184)] = 2777,
  [SMALL_STATE(185)] = 2781,
  [SMALL_STATE(186)] = 2785,
  [SMALL_STATE(187)] = 2789,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(152),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(144),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(186),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(181),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(164),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(70),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(44),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(156),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(173),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(176),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(176),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(43),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(42),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(42),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(35),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(153),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(184),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(179),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(150),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(166),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(187),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(187),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(86),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(117),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(149),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(55),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(159),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(154),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(171),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [734] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
