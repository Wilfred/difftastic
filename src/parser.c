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
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  aux_sym_extension_token1 = 64,
  sym_program = 65,
  sym__token = 66,
  sym__skip = 67,
  sym_comment = 68,
  sym__block_comment = 69,
  sym__datum = 70,
  sym_string = 71,
  sym_byte_string = 72,
  sym_regex = 73,
  sym__real_string = 74,
  sym_escape_sequence = 75,
  sym_box = 76,
  sym_list = 77,
  sym_vector = 78,
  sym_structure = 79,
  sym_hash = 80,
  sym_graph = 81,
  sym_quote = 82,
  sym_extension = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_comment_repeat1 = 85,
  aux_sym_comment_repeat2 = 86,
  aux_sym__block_comment_repeat1 = 87,
  aux_sym__real_string_repeat1 = 88,
  aux_sym_list_repeat1 = 89,
  aux_sym_vector_repeat1 = 90,
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
      if (eof) ADVANCE(198);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(269);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(164);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'U') ADVANCE(346);
      if (lookahead == 'b') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(342);
      if (lookahead == 'v') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'q') ADVANCE(359);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 110:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 111:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 112:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
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
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
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
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
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
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      END_STATE();
    case 150:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 152:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
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
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 161:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'T' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(291);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 196:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(199);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == '{') ADVANCE(352);
      if (lookahead == '}') ADVANCE(353);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
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
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
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
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(177);
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
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
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
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(181);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(268);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(149);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(149);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(272);
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
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(275);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(277);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(153);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(169);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(169);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
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
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
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
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
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
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
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
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(173);
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
      if (lookahead == '#') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(291);
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
      if (lookahead == '#') ADVANCE(292);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(185);
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
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
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
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(296);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(189);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
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
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
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
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 197},
  [3] = {.lex_state = 197},
  [4] = {.lex_state = 197},
  [5] = {.lex_state = 197},
  [6] = {.lex_state = 197},
  [7] = {.lex_state = 197},
  [8] = {.lex_state = 197},
  [9] = {.lex_state = 197},
  [10] = {.lex_state = 197},
  [11] = {.lex_state = 197},
  [12] = {.lex_state = 197},
  [13] = {.lex_state = 197},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 197},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 197},
  [25] = {.lex_state = 197},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 197},
  [28] = {.lex_state = 197},
  [29] = {.lex_state = 197},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 197},
  [32] = {.lex_state = 197},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 197},
  [35] = {.lex_state = 197},
  [36] = {.lex_state = 197},
  [37] = {.lex_state = 197},
  [38] = {.lex_state = 197},
  [39] = {.lex_state = 197},
  [40] = {.lex_state = 197},
  [41] = {.lex_state = 197},
  [42] = {.lex_state = 197},
  [43] = {.lex_state = 197},
  [44] = {.lex_state = 197},
  [45] = {.lex_state = 197},
  [46] = {.lex_state = 197},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 197},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 197},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 207},
  [69] = {.lex_state = 193},
  [70] = {.lex_state = 161},
  [71] = {.lex_state = 207},
  [72] = {.lex_state = 207},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 194},
  [75] = {.lex_state = 207},
  [76] = {.lex_state = 197},
  [77] = {.lex_state = 195},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 196},
  [80] = {.lex_state = 3},
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
    [sym__whitespace] = ACTIONS(47),
    [sym_dot] = ACTIONS(50),
    [aux_sym_comment_token1] = ACTIONS(53),
    [anon_sym_POUND_SEMI] = ACTIONS(56),
    [anon_sym_POUND_BANG] = ACTIONS(59),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(59),
    [anon_sym_POUND_PIPE] = ACTIONS(62),
    [sym_boolean] = ACTIONS(50),
    [anon_sym_POUND] = ACTIONS(65),
    [aux_sym_regex_token1] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_number] = ACTIONS(47),
    [sym_character] = ACTIONS(47),
    [anon_sym_POUND_AMP] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_POUNDfl] = ACTIONS(88),
    [anon_sym_POUNDfx] = ACTIONS(88),
    [anon_sym_POUNDs] = ACTIONS(91),
    [anon_sym_POUNDhash] = ACTIONS(94),
    [anon_sym_POUNDhasheq] = ACTIONS(94),
    [anon_sym_POUNDhasheqv] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_COMMA_AT] = ACTIONS(100),
    [anon_sym_POUND_SQUOTE] = ACTIONS(100),
    [anon_sym_POUND_BQUOTE] = ACTIONS(100),
    [anon_sym_POUND_COMMA] = ACTIONS(103),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(100),
    [anon_sym_POUNDreader] = ACTIONS(106),
    [anon_sym_POUNDlang] = ACTIONS(109),
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
    [sym__whitespace] = ACTIONS(112),
    [sym_dot] = ACTIONS(114),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(112),
    [sym_character] = ACTIONS(112),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(116),
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
    [sym__whitespace] = ACTIONS(118),
    [sym_dot] = ACTIONS(120),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(118),
    [sym_character] = ACTIONS(118),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [sym__whitespace] = ACTIONS(124),
    [sym_dot] = ACTIONS(126),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(124),
    [sym_character] = ACTIONS(124),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(122),
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
    [sym__whitespace] = ACTIONS(128),
    [sym_dot] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(128),
    [sym_character] = ACTIONS(128),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(122),
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
    [sym__whitespace] = ACTIONS(112),
    [sym_dot] = ACTIONS(114),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(112),
    [sym_character] = ACTIONS(112),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(116),
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
    [sym__whitespace] = ACTIONS(112),
    [sym_dot] = ACTIONS(114),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(112),
    [sym_character] = ACTIONS(112),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(116),
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
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__whitespace] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(137),
    [anon_sym_POUND_SEMI] = ACTIONS(140),
    [anon_sym_POUND_BANG] = ACTIONS(143),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(143),
    [anon_sym_POUND_PIPE] = ACTIONS(146),
    [sym_boolean] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(152),
    [aux_sym_regex_token1] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [sym_number] = ACTIONS(134),
    [sym_character] = ACTIONS(134),
    [anon_sym_POUND_AMP] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_POUNDfl] = ACTIONS(173),
    [anon_sym_POUNDfx] = ACTIONS(173),
    [anon_sym_POUNDs] = ACTIONS(176),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_COMMA_AT] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(185),
    [anon_sym_POUND_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_COMMA] = ACTIONS(188),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(185),
    [anon_sym_POUNDreader] = ACTIONS(191),
    [anon_sym_POUNDlang] = ACTIONS(194),
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
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym__whitespace] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(199),
    [sym_character] = ACTIONS(199),
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
  },
  [11] = {
    [sym__skip] = STATE(16),
    [sym_comment] = STATE(16),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(38),
    [sym_string] = STATE(38),
    [sym_byte_string] = STATE(38),
    [sym_regex] = STATE(38),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(38),
    [sym_list] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_structure] = STATE(38),
    [sym_hash] = STATE(38),
    [sym_graph] = STATE(38),
    [sym_quote] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(16),
    [sym__whitespace] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(205),
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
  },
  [12] = {
    [sym__skip] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(27),
    [sym_string] = STATE(27),
    [sym_byte_string] = STATE(27),
    [sym_regex] = STATE(27),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(27),
    [sym_list] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_structure] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_graph] = STATE(27),
    [sym_quote] = STATE(27),
    [aux_sym_comment_repeat1] = STATE(20),
    [sym__whitespace] = ACTIONS(209),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(213),
    [sym_character] = ACTIONS(213),
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
  },
  [13] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(30),
    [sym_string] = STATE(30),
    [sym_byte_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(30),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_structure] = STATE(30),
    [sym_hash] = STATE(30),
    [sym_graph] = STATE(30),
    [sym_quote] = STATE(30),
    [aux_sym_comment_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(219),
    [sym_character] = ACTIONS(219),
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
  },
  [14] = {
    [sym__skip] = STATE(19),
    [sym_comment] = STATE(19),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(23),
    [sym_string] = STATE(23),
    [sym_byte_string] = STATE(23),
    [sym_regex] = STATE(23),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(23),
    [sym_list] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_structure] = STATE(23),
    [sym_hash] = STATE(23),
    [sym_graph] = STATE(23),
    [sym_quote] = STATE(23),
    [aux_sym_comment_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(225),
    [sym_character] = ACTIONS(225),
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
  },
  [15] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(32),
    [sym_string] = STATE(32),
    [sym_byte_string] = STATE(32),
    [sym_regex] = STATE(32),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(32),
    [sym_list] = STATE(32),
    [sym_vector] = STATE(32),
    [sym_structure] = STATE(32),
    [sym_hash] = STATE(32),
    [sym_graph] = STATE(32),
    [sym_quote] = STATE(32),
    [aux_sym_comment_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(229),
    [sym_character] = ACTIONS(229),
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
  },
  [16] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(45),
    [sym_string] = STATE(45),
    [sym_byte_string] = STATE(45),
    [sym_regex] = STATE(45),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(45),
    [sym_list] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_structure] = STATE(45),
    [sym_hash] = STATE(45),
    [sym_graph] = STATE(45),
    [sym_quote] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(233),
    [sym_character] = ACTIONS(233),
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
  },
  [17] = {
    [sym__skip] = STATE(15),
    [sym_comment] = STATE(15),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(44),
    [sym_string] = STATE(44),
    [sym_byte_string] = STATE(44),
    [sym_regex] = STATE(44),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(44),
    [sym_list] = STATE(44),
    [sym_vector] = STATE(44),
    [sym_structure] = STATE(44),
    [sym_hash] = STATE(44),
    [sym_graph] = STATE(44),
    [sym_quote] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(235),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(239),
    [sym_character] = ACTIONS(239),
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
  },
  [18] = {
    [sym__skip] = STATE(13),
    [sym_comment] = STATE(13),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(36),
    [sym_string] = STATE(36),
    [sym_byte_string] = STATE(36),
    [sym_regex] = STATE(36),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(36),
    [sym_list] = STATE(36),
    [sym_vector] = STATE(36),
    [sym_structure] = STATE(36),
    [sym_hash] = STATE(36),
    [sym_graph] = STATE(36),
    [sym_quote] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(245),
    [sym_character] = ACTIONS(245),
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
  },
  [19] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(35),
    [sym_string] = STATE(35),
    [sym_byte_string] = STATE(35),
    [sym_regex] = STATE(35),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(35),
    [sym_list] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_structure] = STATE(35),
    [sym_hash] = STATE(35),
    [sym_graph] = STATE(35),
    [sym_quote] = STATE(35),
    [aux_sym_comment_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(249),
    [sym_character] = ACTIONS(249),
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
  },
  [20] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym__block_comment] = STATE(39),
    [sym__datum] = STATE(25),
    [sym_string] = STATE(25),
    [sym_byte_string] = STATE(25),
    [sym_regex] = STATE(25),
    [sym__real_string] = STATE(40),
    [sym_box] = STATE(25),
    [sym_list] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_structure] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_graph] = STATE(25),
    [sym_quote] = STATE(25),
    [aux_sym_comment_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(253),
    [sym_character] = ACTIONS(253),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(257), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(255), 30,
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
  [45] = 3,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(261), 30,
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
  [90] = 2,
    ACTIONS(267), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(265), 30,
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
  [132] = 2,
    ACTIONS(271), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [174] = 2,
    ACTIONS(275), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [216] = 2,
    ACTIONS(279), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [258] = 2,
    ACTIONS(283), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [300] = 2,
    ACTIONS(287), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [342] = 2,
    ACTIONS(291), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [384] = 2,
    ACTIONS(295), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [426] = 2,
    ACTIONS(299), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [468] = 2,
    ACTIONS(303), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [510] = 2,
    ACTIONS(307), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [552] = 2,
    ACTIONS(311), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [594] = 2,
    ACTIONS(315), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [636] = 2,
    ACTIONS(319), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [678] = 2,
    ACTIONS(323), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [720] = 2,
    ACTIONS(263), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(261), 30,
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
  [762] = 2,
    ACTIONS(327), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [804] = 2,
    ACTIONS(331), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [846] = 2,
    ACTIONS(335), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [888] = 2,
    ACTIONS(339), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [930] = 2,
    ACTIONS(343), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [972] = 2,
    ACTIONS(347), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [1014] = 2,
    ACTIONS(257), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(255), 30,
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
  [1056] = 2,
    ACTIONS(351), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [1098] = 2,
    ACTIONS(355), 7,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
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
  [1140] = 9,
    ACTIONS(357), 1,
      sym__whitespace,
    ACTIONS(360), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(369), 1,
      anon_sym_POUND_PIPE,
    STATE(39), 1,
      sym__block_comment,
    ACTIONS(366), 2,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
    STATE(48), 3,
      sym__skip,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(372), 6,
      sym_boolean,
      anon_sym_POUND,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(374), 18,
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
  [1193] = 8,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      aux_sym__real_string_token1,
    ACTIONS(384), 1,
      anon_sym_BSLASHx,
    ACTIONS(386), 1,
      anon_sym_BSLASHu,
    ACTIONS(388), 1,
      anon_sym_BSLASHU,
    STATE(51), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(382), 11,
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
  [1229] = 8,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      anon_sym_BSLASHx,
    ACTIONS(386), 1,
      anon_sym_BSLASHu,
    ACTIONS(388), 1,
      anon_sym_BSLASHU,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      aux_sym__real_string_token1,
    STATE(49), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(382), 11,
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
  [1265] = 8,
    ACTIONS(394), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym__real_string_token1,
    ACTIONS(405), 1,
      anon_sym_BSLASHx,
    ACTIONS(408), 1,
      anon_sym_BSLASHu,
    ACTIONS(411), 1,
      anon_sym_BSLASHU,
    STATE(51), 2,
      sym_escape_sequence,
      aux_sym__real_string_repeat1,
    ACTIONS(402), 11,
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
  [1301] = 2,
    ACTIONS(414), 1,
      anon_sym_BSLASH,
    ACTIONS(416), 16,
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
  [1323] = 2,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 16,
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
  [1345] = 8,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      aux_sym_vector_token1,
    STATE(28), 1,
      sym__real_string,
    STATE(29), 1,
      sym_list,
    STATE(55), 1,
      aux_sym_vector_repeat1,
  [1370] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      aux_sym_vector_token1,
    ACTIONS(428), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_list,
    STATE(56), 1,
      aux_sym_vector_repeat1,
  [1395] = 3,
    ACTIONS(432), 1,
      aux_sym_vector_token1,
    STATE(56), 1,
      aux_sym_vector_repeat1,
    ACTIONS(430), 5,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1409] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(435), 1,
      aux_sym_vector_token1,
    STATE(29), 1,
      sym_list,
    STATE(58), 1,
      aux_sym_vector_repeat1,
  [1428] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      aux_sym_vector_token1,
    STATE(37), 1,
      sym_list,
    STATE(56), 1,
      aux_sym_vector_repeat1,
  [1447] = 4,
    ACTIONS(437), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(439), 1,
      aux_sym__block_comment_token1,
    ACTIONS(441), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1461] = 4,
    ACTIONS(437), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(443), 1,
      aux_sym__block_comment_token1,
    ACTIONS(445), 1,
      anon_sym_PIPE_POUND,
    STATE(59), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1475] = 4,
    ACTIONS(447), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(450), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1489] = 4,
    ACTIONS(437), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(439), 1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 1,
      anon_sym_PIPE_POUND,
    STATE(61), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1503] = 4,
    ACTIONS(437), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(457), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      anon_sym_PIPE_POUND,
    STATE(62), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [1517] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_list,
  [1530] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_list,
  [1543] = 2,
    ACTIONS(343), 1,
      aux_sym__block_comment_token1,
    ACTIONS(341), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1551] = 2,
    ACTIONS(279), 1,
      aux_sym__block_comment_token1,
    ACTIONS(277), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1559] = 2,
    ACTIONS(461), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      aux_sym_comment_repeat2,
  [1566] = 2,
    ACTIONS(464), 1,
      aux_sym_escape_sequence_token3,
    ACTIONS(466), 1,
      aux_sym_escape_sequence_token4,
  [1573] = 1,
    ACTIONS(464), 2,
      sym__newline,
      aux_sym_escape_sequence_token1,
  [1578] = 2,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      aux_sym_comment_repeat2,
  [1585] = 2,
    ACTIONS(470), 1,
      aux_sym_comment_token2,
    STATE(71), 1,
      aux_sym_comment_repeat2,
  [1592] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym__real_string,
  [1599] = 1,
    ACTIONS(464), 1,
      aux_sym_escape_sequence_token2,
  [1603] = 1,
    ACTIONS(472), 1,
      aux_sym_comment_token2,
  [1607] = 1,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
  [1611] = 1,
    ACTIONS(464), 1,
      aux_sym_escape_sequence_token5,
  [1615] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1619] = 1,
    ACTIONS(245), 1,
      aux_sym_extension_token1,
  [1623] = 1,
    ACTIONS(476), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 45,
  [SMALL_STATE(23)] = 90,
  [SMALL_STATE(24)] = 132,
  [SMALL_STATE(25)] = 174,
  [SMALL_STATE(26)] = 216,
  [SMALL_STATE(27)] = 258,
  [SMALL_STATE(28)] = 300,
  [SMALL_STATE(29)] = 342,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 552,
  [SMALL_STATE(35)] = 594,
  [SMALL_STATE(36)] = 636,
  [SMALL_STATE(37)] = 678,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 762,
  [SMALL_STATE(40)] = 804,
  [SMALL_STATE(41)] = 846,
  [SMALL_STATE(42)] = 888,
  [SMALL_STATE(43)] = 930,
  [SMALL_STATE(44)] = 972,
  [SMALL_STATE(45)] = 1014,
  [SMALL_STATE(46)] = 1056,
  [SMALL_STATE(47)] = 1098,
  [SMALL_STATE(48)] = 1140,
  [SMALL_STATE(49)] = 1193,
  [SMALL_STATE(50)] = 1229,
  [SMALL_STATE(51)] = 1265,
  [SMALL_STATE(52)] = 1301,
  [SMALL_STATE(53)] = 1323,
  [SMALL_STATE(54)] = 1345,
  [SMALL_STATE(55)] = 1370,
  [SMALL_STATE(56)] = 1395,
  [SMALL_STATE(57)] = 1409,
  [SMALL_STATE(58)] = 1428,
  [SMALL_STATE(59)] = 1447,
  [SMALL_STATE(60)] = 1461,
  [SMALL_STATE(61)] = 1475,
  [SMALL_STATE(62)] = 1489,
  [SMALL_STATE(63)] = 1503,
  [SMALL_STATE(64)] = 1517,
  [SMALL_STATE(65)] = 1530,
  [SMALL_STATE(66)] = 1543,
  [SMALL_STATE(67)] = 1551,
  [SMALL_STATE(68)] = 1559,
  [SMALL_STATE(69)] = 1566,
  [SMALL_STATE(70)] = 1573,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1585,
  [SMALL_STATE(73)] = 1592,
  [SMALL_STATE(74)] = 1599,
  [SMALL_STATE(75)] = 1603,
  [SMALL_STATE(76)] = 1607,
  [SMALL_STATE(77)] = 1611,
  [SMALL_STATE(78)] = 1615,
  [SMALL_STATE(79)] = 1619,
  [SMALL_STATE(80)] = 1623,
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
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(63),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(73),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(57),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(64),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(79),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(48),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(39),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(72),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(63),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(70),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(51),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(52),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(74),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(69),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(77),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(56),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(60),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(61),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(76),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
  [474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
