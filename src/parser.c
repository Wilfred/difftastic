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
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__whitespace = 1,
  sym__newline = 2,
  sym_dot = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND_SEMI = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUND_BANG_SLASH = 7,
  aux_sym_comment_token2 = 8,
  anon_sym_BSLASH = 9,
  anon_sym_POUND_PIPE = 10,
  aux_sym__block_comment_token1 = 11,
  anon_sym_PIPE_POUND = 12,
  sym_boolean = 13,
  anon_sym_POUND = 14,
  aux_sym_regex_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__real_string_token1 = 17,
  anon_sym_BSLASHa = 18,
  anon_sym_BSLASHb = 19,
  anon_sym_BSLASHt = 20,
  anon_sym_BSLASHn = 21,
  anon_sym_BSLASHv = 22,
  anon_sym_BSLASHf = 23,
  anon_sym_BSLASHr = 24,
  anon_sym_BSLASHe = 25,
  anon_sym_BSLASH_DQUOTE = 26,
  anon_sym_BSLASH_SQUOTE = 27,
  anon_sym_BSLASH_BSLASH = 28,
  aux_sym_escape_sequence_token1 = 29,
  anon_sym_BSLASHx = 30,
  aux_sym_escape_sequence_token2 = 31,
  anon_sym_BSLASHu = 32,
  aux_sym_escape_sequence_token3 = 33,
  aux_sym_escape_sequence_token4 = 34,
  anon_sym_BSLASHU = 35,
  aux_sym_escape_sequence_token5 = 36,
  sym_number = 37,
  sym_character = 38,
  anon_sym_POUND_AMP = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_LBRACE = 44,
  anon_sym_RBRACE = 45,
  anon_sym_POUNDfl = 46,
  anon_sym_POUNDfx = 47,
  aux_sym_vector_token1 = 48,
  anon_sym_POUNDs = 49,
  anon_sym_POUNDhash = 50,
  anon_sym_POUNDhasheq = 51,
  anon_sym_POUNDhasheqv = 52,
  anon_sym_EQ = 53,
  anon_sym_SQUOTE = 54,
  anon_sym_BQUOTE = 55,
  anon_sym_COMMA = 56,
  anon_sym_COMMA_AT = 57,
  anon_sym_POUND_SQUOTE = 58,
  anon_sym_POUND_BQUOTE = 59,
  anon_sym_POUND_COMMA = 60,
  anon_sym_POUND_COMMA_AT = 61,
  anon_sym_POUNDreader = 62,
  anon_sym_POUNDlang = 63,
  anon_sym_POUND_BANG2 = 64,
  aux_sym_extension_token1 = 65,
  sym_program = 66,
  sym__token = 67,
  sym__skip = 68,
  sym_comment = 69,
  sym__block_comment = 70,
  sym__datum = 71,
  sym_string = 72,
  sym_byte_string = 73,
  sym_regex = 74,
  sym__real_string = 75,
  sym_escape_sequence = 76,
  sym_box = 77,
  sym_list = 78,
  sym_vector = 79,
  sym_structure = 80,
  sym_hash = 81,
  sym_graph = 82,
  sym_quote = 83,
  sym_extension = 84,
  aux_sym_program_repeat1 = 85,
  aux_sym_comment_repeat1 = 86,
  aux_sym_comment_repeat2 = 87,
  aux_sym__block_comment_repeat1 = 88,
  aux_sym__real_string_repeat1 = 89,
  aux_sym_list_repeat1 = 90,
  aux_sym_vector_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#! ",
  [anon_sym_POUND_BANG_SLASH] = "#!/",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHv] = "\\v",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHe] = "\\e",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [anon_sym_BSLASHx] = "\\x",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [anon_sym_BSLASHu] = "\\u",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [aux_sym_escape_sequence_token4] = "escape_sequence_token4",
  [anon_sym_BSLASHU] = "\\U",
  [aux_sym_escape_sequence_token5] = "escape_sequence_token5",
  [sym_number] = "number",
  [sym_character] = "character",
  [anon_sym_POUND_AMP] = "#&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUNDfl] = "#fl",
  [anon_sym_POUNDfx] = "#fx",
  [aux_sym_vector_token1] = "vector_token1",
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [anon_sym_POUND_BANG2] = "#!",
  [aux_sym_extension_token1] = "extension_token1",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym_quote] = "quote",
  [sym_extension] = "extension",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_BANG_SLASH] = anon_sym_POUND_BANG_SLASH,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [anon_sym_BSLASHa] = anon_sym_BSLASHa,
  [anon_sym_BSLASHb] = anon_sym_BSLASHb,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHv] = anon_sym_BSLASHv,
  [anon_sym_BSLASHf] = anon_sym_BSLASHf,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHe] = anon_sym_BSLASHe,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_BSLASHx] = anon_sym_BSLASHx,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [aux_sym_escape_sequence_token4] = aux_sym_escape_sequence_token4,
  [anon_sym_BSLASHU] = anon_sym_BSLASHU,
  [aux_sym_escape_sequence_token5] = aux_sym_escape_sequence_token5,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [anon_sym_POUND_AMP] = anon_sym_POUND_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUNDfl] = anon_sym_POUNDfl,
  [anon_sym_POUNDfx] = anon_sym_POUNDfx,
  [aux_sym_vector_token1] = aux_sym_vector_token1,
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [anon_sym_POUND_BANG2] = anon_sym_POUND_BANG2,
  [aux_sym_extension_token1] = aux_sym_extension_token1,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym_quote] = sym_quote,
  [sym_extension] = sym_extension,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [anon_sym_POUND_BANG_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHU] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
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
  [aux_sym_vector_token1] = {
    .visible = false,
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
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extension_token1] = {
    .visible = false,
    .named = false,
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
  [sym__block_comment] = {
    .visible = false,
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
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_comment_repeat1] = {
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
  [aux_sym_vector_repeat1] = {
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

static inline bool sym__whitespace_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(197);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '}') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(371);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(284);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == 'U') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(327);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 89:
      if (lookahead == 'q') ADVANCE(358);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 101:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 102:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(324);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 152:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 160:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(237);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(290);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(324);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 195:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(198);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '}') ADVANCE(352);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(209);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(354);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(372);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '|') ADVANCE(209);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(209);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(267);
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
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(268);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(270);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(152);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(284);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(172);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(301);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(188);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
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
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_POUND_BANG2);
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == '/') ADVANCE(205);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_extension_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 196},
  [2] = {.lex_state = 196},
  [3] = {.lex_state = 196},
  [4] = {.lex_state = 196},
  [5] = {.lex_state = 196},
  [6] = {.lex_state = 196},
  [7] = {.lex_state = 196},
  [8] = {.lex_state = 196},
  [9] = {.lex_state = 196},
  [10] = {.lex_state = 196},
  [11] = {.lex_state = 196},
  [12] = {.lex_state = 196},
  [13] = {.lex_state = 196},
  [14] = {.lex_state = 196},
  [15] = {.lex_state = 196},
  [16] = {.lex_state = 196},
  [17] = {.lex_state = 196},
  [18] = {.lex_state = 196},
  [19] = {.lex_state = 196},
  [20] = {.lex_state = 196},
  [21] = {.lex_state = 196},
  [22] = {.lex_state = 196},
  [23] = {.lex_state = 196},
  [24] = {.lex_state = 196},
  [25] = {.lex_state = 196},
  [26] = {.lex_state = 196},
  [27] = {.lex_state = 196},
  [28] = {.lex_state = 196},
  [29] = {.lex_state = 196},
  [30] = {.lex_state = 196},
  [31] = {.lex_state = 196},
  [32] = {.lex_state = 196},
  [33] = {.lex_state = 196},
  [34] = {.lex_state = 196},
  [35] = {.lex_state = 196},
  [36] = {.lex_state = 196},
  [37] = {.lex_state = 196},
  [38] = {.lex_state = 196},
  [39] = {.lex_state = 196},
  [40] = {.lex_state = 196},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 196},
  [43] = {.lex_state = 196},
  [44] = {.lex_state = 196},
  [45] = {.lex_state = 196},
  [46] = {.lex_state = 196},
  [47] = {.lex_state = 196},
  [48] = {.lex_state = 196},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 196},
  [65] = {.lex_state = 196},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 206},
  [69] = {.lex_state = 192},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 206},
  [72] = {.lex_state = 206},
  [73] = {.lex_state = 196},
  [74] = {.lex_state = 193},
  [75] = {.lex_state = 206},
  [76] = {.lex_state = 196},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 195},
  [80] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_vector_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(78),
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
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
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(49),
    [sym_dot] = ACTIONS(52),
    [aux_sym_comment_token1] = ACTIONS(55),
    [anon_sym_POUND_SEMI] = ACTIONS(58),
    [anon_sym_POUND_BANG] = ACTIONS(61),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(61),
    [anon_sym_POUND_PIPE] = ACTIONS(64),
    [sym_boolean] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(67),
    [aux_sym_regex_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_number] = ACTIONS(49),
    [sym_character] = ACTIONS(49),
    [anon_sym_POUND_AMP] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_POUNDfl] = ACTIONS(90),
    [anon_sym_POUNDfx] = ACTIONS(90),
    [anon_sym_POUNDs] = ACTIONS(93),
    [anon_sym_POUNDhash] = ACTIONS(96),
    [anon_sym_POUNDhasheq] = ACTIONS(96),
    [anon_sym_POUNDhasheqv] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_COMMA_AT] = ACTIONS(102),
    [anon_sym_POUND_SQUOTE] = ACTIONS(102),
    [anon_sym_POUND_BQUOTE] = ACTIONS(102),
    [anon_sym_POUND_COMMA] = ACTIONS(105),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(102),
    [anon_sym_POUNDreader] = ACTIONS(108),
    [anon_sym_POUNDlang] = ACTIONS(111),
    [anon_sym_POUND_BANG2] = ACTIONS(114),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [4] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(8),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(123),
    [sym_dot] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(123),
    [sym_character] = ACTIONS(123),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [5] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym__whitespace] = ACTIONS(129),
    [sym_dot] = ACTIONS(131),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(129),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [6] = {
    [sym__token] = STATE(7),
    [sym_comment] = STATE(7),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(7),
    [sym_string] = STATE(7),
    [sym_byte_string] = STATE(7),
    [sym_regex] = STATE(7),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_structure] = STATE(7),
    [sym_hash] = STATE(7),
    [sym_graph] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_extension] = STATE(7),
    [aux_sym_list_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(133),
    [sym_dot] = ACTIONS(135),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(133),
    [sym_character] = ACTIONS(133),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [7] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [8] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
  [9] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(139),
    [aux_sym_comment_token1] = ACTIONS(142),
    [anon_sym_POUND_SEMI] = ACTIONS(145),
    [anon_sym_POUND_BANG] = ACTIONS(148),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(148),
    [anon_sym_POUND_PIPE] = ACTIONS(151),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(157),
    [aux_sym_regex_token1] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(139),
    [sym_character] = ACTIONS(139),
    [anon_sym_POUND_AMP] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_POUNDfl] = ACTIONS(178),
    [anon_sym_POUNDfx] = ACTIONS(178),
    [anon_sym_POUNDs] = ACTIONS(181),
    [anon_sym_POUNDhash] = ACTIONS(184),
    [anon_sym_POUNDhasheq] = ACTIONS(184),
    [anon_sym_POUNDhasheqv] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUND_SQUOTE] = ACTIONS(190),
    [anon_sym_POUND_BQUOTE] = ACTIONS(190),
    [anon_sym_POUND_COMMA] = ACTIONS(193),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(190),
    [anon_sym_POUNDreader] = ACTIONS(196),
    [anon_sym_POUNDlang] = ACTIONS(199),
    [anon_sym_POUND_BANG2] = ACTIONS(202),
  },
  [10] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym__whitespace] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(207),
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
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_SQUOTE] = ACTIONS(39),
    [anon_sym_POUND_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_COMMA] = ACTIONS(41),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG2] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(215), 2,
      sym_number,
      sym_character,
    STATE(16), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(38), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [95] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(217), 1,
      sym__whitespace,
    ACTIONS(219), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(221), 2,
      sym_number,
      sym_character,
    STATE(20), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(27), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [190] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(223), 1,
      sym__whitespace,
    ACTIONS(225), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(227), 2,
      sym_number,
      sym_character,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(30), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [285] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(229), 1,
      sym__whitespace,
    ACTIONS(231), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(233), 2,
      sym_number,
      sym_character,
    STATE(19), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(23), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [380] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(223), 1,
      sym__whitespace,
    ACTIONS(235), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(237), 2,
      sym_number,
      sym_character,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(32), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [475] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(223), 1,
      sym__whitespace,
    ACTIONS(239), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(241), 2,
      sym_number,
      sym_character,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(45), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [570] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(243), 1,
      sym__whitespace,
    ACTIONS(245), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(247), 2,
      sym_number,
      sym_character,
    STATE(15), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(44), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [665] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(249), 1,
      sym__whitespace,
    ACTIONS(251), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(253), 2,
      sym_number,
      sym_character,
    STATE(13), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(36), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [760] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(223), 1,
      sym__whitespace,
    ACTIONS(255), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(257), 2,
      sym_number,
      sym_character,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(35), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [855] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      aux_sym_regex_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_POUND_AMP,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUNDs,
    ACTIONS(37), 1,
      anon_sym_POUNDhasheqv,
    ACTIONS(223), 1,
      sym__whitespace,
    ACTIONS(259), 1,
      sym_boolean,
    STATE(39), 1,
      sym__block_comment,
    STATE(40), 1,
      sym__real_string,
    ACTIONS(11), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    ACTIONS(31), 2,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
    ACTIONS(35), 2,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(261), 2,
      sym_number,
      sym_character,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(39), 6,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
    STATE(25), 11,
      sym__datum,
      sym_string,
      sym_byte_string,
      sym_regex,
      sym_box,
      sym_list,
      sym_vector,
      sym_structure,
      sym_hash,
      sym_graph,
      sym_quote,
  [950] = 3,
    ACTIONS(267), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(263), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [996] = 3,
    ACTIONS(267), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(269), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1042] = 2,
    ACTIONS(275), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(273), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1085] = 2,
    ACTIONS(279), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(277), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1128] = 2,
    ACTIONS(283), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(281), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1171] = 2,
    ACTIONS(287), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(285), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1214] = 2,
    ACTIONS(291), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(289), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1257] = 2,
    ACTIONS(295), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(293), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1300] = 2,
    ACTIONS(299), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(297), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1343] = 2,
    ACTIONS(303), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(301), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1386] = 2,
    ACTIONS(307), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(305), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1429] = 2,
    ACTIONS(311), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(309), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1472] = 2,
    ACTIONS(315), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(313), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1515] = 2,
    ACTIONS(319), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(317), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1558] = 2,
    ACTIONS(323), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(321), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1601] = 2,
    ACTIONS(327), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(325), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1644] = 2,
    ACTIONS(331), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(329), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1687] = 2,
    ACTIONS(271), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(269), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1730] = 2,
    ACTIONS(335), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(333), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1773] = 2,
    ACTIONS(339), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(337), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1816] = 2,
    ACTIONS(343), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(341), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1859] = 2,
    ACTIONS(347), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(345), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1902] = 2,
    ACTIONS(351), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(349), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1945] = 2,
    ACTIONS(355), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(353), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1988] = 2,
    ACTIONS(265), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(263), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2031] = 2,
    ACTIONS(359), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(357), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2074] = 2,
    ACTIONS(363), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(361), 30,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2117] = 9,
    ACTIONS(365), 1,
      sym__whitespace,
    ACTIONS(368), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(377), 1,
      anon_sym_POUND_PIPE,
    STATE(39), 1,
      sym__block_comment,
    ACTIONS(374), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(380), 6,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(382), 18,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_number,
      sym_character,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
  [2170] = 8,
    ACTIONS(384), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym__real_string_token1,
    ACTIONS(392), 1,
      anon_sym_BSLASHx,
    ACTIONS(394), 1,
      anon_sym_BSLASHu,
    ACTIONS(396), 1,
      anon_sym_BSLASHU,
    STATE(51), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(390), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2206] = 8,
    ACTIONS(384), 1,
      anon_sym_BSLASH,
    ACTIONS(392), 1,
      anon_sym_BSLASHx,
    ACTIONS(394), 1,
      anon_sym_BSLASHu,
    ACTIONS(396), 1,
      anon_sym_BSLASHU,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      aux_sym__real_string_token1,
    STATE(49), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(390), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2242] = 8,
    ACTIONS(402), 1,
      anon_sym_BSLASH,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym__real_string_token1,
    ACTIONS(413), 1,
      anon_sym_BSLASHx,
    ACTIONS(416), 1,
      anon_sym_BSLASHu,
    ACTIONS(419), 1,
      anon_sym_BSLASHU,
    STATE(51), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(410), 11,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2278] = 2,
    ACTIONS(422), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 16,
      anon_sym_DQUOTE,
      aux_sym__real_string_token1,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
  [2300] = 2,
    ACTIONS(426), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 16,
      anon_sym_DQUOTE,
      aux_sym__real_string_token1,
      anon_sym_BSLASHa,
      anon_sym_BSLASHb,
      anon_sym_BSLASHt,
      anon_sym_BSLASHn,
      anon_sym_BSLASHv,
      anon_sym_BSLASHf,
      anon_sym_BSLASHr,
      anon_sym_BSLASHe,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
  [2322] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      aux_sym_vector_token1,
    STATE(28), 1,
      sym__real_string,
    STATE(29), 1,
      sym_list,
    STATE(55), 1,
      aux_sym_vector_repeat1,
  [2347] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      aux_sym_vector_token1,
    ACTIONS(436), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_list,
    STATE(56), 1,
      aux_sym_vector_repeat1,
  [2372] = 3,
    ACTIONS(440), 1,
      aux_sym_vector_token1,
    STATE(56), 1,
      aux_sym_vector_repeat1,
    ACTIONS(438), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2386] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      aux_sym_vector_token1,
    STATE(29), 1,
      sym_list,
    STATE(58), 1,
      aux_sym_vector_repeat1,
  [2405] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(434), 1,
      aux_sym_vector_token1,
    STATE(37), 1,
      sym_list,
    STATE(56), 1,
      aux_sym_vector_repeat1,
  [2424] = 4,
    ACTIONS(445), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(447), 1,
      aux_sym__block_comment_token1,
    ACTIONS(449), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2438] = 4,
    ACTIONS(445), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(451), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      anon_sym_PIPE_POUND,
    STATE(59), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2452] = 4,
    ACTIONS(455), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(458), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2466] = 4,
    ACTIONS(445), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(447), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2480] = 4,
    ACTIONS(445), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(465), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      anon_sym_PIPE_POUND,
    STATE(62), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [2494] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_list,
  [2507] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_list,
  [2520] = 2,
    ACTIONS(351), 1,
      aux_sym__block_comment_token1,
    ACTIONS(349), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2528] = 2,
    ACTIONS(287), 1,
      aux_sym__block_comment_token1,
    ACTIONS(285), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2536] = 2,
    ACTIONS(469), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      aux_sym_comment_repeat2,
  [2543] = 2,
    ACTIONS(472), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(474), 1,
      aux_sym_escape_sequence_token4,
  [2550] = 1,
    ACTIONS(472), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [2555] = 2,
    ACTIONS(476), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      aux_sym_comment_repeat2,
  [2562] = 2,
    ACTIONS(478), 1,
      aux_sym_comment_token2,
    STATE(71), 1,
      aux_sym_comment_repeat2,
  [2569] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym__real_string,
  [2576] = 1,
    ACTIONS(472), 1,
      aux_sym_escape_sequence_token2,
  [2580] = 1,
    ACTIONS(480), 1,
      aux_sym_comment_token2,
  [2584] = 1,
    ACTIONS(267), 1,
      anon_sym_BSLASH,
  [2588] = 1,
    ACTIONS(472), 1,
      aux_sym_escape_sequence_token5,
  [2592] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [2596] = 1,
    ACTIONS(253), 1,
      aux_sym_extension_token1,
  [2600] = 1,
    ACTIONS(484), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 380,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 665,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 855,
  [SMALL_STATE(21)] = 950,
  [SMALL_STATE(22)] = 996,
  [SMALL_STATE(23)] = 1042,
  [SMALL_STATE(24)] = 1085,
  [SMALL_STATE(25)] = 1128,
  [SMALL_STATE(26)] = 1171,
  [SMALL_STATE(27)] = 1214,
  [SMALL_STATE(28)] = 1257,
  [SMALL_STATE(29)] = 1300,
  [SMALL_STATE(30)] = 1343,
  [SMALL_STATE(31)] = 1386,
  [SMALL_STATE(32)] = 1429,
  [SMALL_STATE(33)] = 1472,
  [SMALL_STATE(34)] = 1515,
  [SMALL_STATE(35)] = 1558,
  [SMALL_STATE(36)] = 1601,
  [SMALL_STATE(37)] = 1644,
  [SMALL_STATE(38)] = 1687,
  [SMALL_STATE(39)] = 1730,
  [SMALL_STATE(40)] = 1773,
  [SMALL_STATE(41)] = 1816,
  [SMALL_STATE(42)] = 1859,
  [SMALL_STATE(43)] = 1902,
  [SMALL_STATE(44)] = 1945,
  [SMALL_STATE(45)] = 1988,
  [SMALL_STATE(46)] = 2031,
  [SMALL_STATE(47)] = 2074,
  [SMALL_STATE(48)] = 2117,
  [SMALL_STATE(49)] = 2170,
  [SMALL_STATE(50)] = 2206,
  [SMALL_STATE(51)] = 2242,
  [SMALL_STATE(52)] = 2278,
  [SMALL_STATE(53)] = 2300,
  [SMALL_STATE(54)] = 2322,
  [SMALL_STATE(55)] = 2347,
  [SMALL_STATE(56)] = 2372,
  [SMALL_STATE(57)] = 2386,
  [SMALL_STATE(58)] = 2405,
  [SMALL_STATE(59)] = 2424,
  [SMALL_STATE(60)] = 2438,
  [SMALL_STATE(61)] = 2452,
  [SMALL_STATE(62)] = 2466,
  [SMALL_STATE(63)] = 2480,
  [SMALL_STATE(64)] = 2494,
  [SMALL_STATE(65)] = 2507,
  [SMALL_STATE(66)] = 2520,
  [SMALL_STATE(67)] = 2528,
  [SMALL_STATE(68)] = 2536,
  [SMALL_STATE(69)] = 2543,
  [SMALL_STATE(70)] = 2550,
  [SMALL_STATE(71)] = 2555,
  [SMALL_STATE(72)] = 2562,
  [SMALL_STATE(73)] = 2569,
  [SMALL_STATE(74)] = 2576,
  [SMALL_STATE(75)] = 2580,
  [SMALL_STATE(76)] = 2584,
  [SMALL_STATE(77)] = 2588,
  [SMALL_STATE(78)] = 2592,
  [SMALL_STATE(79)] = 2596,
  [SMALL_STATE(80)] = 2600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(73),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(57),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(64),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(79),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(79),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(48),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(39),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(72),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(63),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(70),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(51),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(52),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(74),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(69),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(77),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(56),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(60),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(61),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(76),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
