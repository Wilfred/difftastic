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
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 1
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
  anon_sym_POUND_LT_LT = 16,
  aux_sym_regex_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__real_string_token1 = 19,
  anon_sym_BSLASHa = 20,
  anon_sym_BSLASHb = 21,
  anon_sym_BSLASHt = 22,
  anon_sym_BSLASHn = 23,
  anon_sym_BSLASHv = 24,
  anon_sym_BSLASHf = 25,
  anon_sym_BSLASHr = 26,
  anon_sym_BSLASHe = 27,
  anon_sym_BSLASH_DQUOTE = 28,
  anon_sym_BSLASH_SQUOTE = 29,
  anon_sym_BSLASH_BSLASH = 30,
  aux_sym_escape_sequence_token1 = 31,
  anon_sym_BSLASHx = 32,
  aux_sym_escape_sequence_token2 = 33,
  anon_sym_BSLASHu = 34,
  aux_sym_escape_sequence_token3 = 35,
  aux_sym_escape_sequence_token4 = 36,
  anon_sym_BSLASHU = 37,
  aux_sym_escape_sequence_token5 = 38,
  sym_number = 39,
  sym_character = 40,
  aux_sym_symbol_token1 = 41,
  sym_keyword = 42,
  anon_sym_POUND_AMP = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_POUNDfl = 50,
  anon_sym_POUNDfx = 51,
  aux_sym_vector_token1 = 52,
  anon_sym_POUNDs = 53,
  anon_sym_POUNDhash = 54,
  anon_sym_POUNDhasheq = 55,
  anon_sym_POUNDhasheqv = 56,
  anon_sym_EQ = 57,
  anon_sym_SQUOTE = 58,
  anon_sym_BQUOTE = 59,
  anon_sym_COMMA = 60,
  anon_sym_COMMA_AT = 61,
  anon_sym_POUND_SQUOTE = 62,
  anon_sym_POUND_BQUOTE = 63,
  anon_sym_POUND_COMMA = 64,
  anon_sym_POUND_COMMA_AT = 65,
  anon_sym_POUNDreader = 66,
  anon_sym_POUNDlang = 67,
  anon_sym_POUND_BANG2 = 68,
  aux_sym_extension_token1 = 69,
  sym__here_string_body = 70,
  sym_program = 71,
  sym__token = 72,
  sym__skip = 73,
  sym_comment = 74,
  sym__block_comment = 75,
  sym__datum = 76,
  sym_string = 77,
  sym_byte_string = 78,
  sym_here_string = 79,
  sym_regex = 80,
  sym__real_string = 81,
  sym_escape_sequence = 82,
  sym_symbol = 83,
  sym_box = 84,
  sym_list = 85,
  sym_vector = 86,
  sym_structure = 87,
  sym_hash = 88,
  sym_graph = 89,
  sym_quote = 90,
  sym_extension = 91,
  aux_sym_program_repeat1 = 92,
  aux_sym_comment_repeat1 = 93,
  aux_sym_comment_repeat2 = 94,
  aux_sym__block_comment_repeat1 = 95,
  aux_sym__real_string_repeat1 = 96,
  aux_sym_list_repeat1 = 97,
  aux_sym_vector_repeat1 = 98,
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
  [anon_sym_POUND_LT_LT] = "#<<",
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
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
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
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
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
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
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
      if (eof) ADVANCE(208);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(433);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(209);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(421);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(425);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '|') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(225);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == '=') ADVANCE(433);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(169);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(173);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(174);
      END_STATE();
    case 58:
      if (lookahead == '<') ADVANCE(233);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(376);
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(107);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(418);
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
      if (lookahead == 'b') ADVANCE(358);
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
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(358);
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
      if (lookahead == 'x') ADVANCE(235);
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
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(358);
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
      if (lookahead == 'q') ADVANCE(431);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(442);
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
      if (lookahead == 't') ADVANCE(358);
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
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 107:
      if (lookahead == '|') ADVANCE(418);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '|') ADVANCE(414);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(341);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(354);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
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
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
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
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 157:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(341);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 160:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(354);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
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
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 168:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(251);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(349);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 203:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(222);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '|') ADVANCE(223);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(418);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 207:
      if (eof) ADVANCE(208);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead == '|') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (aux_sym__token_token1_character_set_1(lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(414);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__token_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 'x') ADVANCE(427);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(444);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '&') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == ',') ADVANCE(440);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(444);
      if (lookahead == '&') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == ',') ADVANCE(440);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '&') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(438);
      if (lookahead == ',') ADVANCE(440);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '`') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
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
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(388);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(389);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(390);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(188);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(293);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
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
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
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
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
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
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(305);
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
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
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
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(308);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(317);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(321);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(327);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(196);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(123);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(336);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(175);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
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
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(391);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(391);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(391);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(391);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(386);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '|') ADVANCE(108);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '|') ADVANCE(107);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUND_BANG2);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_extension_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 207},
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
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
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
  [80] = {.lex_state = 207},
  [81] = {.lex_state = 207},
  [82] = {.lex_state = 207},
  [83] = {.lex_state = 207},
  [84] = {.lex_state = 207},
  [85] = {.lex_state = 207},
  [86] = {.lex_state = 207},
  [87] = {.lex_state = 207},
  [88] = {.lex_state = 207},
  [89] = {.lex_state = 207},
  [90] = {.lex_state = 207},
  [91] = {.lex_state = 207},
  [92] = {.lex_state = 207},
  [93] = {.lex_state = 207},
  [94] = {.lex_state = 207},
  [95] = {.lex_state = 207},
  [96] = {.lex_state = 207},
  [97] = {.lex_state = 207},
  [98] = {.lex_state = 207},
  [99] = {.lex_state = 207},
  [100] = {.lex_state = 207},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 207},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 207},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 204},
  [160] = {.lex_state = 204},
  [161] = {.lex_state = 204},
  [162] = {.lex_state = 204},
  [163] = {.lex_state = 204},
  [164] = {.lex_state = 204},
  [165] = {.lex_state = 204},
  [166] = {.lex_state = 204},
  [167] = {.lex_state = 204},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 204},
  [175] = {.lex_state = 204},
  [176] = {.lex_state = 200},
  [177] = {.lex_state = 217},
  [178] = {.lex_state = 217},
  [179] = {.lex_state = 168},
  [180] = {.lex_state = 217},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 217},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 217},
  [186] = {.lex_state = 217},
  [187] = {.lex_state = 217},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 201},
  [192] = {.lex_state = 217},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 203},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 203},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 202},
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
    [anon_sym_POUND_LT_LT] = ACTIONS(1),
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
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(190),
    [sym__token] = STATE(21),
    [sym_comment] = STATE(21),
    [sym__block_comment] = STATE(99),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(86),
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
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(15),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG2] = ACTIONS(51),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(53),
    [sym_dot] = ACTIONS(56),
    [aux_sym_comment_token1] = ACTIONS(59),
    [anon_sym_POUND_SEMI] = ACTIONS(62),
    [aux_sym_comment_token2] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(65),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(65),
    [anon_sym_POUND_PIPE] = ACTIONS(68),
    [sym_boolean] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_LT_LT] = ACTIONS(74),
    [aux_sym_regex_token1] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [sym_number] = ACTIONS(56),
    [sym_character] = ACTIONS(53),
    [aux_sym_symbol_token1] = ACTIONS(83),
    [sym_keyword] = ACTIONS(53),
    [anon_sym_POUND_AMP] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_POUNDfl] = ACTIONS(100),
    [anon_sym_POUNDfx] = ACTIONS(100),
    [anon_sym_POUNDs] = ACTIONS(103),
    [anon_sym_POUNDhash] = ACTIONS(106),
    [anon_sym_POUNDhasheq] = ACTIONS(106),
    [anon_sym_POUNDhasheqv] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_COMMA_AT] = ACTIONS(112),
    [anon_sym_POUND_SQUOTE] = ACTIONS(112),
    [anon_sym_POUND_BQUOTE] = ACTIONS(112),
    [anon_sym_POUND_COMMA] = ACTIONS(115),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(112),
    [anon_sym_POUNDreader] = ACTIONS(118),
    [anon_sym_POUNDlang] = ACTIONS(121),
    [anon_sym_POUND_BANG2] = ACTIONS(124),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [6] = {
    [sym__token] = STATE(18),
    [sym_comment] = STATE(18),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_byte_string] = STATE(18),
    [sym_here_string] = STATE(18),
    [sym_regex] = STATE(18),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(18),
    [sym_box] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_structure] = STATE(18),
    [sym_hash] = STATE(18),
    [sym_graph] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_extension] = STATE(18),
    [aux_sym_list_repeat1] = STATE(18),
    [aux_sym__token_token1] = ACTIONS(179),
    [sym_dot] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(181),
    [sym_character] = ACTIONS(179),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(179),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [7] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(4),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(185),
    [sym_dot] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(187),
    [sym_character] = ACTIONS(185),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(185),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [8] = {
    [sym__token] = STATE(5),
    [sym_comment] = STATE(5),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_here_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(189),
    [sym_dot] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(191),
    [sym_character] = ACTIONS(189),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(189),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [9] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [11] = {
    [sym__token] = STATE(17),
    [sym_comment] = STATE(17),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(195),
    [sym_dot] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(197),
    [sym_character] = ACTIONS(195),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(195),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [12] = {
    [sym__token] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_here_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(10),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [aux_sym__token_token1] = ACTIONS(201),
    [sym_dot] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(203),
    [sym_character] = ACTIONS(201),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(201),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [13] = {
    [sym__token] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [16] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(129),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [19] = {
    [sym__token] = STATE(14),
    [sym_comment] = STATE(14),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(215),
    [sym_dot] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(217),
    [sym_character] = ACTIONS(215),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(215),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [20] = {
    [sym__token] = STATE(15),
    [sym_comment] = STATE(15),
    [sym__block_comment] = STATE(53),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(54),
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
    [aux_sym__token_token1] = ACTIONS(219),
    [sym_dot] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_SEMI] = ACTIONS(133),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(135),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(135),
    [anon_sym_POUND_PIPE] = ACTIONS(137),
    [sym_boolean] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(221),
    [sym_character] = ACTIONS(219),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(219),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG2] = ACTIONS(175),
  },
  [21] = {
    [sym__token] = STATE(22),
    [sym_comment] = STATE(22),
    [sym__block_comment] = STATE(99),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(86),
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
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__token_token1] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(225),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG2] = ACTIONS(51),
  },
  [22] = {
    [sym__token] = STATE(22),
    [sym_comment] = STATE(22),
    [sym__block_comment] = STATE(99),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(86),
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
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym__token_token1] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(234),
    [anon_sym_POUND_SEMI] = ACTIONS(237),
    [aux_sym_comment_token2] = ACTIONS(234),
    [anon_sym_POUND_BANG] = ACTIONS(240),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(240),
    [anon_sym_POUND_PIPE] = ACTIONS(243),
    [sym_boolean] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_POUND_LT_LT] = ACTIONS(252),
    [aux_sym_regex_token1] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(246),
    [sym_character] = ACTIONS(231),
    [aux_sym_symbol_token1] = ACTIONS(261),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_POUND_AMP] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_POUNDfl] = ACTIONS(276),
    [anon_sym_POUNDfx] = ACTIONS(276),
    [anon_sym_POUNDs] = ACTIONS(279),
    [anon_sym_POUNDhash] = ACTIONS(282),
    [anon_sym_POUNDhasheq] = ACTIONS(282),
    [anon_sym_POUNDhasheqv] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUND_SQUOTE] = ACTIONS(288),
    [anon_sym_POUND_BQUOTE] = ACTIONS(288),
    [anon_sym_POUND_COMMA] = ACTIONS(291),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(288),
    [anon_sym_POUNDreader] = ACTIONS(294),
    [anon_sym_POUNDlang] = ACTIONS(297),
    [anon_sym_POUND_BANG2] = ACTIONS(300),
  },
  [23] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(105),
    [sym_string] = STATE(105),
    [sym_byte_string] = STATE(105),
    [sym_here_string] = STATE(105),
    [sym_regex] = STATE(105),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(105),
    [sym_box] = STATE(105),
    [sym_list] = STATE(105),
    [sym_vector] = STATE(105),
    [sym_structure] = STATE(105),
    [sym_hash] = STATE(105),
    [sym_graph] = STATE(105),
    [sym_quote] = STATE(105),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(313),
    [sym_character] = ACTIONS(315),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(315),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [24] = {
    [sym__skip] = STATE(33),
    [sym_comment] = STATE(33),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_byte_string] = STATE(132),
    [sym_here_string] = STATE(132),
    [sym_regex] = STATE(132),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(132),
    [sym_box] = STATE(132),
    [sym_list] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_structure] = STATE(132),
    [sym_hash] = STATE(132),
    [sym_graph] = STATE(132),
    [sym_quote] = STATE(132),
    [aux_sym_comment_repeat1] = STATE(33),
    [aux_sym__token_token1] = ACTIONS(317),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(319),
    [sym_character] = ACTIONS(329),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(329),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [25] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(113),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym_quote] = STATE(113),
    [aux_sym_comment_repeat1] = STATE(27),
    [aux_sym__token_token1] = ACTIONS(353),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(355),
    [sym_character] = ACTIONS(357),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(357),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [26] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_byte_string] = STATE(94),
    [sym_here_string] = STATE(94),
    [sym_regex] = STATE(94),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(94),
    [sym_box] = STATE(94),
    [sym_list] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_structure] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_graph] = STATE(94),
    [sym_quote] = STATE(94),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(359),
    [sym_character] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(361),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [27] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(126),
    [sym_box] = STATE(126),
    [sym_list] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_structure] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_graph] = STATE(126),
    [sym_quote] = STATE(126),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(363),
    [sym_character] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(365),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [28] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_byte_string] = STATE(116),
    [sym_here_string] = STATE(116),
    [sym_regex] = STATE(116),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(116),
    [sym_box] = STATE(116),
    [sym_list] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_structure] = STATE(116),
    [sym_hash] = STATE(116),
    [sym_graph] = STATE(116),
    [sym_quote] = STATE(116),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(369),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(369),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [29] = {
    [sym__skip] = STATE(28),
    [sym_comment] = STATE(28),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_byte_string] = STATE(117),
    [sym_here_string] = STATE(117),
    [sym_regex] = STATE(117),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(117),
    [sym_box] = STATE(117),
    [sym_list] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_structure] = STATE(117),
    [sym_hash] = STATE(117),
    [sym_graph] = STATE(117),
    [sym_quote] = STATE(117),
    [aux_sym_comment_repeat1] = STATE(28),
    [aux_sym__token_token1] = ACTIONS(371),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(373),
    [sym_character] = ACTIONS(375),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(375),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [30] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_byte_string] = STATE(90),
    [sym_here_string] = STATE(90),
    [sym_regex] = STATE(90),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(90),
    [sym_box] = STATE(90),
    [sym_list] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_structure] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_graph] = STATE(90),
    [sym_quote] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(377),
    [sym_character] = ACTIONS(379),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(379),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [31] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(68),
    [sym_string] = STATE(68),
    [sym_byte_string] = STATE(68),
    [sym_here_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(68),
    [sym_box] = STATE(68),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_structure] = STATE(68),
    [sym_hash] = STATE(68),
    [sym_graph] = STATE(68),
    [sym_quote] = STATE(68),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [32] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_here_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(118),
    [sym_box] = STATE(118),
    [sym_list] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_structure] = STATE(118),
    [sym_hash] = STATE(118),
    [sym_graph] = STATE(118),
    [sym_quote] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(387),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [33] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym_quote] = STATE(121),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(389),
    [sym_character] = ACTIONS(391),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(391),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [34] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(89),
    [sym_string] = STATE(89),
    [sym_byte_string] = STATE(89),
    [sym_here_string] = STATE(89),
    [sym_regex] = STATE(89),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(89),
    [sym_box] = STATE(89),
    [sym_list] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_structure] = STATE(89),
    [sym_hash] = STATE(89),
    [sym_graph] = STATE(89),
    [sym_quote] = STATE(89),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(393),
    [sym_character] = ACTIONS(395),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(395),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [35] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
    [sym_byte_string] = STATE(70),
    [sym_here_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(70),
    [sym_box] = STATE(70),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_structure] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_graph] = STATE(70),
    [sym_quote] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(397),
    [sym_character] = ACTIONS(399),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(399),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [36] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(61),
    [sym_string] = STATE(61),
    [sym_byte_string] = STATE(61),
    [sym_here_string] = STATE(61),
    [sym_regex] = STATE(61),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(61),
    [sym_box] = STATE(61),
    [sym_list] = STATE(61),
    [sym_vector] = STATE(61),
    [sym_structure] = STATE(61),
    [sym_hash] = STATE(61),
    [sym_graph] = STATE(61),
    [sym_quote] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__token_token1] = ACTIONS(401),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(403),
    [sym_character] = ACTIONS(405),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(405),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [37] = {
    [sym__skip] = STATE(32),
    [sym_comment] = STATE(32),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(123),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym_quote] = STATE(133),
    [aux_sym_comment_repeat1] = STATE(32),
    [aux_sym__token_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_POUND_LT_LT] = ACTIONS(323),
    [aux_sym_regex_token1] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(411),
    [aux_sym_symbol_token1] = ACTIONS(331),
    [sym_keyword] = ACTIONS(411),
    [anon_sym_POUND_AMP] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_POUNDfl] = ACTIONS(341),
    [anon_sym_POUNDfx] = ACTIONS(341),
    [anon_sym_POUNDs] = ACTIONS(343),
    [anon_sym_POUNDhash] = ACTIONS(345),
    [anon_sym_POUNDhasheq] = ACTIONS(345),
    [anon_sym_POUNDhasheqv] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_COMMA_AT] = ACTIONS(349),
    [anon_sym_POUND_SQUOTE] = ACTIONS(349),
    [anon_sym_POUND_BQUOTE] = ACTIONS(349),
    [anon_sym_POUND_COMMA] = ACTIONS(351),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(349),
  },
  [38] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(97),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [sym_quote] = STATE(97),
    [aux_sym_comment_repeat1] = STATE(30),
    [aux_sym__token_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(417),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [39] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(78),
    [sym_string] = STATE(78),
    [sym_byte_string] = STATE(78),
    [sym_here_string] = STATE(78),
    [sym_regex] = STATE(78),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(78),
    [sym_box] = STATE(78),
    [sym_list] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_structure] = STATE(78),
    [sym_hash] = STATE(78),
    [sym_graph] = STATE(78),
    [sym_quote] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(31),
    [aux_sym__token_token1] = ACTIONS(419),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(421),
    [sym_character] = ACTIONS(423),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(423),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [40] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(63),
    [sym_string] = STATE(63),
    [sym_byte_string] = STATE(63),
    [sym_here_string] = STATE(63),
    [sym_regex] = STATE(63),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(63),
    [sym_box] = STATE(63),
    [sym_list] = STATE(63),
    [sym_vector] = STATE(63),
    [sym_structure] = STATE(63),
    [sym_hash] = STATE(63),
    [sym_graph] = STATE(63),
    [sym_quote] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__token_token1] = ACTIONS(425),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [41] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(67),
    [sym_string] = STATE(67),
    [sym_byte_string] = STATE(67),
    [sym_here_string] = STATE(67),
    [sym_regex] = STATE(67),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(67),
    [sym_box] = STATE(67),
    [sym_list] = STATE(67),
    [sym_vector] = STATE(67),
    [sym_structure] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_graph] = STATE(67),
    [sym_quote] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(431),
    [sym_character] = ACTIONS(433),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(433),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [42] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(93),
    [sym_box] = STATE(93),
    [sym_list] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_structure] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_graph] = STATE(93),
    [sym_quote] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(26),
    [aux_sym__token_token1] = ACTIONS(435),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(437),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [43] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_byte_string] = STATE(87),
    [sym_here_string] = STATE(87),
    [sym_regex] = STATE(87),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(87),
    [sym_box] = STATE(87),
    [sym_list] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_structure] = STATE(87),
    [sym_hash] = STATE(87),
    [sym_graph] = STATE(87),
    [sym_quote] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(441),
    [sym_character] = ACTIONS(443),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(443),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [44] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(62),
    [sym_string] = STATE(62),
    [sym_byte_string] = STATE(62),
    [sym_here_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(62),
    [sym_box] = STATE(62),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_structure] = STATE(62),
    [sym_hash] = STATE(62),
    [sym_graph] = STATE(62),
    [sym_quote] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(445),
    [sym_character] = ACTIONS(447),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(447),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [45] = {
    [sym__skip] = STATE(23),
    [sym_comment] = STATE(23),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(91),
    [sym_string] = STATE(91),
    [sym_byte_string] = STATE(91),
    [sym_here_string] = STATE(91),
    [sym_regex] = STATE(91),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(91),
    [sym_box] = STATE(91),
    [sym_list] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_structure] = STATE(91),
    [sym_hash] = STATE(91),
    [sym_graph] = STATE(91),
    [sym_quote] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(23),
    [aux_sym__token_token1] = ACTIONS(449),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(451),
    [sym_character] = ACTIONS(453),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(453),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [46] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_here_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(104),
    [sym_box] = STATE(104),
    [sym_list] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_structure] = STATE(104),
    [sym_hash] = STATE(104),
    [sym_graph] = STATE(104),
    [sym_quote] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(34),
    [aux_sym__token_token1] = ACTIONS(455),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(457),
    [sym_character] = ACTIONS(459),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(459),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [47] = {
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(86),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [sym_quote] = STATE(108),
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__token_token1] = ACTIONS(461),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_LT_LT] = ACTIONS(19),
    [aux_sym_regex_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(463),
    [sym_character] = ACTIONS(465),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(465),
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
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(43),
  },
  [48] = {
    [sym__skip] = STATE(109),
    [sym_comment] = STATE(109),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(64),
    [sym_string] = STATE(64),
    [sym_byte_string] = STATE(64),
    [sym_here_string] = STATE(64),
    [sym_regex] = STATE(64),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(64),
    [sym_box] = STATE(64),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_structure] = STATE(64),
    [sym_hash] = STATE(64),
    [sym_graph] = STATE(64),
    [sym_quote] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(109),
    [aux_sym__token_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [49] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
    [sym_byte_string] = STATE(66),
    [sym_here_string] = STATE(66),
    [sym_regex] = STATE(66),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(66),
    [sym_box] = STATE(66),
    [sym_list] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_structure] = STATE(66),
    [sym_hash] = STATE(66),
    [sym_graph] = STATE(66),
    [sym_quote] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__token_token1] = ACTIONS(471),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
  [50] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__block_comment] = STATE(115),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_byte_string] = STATE(69),
    [sym_here_string] = STATE(69),
    [sym_regex] = STATE(69),
    [sym__real_string] = STATE(54),
    [sym_symbol] = STATE(69),
    [sym_box] = STATE(69),
    [sym_list] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_structure] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_graph] = STATE(69),
    [sym_quote] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(35),
    [aux_sym__token_token1] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_SEMI] = ACTIONS(307),
    [aux_sym_comment_token2] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(309),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(309),
    [anon_sym_POUND_PIPE] = ACTIONS(311),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_POUND_LT_LT] = ACTIONS(141),
    [aux_sym_regex_token1] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_number] = ACTIONS(479),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 10,
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
    ACTIONS(483), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [49] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
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
    ACTIONS(489), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [98] = 2,
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
    ACTIONS(493), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [144] = 2,
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
    ACTIONS(497), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [190] = 2,
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
    ACTIONS(501), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [236] = 2,
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
    ACTIONS(505), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [282] = 2,
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
    ACTIONS(509), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [328] = 2,
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
    ACTIONS(513), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [374] = 2,
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
    ACTIONS(517), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [420] = 2,
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
    ACTIONS(521), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [466] = 2,
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
    ACTIONS(525), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [512] = 2,
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
    ACTIONS(529), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [558] = 2,
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
    ACTIONS(533), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [604] = 2,
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
    ACTIONS(537), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [650] = 2,
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
    ACTIONS(541), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [696] = 2,
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
    ACTIONS(545), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [742] = 2,
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
    ACTIONS(549), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [788] = 2,
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
    ACTIONS(553), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [834] = 2,
    ACTIONS(485), 10,
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
    ACTIONS(483), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [880] = 2,
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
    ACTIONS(489), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [926] = 2,
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
    ACTIONS(557), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [972] = 2,
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
    ACTIONS(561), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1018] = 2,
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
    ACTIONS(565), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1064] = 2,
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
    ACTIONS(569), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1110] = 2,
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
    ACTIONS(573), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1156] = 2,
    ACTIONS(579), 10,
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
    ACTIONS(577), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1202] = 2,
    ACTIONS(583), 10,
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
    ACTIONS(581), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1248] = 2,
    ACTIONS(587), 10,
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
    ACTIONS(585), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1294] = 2,
    ACTIONS(591), 10,
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
    ACTIONS(589), 31,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
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
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1340] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(483), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1386] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
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
    ACTIONS(489), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1432] = 2,
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
    ACTIONS(541), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1475] = 2,
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
    ACTIONS(565), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1518] = 2,
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
    ACTIONS(517), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1561] = 2,
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
    ACTIONS(501), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1604] = 2,
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
    ACTIONS(497), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1647] = 2,
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
    ACTIONS(553), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1690] = 2,
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
    ACTIONS(521), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1733] = 2,
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
    ACTIONS(529), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
    ACTIONS(537), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1819] = 2,
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(483), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1862] = 2,
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
    ACTIONS(561), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1905] = 2,
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
    ACTIONS(545), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1948] = 2,
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
    ACTIONS(549), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [1991] = 2,
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
    ACTIONS(569), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2034] = 2,
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
    ACTIONS(573), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2077] = 2,
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
    ACTIONS(525), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2120] = 2,
    ACTIONS(579), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(577), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2163] = 2,
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
    ACTIONS(493), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2206] = 2,
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
    ACTIONS(505), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2249] = 2,
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
    ACTIONS(513), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2292] = 2,
    ACTIONS(583), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(581), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2335] = 2,
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
    ACTIONS(509), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2378] = 2,
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
    ACTIONS(533), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2421] = 2,
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
    ACTIONS(489), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2464] = 2,
    ACTIONS(591), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(589), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2507] = 2,
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
    ACTIONS(557), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2550] = 2,
    ACTIONS(587), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG2,
    ACTIONS(585), 29,
      ts_builtin_sym_end,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2593] = 9,
    ACTIONS(593), 1,
      aux_sym__token_token1,
    ACTIONS(599), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    STATE(115), 1,
      sym__block_comment,
    ACTIONS(596), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(602), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(109), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(608), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(610), 19,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2650] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(489), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2692] = 3,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2734] = 2,
    ACTIONS(515), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(513), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2773] = 2,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(483), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2812] = 2,
    ACTIONS(511), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(509), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2851] = 2,
    ACTIONS(495), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(493), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
    ACTIONS(551), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(549), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2929] = 2,
    ACTIONS(547), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(545), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [2968] = 2,
    ACTIONS(531), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(529), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3007] = 2,
    ACTIONS(523), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(521), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3046] = 2,
    ACTIONS(519), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(517), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3085] = 2,
    ACTIONS(555), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(553), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3124] = 2,
    ACTIONS(503), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(501), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3163] = 2,
    ACTIONS(499), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(497), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3202] = 2,
    ACTIONS(507), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(505), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3241] = 2,
    ACTIONS(563), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(561), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3280] = 2,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(489), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3319] = 2,
    ACTIONS(571), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(569), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3358] = 2,
    ACTIONS(575), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(573), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3397] = 2,
    ACTIONS(579), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(577), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3436] = 2,
    ACTIONS(583), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(581), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3475] = 2,
    ACTIONS(591), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(589), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3514] = 2,
    ACTIONS(587), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(585), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3553] = 2,
    ACTIONS(535), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(533), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3592] = 2,
    ACTIONS(559), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(557), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3631] = 2,
    ACTIONS(567), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(565), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3670] = 2,
    ACTIONS(543), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(541), 26,
      aux_sym__token_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      aux_sym_comment_token2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
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
  [3709] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(616), 1,
      aux_sym__real_string_token1,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3745] = 8,
    ACTIONS(626), 1,
      anon_sym_BSLASH,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      aux_sym__real_string_token1,
    ACTIONS(637), 1,
      anon_sym_BSLASHx,
    ACTIONS(640), 1,
      anon_sym_BSLASHu,
    ACTIONS(643), 1,
      anon_sym_BSLASHU,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(634), 11,
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
  [3781] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    ACTIONS(648), 1,
      aux_sym__real_string_token1,
    STATE(143), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3817] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      aux_sym__real_string_token1,
    STATE(141), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3853] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      aux_sym__real_string_token1,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3889] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      aux_sym__real_string_token1,
    STATE(137), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3925] = 8,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      aux_sym__real_string_token1,
    ACTIONS(620), 1,
      anon_sym_BSLASHx,
    ACTIONS(622), 1,
      anon_sym_BSLASHu,
    ACTIONS(624), 1,
      anon_sym_BSLASHU,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(138), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(618), 11,
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
  [3961] = 2,
    ACTIONS(662), 1,
      anon_sym_BSLASH,
    ACTIONS(664), 16,
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
  [3983] = 2,
    ACTIONS(666), 1,
      anon_sym_BSLASH,
    ACTIONS(668), 16,
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
  [4005] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4030] = 8,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4055] = 8,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      aux_sym_vector_token1,
    STATE(74), 1,
      sym__real_string,
    STATE(75), 1,
      sym_list,
    STATE(147), 1,
      aux_sym_vector_repeat1,
  [4080] = 8,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      aux_sym_vector_token1,
    STATE(127), 1,
      sym__real_string,
    STATE(128), 1,
      sym_list,
    STATE(150), 1,
      aux_sym_vector_repeat1,
  [4105] = 8,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_EQ,
    STATE(124), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4130] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      aux_sym_vector_token1,
    STATE(95), 1,
      sym__real_string,
    STATE(96), 1,
      sym_list,
    STATE(146), 1,
      aux_sym_vector_repeat1,
  [4155] = 3,
    ACTIONS(692), 1,
      aux_sym_vector_token1,
    STATE(152), 1,
      aux_sym_vector_repeat1,
    ACTIONS(690), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [4169] = 6,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    STATE(56), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4188] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(695), 1,
      aux_sym_vector_token1,
    STATE(96), 1,
      sym_list,
    STATE(156), 1,
      aux_sym_vector_repeat1,
  [4207] = 6,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    STATE(124), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4226] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      aux_sym_vector_token1,
    STATE(100), 1,
      sym_list,
    STATE(152), 1,
      aux_sym_vector_repeat1,
  [4245] = 6,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      aux_sym_vector_token1,
    STATE(128), 1,
      sym_list,
    STATE(155), 1,
      aux_sym_vector_repeat1,
  [4264] = 6,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      aux_sym_vector_token1,
    STATE(75), 1,
      sym_list,
    STATE(153), 1,
      aux_sym_vector_repeat1,
  [4283] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(703), 1,
      aux_sym__block_comment_token1,
    ACTIONS(705), 1,
      anon_sym_PIPE_POUND,
    STATE(167), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4297] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(707), 1,
      aux_sym__block_comment_token1,
    ACTIONS(709), 1,
      anon_sym_PIPE_POUND,
    STATE(165), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4311] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(711), 1,
      aux_sym__block_comment_token1,
    ACTIONS(713), 1,
      anon_sym_PIPE_POUND,
    STATE(159), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4325] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(715), 1,
      aux_sym__block_comment_token1,
    ACTIONS(717), 1,
      anon_sym_PIPE_POUND,
    STATE(166), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4339] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(703), 1,
      aux_sym__block_comment_token1,
    ACTIONS(719), 1,
      anon_sym_PIPE_POUND,
    STATE(167), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4353] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(721), 1,
      aux_sym__block_comment_token1,
    ACTIONS(723), 1,
      anon_sym_PIPE_POUND,
    STATE(163), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4367] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(703), 1,
      aux_sym__block_comment_token1,
    ACTIONS(725), 1,
      anon_sym_PIPE_POUND,
    STATE(167), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4381] = 4,
    ACTIONS(701), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(703), 1,
      aux_sym__block_comment_token1,
    ACTIONS(727), 1,
      anon_sym_PIPE_POUND,
    STATE(167), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4395] = 4,
    ACTIONS(729), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(732), 1,
      aux_sym__block_comment_token1,
    ACTIONS(735), 1,
      anon_sym_PIPE_POUND,
    STATE(167), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [4409] = 4,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_list,
  [4422] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_list,
  [4435] = 4,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_list,
  [4448] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_list,
  [4461] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_list,
  [4474] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_list,
  [4487] = 2,
    ACTIONS(563), 1,
      aux_sym__block_comment_token1,
    ACTIONS(561), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [4495] = 2,
    ACTIONS(511), 1,
      aux_sym__block_comment_token1,
    ACTIONS(509), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [4503] = 2,
    ACTIONS(737), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(739), 1,
      aux_sym_escape_sequence_token4,
  [4510] = 2,
    ACTIONS(741), 1,
      aux_sym_comment_token3,
    STATE(180), 1,
      aux_sym_comment_repeat2,
  [4517] = 2,
    ACTIONS(743), 1,
      aux_sym_comment_token3,
    STATE(177), 1,
      aux_sym_comment_repeat2,
  [4524] = 1,
    ACTIONS(737), 2,
      aux_sym_comment_token4,
      aux_sym_escape_sequence_token1,
  [4529] = 2,
    ACTIONS(745), 1,
      aux_sym_comment_token3,
    STATE(180), 1,
      aux_sym_comment_repeat2,
  [4536] = 2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym__real_string,
  [4543] = 2,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym__real_string,
  [4550] = 2,
    ACTIONS(748), 1,
      aux_sym_comment_token3,
    STATE(185), 1,
      aux_sym_comment_repeat2,
  [4557] = 2,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym__real_string,
  [4564] = 2,
    ACTIONS(750), 1,
      aux_sym_comment_token3,
    STATE(180), 1,
      aux_sym_comment_repeat2,
  [4571] = 2,
    ACTIONS(752), 1,
      aux_sym_comment_token3,
    STATE(180), 1,
      aux_sym_comment_repeat2,
  [4578] = 2,
    ACTIONS(754), 1,
      aux_sym_comment_token3,
    STATE(186), 1,
      aux_sym_comment_repeat2,
  [4585] = 1,
    ACTIONS(756), 1,
      anon_sym_BSLASH,
  [4589] = 1,
    ACTIONS(758), 1,
      sym__here_string_body,
  [4593] = 1,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
  [4597] = 1,
    ACTIONS(737), 1,
      aux_sym_escape_sequence_token5,
  [4601] = 1,
    ACTIONS(762), 1,
      aux_sym_comment_token3,
  [4605] = 1,
    ACTIONS(764), 1,
      aux_sym_comment_token4,
  [4609] = 1,
    ACTIONS(417), 1,
      aux_sym_extension_token1,
  [4613] = 1,
    ACTIONS(766), 1,
      sym__here_string_body,
  [4617] = 1,
    ACTIONS(405), 1,
      aux_sym_extension_token1,
  [4621] = 1,
    ACTIONS(768), 1,
      sym__here_string_body,
  [4625] = 1,
    ACTIONS(737), 1,
      aux_sym_escape_sequence_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 49,
  [SMALL_STATE(53)] = 98,
  [SMALL_STATE(54)] = 144,
  [SMALL_STATE(55)] = 190,
  [SMALL_STATE(56)] = 236,
  [SMALL_STATE(57)] = 282,
  [SMALL_STATE(58)] = 328,
  [SMALL_STATE(59)] = 374,
  [SMALL_STATE(60)] = 420,
  [SMALL_STATE(61)] = 466,
  [SMALL_STATE(62)] = 512,
  [SMALL_STATE(63)] = 558,
  [SMALL_STATE(64)] = 604,
  [SMALL_STATE(65)] = 650,
  [SMALL_STATE(66)] = 696,
  [SMALL_STATE(67)] = 742,
  [SMALL_STATE(68)] = 788,
  [SMALL_STATE(69)] = 834,
  [SMALL_STATE(70)] = 880,
  [SMALL_STATE(71)] = 926,
  [SMALL_STATE(72)] = 972,
  [SMALL_STATE(73)] = 1018,
  [SMALL_STATE(74)] = 1064,
  [SMALL_STATE(75)] = 1110,
  [SMALL_STATE(76)] = 1156,
  [SMALL_STATE(77)] = 1202,
  [SMALL_STATE(78)] = 1248,
  [SMALL_STATE(79)] = 1294,
  [SMALL_STATE(80)] = 1340,
  [SMALL_STATE(81)] = 1386,
  [SMALL_STATE(82)] = 1432,
  [SMALL_STATE(83)] = 1475,
  [SMALL_STATE(84)] = 1518,
  [SMALL_STATE(85)] = 1561,
  [SMALL_STATE(86)] = 1604,
  [SMALL_STATE(87)] = 1647,
  [SMALL_STATE(88)] = 1690,
  [SMALL_STATE(89)] = 1733,
  [SMALL_STATE(90)] = 1776,
  [SMALL_STATE(91)] = 1819,
  [SMALL_STATE(92)] = 1862,
  [SMALL_STATE(93)] = 1905,
  [SMALL_STATE(94)] = 1948,
  [SMALL_STATE(95)] = 1991,
  [SMALL_STATE(96)] = 2034,
  [SMALL_STATE(97)] = 2077,
  [SMALL_STATE(98)] = 2120,
  [SMALL_STATE(99)] = 2163,
  [SMALL_STATE(100)] = 2206,
  [SMALL_STATE(101)] = 2249,
  [SMALL_STATE(102)] = 2292,
  [SMALL_STATE(103)] = 2335,
  [SMALL_STATE(104)] = 2378,
  [SMALL_STATE(105)] = 2421,
  [SMALL_STATE(106)] = 2464,
  [SMALL_STATE(107)] = 2507,
  [SMALL_STATE(108)] = 2550,
  [SMALL_STATE(109)] = 2593,
  [SMALL_STATE(110)] = 2650,
  [SMALL_STATE(111)] = 2692,
  [SMALL_STATE(112)] = 2734,
  [SMALL_STATE(113)] = 2773,
  [SMALL_STATE(114)] = 2812,
  [SMALL_STATE(115)] = 2851,
  [SMALL_STATE(116)] = 2890,
  [SMALL_STATE(117)] = 2929,
  [SMALL_STATE(118)] = 2968,
  [SMALL_STATE(119)] = 3007,
  [SMALL_STATE(120)] = 3046,
  [SMALL_STATE(121)] = 3085,
  [SMALL_STATE(122)] = 3124,
  [SMALL_STATE(123)] = 3163,
  [SMALL_STATE(124)] = 3202,
  [SMALL_STATE(125)] = 3241,
  [SMALL_STATE(126)] = 3280,
  [SMALL_STATE(127)] = 3319,
  [SMALL_STATE(128)] = 3358,
  [SMALL_STATE(129)] = 3397,
  [SMALL_STATE(130)] = 3436,
  [SMALL_STATE(131)] = 3475,
  [SMALL_STATE(132)] = 3514,
  [SMALL_STATE(133)] = 3553,
  [SMALL_STATE(134)] = 3592,
  [SMALL_STATE(135)] = 3631,
  [SMALL_STATE(136)] = 3670,
  [SMALL_STATE(137)] = 3709,
  [SMALL_STATE(138)] = 3745,
  [SMALL_STATE(139)] = 3781,
  [SMALL_STATE(140)] = 3817,
  [SMALL_STATE(141)] = 3853,
  [SMALL_STATE(142)] = 3889,
  [SMALL_STATE(143)] = 3925,
  [SMALL_STATE(144)] = 3961,
  [SMALL_STATE(145)] = 3983,
  [SMALL_STATE(146)] = 4005,
  [SMALL_STATE(147)] = 4030,
  [SMALL_STATE(148)] = 4055,
  [SMALL_STATE(149)] = 4080,
  [SMALL_STATE(150)] = 4105,
  [SMALL_STATE(151)] = 4130,
  [SMALL_STATE(152)] = 4155,
  [SMALL_STATE(153)] = 4169,
  [SMALL_STATE(154)] = 4188,
  [SMALL_STATE(155)] = 4207,
  [SMALL_STATE(156)] = 4226,
  [SMALL_STATE(157)] = 4245,
  [SMALL_STATE(158)] = 4264,
  [SMALL_STATE(159)] = 4283,
  [SMALL_STATE(160)] = 4297,
  [SMALL_STATE(161)] = 4311,
  [SMALL_STATE(162)] = 4325,
  [SMALL_STATE(163)] = 4339,
  [SMALL_STATE(164)] = 4353,
  [SMALL_STATE(165)] = 4367,
  [SMALL_STATE(166)] = 4381,
  [SMALL_STATE(167)] = 4395,
  [SMALL_STATE(168)] = 4409,
  [SMALL_STATE(169)] = 4422,
  [SMALL_STATE(170)] = 4435,
  [SMALL_STATE(171)] = 4448,
  [SMALL_STATE(172)] = 4461,
  [SMALL_STATE(173)] = 4474,
  [SMALL_STATE(174)] = 4487,
  [SMALL_STATE(175)] = 4495,
  [SMALL_STATE(176)] = 4503,
  [SMALL_STATE(177)] = 4510,
  [SMALL_STATE(178)] = 4517,
  [SMALL_STATE(179)] = 4524,
  [SMALL_STATE(180)] = 4529,
  [SMALL_STATE(181)] = 4536,
  [SMALL_STATE(182)] = 4543,
  [SMALL_STATE(183)] = 4550,
  [SMALL_STATE(184)] = 4557,
  [SMALL_STATE(185)] = 4564,
  [SMALL_STATE(186)] = 4571,
  [SMALL_STATE(187)] = 4578,
  [SMALL_STATE(188)] = 4585,
  [SMALL_STATE(189)] = 4589,
  [SMALL_STATE(190)] = 4593,
  [SMALL_STATE(191)] = 4597,
  [SMALL_STATE(192)] = 4601,
  [SMALL_STATE(193)] = 4605,
  [SMALL_STATE(194)] = 4609,
  [SMALL_STATE(195)] = 4613,
  [SMALL_STATE(196)] = 4617,
  [SMALL_STATE(197)] = 4621,
  [SMALL_STATE(198)] = 4625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(187),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(161),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(148),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(197),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(142),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(59),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(158),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(171),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(169),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(169),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(196),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(196),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(195),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(184),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(109),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(115),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(25),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(178),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(160),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(179),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(138),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(145),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(198),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(176),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(191),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(152),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(164),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(167),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(188),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [760] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
