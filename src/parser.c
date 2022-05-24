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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__token_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_SEMI = 4,
  aux_sym_comment_token2 = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUND_BANG_SLASH = 7,
  aux_sym_comment_token3 = 8,
  anon_sym_BSLASH = 9,
  aux_sym_comment_token4 = 10,
  anon_sym_POUND_PIPE = 11,
  aux_sym__block_comment_token1 = 12,
  anon_sym_PIPE_POUND = 13,
  sym_boolean = 14,
  anon_sym_POUND = 15,
  aux_sym_regex_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__real_string_token1 = 18,
  anon_sym_BSLASHa = 19,
  anon_sym_BSLASHb = 20,
  anon_sym_BSLASHt = 21,
  anon_sym_BSLASHn = 22,
  anon_sym_BSLASHv = 23,
  anon_sym_BSLASHf = 24,
  anon_sym_BSLASHr = 25,
  anon_sym_BSLASHe = 26,
  anon_sym_BSLASH_DQUOTE = 27,
  anon_sym_BSLASH_SQUOTE = 28,
  anon_sym_BSLASH_BSLASH = 29,
  aux_sym_escape_sequence_token1 = 30,
  anon_sym_BSLASHx = 31,
  aux_sym_escape_sequence_token2 = 32,
  anon_sym_BSLASHu = 33,
  aux_sym_escape_sequence_token3 = 34,
  aux_sym_escape_sequence_token4 = 35,
  anon_sym_BSLASHU = 36,
  aux_sym_escape_sequence_token5 = 37,
  sym_number = 38,
  sym_character = 39,
  aux_sym_symbol_token1 = 40,
  sym_keyword = 41,
  anon_sym_POUND_AMP = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE = 48,
  anon_sym_POUNDfl = 49,
  anon_sym_POUNDfx = 50,
  aux_sym_vector_token1 = 51,
  anon_sym_POUNDs = 52,
  anon_sym_POUNDhash = 53,
  anon_sym_POUNDhasheq = 54,
  anon_sym_POUNDhasheqv = 55,
  anon_sym_EQ = 56,
  anon_sym_SQUOTE = 57,
  anon_sym_BQUOTE = 58,
  anon_sym_COMMA = 59,
  anon_sym_COMMA_AT = 60,
  anon_sym_POUND_SQUOTE = 61,
  anon_sym_POUND_BQUOTE = 62,
  anon_sym_POUND_COMMA = 63,
  anon_sym_POUND_COMMA_AT = 64,
  anon_sym_POUNDreader = 65,
  anon_sym_POUNDlang = 66,
  anon_sym_POUND_BANG2 = 67,
  aux_sym_extension_token1 = 68,
  sym_program = 69,
  sym__token = 70,
  sym__skip = 71,
  sym_comment = 72,
  sym__block_comment = 73,
  sym__datum = 74,
  sym_string = 75,
  sym_byte_string = 76,
  sym_regex = 77,
  sym__real_string = 78,
  sym_escape_sequence = 79,
  sym_symbol = 80,
  sym_box = 81,
  sym_list = 82,
  sym_vector = 83,
  sym_structure = 84,
  sym_hash = 85,
  sym_graph = 86,
  sym_quote = 87,
  sym_extension = 88,
  aux_sym_program_repeat1 = 89,
  aux_sym_comment_repeat1 = 90,
  aux_sym_comment_repeat2 = 91,
  aux_sym__block_comment_repeat1 = 92,
  aux_sym__real_string_repeat1 = 93,
  aux_sym_list_repeat1 = 94,
  aux_sym_vector_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__token_token1] = "_token_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_POUND_BANG] = "#! ",
  [anon_sym_POUND_BANG_SLASH] = "#!/",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_comment_token4] = "comment_token4",
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
  [sym_symbol] = "symbol",
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
  [aux_sym__token_token1] = aux_sym__token_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_BANG_SLASH] = anon_sym_POUND_BANG_SLASH,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_comment_token4] = aux_sym_comment_token4,
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
  [sym_symbol] = sym_symbol,
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
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
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
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token4] = {
    .visible = false,
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

static inline bool aux_sym_symbol_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_symbol_token1_character_set_2(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < 11
          ? c == '\t'
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

static inline bool aux_sym_symbol_token1_character_set_3(int32_t c) {
  return (c < 133
    ? (c < ','
      ? (c < '"'
        ? (c < ' '
          ? (c >= '\t' && c <= '\r')
          : c <= ' ')
        : (c <= '"' || (c >= '\'' && c <= ')')))
      : (c <= ',' || (c < '`'
        ? (c < '['
          ? c == ';'
          : c <= ']')
        : (c <= '`' || (c >= '{' && c <= '}')))))
    : (c <= 133 || (c < 8239
      ? (c < 8192
        ? (c < 5760
          ? c == 160
          : c <= 5760)
        : (c <= 8202 || (c >= 8232 && c <= 8233)))
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : (c <= 12288 || c == 65279))))));
}

static inline bool sym_keyword_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < ','
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c < '\''
          ? c == '"'
          : c <= ')')))
      : (c <= ',' || (c < ']'
        ? (c < '['
          ? c == ';'
          : c <= '[')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 160
        ? (c < 133
          ? c == '}'
          : c <= 133)
        : (c <= 160 || (c < 8192
          ? c == 5760
          : c <= 8202)))
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
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '=') ADVANCE(435);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(8);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(413);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '}') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '}') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(413);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(224);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
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
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == '=') ADVANCE(435);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 'U') ADVANCE(374);
      if (lookahead == 'b') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(356);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'q') ADVANCE(433);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 105:
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 107:
      if (lookahead == '|') ADVANCE(414);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(345);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
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
          lookahead == '-') ADVANCE(182);
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
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
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
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
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
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(19);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 167:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(249);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(338);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(345);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 202:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 203:
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(221);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '|') ADVANCE(222);
      END_STATE();
    case 205:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(413);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__token_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'U') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(220);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'x') ADVANCE(429);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(446);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '&') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(9);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '|') ADVANCE(220);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(446);
      if (lookahead == '&') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '|') ADVANCE(220);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '&') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(9);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '|') ADVANCE(220);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
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
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(387);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(387);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(387);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(387);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(187);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
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
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(158);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(179);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(319);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(333);
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
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(334);
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
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(334);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(379);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(379);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == '|') ADVANCE(416);
      if (aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(107);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '|') ADVANCE(416);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_POUND_BANG2);
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_extension_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 205},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 205},
  [22] = {.lex_state = 205},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
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
  [79] = {.lex_state = 206},
  [80] = {.lex_state = 206},
  [81] = {.lex_state = 205},
  [82] = {.lex_state = 205},
  [83] = {.lex_state = 205},
  [84] = {.lex_state = 205},
  [85] = {.lex_state = 205},
  [86] = {.lex_state = 205},
  [87] = {.lex_state = 205},
  [88] = {.lex_state = 205},
  [89] = {.lex_state = 205},
  [90] = {.lex_state = 205},
  [91] = {.lex_state = 205},
  [92] = {.lex_state = 205},
  [93] = {.lex_state = 205},
  [94] = {.lex_state = 205},
  [95] = {.lex_state = 205},
  [96] = {.lex_state = 205},
  [97] = {.lex_state = 205},
  [98] = {.lex_state = 205},
  [99] = {.lex_state = 205},
  [100] = {.lex_state = 205},
  [101] = {.lex_state = 205},
  [102] = {.lex_state = 205},
  [103] = {.lex_state = 205},
  [104] = {.lex_state = 205},
  [105] = {.lex_state = 205},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 205},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 204},
  [157] = {.lex_state = 204},
  [158] = {.lex_state = 204},
  [159] = {.lex_state = 204},
  [160] = {.lex_state = 204},
  [161] = {.lex_state = 204},
  [162] = {.lex_state = 204},
  [163] = {.lex_state = 204},
  [164] = {.lex_state = 204},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 204},
  [172] = {.lex_state = 204},
  [173] = {.lex_state = 199},
  [174] = {.lex_state = 216},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 216},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 216},
  [179] = {.lex_state = 216},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 216},
  [182] = {.lex_state = 216},
  [183] = {.lex_state = 216},
  [184] = {.lex_state = 167},
  [185] = {.lex_state = 202},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 200},
  [188] = {.lex_state = 202},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 201},
  [192] = {.lex_state = 216},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__token_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_SEMI] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_comment_token4] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_regex_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHe] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHx] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [anon_sym_BSLASHU] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_POUND_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUNDfl] = ACTIONS(1),
    [anon_sym_POUNDfx] = ACTIONS(1),
    [aux_sym_vector_token1] = ACTIONS(1),
    [anon_sym_POUNDs] = ACTIONS(1),
    [anon_sym_POUNDhash] = ACTIONS(1),
    [anon_sym_POUNDhasheq] = ACTIONS(1),
    [anon_sym_POUNDhasheqv] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUNDreader] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [anon_sym_POUND_BANG2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(186),
    [sym__token] = STATE(22),
    [sym_comment] = STATE(22),
    [sym__block_comment] = STATE(96),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__token_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(15),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUNDreader] = ACTIONS(45),
    [anon_sym_POUNDlang] = ACTIONS(47),
    [anon_sym_POUND_BANG2] = ACTIONS(49),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(51),
    [sym_dot] = ACTIONS(54),
    [aux_sym_comment_token1] = ACTIONS(57),
    [anon_sym_POUND_SEMI] = ACTIONS(60),
    [aux_sym_comment_token2] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(63),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(63),
    [anon_sym_POUND_PIPE] = ACTIONS(66),
    [sym_boolean] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(69),
    [aux_sym_regex_token1] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_number] = ACTIONS(54),
    [sym_character] = ACTIONS(51),
    [aux_sym_symbol_token1] = ACTIONS(78),
    [sym_keyword] = ACTIONS(51),
    [anon_sym_POUND_AMP] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_POUNDfl] = ACTIONS(95),
    [anon_sym_POUNDfx] = ACTIONS(95),
    [anon_sym_POUNDs] = ACTIONS(98),
    [anon_sym_POUNDhash] = ACTIONS(101),
    [anon_sym_POUNDhasheq] = ACTIONS(101),
    [anon_sym_POUNDhasheqv] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COMMA_AT] = ACTIONS(107),
    [anon_sym_POUND_SQUOTE] = ACTIONS(107),
    [anon_sym_POUND_BQUOTE] = ACTIONS(107),
    [anon_sym_POUND_COMMA] = ACTIONS(110),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(107),
    [anon_sym_POUNDreader] = ACTIONS(113),
    [anon_sym_POUNDlang] = ACTIONS(116),
    [anon_sym_POUND_BANG2] = ACTIONS(119),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [6] = {
    [sym__token] = STATE(17),
    [sym_comment] = STATE(17),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__token_token1] = ACTIONS(172),
    [sym_dot] = ACTIONS(174),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(174),
    [sym_character] = ACTIONS(172),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(172),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(4),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__token_token1] = ACTIONS(178),
    [sym_dot] = ACTIONS(180),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(180),
    [sym_character] = ACTIONS(178),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(178),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [8] = {
    [sym__token] = STATE(5),
    [sym_comment] = STATE(5),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(5),
    [sym_box] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [sym_graph] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_extension] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym__token_token1] = ACTIONS(182),
    [sym_dot] = ACTIONS(184),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(184),
    [sym_character] = ACTIONS(182),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(182),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [10] = {
    [sym__token] = STATE(16),
    [sym_comment] = STATE(16),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(16),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [aux_sym__token_token1] = ACTIONS(186),
    [sym_dot] = ACTIONS(188),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(188),
    [sym_character] = ACTIONS(186),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(186),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [11] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__token_token1] = ACTIONS(192),
    [sym_dot] = ACTIONS(194),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(194),
    [sym_character] = ACTIONS(192),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(192),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [12] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(9),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [aux_sym__token_token1] = ACTIONS(196),
    [sym_dot] = ACTIONS(198),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(198),
    [sym_character] = ACTIONS(196),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(196),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [13] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__token_token1] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(122),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [18] = {
    [sym__token] = STATE(13),
    [sym_comment] = STATE(13),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
    [sym_byte_string] = STATE(13),
    [sym_regex] = STATE(13),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(13),
    [sym_box] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_structure] = STATE(13),
    [sym_hash] = STATE(13),
    [sym_graph] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_extension] = STATE(13),
    [aux_sym_list_repeat1] = STATE(13),
    [aux_sym__token_token1] = ACTIONS(202),
    [sym_dot] = ACTIONS(204),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(204),
    [sym_character] = ACTIONS(202),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(202),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [19] = {
    [sym__token] = STATE(14),
    [sym_comment] = STATE(14),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__token_token1] = ACTIONS(208),
    [sym_dot] = ACTIONS(210),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(210),
    [sym_character] = ACTIONS(208),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(208),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [20] = {
    [sym__token] = STATE(15),
    [sym_comment] = STATE(15),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__token_token1] = ACTIONS(212),
    [sym_dot] = ACTIONS(214),
    [aux_sym_comment_token1] = ACTIONS(126),
    [anon_sym_POUND_SEMI] = ACTIONS(128),
    [aux_sym_comment_token2] = ACTIONS(126),
    [anon_sym_POUND_BANG] = ACTIONS(130),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(130),
    [anon_sym_POUND_PIPE] = ACTIONS(132),
    [sym_boolean] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(214),
    [sym_character] = ACTIONS(212),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(212),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUNDreader] = ACTIONS(164),
    [anon_sym_POUNDlang] = ACTIONS(166),
    [anon_sym_POUND_BANG2] = ACTIONS(168),
  },
  [21] = {
    [sym__token] = STATE(21),
    [sym_comment] = STATE(21),
    [sym__block_comment] = STATE(96),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym__token_token1] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(221),
    [anon_sym_POUND_SEMI] = ACTIONS(224),
    [aux_sym_comment_token2] = ACTIONS(221),
    [anon_sym_POUND_BANG] = ACTIONS(227),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(227),
    [anon_sym_POUND_PIPE] = ACTIONS(230),
    [sym_boolean] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(236),
    [aux_sym_regex_token1] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [sym_number] = ACTIONS(233),
    [sym_character] = ACTIONS(218),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [sym_keyword] = ACTIONS(218),
    [anon_sym_POUND_AMP] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_POUNDfl] = ACTIONS(260),
    [anon_sym_POUNDfx] = ACTIONS(260),
    [anon_sym_POUNDs] = ACTIONS(263),
    [anon_sym_POUNDhash] = ACTIONS(266),
    [anon_sym_POUNDhasheq] = ACTIONS(266),
    [anon_sym_POUNDhasheqv] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUND_SQUOTE] = ACTIONS(272),
    [anon_sym_POUND_BQUOTE] = ACTIONS(272),
    [anon_sym_POUND_COMMA] = ACTIONS(275),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(272),
    [anon_sym_POUNDreader] = ACTIONS(278),
    [anon_sym_POUNDlang] = ACTIONS(281),
    [anon_sym_POUND_BANG2] = ACTIONS(284),
  },
  [22] = {
    [sym__token] = STATE(21),
    [sym_comment] = STATE(21),
    [sym__block_comment] = STATE(96),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym__token_token1] = ACTIONS(289),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(291),
    [sym_character] = ACTIONS(289),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(289),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUNDreader] = ACTIONS(45),
    [anon_sym_POUNDlang] = ACTIONS(47),
    [anon_sym_POUND_BANG2] = ACTIONS(49),
  },
  [23] = {
    [sym__skip] = STATE(36),
    [sym_comment] = STATE(36),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(78),
    [sym_string] = STATE(78),
    [sym_byte_string] = STATE(78),
    [sym_regex] = STATE(78),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(78),
    [sym_box] = STATE(78),
    [sym_list] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_structure] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_graph] = STATE(78),
    [sym_quote] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__token_token1] = ACTIONS(293),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(303),
    [sym_character] = ACTIONS(305),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [24] = {
    [sym__skip] = STATE(33),
    [sym_comment] = STATE(33),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(126),
    [sym_box] = STATE(126),
    [sym_list] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_structure] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_graph] = STATE(126),
    [sym_quote] = STATE(126),
    [aux_sym_comment_repeat1] = STATE(33),
    [aux_sym__token_token1] = ACTIONS(307),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(309),
    [sym_character] = ACTIONS(317),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [25] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(104),
    [sym_box] = STATE(104),
    [sym_list] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_structure] = STATE(104),
    [sym_hash] = STATE(104),
    [sym_graph] = STATE(104),
    [sym_quote] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(343),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(343),
    [sym_character] = ACTIONS(345),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(345),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [26] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(91),
    [sym_string] = STATE(91),
    [sym_byte_string] = STATE(91),
    [sym_regex] = STATE(91),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(91),
    [sym_box] = STATE(91),
    [sym_list] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_structure] = STATE(91),
    [sym_hash] = STATE(91),
    [sym_graph] = STATE(91),
    [sym_quote] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(347),
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
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [27] = {
    [sym__skip] = STATE(25),
    [sym_comment] = STATE(25),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(101),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym_quote] = STATE(101),
    [aux_sym_comment_repeat1] = STATE(25),
    [aux_sym__token_token1] = ACTIONS(351),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(353),
    [sym_character] = ACTIONS(355),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(355),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [28] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym_quote] = STATE(121),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(357),
    [sym_character] = ACTIONS(359),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(359),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [29] = {
    [sym__skip] = STATE(28),
    [sym_comment] = STATE(28),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(128),
    [sym_box] = STATE(128),
    [sym_list] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_structure] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_graph] = STATE(128),
    [sym_quote] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(28),
    [aux_sym__token_token1] = ACTIONS(361),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(363),
    [sym_character] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(365),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [30] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_byte_string] = STATE(87),
    [sym_regex] = STATE(87),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(87),
    [sym_box] = STATE(87),
    [sym_list] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_structure] = STATE(87),
    [sym_hash] = STATE(87),
    [sym_graph] = STATE(87),
    [sym_quote] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(369),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(369),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [31] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(113),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym_quote] = STATE(113),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(371),
    [sym_character] = ACTIONS(373),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(373),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [32] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(112),
    [sym_box] = STATE(112),
    [sym_list] = STATE(112),
    [sym_vector] = STATE(112),
    [sym_structure] = STATE(112),
    [sym_hash] = STATE(112),
    [sym_graph] = STATE(112),
    [sym_quote] = STATE(112),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(375),
    [sym_character] = ACTIONS(377),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(377),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [33] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(118),
    [sym_box] = STATE(118),
    [sym_list] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_structure] = STATE(118),
    [sym_hash] = STATE(118),
    [sym_graph] = STATE(118),
    [sym_quote] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(379),
    [sym_character] = ACTIONS(381),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(381),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [34] = {
    [sym__skip] = STATE(42),
    [sym_comment] = STATE(42),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(54),
    [sym_string] = STATE(54),
    [sym_byte_string] = STATE(54),
    [sym_regex] = STATE(54),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(54),
    [sym_box] = STATE(54),
    [sym_list] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_structure] = STATE(54),
    [sym_hash] = STATE(54),
    [sym_graph] = STATE(54),
    [sym_quote] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(42),
    [aux_sym__token_token1] = ACTIONS(383),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(387),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [35] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
    [sym_byte_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(70),
    [sym_box] = STATE(70),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_structure] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_graph] = STATE(70),
    [sym_quote] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(389),
    [sym_character] = ACTIONS(391),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(391),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [36] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
    [sym_byte_string] = STATE(66),
    [sym_regex] = STATE(66),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(66),
    [sym_box] = STATE(66),
    [sym_list] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_structure] = STATE(66),
    [sym_hash] = STATE(66),
    [sym_graph] = STATE(66),
    [sym_quote] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(393),
    [sym_character] = ACTIONS(395),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(395),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [37] = {
    [sym__skip] = STATE(32),
    [sym_comment] = STATE(32),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym_quote] = STATE(133),
    [aux_sym_comment_repeat1] = STATE(32),
    [aux_sym__token_token1] = ACTIONS(397),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(399),
    [sym_character] = ACTIONS(401),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(401),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [38] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_byte_string] = STATE(123),
    [sym_regex] = STATE(123),
    [sym__real_string] = STATE(119),
    [sym_symbol] = STATE(123),
    [sym_box] = STATE(123),
    [sym_list] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_structure] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_graph] = STATE(123),
    [sym_quote] = STATE(123),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(403),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(311),
    [aux_sym_regex_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_number] = ACTIONS(405),
    [sym_character] = ACTIONS(407),
    [aux_sym_symbol_token1] = ACTIONS(319),
    [sym_keyword] = ACTIONS(407),
    [anon_sym_POUND_AMP] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_POUNDfl] = ACTIONS(329),
    [anon_sym_POUNDfx] = ACTIONS(329),
    [anon_sym_POUNDs] = ACTIONS(331),
    [anon_sym_POUNDhash] = ACTIONS(333),
    [anon_sym_POUNDhasheq] = ACTIONS(333),
    [anon_sym_POUNDhasheqv] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COMMA_AT] = ACTIONS(337),
    [anon_sym_POUND_SQUOTE] = ACTIONS(337),
    [anon_sym_POUND_BQUOTE] = ACTIONS(337),
    [anon_sym_POUND_COMMA] = ACTIONS(339),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(337),
  },
  [39] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(64),
    [sym_string] = STATE(64),
    [sym_byte_string] = STATE(64),
    [sym_regex] = STATE(64),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(64),
    [sym_box] = STATE(64),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_structure] = STATE(64),
    [sym_hash] = STATE(64),
    [sym_graph] = STATE(64),
    [sym_quote] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__token_token1] = ACTIONS(409),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(411),
    [sym_character] = ACTIONS(413),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(413),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [40] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(61),
    [sym_string] = STATE(61),
    [sym_byte_string] = STATE(61),
    [sym_regex] = STATE(61),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(61),
    [sym_box] = STATE(61),
    [sym_list] = STATE(61),
    [sym_vector] = STATE(61),
    [sym_structure] = STATE(61),
    [sym_hash] = STATE(61),
    [sym_graph] = STATE(61),
    [sym_quote] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(49),
    [aux_sym__token_token1] = ACTIONS(415),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(417),
    [sym_character] = ACTIONS(419),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(419),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [41] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(84),
    [sym_string] = STATE(84),
    [sym_byte_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(84),
    [sym_box] = STATE(84),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_structure] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_graph] = STATE(84),
    [sym_quote] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(17),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [42] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(68),
    [sym_string] = STATE(68),
    [sym_byte_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(68),
    [sym_box] = STATE(68),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_structure] = STATE(68),
    [sym_hash] = STATE(68),
    [sym_graph] = STATE(68),
    [sym_quote] = STATE(68),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(425),
    [sym_character] = ACTIONS(427),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(427),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [43] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(103),
    [sym_box] = STATE(103),
    [sym_list] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_structure] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_graph] = STATE(103),
    [sym_quote] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(429),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(431),
    [sym_character] = ACTIONS(433),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(433),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [44] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(102),
    [sym_box] = STATE(102),
    [sym_list] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_structure] = STATE(102),
    [sym_hash] = STATE(102),
    [sym_graph] = STATE(102),
    [sym_quote] = STATE(102),
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__token_token1] = ACTIONS(435),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(437),
    [sym_character] = ACTIONS(439),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(439),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [45] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(95),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym_quote] = STATE(95),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(441),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(443),
    [sym_character] = ACTIONS(445),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(445),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [46] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(62),
    [sym_string] = STATE(62),
    [sym_byte_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(62),
    [sym_box] = STATE(62),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_structure] = STATE(62),
    [sym_hash] = STATE(62),
    [sym_graph] = STATE(62),
    [sym_quote] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(447),
    [sym_character] = ACTIONS(449),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(449),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [47] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_byte_string] = STATE(90),
    [sym_regex] = STATE(90),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(90),
    [sym_box] = STATE(90),
    [sym_list] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_structure] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_graph] = STATE(90),
    [sym_quote] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(26),
    [aux_sym__token_token1] = ACTIONS(451),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(453),
    [sym_character] = ACTIONS(455),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(455),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
  [48] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_byte_string] = STATE(69),
    [sym_regex] = STATE(69),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(69),
    [sym_box] = STATE(69),
    [sym_list] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_structure] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_graph] = STATE(69),
    [sym_quote] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(35),
    [aux_sym__token_token1] = ACTIONS(457),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(459),
    [sym_character] = ACTIONS(461),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(461),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [49] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(63),
    [sym_string] = STATE(63),
    [sym_byte_string] = STATE(63),
    [sym_regex] = STATE(63),
    [sym__real_string] = STATE(67),
    [sym_symbol] = STATE(63),
    [sym_box] = STATE(63),
    [sym_list] = STATE(63),
    [sym_vector] = STATE(63),
    [sym_structure] = STATE(63),
    [sym_hash] = STATE(63),
    [sym_graph] = STATE(63),
    [sym_quote] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(134),
    [aux_sym_regex_token1] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(463),
    [sym_character] = ACTIONS(465),
    [aux_sym_symbol_token1] = ACTIONS(140),
    [sym_keyword] = ACTIONS(465),
    [anon_sym_POUND_AMP] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_POUNDfl] = ACTIONS(152),
    [anon_sym_POUNDfx] = ACTIONS(152),
    [anon_sym_POUNDs] = ACTIONS(154),
    [anon_sym_POUNDhash] = ACTIONS(156),
    [anon_sym_POUNDhasheq] = ACTIONS(156),
    [anon_sym_POUNDhasheqv] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [anon_sym_POUND_SQUOTE] = ACTIONS(160),
    [anon_sym_POUND_BQUOTE] = ACTIONS(160),
    [anon_sym_POUND_COMMA] = ACTIONS(162),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(160),
  },
  [50] = {
    [sym__skip] = STATE(106),
    [sym_comment] = STATE(106),
    [sym__block_comment] = STATE(129),
    [sym__datum] = STATE(86),
    [sym_string] = STATE(86),
    [sym_byte_string] = STATE(86),
    [sym_regex] = STATE(86),
    [sym__real_string] = STATE(107),
    [sym_symbol] = STATE(86),
    [sym_box] = STATE(86),
    [sym_list] = STATE(86),
    [sym_vector] = STATE(86),
    [sym_structure] = STATE(86),
    [sym_hash] = STATE(86),
    [sym_graph] = STATE(86),
    [sym_quote] = STATE(86),
    [aux_sym_comment_repeat1] = STATE(106),
    [aux_sym__token_token1] = ACTIONS(341),
    [aux_sym_comment_token1] = ACTIONS(295),
    [anon_sym_POUND_SEMI] = ACTIONS(297),
    [aux_sym_comment_token2] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(299),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(299),
    [anon_sym_POUND_PIPE] = ACTIONS(301),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(469),
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
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COMMA_AT] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(41),
    [anon_sym_POUND_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_COMMA] = ACTIONS(43),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(471), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [48] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(477), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [96] = 2,
    ACTIONS(483), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(481), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [141] = 2,
    ACTIONS(487), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(485), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [186] = 2,
    ACTIONS(491), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(489), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [231] = 2,
    ACTIONS(495), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(493), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [276] = 2,
    ACTIONS(499), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(497), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [321] = 2,
    ACTIONS(503), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(501), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [366] = 2,
    ACTIONS(507), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(505), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [411] = 2,
    ACTIONS(511), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(509), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [456] = 2,
    ACTIONS(515), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(513), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [501] = 2,
    ACTIONS(519), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(517), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [546] = 2,
    ACTIONS(523), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(521), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [591] = 2,
    ACTIONS(527), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(525), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [636] = 2,
    ACTIONS(531), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(529), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [681] = 2,
    ACTIONS(535), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(533), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [726] = 2,
    ACTIONS(539), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(537), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [771] = 2,
    ACTIONS(543), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(541), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [816] = 2,
    ACTIONS(473), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(471), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [861] = 2,
    ACTIONS(479), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(477), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [906] = 2,
    ACTIONS(547), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(545), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [951] = 2,
    ACTIONS(551), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(549), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [996] = 2,
    ACTIONS(555), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(553), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1041] = 2,
    ACTIONS(559), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(557), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1086] = 2,
    ACTIONS(563), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(561), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1131] = 2,
    ACTIONS(567), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(565), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1176] = 2,
    ACTIONS(571), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(569), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1221] = 2,
    ACTIONS(575), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(573), 30,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1266] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(471), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1311] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(477), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1356] = 2,
    ACTIONS(531), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(529), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1398] = 2,
    ACTIONS(551), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(549), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1440] = 2,
    ACTIONS(559), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(557), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1482] = 2,
    ACTIONS(535), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(533), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1524] = 2,
    ACTIONS(511), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(509), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1566] = 2,
    ACTIONS(519), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(517), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1608] = 2,
    ACTIONS(523), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(521), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1650] = 2,
    ACTIONS(491), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(489), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1692] = 2,
    ACTIONS(563), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(561), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1734] = 2,
    ACTIONS(487), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(485), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1776] = 2,
    ACTIONS(543), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(541), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1818] = 2,
    ACTIONS(571), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(569), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1860] = 2,
    ACTIONS(555), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(553), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1902] = 2,
    ACTIONS(567), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(565), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1944] = 2,
    ACTIONS(575), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(573), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1986] = 2,
    ACTIONS(483), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(481), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2028] = 2,
    ACTIONS(547), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(545), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2070] = 2,
    ACTIONS(503), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(501), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2112] = 2,
    ACTIONS(495), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(493), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2154] = 2,
    ACTIONS(507), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(505), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2196] = 2,
    ACTIONS(473), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(471), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2238] = 2,
    ACTIONS(527), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(525), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2280] = 2,
    ACTIONS(515), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(513), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2322] = 2,
    ACTIONS(479), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(477), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2364] = 2,
    ACTIONS(499), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(497), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2406] = 9,
    ACTIONS(577), 1,
      aux_sym__token_token1,
    ACTIONS(583), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(589), 1,
      anon_sym_POUND_PIPE,
    STATE(129), 1,
      sym__block_comment,
    ACTIONS(580), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(586), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(106), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(592), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(594), 18,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2462] = 2,
    ACTIONS(539), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(537), 28,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2504] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(477), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2545] = 3,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(471), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2586] = 2,
    ACTIONS(555), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(553), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2624] = 2,
    ACTIONS(495), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(493), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2662] = 2,
    ACTIONS(519), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(517), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2700] = 2,
    ACTIONS(479), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(477), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2738] = 2,
    ACTIONS(511), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(509), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2776] = 2,
    ACTIONS(567), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(565), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2814] = 2,
    ACTIONS(503), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(501), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2852] = 2,
    ACTIONS(563), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(561), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2890] = 2,
    ACTIONS(535), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(533), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2928] = 2,
    ACTIONS(539), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(537), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2966] = 2,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(489), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3004] = 2,
    ACTIONS(543), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(541), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3042] = 2,
    ACTIONS(571), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(569), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3080] = 2,
    ACTIONS(473), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(471), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3118] = 2,
    ACTIONS(507), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(505), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3156] = 2,
    ACTIONS(559), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(557), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3194] = 2,
    ACTIONS(575), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(573), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3232] = 2,
    ACTIONS(499), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(497), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3270] = 2,
    ACTIONS(487), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(485), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3308] = 2,
    ACTIONS(483), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(481), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3346] = 2,
    ACTIONS(547), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(545), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3384] = 2,
    ACTIONS(551), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(549), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3422] = 2,
    ACTIONS(531), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(529), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3460] = 2,
    ACTIONS(527), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(525), 25,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3498] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      aux_sym__real_string_token1,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3534] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      aux_sym__real_string_token1,
    STATE(136), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3570] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(600), 1,
      aux_sym__real_string_token1,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3606] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(600), 1,
      aux_sym__real_string_token1,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3642] = 8,
    ACTIONS(618), 1,
      anon_sym_BSLASH,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    ACTIONS(623), 1,
      aux_sym__real_string_token1,
    ACTIONS(629), 1,
      anon_sym_BSLASHx,
    ACTIONS(632), 1,
      anon_sym_BSLASHu,
    ACTIONS(635), 1,
      anon_sym_BSLASHU,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(626), 11,
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
  [3678] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    ACTIONS(638), 1,
      anon_sym_DQUOTE,
    ACTIONS(640), 1,
      aux_sym__real_string_token1,
    STATE(134), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3714] = 8,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      anon_sym_BSLASHx,
    ACTIONS(606), 1,
      anon_sym_BSLASHu,
    ACTIONS(608), 1,
      anon_sym_BSLASHU,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      aux_sym__real_string_token1,
    STATE(137), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(602), 11,
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
  [3750] = 2,
    ACTIONS(646), 1,
      anon_sym_BSLASH,
    ACTIONS(648), 16,
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
  [3772] = 2,
    ACTIONS(650), 1,
      anon_sym_BSLASH,
    ACTIONS(652), 16,
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
  [3794] = 8,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    ACTIONS(658), 1,
      anon_sym_EQ,
    STATE(99), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [3819] = 8,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      aux_sym_vector_token1,
    STATE(110), 1,
      sym__real_string,
    STATE(125), 1,
      sym_list,
    STATE(147), 1,
      aux_sym_vector_repeat1,
  [3844] = 8,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    ACTIONS(662), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [3869] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      aux_sym_vector_token1,
    STATE(83), 1,
      sym_list,
    STATE(93), 1,
      sym__real_string,
    STATE(143), 1,
      aux_sym_vector_repeat1,
  [3894] = 8,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    ACTIONS(668), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [3919] = 8,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    STATE(73), 1,
      sym__real_string,
    STATE(74), 1,
      sym_list,
    STATE(145), 1,
      aux_sym_vector_repeat1,
  [3944] = 3,
    ACTIONS(676), 1,
      aux_sym_vector_token1,
    STATE(149), 1,
      aux_sym_vector_repeat1,
    ACTIONS(674), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [3958] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    STATE(99), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [3977] = 6,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    STATE(56), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [3996] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      aux_sym_vector_token1,
    STATE(83), 1,
      sym_list,
    STATE(150), 1,
      aux_sym_vector_repeat1,
  [4015] = 6,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      aux_sym_vector_token1,
    STATE(111), 1,
      sym_list,
    STATE(149), 1,
      aux_sym_vector_repeat1,
  [4034] = 6,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(681), 1,
      aux_sym_vector_token1,
    STATE(74), 1,
      sym_list,
    STATE(151), 1,
      aux_sym_vector_repeat1,
  [4053] = 6,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      aux_sym_vector_token1,
    STATE(125), 1,
      sym_list,
    STATE(153), 1,
      aux_sym_vector_repeat1,
  [4072] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(687), 1,
      aux_sym__block_comment_token1,
    ACTIONS(689), 1,
      anon_sym_PIPE_POUND,
    STATE(162), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4086] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(691), 1,
      aux_sym__block_comment_token1,
    ACTIONS(693), 1,
      anon_sym_PIPE_POUND,
    STATE(158), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4100] = 4,
    ACTIONS(695), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(698), 1,
      aux_sym__block_comment_token1,
    ACTIONS(701), 1,
      anon_sym_PIPE_POUND,
    STATE(158), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4114] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(691), 1,
      aux_sym__block_comment_token1,
    ACTIONS(703), 1,
      anon_sym_PIPE_POUND,
    STATE(158), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4128] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(705), 1,
      aux_sym__block_comment_token1,
    ACTIONS(707), 1,
      anon_sym_PIPE_POUND,
    STATE(164), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4142] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(709), 1,
      aux_sym__block_comment_token1,
    ACTIONS(711), 1,
      anon_sym_PIPE_POUND,
    STATE(157), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4156] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(691), 1,
      aux_sym__block_comment_token1,
    ACTIONS(713), 1,
      anon_sym_PIPE_POUND,
    STATE(158), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4170] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(715), 1,
      aux_sym__block_comment_token1,
    ACTIONS(717), 1,
      anon_sym_PIPE_POUND,
    STATE(159), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4184] = 4,
    ACTIONS(685), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(691), 1,
      aux_sym__block_comment_token1,
    ACTIONS(719), 1,
      anon_sym_PIPE_POUND,
    STATE(158), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4198] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_list,
  [4211] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_list,
  [4224] = 4,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_list,
  [4237] = 4,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_list,
  [4250] = 4,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_list,
  [4263] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_list,
  [4276] = 2,
    ACTIONS(567), 1,
      aux_sym__block_comment_token1,
    ACTIONS(565), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [4284] = 2,
    ACTIONS(499), 1,
      aux_sym__block_comment_token1,
    ACTIONS(497), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [4292] = 2,
    ACTIONS(721), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(723), 1,
      aux_sym_escape_sequence_token4,
  [4299] = 2,
    ACTIONS(725), 1,
      aux_sym_comment_token3,
    STATE(179), 1,
      aux_sym_comment_repeat2,
  [4306] = 2,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym__real_string,
  [4313] = 2,
    ACTIONS(727), 1,
      aux_sym_comment_token3,
    STATE(176), 1,
      aux_sym_comment_repeat2,
  [4320] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym__real_string,
  [4327] = 2,
    ACTIONS(730), 1,
      aux_sym_comment_token3,
    STATE(176), 1,
      aux_sym_comment_repeat2,
  [4334] = 2,
    ACTIONS(732), 1,
      aux_sym_comment_token3,
    STATE(176), 1,
      aux_sym_comment_repeat2,
  [4341] = 2,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym__real_string,
  [4348] = 2,
    ACTIONS(734), 1,
      aux_sym_comment_token3,
    STATE(178), 1,
      aux_sym_comment_repeat2,
  [4355] = 2,
    ACTIONS(736), 1,
      aux_sym_comment_token3,
    STATE(176), 1,
      aux_sym_comment_repeat2,
  [4362] = 2,
    ACTIONS(738), 1,
      aux_sym_comment_token3,
    STATE(182), 1,
      aux_sym_comment_repeat2,
  [4369] = 1,
    ACTIONS(721), 2,
      aux_sym_comment_token4,
      aux_sym_escape_sequence_token1,
  [4374] = 1,
    ACTIONS(419), 1,
      aux_sym_extension_token1,
  [4378] = 1,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
  [4382] = 1,
    ACTIONS(721), 1,
      aux_sym_escape_sequence_token5,
  [4386] = 1,
    ACTIONS(433), 1,
      aux_sym_extension_token1,
  [4390] = 1,
    ACTIONS(742), 1,
      aux_sym_comment_token4,
  [4394] = 1,
    ACTIONS(744), 1,
      anon_sym_BSLASH,
  [4398] = 1,
    ACTIONS(721), 1,
      aux_sym_escape_sequence_token2,
  [4402] = 1,
    ACTIONS(746), 1,
      aux_sym_comment_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 48,
  [SMALL_STATE(53)] = 96,
  [SMALL_STATE(54)] = 141,
  [SMALL_STATE(55)] = 186,
  [SMALL_STATE(56)] = 231,
  [SMALL_STATE(57)] = 276,
  [SMALL_STATE(58)] = 321,
  [SMALL_STATE(59)] = 366,
  [SMALL_STATE(60)] = 411,
  [SMALL_STATE(61)] = 456,
  [SMALL_STATE(62)] = 501,
  [SMALL_STATE(63)] = 546,
  [SMALL_STATE(64)] = 591,
  [SMALL_STATE(65)] = 636,
  [SMALL_STATE(66)] = 681,
  [SMALL_STATE(67)] = 726,
  [SMALL_STATE(68)] = 771,
  [SMALL_STATE(69)] = 816,
  [SMALL_STATE(70)] = 861,
  [SMALL_STATE(71)] = 906,
  [SMALL_STATE(72)] = 951,
  [SMALL_STATE(73)] = 996,
  [SMALL_STATE(74)] = 1041,
  [SMALL_STATE(75)] = 1086,
  [SMALL_STATE(76)] = 1131,
  [SMALL_STATE(77)] = 1176,
  [SMALL_STATE(78)] = 1221,
  [SMALL_STATE(79)] = 1266,
  [SMALL_STATE(80)] = 1311,
  [SMALL_STATE(81)] = 1356,
  [SMALL_STATE(82)] = 1398,
  [SMALL_STATE(83)] = 1440,
  [SMALL_STATE(84)] = 1482,
  [SMALL_STATE(85)] = 1524,
  [SMALL_STATE(86)] = 1566,
  [SMALL_STATE(87)] = 1608,
  [SMALL_STATE(88)] = 1650,
  [SMALL_STATE(89)] = 1692,
  [SMALL_STATE(90)] = 1734,
  [SMALL_STATE(91)] = 1776,
  [SMALL_STATE(92)] = 1818,
  [SMALL_STATE(93)] = 1860,
  [SMALL_STATE(94)] = 1902,
  [SMALL_STATE(95)] = 1944,
  [SMALL_STATE(96)] = 1986,
  [SMALL_STATE(97)] = 2028,
  [SMALL_STATE(98)] = 2070,
  [SMALL_STATE(99)] = 2112,
  [SMALL_STATE(100)] = 2154,
  [SMALL_STATE(101)] = 2196,
  [SMALL_STATE(102)] = 2238,
  [SMALL_STATE(103)] = 2280,
  [SMALL_STATE(104)] = 2322,
  [SMALL_STATE(105)] = 2364,
  [SMALL_STATE(106)] = 2406,
  [SMALL_STATE(107)] = 2462,
  [SMALL_STATE(108)] = 2504,
  [SMALL_STATE(109)] = 2545,
  [SMALL_STATE(110)] = 2586,
  [SMALL_STATE(111)] = 2624,
  [SMALL_STATE(112)] = 2662,
  [SMALL_STATE(113)] = 2700,
  [SMALL_STATE(114)] = 2738,
  [SMALL_STATE(115)] = 2776,
  [SMALL_STATE(116)] = 2814,
  [SMALL_STATE(117)] = 2852,
  [SMALL_STATE(118)] = 2890,
  [SMALL_STATE(119)] = 2928,
  [SMALL_STATE(120)] = 2966,
  [SMALL_STATE(121)] = 3004,
  [SMALL_STATE(122)] = 3042,
  [SMALL_STATE(123)] = 3080,
  [SMALL_STATE(124)] = 3118,
  [SMALL_STATE(125)] = 3156,
  [SMALL_STATE(126)] = 3194,
  [SMALL_STATE(127)] = 3232,
  [SMALL_STATE(128)] = 3270,
  [SMALL_STATE(129)] = 3308,
  [SMALL_STATE(130)] = 3346,
  [SMALL_STATE(131)] = 3384,
  [SMALL_STATE(132)] = 3422,
  [SMALL_STATE(133)] = 3460,
  [SMALL_STATE(134)] = 3498,
  [SMALL_STATE(135)] = 3534,
  [SMALL_STATE(136)] = 3570,
  [SMALL_STATE(137)] = 3606,
  [SMALL_STATE(138)] = 3642,
  [SMALL_STATE(139)] = 3678,
  [SMALL_STATE(140)] = 3714,
  [SMALL_STATE(141)] = 3750,
  [SMALL_STATE(142)] = 3772,
  [SMALL_STATE(143)] = 3794,
  [SMALL_STATE(144)] = 3819,
  [SMALL_STATE(145)] = 3844,
  [SMALL_STATE(146)] = 3869,
  [SMALL_STATE(147)] = 3894,
  [SMALL_STATE(148)] = 3919,
  [SMALL_STATE(149)] = 3944,
  [SMALL_STATE(150)] = 3958,
  [SMALL_STATE(151)] = 3977,
  [SMALL_STATE(152)] = 3996,
  [SMALL_STATE(153)] = 4015,
  [SMALL_STATE(154)] = 4034,
  [SMALL_STATE(155)] = 4053,
  [SMALL_STATE(156)] = 4072,
  [SMALL_STATE(157)] = 4086,
  [SMALL_STATE(158)] = 4100,
  [SMALL_STATE(159)] = 4114,
  [SMALL_STATE(160)] = 4128,
  [SMALL_STATE(161)] = 4142,
  [SMALL_STATE(162)] = 4156,
  [SMALL_STATE(163)] = 4170,
  [SMALL_STATE(164)] = 4184,
  [SMALL_STATE(165)] = 4198,
  [SMALL_STATE(166)] = 4211,
  [SMALL_STATE(167)] = 4224,
  [SMALL_STATE(168)] = 4237,
  [SMALL_STATE(169)] = 4250,
  [SMALL_STATE(170)] = 4263,
  [SMALL_STATE(171)] = 4276,
  [SMALL_STATE(172)] = 4284,
  [SMALL_STATE(173)] = 4292,
  [SMALL_STATE(174)] = 4299,
  [SMALL_STATE(175)] = 4306,
  [SMALL_STATE(176)] = 4313,
  [SMALL_STATE(177)] = 4320,
  [SMALL_STATE(178)] = 4327,
  [SMALL_STATE(179)] = 4334,
  [SMALL_STATE(180)] = 4341,
  [SMALL_STATE(181)] = 4348,
  [SMALL_STATE(182)] = 4355,
  [SMALL_STATE(183)] = 4362,
  [SMALL_STATE(184)] = 4369,
  [SMALL_STATE(185)] = 4374,
  [SMALL_STATE(186)] = 4378,
  [SMALL_STATE(187)] = 4382,
  [SMALL_STATE(188)] = 4386,
  [SMALL_STATE(189)] = 4390,
  [SMALL_STATE(190)] = 4394,
  [SMALL_STATE(191)] = 4398,
  [SMALL_STATE(192)] = 4402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(48),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(174),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(163),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(148),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(180),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(140),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(58),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(23),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(154),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(166),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(170),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(170),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(185),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(185),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(146),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(177),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(167),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(188),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(188),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(106),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(129),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(38),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(181),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(160),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(184),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(138),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(141),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(191),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(173),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(187),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(149),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(161),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(158),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(190),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
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
