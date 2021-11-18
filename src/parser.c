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
#define STATE_COUNT 363
#define LARGE_STATE_COUNT 72
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 3
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym__word = 1,
  sym_backslash_escape = 2,
  anon_sym_BSLASH = 3,
  sym_entity_reference = 4,
  sym_numeric_character_reference = 5,
  anon_sym_LPAREN = 6,
  anon_sym_BANG = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  sym__whitespace = 10,
  sym__newline = 11,
  sym__indentation = 12,
  sym_virtual_space = 13,
  sym__matching_done = 14,
  sym__block_close = 15,
  sym__block_close_loose = 16,
  sym__block_continuation = 17,
  sym__lazy_continuation = 18,
  sym__block_quote_start = 19,
  sym__indented_chunk_start = 20,
  sym_atx_h1_marker = 21,
  sym_atx_h2_marker = 22,
  sym_atx_h3_marker = 23,
  sym_atx_h4_marker = 24,
  sym_atx_h5_marker = 25,
  sym_atx_h6_marker = 26,
  sym__setext_h1_underline = 27,
  sym__setext_h2_underline = 28,
  sym__setext_h2_underline_or_thematic_break = 29,
  sym__thematic_break = 30,
  sym_list_marker_minus = 31,
  sym_list_marker_plus = 32,
  sym_list_marker_star = 33,
  sym_list_marker_parenthethis = 34,
  sym_list_marker_dot = 35,
  sym__fenced_code_block_start = 36,
  sym__blank_line_start = 37,
  sym__code_span_start = 38,
  sym__code_span_close = 39,
  sym_document = 40,
  sym__block = 41,
  sym__blank_line = 42,
  sym_paragraph = 43,
  sym_indented_code_block = 44,
  sym__indented_chunk = 45,
  sym_block_quote = 46,
  sym_atx_heading = 47,
  sym_setext_heading = 48,
  sym_setext_h1_underline = 49,
  sym_setext_h2_underline = 50,
  sym_thematic_break = 51,
  sym_tight_list = 52,
  sym_loose_list = 53,
  sym__list_item_plus_tight = 54,
  sym__list_item_minus_tight = 55,
  sym__list_item_star_tight = 56,
  sym__list_item_dot_tight = 57,
  sym__list_item_parenthethis_tight = 58,
  sym__list_item_plus_loose = 59,
  sym__list_item_minus_loose = 60,
  sym__list_item_star_loose = 61,
  sym__list_item_dot_loose = 62,
  sym__list_item_parenthethis_loose = 63,
  sym_fenced_code_block = 64,
  sym_code_fence_content = 65,
  sym_info_string = 66,
  sym__inline = 67,
  sym_hard_line_break = 68,
  sym_text = 69,
  sym_code_span = 70,
  aux_sym_document_repeat1 = 71,
  aux_sym_paragraph_repeat1 = 72,
  aux_sym_indented_code_block_repeat1 = 73,
  aux_sym__indented_chunk_repeat1 = 74,
  aux_sym_tight_list_repeat1 = 75,
  aux_sym_tight_list_repeat2 = 76,
  aux_sym_tight_list_repeat3 = 77,
  aux_sym_tight_list_repeat4 = 78,
  aux_sym_tight_list_repeat5 = 79,
  aux_sym_loose_list_repeat1 = 80,
  aux_sym_loose_list_repeat2 = 81,
  aux_sym_loose_list_repeat3 = 82,
  aux_sym_loose_list_repeat4 = 83,
  aux_sym_loose_list_repeat5 = 84,
  aux_sym_code_fence_content_repeat1 = 85,
  aux_sym_info_string_repeat1 = 86,
  aux_sym__inline_repeat1 = 87,
  aux_sym_text_repeat1 = 88,
  alias_sym_heading_content = 89,
  alias_sym_line_break = 90,
  alias_sym_soft_line_break = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym_backslash_escape] = "backslash_escape",
  [anon_sym_BSLASH] = "\\",
  [sym_entity_reference] = "entity_reference",
  [sym_numeric_character_reference] = "numeric_character_reference",
  [anon_sym_LPAREN] = "(",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym__indentation] = "_indentation",
  [sym_virtual_space] = "virtual_space",
  [sym__matching_done] = "_matching_done",
  [sym__block_close] = "_block_close",
  [sym__block_close_loose] = "_block_close_loose",
  [sym__block_continuation] = "_block_continuation",
  [sym__lazy_continuation] = "_lazy_continuation",
  [sym__block_quote_start] = "_block_quote_start",
  [sym__indented_chunk_start] = "_indented_chunk_start",
  [sym_atx_h1_marker] = "atx_h1_marker",
  [sym_atx_h2_marker] = "atx_h2_marker",
  [sym_atx_h3_marker] = "atx_h3_marker",
  [sym_atx_h4_marker] = "atx_h4_marker",
  [sym_atx_h5_marker] = "atx_h5_marker",
  [sym_atx_h6_marker] = "atx_h6_marker",
  [sym__setext_h1_underline] = "_setext_h1_underline",
  [sym__setext_h2_underline] = "_setext_h2_underline",
  [sym__setext_h2_underline_or_thematic_break] = "_setext_h2_underline_or_thematic_break",
  [sym__thematic_break] = "_thematic_break",
  [sym_list_marker_minus] = "list_marker_minus",
  [sym_list_marker_plus] = "list_marker_plus",
  [sym_list_marker_star] = "list_marker_star",
  [sym_list_marker_parenthethis] = "list_marker_parenthethis",
  [sym_list_marker_dot] = "list_marker_dot",
  [sym__fenced_code_block_start] = "_fenced_code_block_start",
  [sym__blank_line_start] = "_blank_line_start",
  [sym__code_span_start] = "_code_span_start",
  [sym__code_span_close] = "_code_span_close",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym__blank_line] = "_blank_line",
  [sym_paragraph] = "paragraph",
  [sym_indented_code_block] = "indented_code_block",
  [sym__indented_chunk] = "_indented_chunk",
  [sym_block_quote] = "block_quote",
  [sym_atx_heading] = "atx_heading",
  [sym_setext_heading] = "setext_heading",
  [sym_setext_h1_underline] = "setext_h1_underline",
  [sym_setext_h2_underline] = "setext_h2_underline",
  [sym_thematic_break] = "thematic_break",
  [sym_tight_list] = "tight_list",
  [sym_loose_list] = "loose_list",
  [sym__list_item_plus_tight] = "list_item",
  [sym__list_item_minus_tight] = "list_item",
  [sym__list_item_star_tight] = "list_item",
  [sym__list_item_dot_tight] = "list_item",
  [sym__list_item_parenthethis_tight] = "list_item",
  [sym__list_item_plus_loose] = "list_item",
  [sym__list_item_minus_loose] = "list_item",
  [sym__list_item_star_loose] = "list_item",
  [sym__list_item_dot_loose] = "list_item",
  [sym__list_item_parenthethis_loose] = "list_item",
  [sym_fenced_code_block] = "fenced_code_block",
  [sym_code_fence_content] = "code_fence_content",
  [sym_info_string] = "info_string",
  [sym__inline] = "_inline",
  [sym_hard_line_break] = "hard_line_break",
  [sym_text] = "text",
  [sym_code_span] = "code_span",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_indented_code_block_repeat1] = "indented_code_block_repeat1",
  [aux_sym__indented_chunk_repeat1] = "_indented_chunk_repeat1",
  [aux_sym_tight_list_repeat1] = "tight_list_repeat1",
  [aux_sym_tight_list_repeat2] = "tight_list_repeat2",
  [aux_sym_tight_list_repeat3] = "tight_list_repeat3",
  [aux_sym_tight_list_repeat4] = "tight_list_repeat4",
  [aux_sym_tight_list_repeat5] = "tight_list_repeat5",
  [aux_sym_loose_list_repeat1] = "loose_list_repeat1",
  [aux_sym_loose_list_repeat2] = "loose_list_repeat2",
  [aux_sym_loose_list_repeat3] = "loose_list_repeat3",
  [aux_sym_loose_list_repeat4] = "loose_list_repeat4",
  [aux_sym_loose_list_repeat5] = "loose_list_repeat5",
  [aux_sym_code_fence_content_repeat1] = "code_fence_content_repeat1",
  [aux_sym_info_string_repeat1] = "info_string_repeat1",
  [aux_sym__inline_repeat1] = "_inline_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [alias_sym_heading_content] = "heading_content",
  [alias_sym_line_break] = "line_break",
  [alias_sym_soft_line_break] = "soft_line_break",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym_backslash_escape] = sym_backslash_escape,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_entity_reference] = sym_entity_reference,
  [sym_numeric_character_reference] = sym_numeric_character_reference,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym__indentation] = sym__indentation,
  [sym_virtual_space] = sym_virtual_space,
  [sym__matching_done] = sym__matching_done,
  [sym__block_close] = sym__block_close,
  [sym__block_close_loose] = sym__block_close_loose,
  [sym__block_continuation] = sym__block_continuation,
  [sym__lazy_continuation] = sym__lazy_continuation,
  [sym__block_quote_start] = sym__block_quote_start,
  [sym__indented_chunk_start] = sym__indented_chunk_start,
  [sym_atx_h1_marker] = sym_atx_h1_marker,
  [sym_atx_h2_marker] = sym_atx_h2_marker,
  [sym_atx_h3_marker] = sym_atx_h3_marker,
  [sym_atx_h4_marker] = sym_atx_h4_marker,
  [sym_atx_h5_marker] = sym_atx_h5_marker,
  [sym_atx_h6_marker] = sym_atx_h6_marker,
  [sym__setext_h1_underline] = sym__setext_h1_underline,
  [sym__setext_h2_underline] = sym__setext_h2_underline,
  [sym__setext_h2_underline_or_thematic_break] = sym__setext_h2_underline_or_thematic_break,
  [sym__thematic_break] = sym__thematic_break,
  [sym_list_marker_minus] = sym_list_marker_minus,
  [sym_list_marker_plus] = sym_list_marker_plus,
  [sym_list_marker_star] = sym_list_marker_star,
  [sym_list_marker_parenthethis] = sym_list_marker_parenthethis,
  [sym_list_marker_dot] = sym_list_marker_dot,
  [sym__fenced_code_block_start] = sym__fenced_code_block_start,
  [sym__blank_line_start] = sym__blank_line_start,
  [sym__code_span_start] = sym__code_span_start,
  [sym__code_span_close] = sym__code_span_close,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym__blank_line] = sym__blank_line,
  [sym_paragraph] = sym_paragraph,
  [sym_indented_code_block] = sym_indented_code_block,
  [sym__indented_chunk] = sym__indented_chunk,
  [sym_block_quote] = sym_block_quote,
  [sym_atx_heading] = sym_atx_heading,
  [sym_setext_heading] = sym_setext_heading,
  [sym_setext_h1_underline] = sym_setext_h1_underline,
  [sym_setext_h2_underline] = sym_setext_h2_underline,
  [sym_thematic_break] = sym_thematic_break,
  [sym_tight_list] = sym_tight_list,
  [sym_loose_list] = sym_loose_list,
  [sym__list_item_plus_tight] = sym__list_item_plus_tight,
  [sym__list_item_minus_tight] = sym__list_item_plus_tight,
  [sym__list_item_star_tight] = sym__list_item_plus_tight,
  [sym__list_item_dot_tight] = sym__list_item_plus_tight,
  [sym__list_item_parenthethis_tight] = sym__list_item_plus_tight,
  [sym__list_item_plus_loose] = sym__list_item_plus_tight,
  [sym__list_item_minus_loose] = sym__list_item_plus_tight,
  [sym__list_item_star_loose] = sym__list_item_plus_tight,
  [sym__list_item_dot_loose] = sym__list_item_plus_tight,
  [sym__list_item_parenthethis_loose] = sym__list_item_plus_tight,
  [sym_fenced_code_block] = sym_fenced_code_block,
  [sym_code_fence_content] = sym_code_fence_content,
  [sym_info_string] = sym_info_string,
  [sym__inline] = sym__inline,
  [sym_hard_line_break] = sym_hard_line_break,
  [sym_text] = sym_text,
  [sym_code_span] = sym_code_span,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_indented_code_block_repeat1] = aux_sym_indented_code_block_repeat1,
  [aux_sym__indented_chunk_repeat1] = aux_sym__indented_chunk_repeat1,
  [aux_sym_tight_list_repeat1] = aux_sym_tight_list_repeat1,
  [aux_sym_tight_list_repeat2] = aux_sym_tight_list_repeat2,
  [aux_sym_tight_list_repeat3] = aux_sym_tight_list_repeat3,
  [aux_sym_tight_list_repeat4] = aux_sym_tight_list_repeat4,
  [aux_sym_tight_list_repeat5] = aux_sym_tight_list_repeat5,
  [aux_sym_loose_list_repeat1] = aux_sym_loose_list_repeat1,
  [aux_sym_loose_list_repeat2] = aux_sym_loose_list_repeat2,
  [aux_sym_loose_list_repeat3] = aux_sym_loose_list_repeat3,
  [aux_sym_loose_list_repeat4] = aux_sym_loose_list_repeat4,
  [aux_sym_loose_list_repeat5] = aux_sym_loose_list_repeat5,
  [aux_sym_code_fence_content_repeat1] = aux_sym_code_fence_content_repeat1,
  [aux_sym_info_string_repeat1] = aux_sym_info_string_repeat1,
  [aux_sym__inline_repeat1] = aux_sym__inline_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [alias_sym_heading_content] = alias_sym_heading_content,
  [alias_sym_line_break] = alias_sym_line_break,
  [alias_sym_soft_line_break] = alias_sym_soft_line_break,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_backslash_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_entity_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_character_reference] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indentation] = {
    .visible = false,
    .named = true,
  },
  [sym_virtual_space] = {
    .visible = true,
    .named = true,
  },
  [sym__matching_done] = {
    .visible = false,
    .named = true,
  },
  [sym__block_close] = {
    .visible = false,
    .named = true,
  },
  [sym__block_close_loose] = {
    .visible = false,
    .named = true,
  },
  [sym__block_continuation] = {
    .visible = false,
    .named = true,
  },
  [sym__lazy_continuation] = {
    .visible = false,
    .named = true,
  },
  [sym__block_quote_start] = {
    .visible = false,
    .named = true,
  },
  [sym__indented_chunk_start] = {
    .visible = false,
    .named = true,
  },
  [sym_atx_h1_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h2_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h3_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h4_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h5_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h6_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__setext_h1_underline] = {
    .visible = false,
    .named = true,
  },
  [sym__setext_h2_underline] = {
    .visible = false,
    .named = true,
  },
  [sym__setext_h2_underline_or_thematic_break] = {
    .visible = false,
    .named = true,
  },
  [sym__thematic_break] = {
    .visible = false,
    .named = true,
  },
  [sym_list_marker_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_list_marker_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_list_marker_star] = {
    .visible = true,
    .named = true,
  },
  [sym_list_marker_parenthethis] = {
    .visible = true,
    .named = true,
  },
  [sym_list_marker_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__fenced_code_block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line_start] = {
    .visible = false,
    .named = true,
  },
  [sym__code_span_start] = {
    .visible = false,
    .named = true,
  },
  [sym__code_span_close] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__indented_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_block_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_setext_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_setext_h1_underline] = {
    .visible = true,
    .named = true,
  },
  [sym_setext_h2_underline] = {
    .visible = true,
    .named = true,
  },
  [sym_thematic_break] = {
    .visible = true,
    .named = true,
  },
  [sym_tight_list] = {
    .visible = true,
    .named = true,
  },
  [sym_loose_list] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_plus_tight] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_minus_tight] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_star_tight] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_dot_tight] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_parenthethis_tight] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_plus_loose] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_minus_loose] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_star_loose] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_dot_loose] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item_parenthethis_loose] = {
    .visible = true,
    .named = true,
  },
  [sym_fenced_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code_fence_content] = {
    .visible = true,
    .named = true,
  },
  [sym_info_string] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym_hard_line_break] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_code_span] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indented_chunk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tight_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tight_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tight_list_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tight_list_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tight_list_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loose_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loose_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loose_list_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loose_list_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loose_list_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_fence_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_info_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_heading_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_line_break] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_soft_line_break] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_line_break,
  },
  [2] = {
    [0] = alias_sym_soft_line_break,
  },
  [3] = {
    [1] = alias_sym_heading_content,
  },
  [4] = {
    [0] = alias_sym_heading_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__blank_line, 2,
    sym__blank_line,
    alias_sym_line_break,
  sym_paragraph, 2,
    sym_paragraph,
    alias_sym_heading_content,
  sym__inline, 2,
    sym__inline,
    alias_sym_heading_content,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2024);
      if (lookahead == '!') ADVANCE(2031);
      if (lookahead == '&') ADVANCE(2036);
      if (lookahead == '(') ADVANCE(2030);
      if (lookahead == '[') ADVANCE(2032);
      if (lookahead == '\\') ADVANCE(2027);
      if (lookahead == ']') ADVANCE(2033);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2034);
      if (('"' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2037);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(1998);
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(2013);
      if (lookahead == ';') ADVANCE(2028);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(2020);
      if (lookahead == '2') ADVANCE(1999);
      if (lookahead == '3') ADVANCE(2016);
      if (lookahead == '4') ADVANCE(6);
      if (lookahead == '5') ADVANCE(2000);
      if (lookahead == '7') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '4') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(1509);
      END_STATE();
    case 6:
      if (lookahead == '5') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '8') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(2028);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(1102);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'j') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(1085);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(1619);
      if (lookahead == 'v') ADVANCE(912);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1603);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'q') ADVANCE(1920);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == 'x') ADVANCE(1144);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'A') ADVANCE(1722);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'V') ADVANCE(913);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(1493);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(1581);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(915);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(1166);
      END_STATE();
    case 18:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'U') ADVANCE(1537);
      END_STATE();
    case 19:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'C') ADVANCE(1504);
      if (lookahead == 'D') ADVANCE(1478);
      if (lookahead == 'E') ADVANCE(1213);
      if (lookahead == 'G') ADVANCE(1738);
      if (lookahead == 'H') ADVANCE(1931);
      if (lookahead == 'L') ADVANCE(887);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'P') ADVANCE(1699);
      if (lookahead == 'R') ADVANCE(888);
      if (lookahead == 'S') ADVANCE(1582);
      if (lookahead == 'T') ADVANCE(1091);
      if (lookahead == 'V') ADVANCE(927);
      END_STATE();
    case 20:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'C') ADVANCE(414);
      END_STATE();
    case 21:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'D') ADVANCE(1439);
      if (lookahead == 'E') ADVANCE(1581);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'D') ADVANCE(290);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'c') ADVANCE(1909);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(1340);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 'u') ADVANCE(1650);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(1916);
      if (lookahead == 'n') ADVANCE(2001);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == 's') ADVANCE(867);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'v') ADVANCE(2017);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 28:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(1744);
      if (lookahead == 'p') ADVANCE(1670);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead == 'b') ADVANCE(1590);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(1325);
      if (lookahead == 'j') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(912);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      if (lookahead == 'F') ADVANCE(1938);
      if (lookahead == 'G') ADVANCE(1731);
      if (lookahead == 'L') ADVANCE(813);
      if (lookahead == 'S') ADVANCE(1299);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      if (lookahead == 'F') ADVANCE(1938);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 33:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      if (lookahead == 'G') ADVANCE(1731);
      if (lookahead == 'L') ADVANCE(813);
      if (lookahead == 'S') ADVANCE(1299);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 34:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      if (lookahead == 'S') ADVANCE(1299);
      END_STATE();
    case 35:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E') ADVANCE(1581);
      if (lookahead == 'S') ADVANCE(1299);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 36:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'G') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'H') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'I') ADVANCE(1421);
      if (lookahead == 'S') ADVANCE(1902);
      if (lookahead == 'U') ADVANCE(1402);
      END_STATE();
    case 39:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1369);
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 40:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1341);
      if (lookahead == 'b') ADVANCE(1590);
      if (lookahead == 'c') ADVANCE(823);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 41:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'L') ADVANCE(813);
      END_STATE();
    case 42:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'P') ADVANCE(1289);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'Y') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 49:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1854);
      END_STATE();
    case 50:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(2021);
      END_STATE();
    case 51:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1591);
      END_STATE();
    case 53:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 54:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 's') ADVANCE(1097);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c' ||
          lookahead == 'w') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(1744);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'l') ADVANCE(1518);
      if (lookahead == 'p') ADVANCE(1199);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 56:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'b' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'd') ADVANCE(2011);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 't') ADVANCE(1962);
      END_STATE();
    case 57:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'c') ADVANCE(1490);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 58:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(1254);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1744);
      END_STATE();
    case 60:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'd') ADVANCE(1446);
      END_STATE();
    case 61:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1199);
      END_STATE();
    case 62:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 63:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'c') ADVANCE(1799);
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 64:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1344);
      if (lookahead == 'b') ADVANCE(1713);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 65:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1344);
      if (lookahead == 'd' ||
          lookahead == 'v') ADVANCE(8);
      if (lookahead == 's') ADVANCE(1254);
      END_STATE();
    case 66:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 67:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1639);
      if (lookahead == 'c') ADVANCE(1031);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 68:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 69:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1607);
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 70:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1553);
      if (lookahead == 'c') ADVANCE(1929);
      if (lookahead == 'e') ADVANCE(1573);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 71:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 72:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a') ADVANCE(1298);
      if (lookahead == 's') ADVANCE(1199);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 73:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(1439);
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 75:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(1791);
      END_STATE();
    case 76:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 78:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(1744);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'l') ADVANCE(1518);
      if (lookahead == 'p') ADVANCE(1199);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 79:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 80:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b') ADVANCE(1666);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 81:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 82:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'h') ADVANCE(1640);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 'q') ADVANCE(1921);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 84:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == 'q') ADVANCE(1921);
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 85:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(1483);
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(1484);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 88:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead == 'p') ADVANCE(1651);
      END_STATE();
    case 89:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 90:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(1909);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(1909);
      if (lookahead == 'e' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 92:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'f') ADVANCE(1119);
      if (lookahead == 'o') ADVANCE(717);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1439);
      END_STATE();
    case 94:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 95:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 96:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 97:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 98:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 99:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'l') ADVANCE(920);
      if (lookahead == 'q') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 100:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1104);
      END_STATE();
    case 101:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 102:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(767);
      if (lookahead == 'm') ADVANCE(1774);
      if (lookahead == 'r') ADVANCE(1828);
      if (lookahead == 's') ADVANCE(1541);
      if (lookahead == 'z') ADVANCE(425);
      END_STATE();
    case 103:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 's') ADVANCE(855);
      END_STATE();
    case 104:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 105:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 's') ADVANCE(1588);
      END_STATE();
    case 106:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1799);
      END_STATE();
    case 107:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 108:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 109:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 110:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 111:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1573);
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 112:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 113:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(1328);
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 114:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 116:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 117:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 118:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1744);
      END_STATE();
    case 119:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 120:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1399);
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 121:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1676);
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 122:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1632);
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 123:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1642);
      if (lookahead == 'f' ||
          lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 124:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e') ADVANCE(1631);
      END_STATE();
    case 125:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 126:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(1428);
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(1744);
      END_STATE();
    case 128:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(1804);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(174);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 130:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f') ADVANCE(1830);
      if (lookahead == 'q') ADVANCE(174);
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 132:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1820);
      if (lookahead == 'm') ADVANCE(1552);
      END_STATE();
    case 133:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'g') ADVANCE(1799);
      END_STATE();
    case 134:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'g') ADVANCE(767);
      END_STATE();
    case 135:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 136:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1470);
      END_STATE();
    case 137:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'h') ADVANCE(1429);
      END_STATE();
    case 138:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1077);
      if (lookahead == 'n') ADVANCE(959);
      if (lookahead == 'o') ADVANCE(1820);
      END_STATE();
    case 139:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 140:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 141:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1379);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 142:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1858);
      END_STATE();
    case 143:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 144:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1354);
      if (lookahead == 'n') ADVANCE(1087);
      END_STATE();
    case 145:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1281);
      END_STATE();
    case 146:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'i') ADVANCE(1418);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 147:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 148:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(174);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(1799);
      END_STATE();
    case 150:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(1470);
      END_STATE();
    case 151:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(1470);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 152:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(1861);
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 153:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'l') ADVANCE(1240);
      END_STATE();
    case 154:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 155:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 157:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 158:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 159:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 160:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 161:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 162:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 163:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1967);
      END_STATE();
    case 164:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1957);
      END_STATE();
    case 165:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 166:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1645);
      END_STATE();
    case 167:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1874);
      END_STATE();
    case 168:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 169:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 170:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 172:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'p') ADVANCE(1670);
      END_STATE();
    case 173:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'q') ADVANCE(8);
      END_STATE();
    case 174:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'q') ADVANCE(8);
      if (lookahead == 's') ADVANCE(1284);
      END_STATE();
    case 175:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'q') ADVANCE(174);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 176:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'q') ADVANCE(173);
      END_STATE();
    case 177:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'q') ADVANCE(1920);
      END_STATE();
    case 178:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 179:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 180:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'r') ADVANCE(1112);
      END_STATE();
    case 181:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 182:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1591);
      END_STATE();
    case 184:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 186:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1989);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 188:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 189:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1862);
      END_STATE();
    case 190:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 192:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 's') ADVANCE(1924);
      END_STATE();
    case 193:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 194:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 195:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 196:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 197:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 198:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 199:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 200:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 201:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(1453);
      END_STATE();
    case 202:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 203:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 204:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'u') ADVANCE(1082);
      END_STATE();
    case 205:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 206:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'v') ADVANCE(2017);
      END_STATE();
    case 207:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'v') ADVANCE(564);
      END_STATE();
    case 208:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'v') ADVANCE(869);
      END_STATE();
    case 209:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(1744);
      if (lookahead == 'p') ADVANCE(1664);
      END_STATE();
    case 210:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead == 'm') ADVANCE(1063);
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 211:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 's') ADVANCE(870);
      END_STATE();
    case 212:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'v') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 213:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'y') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1519);
      if (lookahead == 'c') ADVANCE(1909);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(1514);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 214:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'a' ||
          lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 215:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'b' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 216:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'c' ||
          lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 217:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e' ||
          lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 219:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'f' ||
          lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 220:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 221:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e' ||
          lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 222:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'e' ||
          lookahead == 'f') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1857);
      END_STATE();
    case 223:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'j') ADVANCE(8);
      END_STATE();
    case 224:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'y') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == 'u') ADVANCE(1836);
      END_STATE();
    case 225:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'D' ||
          lookahead == 'U' ||
          lookahead == 'd' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 226:
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'R' ||
          lookahead == 'h' ||
          lookahead == 'l' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 227:
      if (lookahead == ';') ADVANCE(2029);
      END_STATE();
    case 228:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 230:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 231:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 235:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == ';') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1219);
      if (lookahead == 'o') ADVANCE(1524);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(1317);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(425);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(643);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(1102);
      if (lookahead == 'h') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead == 'l') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(1502);
      if (lookahead == 'n') ADVANCE(1318);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 't') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(595);
      if (lookahead == 'I') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(1326);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'A') ADVANCE(1416);
      if (lookahead == 'C') ADVANCE(929);
      if (lookahead == 'D') ADVANCE(1434);
      if (lookahead == 'F') ADVANCE(1243);
      if (lookahead == 'R') ADVANCE(1165);
      if (lookahead == 'T') ADVANCE(874);
      if (lookahead == 'U') ADVANCE(1532);
      if (lookahead == 'V') ADVANCE(908);
      if (lookahead == 'a') ADVANCE(1722);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 244:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'B') ADVANCE(481);
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(1857);
      if (lookahead == 'n') ADVANCE(1773);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(1660);
      if (lookahead == 'r') ADVANCE(1857);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead == 'z') ADVANCE(1105);
      END_STATE();
    case 245:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'd') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 246:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(975);
      if (lookahead == 'b') ADVANCE(1196);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(1103);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'j') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(1247);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(721);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(439);
      if (lookahead == 'z') ADVANCE(600);
      END_STATE();
    case 247:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == 'b') ADVANCE(1613);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'f') ADVANCE(1103);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'h') ADVANCE(465);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(439);
      END_STATE();
    case 248:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1118);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'k') ADVANCE(1745);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == 'y') ADVANCE(573);
      END_STATE();
    case 249:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1610);
      END_STATE();
    case 250:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 251:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1603);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(1064);
      if (lookahead == 's') ADVANCE(1963);
      if (lookahead == 't') ADVANCE(1312);
      if (lookahead == 'x') ADVANCE(1799);
      END_STATE();
    case 252:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1963);
      END_STATE();
    case 253:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 254:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'a') ADVANCE(1702);
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 255:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 256:
      if (lookahead == 'A') ADVANCE(1610);
      if (lookahead == 't') ADVANCE(1680);
      END_STATE();
    case 257:
      if (lookahead == 'A') ADVANCE(1725);
      if (lookahead == 'D') ADVANCE(1493);
      if (lookahead == 'E') ADVANCE(1584);
      if (lookahead == 'T') ADVANCE(859);
      if (lookahead == 'a') ADVANCE(1722);
      if (lookahead == 'd') ADVANCE(1500);
      if (lookahead == 'p') ADVANCE(868);
      if (lookahead == 's') ADVANCE(1081);
      END_STATE();
    case 258:
      if (lookahead == 'A') ADVANCE(659);
      END_STATE();
    case 259:
      if (lookahead == 'A') ADVANCE(659);
      if (lookahead == 'D') ADVANCE(1437);
      if (lookahead == 'G') ADVANCE(1643);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 260:
      if (lookahead == 'A') ADVANCE(1241);
      END_STATE();
    case 261:
      if (lookahead == 'A') ADVANCE(1417);
      if (lookahead == 'C') ADVANCE(929);
      if (lookahead == 'D') ADVANCE(1434);
      if (lookahead == 'F') ADVANCE(1243);
      if (lookahead == 'T') ADVANCE(874);
      if (lookahead == 'U') ADVANCE(1532);
      if (lookahead == 'V') ADVANCE(908);
      if (lookahead == 'a') ADVANCE(1722);
      END_STATE();
    case 262:
      if (lookahead == 'A') ADVANCE(1722);
      END_STATE();
    case 263:
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'D') ADVANCE(1493);
      END_STATE();
    case 264:
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'R') ADVANCE(1166);
      END_STATE();
    case 265:
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'R') ADVANCE(1166);
      if (lookahead == 'T') ADVANCE(844);
      END_STATE();
    case 266:
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'T') ADVANCE(844);
      END_STATE();
    case 267:
      if (lookahead == 'A') ADVANCE(1722);
      if (lookahead == 'V') ADVANCE(913);
      END_STATE();
    case 268:
      if (lookahead == 'A') ADVANCE(1726);
      if (lookahead == 'B') ADVANCE(1590);
      if (lookahead == 'L') ADVANCE(906);
      if (lookahead == 'R') ADVANCE(1164);
      if (lookahead == 'T') ADVANCE(859);
      if (lookahead == 'a') ADVANCE(1722);
      END_STATE();
    case 269:
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'P') ADVANCE(539);
      END_STATE();
    case 270:
      if (lookahead == 'B') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1429);
      if (lookahead == 'i') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(1527);
      if (lookahead == 'r') ADVANCE(1158);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead == 'u') ADVANCE(1234);
      END_STATE();
    case 271:
      if (lookahead == 'B') ADVANCE(388);
      END_STATE();
    case 272:
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(1113);
      if (lookahead == 'S') ADVANCE(901);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 273:
      if (lookahead == 'B') ADVANCE(1723);
      END_STATE();
    case 274:
      if (lookahead == 'B') ADVANCE(1715);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 275:
      if (lookahead == 'B') ADVANCE(1720);
      END_STATE();
    case 276:
      if (lookahead == 'C') ADVANCE(326);
      if (lookahead == 'c') ADVANCE(1979);
      END_STATE();
    case 277:
      if (lookahead == 'C') ADVANCE(414);
      END_STATE();
    case 278:
      if (lookahead == 'C') ADVANCE(1494);
      if (lookahead == 'T') ADVANCE(1145);
      END_STATE();
    case 279:
      if (lookahead == 'C') ADVANCE(1171);
      END_STATE();
    case 280:
      if (lookahead == 'C') ADVANCE(1266);
      END_STATE();
    case 281:
      if (lookahead == 'C') ADVANCE(1928);
      END_STATE();
    case 282:
      if (lookahead == 'C') ADVANCE(1510);
      END_STATE();
    case 283:
      if (lookahead == 'C') ADVANCE(1510);
      if (lookahead == 'D') ADVANCE(1436);
      if (lookahead == 'L') ADVANCE(918);
      if (lookahead == 'R') ADVANCE(1168);
      if (lookahead == 'U') ADVANCE(1533);
      if (lookahead == 'V') ADVANCE(927);
      END_STATE();
    case 284:
      if (lookahead == 'D') ADVANCE(1439);
      END_STATE();
    case 285:
      if (lookahead == 'D') ADVANCE(1439);
      if (lookahead == 'M') ADVANCE(1156);
      if (lookahead == 'P') ADVANCE(1289);
      if (lookahead == 'T') ADVANCE(1145);
      END_STATE();
    case 286:
      if (lookahead == 'D') ADVANCE(1439);
      if (lookahead == 'a') ADVANCE(1610);
      END_STATE();
    case 287:
      if (lookahead == 'D') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(1799);
      END_STATE();
    case 288:
      if (lookahead == 'D') ADVANCE(1439);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 289:
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'S') ADVANCE(595);
      if (lookahead == 'Z') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(977);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(1200);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(1525);
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 290:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 291:
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 'q') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(1306);
      if (lookahead == 'x') ADVANCE(678);
      END_STATE();
    case 292:
      if (lookahead == 'D') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(1495);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1429);
      if (lookahead == 'i') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(1549);
      if (lookahead == 'o') ADVANCE(758);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 's') ADVANCE(639);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 293:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 294:
      if (lookahead == 'D') ADVANCE(2018);
      if (lookahead == 'H') ADVANCE(225);
      if (lookahead == 'U') ADVANCE(2018);
      if (lookahead == 'V') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(1444);
      if (lookahead == 'd') ADVANCE(2018);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(2018);
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 295:
      if (lookahead == 'D') ADVANCE(595);
      END_STATE();
    case 296:
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'H') ADVANCE(425);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'g') ADVANCE(2008);
      if (lookahead == 'i') ADVANCE(1363);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 297:
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'v') ADVANCE(738);
      END_STATE();
    case 298:
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 299:
      if (lookahead == 'D') ADVANCE(1493);
      if (lookahead == 'L') ADVANCE(915);
      if (lookahead == 'R') ADVANCE(1166);
      if (lookahead == 'U') ADVANCE(1537);
      END_STATE();
    case 300:
      if (lookahead == 'D') ADVANCE(1095);
      END_STATE();
    case 301:
      if (lookahead == 'D') ADVANCE(861);
      END_STATE();
    case 302:
      if (lookahead == 'D') ADVANCE(1501);
      if (lookahead == 'E') ADVANCE(1581);
      END_STATE();
    case 303:
      if (lookahead == 'D') ADVANCE(1505);
      if (lookahead == 'T') ADVANCE(880);
      if (lookahead == 'V') ADVANCE(908);
      END_STATE();
    case 304:
      if (lookahead == 'D') ADVANCE(1515);
      if (lookahead == 'Q') ADVANCE(1939);
      END_STATE();
    case 305:
      if (lookahead == 'E') ADVANCE(1239);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(1590);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'l') ADVANCE(1520);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(1545);
      if (lookahead == 'r') ADVANCE(1086);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1305);
      END_STATE();
    case 306:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 307:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 308:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 309:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 310:
      if (lookahead == 'E') ADVANCE(1212);
      if (lookahead == 'U') ADVANCE(1568);
      END_STATE();
    case 311:
      if (lookahead == 'E') ADVANCE(595);
      if (lookahead == 'J') ADVANCE(1245);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(1827);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead == 'u') ADVANCE(1188);
      END_STATE();
    case 312:
      if (lookahead == 'E') ADVANCE(1211);
      END_STATE();
    case 313:
      if (lookahead == 'E') ADVANCE(1245);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(634);
      if (lookahead == 't') ADVANCE(1080);
      if (lookahead == 'u') ADVANCE(1305);
      if (lookahead == 'v') ADVANCE(846);
      END_STATE();
    case 314:
      if (lookahead == 'E') ADVANCE(1584);
      END_STATE();
    case 315:
      if (lookahead == 'E') ADVANCE(1581);
      END_STATE();
    case 316:
      if (lookahead == 'E') ADVANCE(1586);
      if (lookahead == 'F') ADVANCE(1938);
      if (lookahead == 'G') ADVANCE(1731);
      if (lookahead == 'L') ADVANCE(813);
      if (lookahead == 'S') ADVANCE(1299);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 317:
      if (lookahead == 'E') ADVANCE(1587);
      if (lookahead == 'F') ADVANCE(1938);
      if (lookahead == 'G') ADVANCE(1731);
      if (lookahead == 'L') ADVANCE(813);
      if (lookahead == 'S') ADVANCE(1299);
      if (lookahead == 'T') ADVANCE(1159);
      END_STATE();
    case 318:
      if (lookahead == 'F') ADVANCE(361);
      END_STATE();
    case 319:
      if (lookahead == 'F') ADVANCE(1932);
      END_STATE();
    case 320:
      if (lookahead == 'G') ADVANCE(8);
      END_STATE();
    case 321:
      if (lookahead == 'G') ADVANCE(963);
      if (lookahead == 'L') ADVANCE(894);
      if (lookahead == 'R') ADVANCE(1158);
      if (lookahead == 'V') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'b') ADVANCE(1746);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(1063);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead == 't') ADVANCE(983);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'v') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 322:
      if (lookahead == 'G') ADVANCE(1731);
      END_STATE();
    case 323:
      if (lookahead == 'G') ADVANCE(1740);
      if (lookahead == 'L') ADVANCE(896);
      END_STATE();
    case 324:
      if (lookahead == 'H') ADVANCE(276);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1496);
      if (lookahead == 'i') ADVANCE(981);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'q') ADVANCE(1617);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 325:
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'R') ADVANCE(242);
      if (lookahead == 'S') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(2005);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(802);
      if (lookahead == 'i') ADVANCE(1228);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'r') ADVANCE(1138);
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 326:
      if (lookahead == 'H') ADVANCE(595);
      END_STATE();
    case 327:
      if (lookahead == 'H') ADVANCE(595);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(1542);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 328:
      if (lookahead == 'H') ADVANCE(595);
      if (lookahead == 'O') ADVANCE(347);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1064);
      if (lookahead == 'i') ADVANCE(1638);
      if (lookahead == 'l') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1283);
      if (lookahead == 'r') ADVANCE(1445);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(1528);
      END_STATE();
    case 329:
      if (lookahead == 'H') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(1648);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 330:
      if (lookahead == 'H') ADVANCE(595);
      if (lookahead == 'c') ADVANCE(1979);
      END_STATE();
    case 331:
      if (lookahead == 'H') ADVANCE(1940);
      END_STATE();
    case 332:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == 'I') ADVANCE(1339);
      END_STATE();
    case 334:
      if (lookahead == 'I') ADVANCE(1406);
      END_STATE();
    case 335:
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 't') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == 'L') ADVANCE(813);
      END_STATE();
    case 337:
      if (lookahead == 'L') ADVANCE(1113);
      END_STATE();
    case 338:
      if (lookahead == 'L') ADVANCE(911);
      if (lookahead == 'R') ADVANCE(1166);
      END_STATE();
    case 339:
      if (lookahead == 'L') ADVANCE(911);
      if (lookahead == 'R') ADVANCE(1166);
      if (lookahead == 'l') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 340:
      if (lookahead == 'L') ADVANCE(915);
      if (lookahead == 'R') ADVANCE(1166);
      END_STATE();
    case 341:
      if (lookahead == 'M') ADVANCE(897);
      if (lookahead == 'T') ADVANCE(1046);
      if (lookahead == 'V') ADVANCE(885);
      END_STATE();
    case 342:
      if (lookahead == 'M') ADVANCE(1156);
      END_STATE();
    case 343:
      if (lookahead == 'N') ADVANCE(1439);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(1634);
      if (lookahead == 'c') ADVANCE(1460);
      if (lookahead == 'd') ADVANCE(1580);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(964);
      if (lookahead == 'k') ADVANCE(519);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(1526);
      if (lookahead == 'p') ADVANCE(1661);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(1246);
      END_STATE();
    case 344:
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(1795);
      if (lookahead == 'q') ADVANCE(1892);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(1305);
      if (lookahead == 'x') ADVANCE(1089);
      END_STATE();
    case 345:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 346:
      if (lookahead == 'O') ADVANCE(352);
      END_STATE();
    case 347:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 348:
      if (lookahead == 'P') ADVANCE(388);
      END_STATE();
    case 349:
      if (lookahead == 'P') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 350:
      if (lookahead == 'P') ADVANCE(1289);
      END_STATE();
    case 351:
      if (lookahead == 'Q') ADVANCE(1939);
      END_STATE();
    case 352:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 353:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 354:
      if (lookahead == 'R') ADVANCE(1169);
      if (lookahead == 'T') ADVANCE(880);
      if (lookahead == 'V') ADVANCE(908);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead == 'f') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(1471);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(1358);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == 't') ADVANCE(1128);
      if (lookahead == 'u') ADVANCE(1305);
      if (lookahead == 'v') ADVANCE(566);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(1343);
      END_STATE();
    case 357:
      if (lookahead == 'S') ADVANCE(1343);
      if (lookahead == 'V') ADVANCE(883);
      END_STATE();
    case 358:
      if (lookahead == 'S') ADVANCE(1561);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(1902);
      END_STATE();
    case 360:
      if (lookahead == 'S') ADVANCE(1588);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(595);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(1060);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(1041);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(880);
      if (lookahead == 'V') ADVANCE(908);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(1742);
      END_STATE();
    case 366:
      if (lookahead == 'U') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 367:
      if (lookahead == 'V') ADVANCE(927);
      END_STATE();
    case 368:
      if (lookahead == 'V') ADVANCE(913);
      END_STATE();
    case 369:
      if (lookahead == 'W') ADVANCE(1115);
      END_STATE();
    case 370:
      if (lookahead == '\\') ADVANCE(2026);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2034);
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2037);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(1590);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(1239);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(1086);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead == 't') ADVANCE(1133);
      if (lookahead == 'u') ADVANCE(1305);
      if (lookahead == 'w') ADVANCE(674);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'f') ADVANCE(2009);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'j') ADVANCE(1245);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(1651);
      if (lookahead == 'q') ADVANCE(1907);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(1188);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(1316);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(1580);
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(1310);
      if (lookahead == 'q') ADVANCE(560);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(1580);
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(560);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(1595);
      if (lookahead == 'l') ADVANCE(1897);
      if (lookahead == 'o') ADVANCE(1293);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead == 'u') ADVANCE(765);
      if (lookahead == 'w') ADVANCE(674);
      if (lookahead == 'y') ADVANCE(1236);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(1954);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(766);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'p') ADVANCE(1826);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 'p') ADVANCE(1835);
      if (lookahead == 's') ADVANCE(1531);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1591);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1639);
      if (lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(1591);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(1591);
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == 'b') ADVANCE(1613);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(1101);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead == 'u') ADVANCE(1305);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1716);
      if (lookahead == 'b') ADVANCE(1645);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(1282);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(1661);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 'w') ADVANCE(1068);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(1367);
      if (lookahead == 'b') ADVANCE(1645);
      if (lookahead == 'n') ADVANCE(970);
      if (lookahead == 'o') ADVANCE(1567);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == 't') ADVANCE(1145);
      if (lookahead == 'w') ADVANCE(438);
      if (lookahead == 'z') ADVANCE(120);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(1367);
      if (lookahead == 'b') ADVANCE(1645);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1799);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(1799);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'f') ADVANCE(948);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'k') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(1543);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'u') ADVANCE(1551);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(1952);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(1967);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(1519);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'o') ADVANCE(1380);
      if (lookahead == 'u') ADVANCE(1518);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(1641);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1064);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1901);
      if (lookahead == 'o') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(1542);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(1554);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(813);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(1518);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(1301);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead == 'f') ADVANCE(1126);
      if (lookahead == 'i') ADVANCE(1245);
      if (lookahead == 'j') ADVANCE(1245);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(1431);
      if (lookahead == 'o') ADVANCE(1522);
      if (lookahead == 'p') ADVANCE(509);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1765);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(1765);
      if (lookahead == 'b') ADVANCE(1279);
      if (lookahead == 'i') ADVANCE(1949);
      if (lookahead == 'o') ADVANCE(1799);
      if (lookahead == 's') ADVANCE(1481);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(1180);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(1768);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1610);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'b') ADVANCE(1645);
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'b') ADVANCE(1279);
      if (lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'c') ADVANCE(1075);
      if (lookahead == 'i') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'c') ADVANCE(1490);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'm') ADVANCE(1841);
      if (lookahead == 'o') ADVANCE(1183);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'o') ADVANCE(1770);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead == 'r') ADVANCE(1591);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(1308);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead == 's') ADVANCE(1108);
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(1990);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(1378);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(1838);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1199);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(1597);
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(1598);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(1139);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(1377);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1832);
      if (lookahead == 'e') ADVANCE(1779);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(1023);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(1222);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 's') ADVANCE(1926);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(1645);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(1379);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(559);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'o') ADVANCE(1407);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(1352);
      if (lookahead == 'u') ADVANCE(1749);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'k') ADVANCE(771);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(1540);
      if (lookahead == 'u') ADVANCE(1540);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead == 'i') ADVANCE(1261);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(1600);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1600);
      if (lookahead == 'b') ADVANCE(1230);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead == 'e') ADVANCE(1755);
      if (lookahead == 'i') ADVANCE(1951);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(1635);
      if (lookahead == 'l') ADVANCE(1906);
      if (lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(1630);
      if (lookahead == 'b') ADVANCE(1230);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(1630);
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(1562);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(1628);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(1227);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(1620);
      if (lookahead == 'o') ADVANCE(1295);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(1223);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(1615);
      if (lookahead == 'p') ADVANCE(1514);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(1601);
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(1614);
      END_STATE();
    case 482:
      if (lookahead == 'a') ADVANCE(1214);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 484:
      if (lookahead == 'a') ADVANCE(1207);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(1668);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(1589);
      END_STATE();
    case 490:
      if (lookahead == 'a') ADVANCE(1618);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(1594);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(1672);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(1856);
      END_STATE();
    case 495:
      if (lookahead == 'a') ADVANCE(1683);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(1656);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(1647);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(1653);
      END_STATE();
    case 499:
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == 'b') ADVANCE(1580);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(1468);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(1611);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == 'q') ADVANCE(647);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == 'u') ADVANCE(562);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == 'z') ADVANCE(1239);
      END_STATE();
    case 500:
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'w') ADVANCE(1179);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(1251);
      END_STATE();
    case 502:
      if (lookahead == 'a') ADVANCE(1320);
      END_STATE();
    case 503:
      if (lookahead == 'a') ADVANCE(1777);
      END_STATE();
    case 504:
      if (lookahead == 'a') ADVANCE(1546);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1655);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead == 'j') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 506:
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(806);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(1704);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(1853);
      END_STATE();
    case 509:
      if (lookahead == 'a') ADVANCE(1671);
      END_STATE();
    case 510:
      if (lookahead == 'a') ADVANCE(1553);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(1576);
      if (lookahead == 'g') ADVANCE(1819);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 511:
      if (lookahead == 'a') ADVANCE(1553);
      if (lookahead == 'e') ADVANCE(1579);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 512:
      if (lookahead == 'a') ADVANCE(1553);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 513:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 514:
      if (lookahead == 'a') ADVANCE(1705);
      if (lookahead == 'l') ADVANCE(1981);
      if (lookahead == 'r') ADVANCE(775);
      if (lookahead == 'v') ADVANCE(924);
      END_STATE();
    case 515:
      if (lookahead == 'a') ADVANCE(1390);
      END_STATE();
    case 516:
      if (lookahead == 'a') ADVANCE(1241);
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 517:
      if (lookahead == 'a') ADVANCE(1863);
      END_STATE();
    case 518:
      if (lookahead == 'a') ADVANCE(1717);
      if (lookahead == 'l') ADVANCE(1256);
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 519:
      if (lookahead == 'a') ADVANCE(1667);
      END_STATE();
    case 520:
      if (lookahead == 'a') ADVANCE(1104);
      END_STATE();
    case 521:
      if (lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 522:
      if (lookahead == 'a') ADVANCE(1917);
      END_STATE();
    case 523:
      if (lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 524:
      if (lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 525:
      if (lookahead == 'a') ADVANCE(1919);
      END_STATE();
    case 526:
      if (lookahead == 'a') ADVANCE(1871);
      END_STATE();
    case 527:
      if (lookahead == 'a') ADVANCE(1391);
      END_STATE();
    case 528:
      if (lookahead == 'a') ADVANCE(1710);
      END_STATE();
    case 529:
      if (lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 530:
      if (lookahead == 'a') ADVANCE(1700);
      END_STATE();
    case 531:
      if (lookahead == 'a') ADVANCE(1659);
      END_STATE();
    case 532:
      if (lookahead == 'a') ADVANCE(1706);
      END_STATE();
    case 533:
      if (lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 534:
      if (lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 535:
      if (lookahead == 'a') ADVANCE(1722);
      END_STATE();
    case 536:
      if (lookahead == 'a') ADVANCE(1722);
      if (lookahead == 'd') ADVANCE(1500);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(1906);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead == 'u') ADVANCE(1572);
      END_STATE();
    case 537:
      if (lookahead == 'a') ADVANCE(1722);
      if (lookahead == 'd') ADVANCE(1516);
      if (lookahead == 'h') ADVANCE(492);
      END_STATE();
    case 538:
      if (lookahead == 'a') ADVANCE(1722);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 539:
      if (lookahead == 'a') ADVANCE(1733);
      END_STATE();
    case 540:
      if (lookahead == 'a') ADVANCE(1879);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(1727);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(916);
      if (lookahead == 'r') ADVANCE(1173);
      if (lookahead == 's') ADVANCE(1583);
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 542:
      if (lookahead == 'a') ADVANCE(1727);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(936);
      if (lookahead == 'r') ADVANCE(1167);
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 543:
      if (lookahead == 'a') ADVANCE(1881);
      END_STATE();
    case 544:
      if (lookahead == 'a') ADVANCE(1728);
      END_STATE();
    case 545:
      if (lookahead == 'a') ADVANCE(1728);
      if (lookahead == 'd') ADVANCE(2014);
      END_STATE();
    case 546:
      if (lookahead == 'a') ADVANCE(1729);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(1729);
      if (lookahead == 'h') ADVANCE(554);
      END_STATE();
    case 548:
      if (lookahead == 'a') ADVANCE(1883);
      END_STATE();
    case 549:
      if (lookahead == 'a') ADVANCE(1730);
      if (lookahead == 'h') ADVANCE(554);
      if (lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 550:
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'n') ADVANCE(1744);
      END_STATE();
    case 551:
      if (lookahead == 'a') ADVANCE(1412);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 552:
      if (lookahead == 'a') ADVANCE(1735);
      END_STATE();
    case 553:
      if (lookahead == 'a') ADVANCE(1419);
      END_STATE();
    case 554:
      if (lookahead == 'a') ADVANCE(1737);
      END_STATE();
    case 555:
      if (lookahead == 'a') ADVANCE(1420);
      END_STATE();
    case 556:
      if (lookahead == 'a') ADVANCE(1422);
      END_STATE();
    case 557:
      if (lookahead == 'a') ADVANCE(1423);
      END_STATE();
    case 558:
      if (lookahead == 'a') ADVANCE(1424);
      END_STATE();
    case 559:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(1430);
      END_STATE();
    case 561:
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 562:
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(2019);
      END_STATE();
    case 563:
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 564:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 565:
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 566:
      if (lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 567:
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'g') ADVANCE(810);
      END_STATE();
    case 568:
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 571:
      if (lookahead == 'b') ADVANCE(1195);
      if (lookahead == 'c') ADVANCE(1489);
      END_STATE();
    case 572:
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 573:
      if (lookahead == 'b') ADVANCE(1935);
      if (lookahead == 'p') ADVANCE(1056);
      END_STATE();
    case 574:
      if (lookahead == 'b') ADVANCE(732);
      END_STATE();
    case 575:
      if (lookahead == 'b') ADVANCE(1645);
      END_STATE();
    case 576:
      if (lookahead == 'b') ADVANCE(767);
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 577:
      if (lookahead == 'b') ADVANCE(1209);
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 't') ADVANCE(1925);
      END_STATE();
    case 578:
      if (lookahead == 'b') ADVANCE(1750);
      END_STATE();
    case 579:
      if (lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 580:
      if (lookahead == 'b') ADVANCE(919);
      END_STATE();
    case 581:
      if (lookahead == 'b') ADVANCE(1353);
      if (lookahead == 'p') ADVANCE(1353);
      END_STATE();
    case 582:
      if (lookahead == 'b') ADVANCE(1794);
      if (lookahead == 'c') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(871);
      END_STATE();
    case 583:
      if (lookahead == 'b') ADVANCE(1794);
      if (lookahead == 'p') ADVANCE(871);
      END_STATE();
    case 584:
      if (lookahead == 'b') ADVANCE(1265);
      END_STATE();
    case 585:
      if (lookahead == 'b') ADVANCE(1268);
      END_STATE();
    case 586:
      if (lookahead == 'b') ADVANCE(1711);
      END_STATE();
    case 587:
      if (lookahead == 'b') ADVANCE(1271);
      END_STATE();
    case 588:
      if (lookahead == 'b') ADVANCE(1272);
      END_STATE();
    case 589:
      if (lookahead == 'b') ADVANCE(1286);
      END_STATE();
    case 590:
      if (lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 591:
      if (lookahead == 'b') ADVANCE(1277);
      END_STATE();
    case 592:
      if (lookahead == 'b') ADVANCE(1278);
      END_STATE();
    case 593:
      if (lookahead == 'b') ADVANCE(1279);
      END_STATE();
    case 594:
      if (lookahead == 'b') ADVANCE(1797);
      if (lookahead == 'p') ADVANCE(1797);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(1979);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(1954);
      END_STATE();
    case 597:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 598:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1290);
      if (lookahead == 'o') ADVANCE(1523);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 599:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'g') ADVANCE(1470);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 600:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'i') ADVANCE(994);
      END_STATE();
    case 601:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 602:
      if (lookahead == 'c') ADVANCE(1979);
      if (lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 603:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 604:
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(1591);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(1192);
      END_STATE();
    case 606:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 607:
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(1857);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(1100);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(1550);
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 608:
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead == 's') ADVANCE(1585);
      if (lookahead == 't') ADVANCE(1741);
      if (lookahead == 'u') ADVANCE(1549);
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(1489);
      END_STATE();
    case 610:
      if (lookahead == 'c') ADVANCE(2012);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 611:
      if (lookahead == 'c') ADVANCE(2012);
      if (lookahead == 'o') ADVANCE(1199);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 612:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(1507);
      if (lookahead == 'i') ADVANCE(1321);
      if (lookahead == 'm') ADVANCE(1063);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 'q') ADVANCE(1778);
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(773);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead == 'q') ADVANCE(1895);
      if (lookahead == 'r') ADVANCE(1604);
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(1904);
      END_STATE();
    case 615:
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 616:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 617:
      if (lookahead == 'c') ADVANCE(2007);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 619:
      if (lookahead == 'c') ADVANCE(1591);
      END_STATE();
    case 620:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 621:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1313);
      if (lookahead == 'i') ADVANCE(1314);
      if (lookahead == 'o') ADVANCE(1203);
      END_STATE();
    case 622:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1847);
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 623:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 624:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(769);
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 625:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'g') ADVANCE(1123);
      END_STATE();
    case 626:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 628:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 630:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 631:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 632:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(421);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 633:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(961);
      END_STATE();
    case 634:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 635:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(1199);
      END_STATE();
    case 636:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'q') ADVANCE(688);
      END_STATE();
    case 637:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(1106);
      END_STATE();
    case 638:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'y') ADVANCE(1329);
      END_STATE();
    case 639:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 't') ADVANCE(1559);
      END_STATE();
    case 640:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 641:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 642:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 643:
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'q') ADVANCE(1915);
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 644:
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'q') ADVANCE(1915);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 645:
      if (lookahead == 'c') ADVANCE(1191);
      if (lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 646:
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'i') ADVANCE(1428);
      if (lookahead == 'm') ADVANCE(1104);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 647:
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 's') ADVANCE(1896);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 648:
      if (lookahead == 'c') ADVANCE(1799);
      END_STATE();
    case 649:
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead == 'r') ADVANCE(1953);
      END_STATE();
    case 650:
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead == 'v') ADVANCE(1566);
      END_STATE();
    case 651:
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 652:
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 653:
      if (lookahead == 'c') ADVANCE(1903);
      END_STATE();
    case 654:
      if (lookahead == 'c') ADVANCE(1903);
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 655:
      if (lookahead == 'c') ADVANCE(1903);
      if (lookahead == 'r') ADVANCE(1627);
      END_STATE();
    case 656:
      if (lookahead == 'c') ADVANCE(1903);
      if (lookahead == 's') ADVANCE(1799);
      END_STATE();
    case 657:
      if (lookahead == 'c') ADVANCE(1903);
      if (lookahead == 's') ADVANCE(1853);
      END_STATE();
    case 658:
      if (lookahead == 'c') ADVANCE(1518);
      if (lookahead == 'd') ADVANCE(1591);
      END_STATE();
    case 659:
      if (lookahead == 'c') ADVANCE(1936);
      END_STATE();
    case 660:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead == 'g') ADVANCE(1709);
      if (lookahead == 'm') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(969);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(1895);
      if (lookahead == 'r') ADVANCE(1602);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 661:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'm') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(1288);
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 662:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'm') ADVANCE(1332);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'r') ADVANCE(1637);
      END_STATE();
    case 664:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 665:
      if (lookahead == 'c') ADVANCE(1936);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(1249);
      END_STATE();
    case 666:
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == 'c') ADVANCE(1470);
      END_STATE();
    case 668:
      if (lookahead == 'c') ADVANCE(1180);
      END_STATE();
    case 669:
      if (lookahead == 'c') ADVANCE(1189);
      END_STATE();
    case 670:
      if (lookahead == 'c') ADVANCE(1189);
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 671:
      if (lookahead == 'c') ADVANCE(1181);
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 672:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 673:
      if (lookahead == 'c') ADVANCE(1057);
      END_STATE();
    case 674:
      if (lookahead == 'c') ADVANCE(1450);
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 675:
      if (lookahead == 'c') ADVANCE(1184);
      if (lookahead == 'n') ADVANCE(1180);
      END_STATE();
    case 676:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 677:
      if (lookahead == 'c') ADVANCE(1185);
      END_STATE();
    case 678:
      if (lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1755);
      if (lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 679:
      if (lookahead == 'c') ADVANCE(1194);
      if (lookahead == 'n') ADVANCE(1764);
      END_STATE();
    case 680:
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(1382);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 681:
      if (lookahead == 'c') ADVANCE(1186);
      if (lookahead == 'k') ADVANCE(1949);
      END_STATE();
    case 682:
      if (lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 683:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 684:
      if (lookahead == 'c') ADVANCE(1038);
      END_STATE();
    case 685:
      if (lookahead == 'c') ADVANCE(1644);
      END_STATE();
    case 686:
      if (lookahead == 'c') ADVANCE(1644);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(1906);
      END_STATE();
    case 687:
      if (lookahead == 'c') ADVANCE(1764);
      END_STATE();
    case 688:
      if (lookahead == 'c') ADVANCE(1899);
      END_STATE();
    case 689:
      if (lookahead == 'c') ADVANCE(1798);
      END_STATE();
    case 690:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 691:
      if (lookahead == 'c') ADVANCE(1074);
      END_STATE();
    case 692:
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == 'c') ADVANCE(907);
      END_STATE();
    case 694:
      if (lookahead == 'c') ADVANCE(1633);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(1914);
      END_STATE();
    case 695:
      if (lookahead == 'c') ADVANCE(1885);
      END_STATE();
    case 696:
      if (lookahead == 'c') ADVANCE(1872);
      END_STATE();
    case 697:
      if (lookahead == 'c') ADVANCE(903);
      END_STATE();
    case 698:
      if (lookahead == 'c') ADVANCE(1856);
      END_STATE();
    case 699:
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 700:
      if (lookahead == 'c') ADVANCE(1132);
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 701:
      if (lookahead == 'c') ADVANCE(1491);
      if (lookahead == 'i') ADVANCE(1366);
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 702:
      if (lookahead == 'c') ADVANCE(1491);
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 703:
      if (lookahead == 'c') ADVANCE(1193);
      END_STATE();
    case 704:
      if (lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 705:
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 706:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 707:
      if (lookahead == 'c') ADVANCE(1264);
      END_STATE();
    case 708:
      if (lookahead == 'c') ADVANCE(1688);
      if (lookahead == 'm') ADVANCE(1476);
      END_STATE();
    case 709:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 710:
      if (lookahead == 'c') ADVANCE(1871);
      END_STATE();
    case 711:
      if (lookahead == 'c') ADVANCE(1459);
      if (lookahead == 'e') ADVANCE(1517);
      if (lookahead == 'p') ADVANCE(1661);
      if (lookahead == 's') ADVANCE(1116);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(1248);
      END_STATE();
    case 713:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 714:
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(1552);
      if (lookahead == 'p') ADVANCE(1759);
      if (lookahead == 'r') ADVANCE(1405);
      if (lookahead == 't') ADVANCE(2003);
      END_STATE();
    case 715:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 716:
      if (lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 717:
      if (lookahead == 'd') ADVANCE(1439);
      END_STATE();
    case 718:
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'i') ADVANCE(1281);
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 719:
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'p') ADVANCE(938);
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 720:
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 721:
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 722:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 723:
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 724:
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 725:
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 726:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 727:
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 728:
      if (lookahead == 'd') ADVANCE(1285);
      END_STATE();
    case 729:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 730:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 731:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 733:
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 734:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 735:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 736:
      if (lookahead == 'd') ADVANCE(846);
      if (lookahead == 'i') ADVANCE(1474);
      END_STATE();
    case 737:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 738:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 739:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 740:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 741:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 742:
      if (lookahead == 'd') ADVANCE(1107);
      END_STATE();
    case 743:
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'l') ADVANCE(1297);
      END_STATE();
    case 744:
      if (lookahead == 'd') ADVANCE(767);
      END_STATE();
    case 745:
      if (lookahead == 'd') ADVANCE(1911);
      END_STATE();
    case 746:
      if (lookahead == 'd') ADVANCE(1911);
      if (lookahead == 'p') ADVANCE(1513);
      END_STATE();
    case 747:
      if (lookahead == 'd') ADVANCE(1065);
      END_STATE();
    case 748:
      if (lookahead == 'd') ADVANCE(1065);
      if (lookahead == 'm') ADVANCE(1552);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 749:
      if (lookahead == 'd') ADVANCE(1790);
      if (lookahead == 'u') ADVANCE(1034);
      END_STATE();
    case 750:
      if (lookahead == 'd') ADVANCE(782);
      END_STATE();
    case 751:
      if (lookahead == 'd') ADVANCE(1753);
      END_STATE();
    case 752:
      if (lookahead == 'd') ADVANCE(1846);
      END_STATE();
    case 753:
      if (lookahead == 'd') ADVANCE(1034);
      END_STATE();
    case 754:
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'u') ADVANCE(1790);
      END_STATE();
    case 755:
      if (lookahead == 'd') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1875);
      END_STATE();
    case 756:
      if (lookahead == 'd') ADVANCE(986);
      END_STATE();
    case 757:
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 758:
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 759:
      if (lookahead == 'd') ADVANCE(847);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 760:
      if (lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 761:
      if (lookahead == 'd') ADVANCE(1455);
      END_STATE();
    case 762:
      if (lookahead == 'd') ADVANCE(1104);
      END_STATE();
    case 763:
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'i') ADVANCE(1199);
      END_STATE();
    case 764:
      if (lookahead == 'd') ADVANCE(866);
      END_STATE();
    case 765:
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(1534);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(766);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'k') ADVANCE(803);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == 'p') ADVANCE(493);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 's') ADVANCE(1205);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(1848);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(1954);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(1954);
      if (lookahead == 'v') ADVANCE(579);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == 'p') ADVANCE(1027);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(1799);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(1256);
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1799);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1799);
      if (lookahead == 'o') ADVANCE(1345);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(1995);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(1693);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'k') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(1593);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(1991);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(1577);
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1579);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(1820);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(1744);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(1755);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(1838);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1750);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(1517);
      if (lookahead == 'k') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(1485);
      if (lookahead == 'p') ADVANCE(1033);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 's') ADVANCE(1079);
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1517);
      if (lookahead == 'p') ADVANCE(1032);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(1792);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(1262);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(1639);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(1753);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1809);
      if (lookahead == 'i') ADVANCE(1304);
      if (lookahead == 'u') ADVANCE(2004);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(1712);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(1592);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(1686);
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(1734);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(1649);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(1654);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(1612);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(1956);
      if (lookahead == 'i') ADVANCE(999);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(1269);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'w') ADVANCE(519);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(949);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(1415);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(1867);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 908:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(1771);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(1557);
      END_STATE();
    case 911:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(1673);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 917:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == 'o') ADVANCE(1385);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(1692);
      END_STATE();
    case 920:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 922:
      if (lookahead == 'e') ADVANCE(1739);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 925:
      if (lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 926:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 927:
      if (lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 928:
      if (lookahead == 'e') ADVANCE(1873);
      END_STATE();
    case 929:
      if (lookahead == 'e') ADVANCE(1152);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 931:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 932:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 933:
      if (lookahead == 'e') ADVANCE(1368);
      END_STATE();
    case 934:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 936:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 937:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 939:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(1465);
      END_STATE();
    case 940:
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 941:
      if (lookahead == 'f') ADVANCE(1591);
      if (lookahead == 'i') ADVANCE(1358);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(1661);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 942:
      if (lookahead == 'f') ADVANCE(1799);
      END_STATE();
    case 943:
      if (lookahead == 'f') ADVANCE(948);
      END_STATE();
    case 944:
      if (lookahead == 'f') ADVANCE(1802);
      if (lookahead == 's') ADVANCE(1747);
      END_STATE();
    case 945:
      if (lookahead == 'f') ADVANCE(1825);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 946:
      if (lookahead == 'f') ADVANCE(1766);
      if (lookahead == 'p') ADVANCE(1024);
      END_STATE();
    case 947:
      if (lookahead == 'f') ADVANCE(1890);
      END_STATE();
    case 948:
      if (lookahead == 'f') ADVANCE(922);
      END_STATE();
    case 949:
      if (lookahead == 'f') ADVANCE(1830);
      END_STATE();
    case 950:
      if (lookahead == 'f') ADVANCE(1844);
      END_STATE();
    case 951:
      if (lookahead == 'f') ADVANCE(1509);
      END_STATE();
    case 952:
      if (lookahead == 'f') ADVANCE(1833);
      if (lookahead == 's') ADVANCE(1752);
      END_STATE();
    case 953:
      if (lookahead == 'f') ADVANCE(1811);
      END_STATE();
    case 954:
      if (lookahead == 'f') ADVANCE(1813);
      END_STATE();
    case 955:
      if (lookahead == 'f') ADVANCE(1829);
      END_STATE();
    case 956:
      if (lookahead == 'f') ADVANCE(1869);
      END_STATE();
    case 957:
      if (lookahead == 'f') ADVANCE(1817);
      END_STATE();
    case 958:
      if (lookahead == 'f') ADVANCE(1469);
      END_STATE();
    case 959:
      if (lookahead == 'f') ADVANCE(1108);
      END_STATE();
    case 960:
      if (lookahead == 'f') ADVANCE(1889);
      END_STATE();
    case 961:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 962:
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 963:
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 964:
      if (lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 965:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 966:
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 967:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 968:
      if (lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 969:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 970:
      if (lookahead == 'g') ADVANCE(1302);
      END_STATE();
    case 971:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 972:
      if (lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 973:
      if (lookahead == 'g') ADVANCE(1040);
      END_STATE();
    case 974:
      if (lookahead == 'g') ADVANCE(1994);
      END_STATE();
    case 975:
      if (lookahead == 'g') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == 'r') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 976:
      if (lookahead == 'g') ADVANCE(987);
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 977:
      if (lookahead == 'g') ADVANCE(987);
      if (lookahead == 'r') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 978:
      if (lookahead == 'g') ADVANCE(1431);
      END_STATE();
    case 979:
      if (lookahead == 'g') ADVANCE(1470);
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 980:
      if (lookahead == 'g') ADVANCE(1470);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 981:
      if (lookahead == 'g') ADVANCE(1311);
      END_STATE();
    case 982:
      if (lookahead == 'g') ADVANCE(1029);
      END_STATE();
    case 983:
      if (lookahead == 'g') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1231);
      if (lookahead == 'l') ADVANCE(961);
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 984:
      if (lookahead == 'g') ADVANCE(517);
      if (lookahead == 's') ADVANCE(1855);
      if (lookahead == 'w') ADVANCE(337);
      END_STATE();
    case 985:
      if (lookahead == 'g') ADVANCE(1345);
      END_STATE();
    case 986:
      if (lookahead == 'g') ADVANCE(767);
      END_STATE();
    case 987:
      if (lookahead == 'g') ADVANCE(799);
      END_STATE();
    case 988:
      if (lookahead == 'g') ADVANCE(803);
      END_STATE();
    case 989:
      if (lookahead == 'g') ADVANCE(1718);
      END_STATE();
    case 990:
      if (lookahead == 'g') ADVANCE(1718);
      if (lookahead == 'i') ADVANCE(1358);
      if (lookahead == 't') ADVANCE(1499);
      END_STATE();
    case 991:
      if (lookahead == 'g') ADVANCE(1616);
      END_STATE();
    case 992:
      if (lookahead == 'g') ADVANCE(1043);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 993:
      if (lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 994:
      if (lookahead == 'g') ADVANCE(1625);
      END_STATE();
    case 995:
      if (lookahead == 'g') ADVANCE(1039);
      END_STATE();
    case 996:
      if (lookahead == 'g') ADVANCE(1819);
      END_STATE();
    case 997:
      if (lookahead == 'g') ADVANCE(1819);
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 998:
      if (lookahead == 'g') ADVANCE(1819);
      if (lookahead == 'q') ADVANCE(996);
      END_STATE();
    case 999:
      if (lookahead == 'g') ADVANCE(1044);
      END_STATE();
    case 1000:
      if (lookahead == 'g') ADVANCE(1337);
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 1001:
      if (lookahead == 'g') ADVANCE(1669);
      END_STATE();
    case 1002:
      if (lookahead == 'g') ADVANCE(1669);
      if (lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1003:
      if (lookahead == 'g') ADVANCE(1045);
      END_STATE();
    case 1004:
      if (lookahead == 'g') ADVANCE(1047);
      END_STATE();
    case 1005:
      if (lookahead == 'g') ADVANCE(1048);
      END_STATE();
    case 1006:
      if (lookahead == 'g') ADVANCE(1049);
      END_STATE();
    case 1007:
      if (lookahead == 'g') ADVANCE(1248);
      END_STATE();
    case 1008:
      if (lookahead == 'g') ADVANCE(1051);
      END_STATE();
    case 1009:
      if (lookahead == 'g') ADVANCE(881);
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 1010:
      if (lookahead == 'g') ADVANCE(1052);
      END_STATE();
    case 1011:
      if (lookahead == 'g') ADVANCE(1053);
      END_STATE();
    case 1012:
      if (lookahead == 'g') ADVANCE(1270);
      END_STATE();
    case 1013:
      if (lookahead == 'g') ADVANCE(1042);
      END_STATE();
    case 1014:
      if (lookahead == 'g') ADVANCE(1272);
      END_STATE();
    case 1015:
      if (lookahead == 'g') ADVANCE(1273);
      END_STATE();
    case 1016:
      if (lookahead == 'g') ADVANCE(1274);
      END_STATE();
    case 1017:
      if (lookahead == 'g') ADVANCE(1287);
      END_STATE();
    case 1018:
      if (lookahead == 'g') ADVANCE(1275);
      END_STATE();
    case 1019:
      if (lookahead == 'g') ADVANCE(1276);
      END_STATE();
    case 1020:
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 1021:
      if (lookahead == 'g') ADVANCE(535);
      END_STATE();
    case 1022:
      if (lookahead == 'g') ADVANCE(1062);
      END_STATE();
    case 1023:
      if (lookahead == 'h') ADVANCE(722);
      END_STATE();
    case 1024:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 1025:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 1026:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 1027:
      if (lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 1028:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 1029:
      if (lookahead == 'h') ADVANCE(1799);
      END_STATE();
    case 1030:
      if (lookahead == 'h') ADVANCE(1949);
      END_STATE();
    case 1031:
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1032:
      if (lookahead == 'h') ADVANCE(1064);
      END_STATE();
    case 1033:
      if (lookahead == 'h') ADVANCE(1064);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(1498);
      END_STATE();
    case 1034:
      if (lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 1035:
      if (lookahead == 'h') ADVANCE(1518);
      END_STATE();
    case 1036:
      if (lookahead == 'h') ADVANCE(1180);
      END_STATE();
    case 1037:
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 1038:
      if (lookahead == 'h') ADVANCE(767);
      END_STATE();
    case 1039:
      if (lookahead == 'h') ADVANCE(1890);
      END_STATE();
    case 1040:
      if (lookahead == 'h') ADVANCE(1806);
      END_STATE();
    case 1041:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 1042:
      if (lookahead == 'h') ADVANCE(1844);
      END_STATE();
    case 1043:
      if (lookahead == 'h') ADVANCE(1808);
      END_STATE();
    case 1044:
      if (lookahead == 'h') ADVANCE(1833);
      END_STATE();
    case 1045:
      if (lookahead == 'h') ADVANCE(1821);
      END_STATE();
    case 1046:
      if (lookahead == 'h') ADVANCE(1067);
      END_STATE();
    case 1047:
      if (lookahead == 'h') ADVANCE(1812);
      END_STATE();
    case 1048:
      if (lookahead == 'h') ADVANCE(1814);
      END_STATE();
    case 1049:
      if (lookahead == 'h') ADVANCE(1829);
      END_STATE();
    case 1050:
      if (lookahead == 'h') ADVANCE(833);
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1051:
      if (lookahead == 'h') ADVANCE(1816);
      END_STATE();
    case 1052:
      if (lookahead == 'h') ADVANCE(1818);
      END_STATE();
    case 1053:
      if (lookahead == 'h') ADVANCE(1815);
      END_STATE();
    case 1054:
      if (lookahead == 'h') ADVANCE(909);
      END_STATE();
    case 1055:
      if (lookahead == 'h') ADVANCE(1101);
      END_STATE();
    case 1056:
      if (lookahead == 'h') ADVANCE(841);
      END_STATE();
    case 1057:
      if (lookahead == 'h') ADVANCE(958);
      END_STATE();
    case 1058:
      if (lookahead == 'h') ADVANCE(1640);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead == 'r') ADVANCE(1072);
      END_STATE();
    case 1059:
      if (lookahead == 'h') ADVANCE(863);
      END_STATE();
    case 1060:
      if (lookahead == 'h') ADVANCE(1125);
      END_STATE();
    case 1061:
      if (lookahead == 'h') ADVANCE(1721);
      END_STATE();
    case 1062:
      if (lookahead == 'h') ADVANCE(1889);
      END_STATE();
    case 1063:
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 1064:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 1065:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 1066:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 1067:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 1068:
      if (lookahead == 'i') ADVANCE(1977);
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 1069:
      if (lookahead == 'i') ADVANCE(1993);
      END_STATE();
    case 1070:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 1071:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 1072:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 1073:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 1074:
      if (lookahead == 'i') ADVANCE(1591);
      END_STATE();
    case 1075:
      if (lookahead == 'i') ADVANCE(1591);
      if (lookahead == 'r') ADVANCE(1445);
      END_STATE();
    case 1076:
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 1077:
      if (lookahead == 'i') ADVANCE(1358);
      if (lookahead == 'n') ADVANCE(1799);
      END_STATE();
    case 1078:
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(1336);
      if (lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1079:
      if (lookahead == 'i') ADVANCE(981);
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 1080:
      if (lookahead == 'i') ADVANCE(1232);
      END_STATE();
    case 1081:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 1082:
      if (lookahead == 'i') ADVANCE(1799);
      END_STATE();
    case 1083:
      if (lookahead == 'i') ADVANCE(1949);
      END_STATE();
    case 1084:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 1085:
      if (lookahead == 'i') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(1933);
      END_STATE();
    case 1086:
      if (lookahead == 'i') ADVANCE(1346);
      END_STATE();
    case 1087:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 1088:
      if (lookahead == 'i') ADVANCE(1793);
      END_STATE();
    case 1089:
      if (lookahead == 'i') ADVANCE(1793);
      if (lookahead == 'p') ADVANCE(1473);
      END_STATE();
    case 1090:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 1091:
      if (lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 1092:
      if (lookahead == 'i') ADVANCE(1518);
      END_STATE();
    case 1093:
      if (lookahead == 'i') ADVANCE(961);
      END_STATE();
    case 1094:
      if (lookahead == 'i') ADVANCE(961);
      if (lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 1095:
      if (lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 1096:
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 1097:
      if (lookahead == 'i') ADVANCE(1304);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 1098:
      if (lookahead == 'i') ADVANCE(1304);
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 1099:
      if (lookahead == 'i') ADVANCE(1470);
      END_STATE();
    case 1100:
      if (lookahead == 'i') ADVANCE(1744);
      END_STATE();
    case 1101:
      if (lookahead == 'i') ADVANCE(1366);
      END_STATE();
    case 1102:
      if (lookahead == 'i') ADVANCE(1769);
      if (lookahead == 'l') ADVANCE(1479);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 1103:
      if (lookahead == 'i') ADVANCE(1769);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 1104:
      if (lookahead == 'i') ADVANCE(1199);
      END_STATE();
    case 1105:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 1106:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 1107:
      if (lookahead == 'i') ADVANCE(1910);
      END_STATE();
    case 1108:
      if (lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 1109:
      if (lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 1110:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 1111:
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1112:
      if (lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 1113:
      if (lookahead == 'i') ADVANCE(1379);
      END_STATE();
    case 1114:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 1115:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 1116:
      if (lookahead == 'i') ADVANCE(1323);
      END_STATE();
    case 1117:
      if (lookahead == 'i') ADVANCE(1021);
      END_STATE();
    case 1118:
      if (lookahead == 'i') ADVANCE(1665);
      if (lookahead == 'l') ADVANCE(937);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 1119:
      if (lookahead == 'i') ADVANCE(1370);
      END_STATE();
    case 1120:
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 1121:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 1122:
      if (lookahead == 'i') ADVANCE(1905);
      END_STATE();
    case 1123:
      if (lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 1124:
      if (lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 1125:
      if (lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 1126:
      if (lookahead == 'i') ADVANCE(1245);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 1127:
      if (lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 1128:
      if (lookahead == 'i') ADVANCE(1233);
      END_STATE();
    case 1129:
      if (lookahead == 'i') ADVANCE(1381);
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1130:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1131:
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'o') ADVANCE(1229);
      END_STATE();
    case 1132:
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1133:
      if (lookahead == 'i') ADVANCE(1231);
      END_STATE();
    case 1134:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 1135:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 1136:
      if (lookahead == 'i') ADVANCE(1784);
      END_STATE();
    case 1137:
      if (lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1138:
      if (lookahead == 'i') ADVANCE(1564);
      END_STATE();
    case 1139:
      if (lookahead == 'i') ADVANCE(1389);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1140:
      if (lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1141:
      if (lookahead == 'i') ADVANCE(1328);
      END_STATE();
    case 1142:
      if (lookahead == 'i') ADVANCE(1383);
      END_STATE();
    case 1143:
      if (lookahead == 'i') ADVANCE(1788);
      END_STATE();
    case 1144:
      if (lookahead == 'i') ADVANCE(1783);
      END_STATE();
    case 1145:
      if (lookahead == 'i') ADVANCE(1338);
      END_STATE();
    case 1146:
      if (lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 1147:
      if (lookahead == 'i') ADVANCE(1864);
      END_STATE();
    case 1148:
      if (lookahead == 'i') ADVANCE(1261);
      END_STATE();
    case 1149:
      if (lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 1150:
      if (lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 1151:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 1152:
      if (lookahead == 'i') ADVANCE(1280);
      END_STATE();
    case 1153:
      if (lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1154:
      if (lookahead == 'i') ADVANCE(1487);
      END_STATE();
    case 1155:
      if (lookahead == 'i') ADVANCE(1466);
      END_STATE();
    case 1156:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1157:
      if (lookahead == 'i') ADVANCE(1404);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 1158:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 1159:
      if (lookahead == 'i') ADVANCE(1281);
      END_STATE();
    case 1160:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 1161:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 1162:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 1163:
      if (lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 1164:
      if (lookahead == 'i') ADVANCE(1004);
      END_STATE();
    case 1165:
      if (lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 1166:
      if (lookahead == 'i') ADVANCE(1006);
      END_STATE();
    case 1167:
      if (lookahead == 'i') ADVANCE(1008);
      END_STATE();
    case 1168:
      if (lookahead == 'i') ADVANCE(1010);
      END_STATE();
    case 1169:
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 1170:
      if (lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 1171:
      if (lookahead == 'i') ADVANCE(1732);
      END_STATE();
    case 1172:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 1173:
      if (lookahead == 'i') ADVANCE(1022);
      END_STATE();
    case 1174:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 1175:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 1176:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 1177:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 1178:
      if (lookahead == 'j') ADVANCE(8);
      END_STATE();
    case 1179:
      if (lookahead == 'j') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1180:
      if (lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 1181:
      if (lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 1182:
      if (lookahead == 'k') ADVANCE(711);
      END_STATE();
    case 1183:
      if (lookahead == 'k') ADVANCE(1285);
      END_STATE();
    case 1184:
      if (lookahead == 'k') ADVANCE(1258);
      END_STATE();
    case 1185:
      if (lookahead == 'k') ADVANCE(156);
      END_STATE();
    case 1186:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 1187:
      if (lookahead == 'k') ADVANCE(595);
      END_STATE();
    case 1188:
      if (lookahead == 'k') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 1189:
      if (lookahead == 'k') ADVANCE(1971);
      END_STATE();
    case 1190:
      if (lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 1191:
      if (lookahead == 'k') ADVANCE(1780);
      END_STATE();
    case 1192:
      if (lookahead == 'k') ADVANCE(799);
      END_STATE();
    case 1193:
      if (lookahead == 'k') ADVANCE(803);
      END_STATE();
    case 1194:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 1195:
      if (lookahead == 'k') ADVANCE(519);
      END_STATE();
    case 1196:
      if (lookahead == 'k') ADVANCE(519);
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 1197:
      if (lookahead == 'k') ADVANCE(1149);
      END_STATE();
    case 1198:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 1199:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 1200:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 1201:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 1202:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 1203:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 1204:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 1205:
      if (lookahead == 'l') ADVANCE(2006);
      END_STATE();
    case 1206:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 1207:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 1208:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 1209:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 1210:
      if (lookahead == 'l') ADVANCE(1983);
      END_STATE();
    case 1211:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 1212:
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == 'q') ADVANCE(1923);
      END_STATE();
    case 1213:
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == 'q') ADVANCE(1922);
      if (lookahead == 'x') ADVANCE(1088);
      END_STATE();
    case 1214:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 1215:
      if (lookahead == 'l') ADVANCE(1799);
      END_STATE();
    case 1216:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 1217:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 1218:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 1219:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 1220:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 1221:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 1222:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 1223:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 1224:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 1225:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 1226:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 1227:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 1228:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 1229:
      if (lookahead == 'l') ADVANCE(1470);
      END_STATE();
    case 1230:
      if (lookahead == 'l') ADVANCE(1180);
      END_STATE();
    case 1231:
      if (lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 1232:
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(834);
      END_STATE();
    case 1233:
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(856);
      END_STATE();
    case 1234:
      if (lookahead == 'l') ADVANCE(816);
      END_STATE();
    case 1235:
      if (lookahead == 'l') ADVANCE(1744);
      END_STATE();
    case 1236:
      if (lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 1237:
      if (lookahead == 'l') ADVANCE(1100);
      END_STATE();
    case 1238:
      if (lookahead == 'l') ADVANCE(1982);
      END_STATE();
    case 1239:
      if (lookahead == 'l') ADVANCE(1066);
      END_STATE();
    case 1240:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 1241:
      if (lookahead == 'l') ADVANCE(1199);
      END_STATE();
    case 1242:
      if (lookahead == 'l') ADVANCE(1992);
      END_STATE();
    case 1243:
      if (lookahead == 'l') ADVANCE(1479);
      END_STATE();
    case 1244:
      if (lookahead == 'l') ADVANCE(1930);
      END_STATE();
    case 1245:
      if (lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 1246:
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead == 'm') ADVANCE(1530);
      END_STATE();
    case 1247:
      if (lookahead == 'l') ADVANCE(1222);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead == 'w') ADVANCE(1350);
      END_STATE();
    case 1248:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 1249:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 1250:
      if (lookahead == 'l') ADVANCE(1209);
      END_STATE();
    case 1251:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1252:
      if (lookahead == 'l') ADVANCE(838);
      END_STATE();
    case 1253:
      if (lookahead == 'l') ADVANCE(1300);
      if (lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 1254:
      if (lookahead == 'l') ADVANCE(1497);
      END_STATE();
    case 1255:
      if (lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 1256:
      if (lookahead == 'l') ADVANCE(1092);
      END_STATE();
    case 1257:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 1258:
      if (lookahead == 'l') ADVANCE(1448);
      if (lookahead == 's') ADVANCE(1588);
      if (lookahead == 't') ADVANCE(1743);
      END_STATE();
    case 1259:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 1260:
      if (lookahead == 'l') ADVANCE(813);
      if (lookahead == 'q') ADVANCE(1259);
      END_STATE();
    case 1261:
      if (lookahead == 'l') ADVANCE(1134);
      END_STATE();
    case 1262:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 1263:
      if (lookahead == 'l') ADVANCE(1221);
      END_STATE();
    case 1264:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 1265:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 1266:
      if (lookahead == 'l') ADVANCE(1482);
      END_STATE();
    case 1267:
      if (lookahead == 'l') ADVANCE(774);
      END_STATE();
    case 1268:
      if (lookahead == 'l') ADVANCE(905);
      END_STATE();
    case 1269:
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 1270:
      if (lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 1271:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 1272:
      if (lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 1273:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 1274:
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 1275:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 1276:
      if (lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 1277:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 1278:
      if (lookahead == 'l') ADVANCE(814);
      END_STATE();
    case 1279:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 1280:
      if (lookahead == 'l') ADVANCE(1101);
      END_STATE();
    case 1281:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 1282:
      if (lookahead == 'l') ADVANCE(744);
      if (lookahead == 'm') ADVANCE(828);
      if (lookahead == 'n') ADVANCE(1799);
      END_STATE();
    case 1283:
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == 'n') ADVANCE(990);
      if (lookahead == 'p') ADVANCE(939);
      if (lookahead == 'u') ADVANCE(1411);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(889);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1252);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(1142);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(1477);
      if (lookahead == 'm') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(966);
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(1690);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(1076);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1124);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1240);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(1796);
      END_STATE();
    case 1301:
      if (lookahead == 'l') ADVANCE(1292);
      END_STATE();
    case 1302:
      if (lookahead == 'l') ADVANCE(893);
      if (lookahead == 'm') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 1303:
      if (lookahead == 'l') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 1304:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 1305:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 1306:
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(1429);
      END_STATE();
    case 1307:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 1308:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 1309:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 1310:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 1311:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 1312:
      if (lookahead == 'm') ADVANCE(1157);
      END_STATE();
    case 1313:
      if (lookahead == 'm') ADVANCE(1064);
      END_STATE();
    case 1314:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 1315:
      if (lookahead == 'm') ADVANCE(1518);
      END_STATE();
    case 1316:
      if (lookahead == 'm') ADVANCE(1548);
      END_STATE();
    case 1317:
      if (lookahead == 'm') ADVANCE(1529);
      END_STATE();
    case 1318:
      if (lookahead == 'm') ADVANCE(1063);
      END_STATE();
    case 1319:
      if (lookahead == 'm') ADVANCE(1063);
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 1320:
      if (lookahead == 'm') ADVANCE(1311);
      END_STATE();
    case 1321:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 1322:
      if (lookahead == 'm') ADVANCE(1552);
      END_STATE();
    case 1323:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 1324:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 1325:
      if (lookahead == 'm') ADVANCE(837);
      END_STATE();
    case 1326:
      if (lookahead == 'm') ADVANCE(1199);
      END_STATE();
    case 1327:
      if (lookahead == 'm') ADVANCE(1345);
      END_STATE();
    case 1328:
      if (lookahead == 'm') ADVANCE(767);
      END_STATE();
    case 1329:
      if (lookahead == 'm') ADVANCE(1544);
      END_STATE();
    case 1330:
      if (lookahead == 'm') ADVANCE(1539);
      END_STATE();
    case 1331:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 1332:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 1333:
      if (lookahead == 'm') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 1334:
      if (lookahead == 'm') ADVANCE(801);
      END_STATE();
    case 1335:
      if (lookahead == 'm') ADVANCE(801);
      if (lookahead == 'x') ADVANCE(834);
      END_STATE();
    case 1336:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 1337:
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 1338:
      if (lookahead == 'm') ADVANCE(834);
      END_STATE();
    case 1339:
      if (lookahead == 'm') ADVANCE(1560);
      END_STATE();
    case 1340:
      if (lookahead == 'm') ADVANCE(821);
      END_STATE();
    case 1341:
      if (lookahead == 'm') ADVANCE(1332);
      END_STATE();
    case 1342:
      if (lookahead == 'm') ADVANCE(1156);
      END_STATE();
    case 1343:
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 1344:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 1345:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 1346:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 1347:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 1348:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 1349:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 1350:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 1351:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 1352:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 1353:
      if (lookahead == 'n') ADVANCE(2001);
      END_STATE();
    case 1354:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 1355:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 1356:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 1357:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 1358:
      if (lookahead == 'n') ADVANCE(1799);
      END_STATE();
    case 1359:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 1360:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 1361:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 1362:
      if (lookahead == 'n') ADVANCE(1976);
      END_STATE();
    case 1363:
      if (lookahead == 'n') ADVANCE(959);
      END_STATE();
    case 1364:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 1365:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 1366:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 1367:
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 1368:
      if (lookahead == 'n') ADVANCE(1859);
      END_STATE();
    case 1369:
      if (lookahead == 'n') ADVANCE(967);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'w') ADVANCE(868);
      END_STATE();
    case 1370:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 1371:
      if (lookahead == 'n') ADVANCE(1180);
      END_STATE();
    case 1372:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 1373:
      if (lookahead == 'n') ADVANCE(1744);
      END_STATE();
    case 1374:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 1375:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 1376:
      if (lookahead == 'n') ADVANCE(991);
      if (lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 1377:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 1378:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 1379:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 1380:
      if (lookahead == 'n') ADVANCE(965);
      END_STATE();
    case 1381:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 1382:
      if (lookahead == 'n') ADVANCE(1475);
      END_STATE();
    case 1383:
      if (lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 1384:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 1385:
      if (lookahead == 'n') ADVANCE(1020);
      END_STATE();
    case 1386:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 1387:
      if (lookahead == 'n') ADVANCE(968);
      END_STATE();
    case 1388:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 1389:
      if (lookahead == 'n') ADVANCE(1877);
      END_STATE();
    case 1390:
      if (lookahead == 'n') ADVANCE(1810);
      END_STATE();
    case 1391:
      if (lookahead == 'n') ADVANCE(1824);
      END_STATE();
    case 1392:
      if (lookahead == 'n') ADVANCE(1849);
      END_STATE();
    case 1393:
      if (lookahead == 'n') ADVANCE(1851);
      END_STATE();
    case 1394:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(1269);
      END_STATE();
    case 1397:
      if (lookahead == 'n') ADVANCE(1908);
      END_STATE();
    case 1398:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 1399:
      if (lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 1400:
      if (lookahead == 'n') ADVANCE(989);
      END_STATE();
    case 1401:
      if (lookahead == 'n') ADVANCE(914);
      END_STATE();
    case 1402:
      if (lookahead == 'n') ADVANCE(1099);
      END_STATE();
    case 1403:
      if (lookahead == 'n') ADVANCE(1867);
      END_STATE();
    case 1404:
      if (lookahead == 'n') ADVANCE(1906);
      END_STATE();
    case 1405:
      if (lookahead == 'n') ADVANCE(1480);
      END_STATE();
    case 1406:
      if (lookahead == 'n') ADVANCE(1868);
      END_STATE();
    case 1407:
      if (lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 1408:
      if (lookahead == 'n') ADVANCE(1866);
      END_STATE();
    case 1409:
      if (lookahead == 'n') ADVANCE(1886);
      END_STATE();
    case 1410:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 1411:
      if (lookahead == 'n') ADVANCE(1878);
      END_STATE();
    case 1412:
      if (lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 1413:
      if (lookahead == 'n') ADVANCE(1876);
      END_STATE();
    case 1414:
      if (lookahead == 'n') ADVANCE(1155);
      END_STATE();
    case 1415:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 1416:
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'r') ADVANCE(1694);
      END_STATE();
    case 1417:
      if (lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'r') ADVANCE(1698);
      END_STATE();
    case 1418:
      if (lookahead == 'n') ADVANCE(1880);
      END_STATE();
    case 1419:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 1420:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 1421:
      if (lookahead == 'n') ADVANCE(1882);
      END_STATE();
    case 1422:
      if (lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 1423:
      if (lookahead == 'n') ADVANCE(1018);
      END_STATE();
    case 1424:
      if (lookahead == 'n') ADVANCE(1019);
      END_STATE();
    case 1425:
      if (lookahead == 'n') ADVANCE(1887);
      END_STATE();
    case 1426:
      if (lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 1427:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 1428:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 1429:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 1430:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 1431:
      if (lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 1432:
      if (lookahead == 'o') ADVANCE(1967);
      END_STATE();
    case 1433:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 1434:
      if (lookahead == 'o') ADVANCE(1947);
      END_STATE();
    case 1435:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 1436:
      if (lookahead == 'o') ADVANCE(1801);
      END_STATE();
    case 1437:
      if (lookahead == 'o') ADVANCE(1800);
      END_STATE();
    case 1438:
      if (lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1439:
      if (lookahead == 'o') ADVANCE(1799);
      END_STATE();
    case 1440:
      if (lookahead == 'o') ADVANCE(1799);
      if (lookahead == 's') ADVANCE(1900);
      END_STATE();
    case 1441:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 1442:
      if (lookahead == 'o') ADVANCE(1978);
      END_STATE();
    case 1443:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 1444:
      if (lookahead == 'o') ADVANCE(1976);
      END_STATE();
    case 1445:
      if (lookahead == 'o') ADVANCE(1770);
      END_STATE();
    case 1446:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 1447:
      if (lookahead == 'o') ADVANCE(1957);
      END_STATE();
    case 1448:
      if (lookahead == 'o') ADVANCE(1996);
      END_STATE();
    case 1449:
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1450:
      if (lookahead == 'o') ADVANCE(1407);
      END_STATE();
    case 1451:
      if (lookahead == 'o') ADVANCE(1958);
      END_STATE();
    case 1452:
      if (lookahead == 'o') ADVANCE(1959);
      END_STATE();
    case 1453:
      if (lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 1454:
      if (lookahead == 'o') ADVANCE(1180);
      END_STATE();
    case 1455:
      if (lookahead == 'o') ADVANCE(1854);
      END_STATE();
    case 1456:
      if (lookahead == 'o') ADVANCE(1960);
      END_STATE();
    case 1457:
      if (lookahead == 'o') ADVANCE(1972);
      END_STATE();
    case 1458:
      if (lookahead == 'o') ADVANCE(1744);
      END_STATE();
    case 1459:
      if (lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1460:
      if (lookahead == 'o') ADVANCE(1366);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1461:
      if (lookahead == 'o') ADVANCE(1973);
      END_STATE();
    case 1462:
      if (lookahead == 'o') ADVANCE(1966);
      END_STATE();
    case 1463:
      if (lookahead == 'o') ADVANCE(1961);
      END_STATE();
    case 1464:
      if (lookahead == 'o') ADVANCE(1199);
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 1465:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 1466:
      if (lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 1467:
      if (lookahead == 'o') ADVANCE(1964);
      END_STATE();
    case 1468:
      if (lookahead == 'o') ADVANCE(1805);
      END_STATE();
    case 1469:
      if (lookahead == 'o') ADVANCE(1645);
      END_STATE();
    case 1470:
      if (lookahead == 'o') ADVANCE(1345);
      END_STATE();
    case 1471:
      if (lookahead == 'o') ADVANCE(1345);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 1472:
      if (lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1473:
      if (lookahead == 'o') ADVANCE(1401);
      END_STATE();
    case 1474:
      if (lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1475:
      if (lookahead == 'o') ADVANCE(1943);
      END_STATE();
    case 1476:
      if (lookahead == 'o') ADVANCE(1344);
      END_STATE();
    case 1477:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1478:
      if (lookahead == 'o') ADVANCE(1945);
      END_STATE();
    case 1479:
      if (lookahead == 'o') ADVANCE(1438);
      END_STATE();
    case 1480:
      if (lookahead == 'o') ADVANCE(1891);
      END_STATE();
    case 1481:
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1482:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 1483:
      if (lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 1484:
      if (lookahead == 'o') ADVANCE(1842);
      END_STATE();
    case 1485:
      if (lookahead == 'o') ADVANCE(1884);
      END_STATE();
    case 1486:
      if (lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 1487:
      if (lookahead == 'o') ADVANCE(1398);
      END_STATE();
    case 1488:
      if (lookahead == 'o') ADVANCE(1364);
      END_STATE();
    case 1489:
      if (lookahead == 'o') ADVANCE(1657);
      if (lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1490:
      if (lookahead == 'o') ADVANCE(1682);
      END_STATE();
    case 1491:
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1492:
      if (lookahead == 'o') ADVANCE(1608);
      END_STATE();
    case 1493:
      if (lookahead == 'o') ADVANCE(1968);
      END_STATE();
    case 1494:
      if (lookahead == 'o') ADVANCE(1320);
      END_STATE();
    case 1495:
      if (lookahead == 'o') ADVANCE(1320);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1496:
      if (lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1497:
      if (lookahead == 'o') ADVANCE(1547);
      END_STATE();
    case 1498:
      if (lookahead == 'o') ADVANCE(1558);
      END_STATE();
    case 1499:
      if (lookahead == 'o') ADVANCE(1927);
      END_STATE();
    case 1500:
      if (lookahead == 'o') ADVANCE(1974);
      END_STATE();
    case 1501:
      if (lookahead == 'o') ADVANCE(1969);
      END_STATE();
    case 1502:
      if (lookahead == 'o') ADVANCE(1933);
      END_STATE();
    case 1503:
      if (lookahead == 'o') ADVANCE(1848);
      END_STATE();
    case 1504:
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead == 'u') ADVANCE(1538);
      END_STATE();
    case 1505:
      if (lookahead == 'o') ADVANCE(1970);
      END_STATE();
    case 1506:
      if (lookahead == 'o') ADVANCE(1413);
      END_STATE();
    case 1507:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1508:
      if (lookahead == 'o') ADVANCE(1486);
      END_STATE();
    case 1509:
      if (lookahead == 'o') ADVANCE(1659);
      END_STATE();
    case 1510:
      if (lookahead == 'o') ADVANCE(1392);
      END_STATE();
    case 1511:
      if (lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1512:
      if (lookahead == 'o') ADVANCE(1488);
      END_STATE();
    case 1513:
      if (lookahead == 'o') ADVANCE(1724);
      END_STATE();
    case 1514:
      if (lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 1515:
      if (lookahead == 'o') ADVANCE(1948);
      END_STATE();
    case 1516:
      if (lookahead == 'o') ADVANCE(1975);
      END_STATE();
    case 1517:
      if (lookahead == 'p') ADVANCE(1795);
      END_STATE();
    case 1518:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 1519:
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(1470);
      END_STATE();
    case 1520:
      if (lookahead == 'p') ADVANCE(1027);
      END_STATE();
    case 1521:
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1522:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 1523:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(1675);
      END_STATE();
    case 1524:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 1525:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == 'w') ADVANCE(1347);
      END_STATE();
    case 1526:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(1860);
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 1527:
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'u') ADVANCE(1374);
      END_STATE();
    case 1528:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 1529:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 1530:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 1531:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 1532:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 1533:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 1534:
      if (lookahead == 'p') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 1535:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 1536:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 1537:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 1538:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 1539:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 1540:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 1541:
      if (lookahead == 'p') ADVANCE(1024);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 1542:
      if (lookahead == 'p') ADVANCE(1535);
      END_STATE();
    case 1543:
      if (lookahead == 'p') ADVANCE(1744);
      if (lookahead == 'r') ADVANCE(1470);
      END_STATE();
    case 1544:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 1545:
      if (lookahead == 'p') ADVANCE(1210);
      END_STATE();
    case 1546:
      if (lookahead == 'p') ADVANCE(1555);
      END_STATE();
    case 1547:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 1548:
      if (lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 1549:
      if (lookahead == 'p') ADVANCE(1289);
      END_STATE();
    case 1550:
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1551:
      if (lookahead == 'p') ADVANCE(1767);
      END_STATE();
    case 1552:
      if (lookahead == 'p') ADVANCE(1839);
      END_STATE();
    case 1553:
      if (lookahead == 'p') ADVANCE(1565);
      END_STATE();
    case 1554:
      if (lookahead == 'p') ADVANCE(1565);
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 1555:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 1556:
      if (lookahead == 'p') ADVANCE(1508);
      END_STATE();
    case 1557:
      if (lookahead == 'p') ADVANCE(1291);
      END_STATE();
    case 1558:
      if (lookahead == 'p') ADVANCE(1831);
      END_STATE();
    case 1559:
      if (lookahead == 'p') ADVANCE(1458);
      END_STATE();
    case 1560:
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 1561:
      if (lookahead == 'p') ADVANCE(513);
      END_STATE();
    case 1562:
      if (lookahead == 'p') ADVANCE(1785);
      END_STATE();
    case 1563:
      if (lookahead == 'p') ADVANCE(1690);
      if (lookahead == 's') ADVANCE(1918);
      END_STATE();
    case 1564:
      if (lookahead == 'p') ADVANCE(1267);
      END_STATE();
    case 1565:
      if (lookahead == 'p') ADVANCE(1670);
      END_STATE();
    case 1566:
      if (lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 1567:
      if (lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 1568:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 1569:
      if (lookahead == 'p') ADVANCE(1512);
      END_STATE();
    case 1570:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 1571:
      if (lookahead == 'p') ADVANCE(1511);
      END_STATE();
    case 1572:
      if (lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 1573:
      if (lookahead == 'q') ADVANCE(8);
      END_STATE();
    case 1574:
      if (lookahead == 'q') ADVANCE(93);
      END_STATE();
    case 1575:
      if (lookahead == 'q') ADVANCE(1260);
      END_STATE();
    case 1576:
      if (lookahead == 'q') ADVANCE(998);
      END_STATE();
    case 1577:
      if (lookahead == 'q') ADVANCE(1563);
      END_STATE();
    case 1578:
      if (lookahead == 'q') ADVANCE(173);
      END_STATE();
    case 1579:
      if (lookahead == 'q') ADVANCE(1573);
      END_STATE();
    case 1580:
      if (lookahead == 'q') ADVANCE(1894);
      END_STATE();
    case 1581:
      if (lookahead == 'q') ADVANCE(1913);
      END_STATE();
    case 1582:
      if (lookahead == 'q') ADVANCE(1946);
      if (lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 1583:
      if (lookahead == 'q') ADVANCE(1934);
      END_STATE();
    case 1584:
      if (lookahead == 'q') ADVANCE(1923);
      END_STATE();
    case 1585:
      if (lookahead == 'q') ADVANCE(688);
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 1586:
      if (lookahead == 'q') ADVANCE(1937);
      END_STATE();
    case 1587:
      if (lookahead == 'q') ADVANCE(1941);
      END_STATE();
    case 1588:
      if (lookahead == 'q') ADVANCE(1944);
      END_STATE();
    case 1589:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 1590:
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 1591:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 1592:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 1593:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 1594:
      if (lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 1595:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 1596:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 1597:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 1598:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 1599:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 1600:
      if (lookahead == 'r') ADVANCE(2010);
      END_STATE();
    case 1601:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 1602:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 1603:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 1604:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 1605:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 1606:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 1607:
      if (lookahead == 'r') ADVANCE(2015);
      END_STATE();
    case 1608:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 1609:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 1610:
      if (lookahead == 'r') ADVANCE(1591);
      END_STATE();
    case 1611:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 1612:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 1613:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 1614:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 1615:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 1616:
      if (lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1617:
      if (lookahead == 'r') ADVANCE(1799);
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 1618:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 1619:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 1620:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 1621:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 1622:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 1623:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 1624:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 1625:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 1626:
      if (lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 1627:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 1628:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 1629:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 1630:
      if (lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 1631:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 1632:
      if (lookahead == 'r') ADVANCE(1429);
      END_STATE();
    case 1633:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 1634:
      if (lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 1635:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 1636:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 1637:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 1638:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 1639:
      if (lookahead == 'r') ADVANCE(1518);
      END_STATE();
    case 1640:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 1641:
      if (lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1642:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 1643:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 1644:
      if (lookahead == 'r') ADVANCE(1470);
      END_STATE();
    case 1645:
      if (lookahead == 'r') ADVANCE(1180);
      END_STATE();
    case 1646:
      if (lookahead == 'r') ADVANCE(1986);
      END_STATE();
    case 1647:
      if (lookahead == 'r') ADVANCE(1988);
      END_STATE();
    case 1648:
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 1649:
      if (lookahead == 'r') ADVANCE(1744);
      END_STATE();
    case 1650:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 1651:
      if (lookahead == 'r') ADVANCE(1428);
      END_STATE();
    case 1652:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 1653:
      if (lookahead == 'r') ADVANCE(1965);
      END_STATE();
    case 1654:
      if (lookahead == 'r') ADVANCE(1987);
      END_STATE();
    case 1655:
      if (lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 1656:
      if (lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 1657:
      if (lookahead == 'r') ADVANCE(1345);
      END_STATE();
    case 1658:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 1659:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 1660:
      if (lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1661:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 1662:
      if (lookahead == 'r') ADVANCE(1454);
      END_STATE();
    case 1663:
      if (lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1664:
      if (lookahead == 'r') ADVANCE(1442);
      END_STATE();
    case 1665:
      if (lookahead == 'r') ADVANCE(1764);
      END_STATE();
    case 1666:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 1667:
      if (lookahead == 'r') ADVANCE(1447);
      END_STATE();
    case 1668:
      if (lookahead == 'r') ADVANCE(1600);
      END_STATE();
    case 1669:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 1670:
      if (lookahead == 'r') ADVANCE(1444);
      END_STATE();
    case 1671:
      if (lookahead == 'r') ADVANCE(1877);
      END_STATE();
    case 1672:
      if (lookahead == 'r') ADVANCE(1556);
      END_STATE();
    case 1673:
      if (lookahead == 'r') ADVANCE(1870);
      END_STATE();
    case 1674:
      if (lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1675:
      if (lookahead == 'r') ADVANCE(1150);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(1794);
      END_STATE();
    case 1677:
      if (lookahead == 'r') ADVANCE(820);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 1678:
      if (lookahead == 'r') ADVANCE(1823);
      END_STATE();
    case 1679:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 1680:
      if (lookahead == 'r') ADVANCE(1112);
      END_STATE();
    case 1681:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1682:
      if (lookahead == 'r') ADVANCE(1386);
      END_STATE();
    case 1683:
      if (lookahead == 'r') ADVANCE(1772);
      END_STATE();
    case 1684:
      if (lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 1685:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 1686:
      if (lookahead == 'r') ADVANCE(1414);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(1238);
      END_STATE();
    case 1688:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1689:
      if (lookahead == 'r') ADVANCE(1242);
      END_STATE();
    case 1690:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 1691:
      if (lookahead == 'r') ADVANCE(1452);
      END_STATE();
    case 1692:
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1693:
      if (lookahead == 'r') ADVANCE(784);
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 1694:
      if (lookahead == 'r') ADVANCE(1456);
      END_STATE();
    case 1695:
      if (lookahead == 'r') ADVANCE(1457);
      END_STATE();
    case 1696:
      if (lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 1697:
      if (lookahead == 'r') ADVANCE(1462);
      END_STATE();
    case 1698:
      if (lookahead == 'r') ADVANCE(1463);
      END_STATE();
    case 1699:
      if (lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 1700:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 1701:
      if (lookahead == 'r') ADVANCE(1467);
      END_STATE();
    case 1702:
      if (lookahead == 'r') ADVANCE(1606);
      END_STATE();
    case 1703:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 1704:
      if (lookahead == 'r') ADVANCE(1596);
      END_STATE();
    case 1705:
      if (lookahead == 'r') ADVANCE(1629);
      END_STATE();
    case 1706:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 1707:
      if (lookahead == 'r') ADVANCE(812);
      END_STATE();
    case 1708:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 1709:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 1710:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 1711:
      if (lookahead == 'r') ADVANCE(1122);
      END_STATE();
    case 1712:
      if (lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 1713:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 1714:
      if (lookahead == 'r') ADVANCE(1867);
      END_STATE();
    case 1715:
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 1716:
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 1717:
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 1718:
      if (lookahead == 'r') ADVANCE(1912);
      END_STATE();
    case 1719:
      if (lookahead == 'r') ADVANCE(1789);
      END_STATE();
    case 1720:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 1721:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1722:
      if (lookahead == 'r') ADVANCE(1667);
      END_STATE();
    case 1723:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 1724:
      if (lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 1725:
      if (lookahead == 'r') ADVANCE(1681);
      END_STATE();
    case 1726:
      if (lookahead == 'r') ADVANCE(1691);
      END_STATE();
    case 1727:
      if (lookahead == 'r') ADVANCE(1695);
      END_STATE();
    case 1728:
      if (lookahead == 'r') ADVANCE(1696);
      END_STATE();
    case 1729:
      if (lookahead == 'r') ADVANCE(1697);
      END_STATE();
    case 1730:
      if (lookahead == 'r') ADVANCE(1701);
      END_STATE();
    case 1731:
      if (lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 1732:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 1733:
      if (lookahead == 'r') ADVANCE(923);
      END_STATE();
    case 1734:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 1735:
      if (lookahead == 'r') ADVANCE(1569);
      END_STATE();
    case 1736:
      if (lookahead == 'r') ADVANCE(1888);
      END_STATE();
    case 1737:
      if (lookahead == 'r') ADVANCE(1571);
      END_STATE();
    case 1738:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 1739:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 1740:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 1741:
      if (lookahead == 'r') ADVANCE(1174);
      END_STATE();
    case 1742:
      if (lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1743:
      if (lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 1744:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 1745:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 1746:
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(1330);
      END_STATE();
    case 1747:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 1748:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 1749:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 1750:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 1751:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 1752:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 1753:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 1754:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 1755:
      if (lookahead == 's') ADVANCE(1799);
      END_STATE();
    case 1756:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 1757:
      if (lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1758:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 1759:
      if (lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 1760:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 1761:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 1762:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 1763:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 1764:
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 1765:
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 1766:
      if (lookahead == 's') ADVANCE(1989);
      END_STATE();
    case 1767:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 1768:
      if (lookahead == 's') ADVANCE(1025);
      END_STATE();
    case 1769:
      if (lookahead == 's') ADVANCE(1029);
      END_STATE();
    case 1770:
      if (lookahead == 's') ADVANCE(1744);
      END_STATE();
    case 1771:
      if (lookahead == 's') ADVANCE(1100);
      END_STATE();
    case 1772:
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 1773:
      if (lookahead == 's') ADVANCE(1893);
      END_STATE();
    case 1774:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 1775:
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 1776:
      if (lookahead == 's') ADVANCE(815);
      END_STATE();
    case 1777:
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1778:
      if (lookahead == 's') ADVANCE(1898);
      END_STATE();
    case 1779:
      if (lookahead == 's') ADVANCE(1844);
      END_STATE();
    case 1780:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1781:
      if (lookahead == 's') ADVANCE(1756);
      END_STATE();
    case 1782:
      if (lookahead == 's') ADVANCE(1834);
      END_STATE();
    case 1783:
      if (lookahead == 's') ADVANCE(1837);
      END_STATE();
    case 1784:
      if (lookahead == 's') ADVANCE(1162);
      END_STATE();
    case 1785:
      if (lookahead == 's') ADVANCE(1831);
      END_STATE();
    case 1786:
      if (lookahead == 's') ADVANCE(852);
      END_STATE();
    case 1787:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 1788:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 1789:
      if (lookahead == 's') ADVANCE(811);
      END_STATE();
    case 1790:
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 1791:
      if (lookahead == 's') ADVANCE(1900);
      END_STATE();
    case 1792:
      if (lookahead == 's') ADVANCE(1855);
      END_STATE();
    case 1793:
      if (lookahead == 's') ADVANCE(1843);
      END_STATE();
    case 1794:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 1795:
      if (lookahead == 's') ADVANCE(1109);
      END_STATE();
    case 1796:
      if (lookahead == 's') ADVANCE(872);
      END_STATE();
    case 1797:
      if (lookahead == 's') ADVANCE(928);
      END_STATE();
    case 1798:
      if (lookahead == 't') ADVANCE(1979);
      END_STATE();
    case 1799:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 1800:
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 1801:
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(1361);
      END_STATE();
    case 1802:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 1803:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 1804:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 1805:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 1806:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 1807:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 1808:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 1809:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 1810:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1811:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 1812:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 1813:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 1814:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 1815:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 1816:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 1817:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 1818:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 1819:
      if (lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 1820:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 1821:
      if (lookahead == 't') ADVANCE(849);
      END_STATE();
    case 1822:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 1823:
      if (lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1824:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 1825:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 1826:
      if (lookahead == 't') ADVANCE(1980);
      END_STATE();
    case 1827:
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(1136);
      END_STATE();
    case 1828:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 1829:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 1830:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 1831:
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 1832:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 1833:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 1834:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 1835:
      if (lookahead == 't') ADVANCE(1984);
      END_STATE();
    case 1836:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 1837:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 1838:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 1839:
      if (lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 1840:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 1841:
      if (lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 1842:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 1843:
      if (lookahead == 't') ADVANCE(1744);
      END_STATE();
    case 1844:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 1845:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 1846:
      if (lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 1847:
      if (lookahead == 't') ADVANCE(1327);
      END_STATE();
    case 1848:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 1849:
      if (lookahead == 't') ADVANCE(1499);
      END_STATE();
    case 1850:
      if (lookahead == 't') ADVANCE(1750);
      END_STATE();
    case 1851:
      if (lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 1852:
      if (lookahead == 't') ADVANCE(1342);
      END_STATE();
    case 1853:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 1854:
      if (lookahead == 't') ADVANCE(1776);
      END_STATE();
    case 1855:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 1856:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 1857:
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1858:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 1859:
      if (lookahead == 't') ADVANCE(1135);
      END_STATE();
    case 1860:
      if (lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 1861:
      if (lookahead == 't') ADVANCE(1146);
      END_STATE();
    case 1862:
      if (lookahead == 't') ADVANCE(1435);
      END_STATE();
    case 1863:
      if (lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 1864:
      if (lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1865:
      if (lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1866:
      if (lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 1867:
      if (lookahead == 't') ADVANCE(1594);
      END_STATE();
    case 1868:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 1869:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 1870:
      if (lookahead == 't') ADVANCE(1394);
      END_STATE();
    case 1871:
      if (lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 1872:
      if (lookahead == 't') ADVANCE(1492);
      END_STATE();
    case 1873:
      if (lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 1874:
      if (lookahead == 't') ADVANCE(1679);
      END_STATE();
    case 1875:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1876:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 1877:
      if (lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 1878:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 1879:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 1880:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 1881:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 1882:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1883:
      if (lookahead == 't') ADVANCE(886);
      END_STATE();
    case 1884:
      if (lookahead == 't') ADVANCE(1055);
      END_STATE();
    case 1885:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 1886:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 1887:
      if (lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 1888:
      if (lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 1889:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 1890:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 1891:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 1892:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 1893:
      if (lookahead == 'u') ADVANCE(2004);
      END_STATE();
    case 1894:
      if (lookahead == 'u') ADVANCE(1429);
      END_STATE();
    case 1895:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 1896:
      if (lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 1897:
      if (lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 1898:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 1899:
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 1900:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 1901:
      if (lookahead == 'u') ADVANCE(1748);
      END_STATE();
    case 1902:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 1903:
      if (lookahead == 'u') ADVANCE(1836);
      END_STATE();
    case 1904:
      if (lookahead == 'u') ADVANCE(1836);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1905:
      if (lookahead == 'u') ADVANCE(1304);
      END_STATE();
    case 1906:
      if (lookahead == 'u') ADVANCE(1744);
      END_STATE();
    case 1907:
      if (lookahead == 'u') ADVANCE(850);
      END_STATE();
    case 1908:
      if (lookahead == 'u') ADVANCE(1760);
      END_STATE();
    case 1909:
      if (lookahead == 'u') ADVANCE(767);
      END_STATE();
    case 1910:
      if (lookahead == 'u') ADVANCE(1307);
      END_STATE();
    case 1911:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 1912:
      if (lookahead == 'u') ADVANCE(801);
      END_STATE();
    case 1913:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 1914:
      if (lookahead == 'u') ADVANCE(1751);
      END_STATE();
    case 1915:
      if (lookahead == 'u') ADVANCE(1430);
      END_STATE();
    case 1916:
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 1917:
      if (lookahead == 'u') ADVANCE(1775);
      END_STATE();
    case 1918:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 1919:
      if (lookahead == 'u') ADVANCE(1762);
      END_STATE();
    case 1920:
      if (lookahead == 'u') ADVANCE(1083);
      END_STATE();
    case 1921:
      if (lookahead == 'u') ADVANCE(835);
      END_STATE();
    case 1922:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 1923:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1924:
      if (lookahead == 'u') ADVANCE(1082);
      END_STATE();
    case 1925:
      if (lookahead == 'u') ADVANCE(1622);
      END_STATE();
    case 1926:
      if (lookahead == 'u') ADVANCE(1594);
      END_STATE();
    case 1927:
      if (lookahead == 'u') ADVANCE(1623);
      END_STATE();
    case 1928:
      if (lookahead == 'u') ADVANCE(1687);
      END_STATE();
    case 1929:
      if (lookahead == 'u') ADVANCE(1689);
      END_STATE();
    case 1930:
      if (lookahead == 'u') ADVANCE(1034);
      END_STATE();
    case 1931:
      if (lookahead == 'u') ADVANCE(1317);
      END_STATE();
    case 1932:
      if (lookahead == 'u') ADVANCE(1388);
      END_STATE();
    case 1933:
      if (lookahead == 'u') ADVANCE(1782);
      END_STATE();
    case 1934:
      if (lookahead == 'u') ADVANCE(1117);
      END_STATE();
    case 1935:
      if (lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 1936:
      if (lookahead == 'u') ADVANCE(1848);
      END_STATE();
    case 1937:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 1938:
      if (lookahead == 'u') ADVANCE(1257);
      END_STATE();
    case 1939:
      if (lookahead == 'u') ADVANCE(1503);
      END_STATE();
    case 1940:
      if (lookahead == 'u') ADVANCE(1315);
      END_STATE();
    case 1941:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 1942:
      if (lookahead == 'u') ADVANCE(1703);
      END_STATE();
    case 1943:
      if (lookahead == 'u') ADVANCE(1296);
      END_STATE();
    case 1944:
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 1945:
      if (lookahead == 'u') ADVANCE(589);
      END_STATE();
    case 1946:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 1947:
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(1355);
      END_STATE();
    case 1948:
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 1949:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 1950:
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(766);
      END_STATE();
    case 1951:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 1952:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 1953:
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(843);
      END_STATE();
    case 1954:
      if (lookahead == 'v') ADVANCE(767);
      END_STATE();
    case 1955:
      if (lookahead == 'v') ADVANCE(792);
      END_STATE();
    case 1956:
      if (lookahead == 'v') ADVANCE(930);
      END_STATE();
    case 1957:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 1958:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 1959:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 1960:
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1961:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 1962:
      if (lookahead == 'w') ADVANCE(1429);
      END_STATE();
    case 1963:
      if (lookahead == 'w') ADVANCE(388);
      END_STATE();
    case 1964:
      if (lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 1965:
      if (lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 1966:
      if (lookahead == 'w') ADVANCE(1744);
      END_STATE();
    case 1967:
      if (lookahead == 'w') ADVANCE(1345);
      END_STATE();
    case 1968:
      if (lookahead == 'w') ADVANCE(1361);
      END_STATE();
    case 1969:
      if (lookahead == 'w') ADVANCE(1359);
      END_STATE();
    case 1970:
      if (lookahead == 'w') ADVANCE(1356);
      END_STATE();
    case 1971:
      if (lookahead == 'w') ADVANCE(1143);
      END_STATE();
    case 1972:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 1973:
      if (lookahead == 'w') ADVANCE(1269);
      END_STATE();
    case 1974:
      if (lookahead == 'w') ADVANCE(1427);
      END_STATE();
    case 1975:
      if (lookahead == 'w') ADVANCE(1426);
      END_STATE();
    case 1976:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 1977:
      if (lookahead == 'x') ADVANCE(1799);
      END_STATE();
    case 1978:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 1979:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 1980:
      if (lookahead == 'y') ADVANCE(357);
      END_STATE();
    case 1981:
      if (lookahead == 'y') ADVANCE(826);
      END_STATE();
    case 1982:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 1983:
      if (lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 1984:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 1985:
      if (lookahead == 'y') ADVANCE(1949);
      END_STATE();
    case 1986:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 1987:
      if (lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 1988:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 1989:
      if (lookahead == 'y') ADVANCE(1304);
      END_STATE();
    case 1990:
      if (lookahead == 'y') ADVANCE(766);
      END_STATE();
    case 1991:
      if (lookahead == 'y') ADVANCE(1744);
      END_STATE();
    case 1992:
      if (lookahead == 'y') ADVANCE(815);
      END_STATE();
    case 1993:
      if (lookahead == 'z') ADVANCE(1506);
      END_STATE();
    case 1994:
      if (lookahead == 'z') ADVANCE(419);
      END_STATE();
    case 1995:
      if (lookahead == 'z') ADVANCE(1122);
      END_STATE();
    case 1996:
      if (lookahead == 'z') ADVANCE(853);
      END_STATE();
    case 1997:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2034);
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2037);
      END_STATE();
    case 1998:
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(8);
      END_STATE();
    case 1999:
      if (lookahead == '3' ||
          lookahead == '5') ADVANCE(8);
      END_STATE();
    case 2000:
      if (lookahead == '6' ||
          lookahead == '8') ADVANCE(8);
      END_STATE();
    case 2001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 2002:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2022);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 2003:
      if (lookahead == 'a' ||
          lookahead == 'h') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(895);
      END_STATE();
    case 2004:
      if (lookahead == 'b' ||
          lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 2005:
      if (lookahead == 'b' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 2006:
      if (lookahead == 'd' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 2007:
      if (lookahead == 'e' ||
          lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 2008:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 2009:
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 2010:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 2011:
      if (lookahead == 'o' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 2012:
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 2013:
      if (lookahead == '3' ||
          lookahead == '4') ADVANCE(8);
      END_STATE();
    case 2014:
      if (lookahead == 'R' ||
          lookahead == 'S') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2015:
      if (lookahead == 'e' ||
          lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 2016:
      if (lookahead == '4' ||
          lookahead == '5' ||
          lookahead == '8') ADVANCE(8);
      if (lookahead == ';') ADVANCE(2028);
      END_STATE();
    case 2017:
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(8);
      END_STATE();
    case 2018:
      if (lookahead == 'L' ||
          lookahead == 'R' ||
          lookahead == 'l' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 2019:
      if (('1' <= lookahead && lookahead <= '3') ||
          lookahead == 'E') ADVANCE(8);
      if (lookahead == ';') ADVANCE(2028);
      if (lookahead == 'd') ADVANCE(1440);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(1757);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(1916);
      if (lookahead == 'n') ADVANCE(2001);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == 's') ADVANCE(867);
      END_STATE();
    case 2020:
      if (('2' <= lookahead && lookahead <= '6') ||
          lookahead == '8') ADVANCE(8);
      if (lookahead == ';') ADVANCE(2028);
      END_STATE();
    case 2021:
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(8);
      END_STATE();
    case 2022:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 2023:
      if (eof) ADVANCE(2024);
      if (lookahead == '&') ADVANCE(2036);
      if (lookahead == '\\') ADVANCE(2027);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2034);
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2037);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym_backslash_escape);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(2025);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_entity_reference);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_numeric_character_reference);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2034);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '#') ADVANCE(2002);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'B') ADVANCE(373);
      if (lookahead == 'C') ADVANCE(328);
      if (lookahead == 'D') ADVANCE(289);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead == 'F') ADVANCE(598);
      if (lookahead == 'G') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'J') ADVANCE(700);
      if (lookahead == 'K') ADVANCE(327);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'P') ADVANCE(411);
      if (lookahead == 'Q') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(324);
      if (lookahead == 'T') ADVANCE(325);
      if (lookahead == 'U') ADVANCE(392);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(652);
      if (lookahead == 'X') ADVANCE(940);
      if (lookahead == 'Y') ADVANCE(241);
      if (lookahead == 'Z') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(420);
      if (lookahead == 'g') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'j') ADVANCE(699);
      if (lookahead == 'k') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead == 'q') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(651);
      if (lookahead == 'x') ADVANCE(607);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == 'z') ADVANCE(500);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(2037);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2023, .external_lex_state = 2},
  [2] = {.lex_state = 2023, .external_lex_state = 3},
  [3] = {.lex_state = 2023, .external_lex_state = 3},
  [4] = {.lex_state = 2023, .external_lex_state = 3},
  [5] = {.lex_state = 2023, .external_lex_state = 3},
  [6] = {.lex_state = 2023, .external_lex_state = 3},
  [7] = {.lex_state = 2023, .external_lex_state = 3},
  [8] = {.lex_state = 2023, .external_lex_state = 3},
  [9] = {.lex_state = 2023, .external_lex_state = 3},
  [10] = {.lex_state = 2023, .external_lex_state = 3},
  [11] = {.lex_state = 2023, .external_lex_state = 3},
  [12] = {.lex_state = 2023, .external_lex_state = 3},
  [13] = {.lex_state = 2023, .external_lex_state = 3},
  [14] = {.lex_state = 2023, .external_lex_state = 3},
  [15] = {.lex_state = 2023, .external_lex_state = 3},
  [16] = {.lex_state = 2023, .external_lex_state = 3},
  [17] = {.lex_state = 2023, .external_lex_state = 3},
  [18] = {.lex_state = 2023, .external_lex_state = 3},
  [19] = {.lex_state = 2023, .external_lex_state = 3},
  [20] = {.lex_state = 2023, .external_lex_state = 3},
  [21] = {.lex_state = 2023, .external_lex_state = 3},
  [22] = {.lex_state = 2023, .external_lex_state = 3},
  [23] = {.lex_state = 2023, .external_lex_state = 3},
  [24] = {.lex_state = 2023, .external_lex_state = 3},
  [25] = {.lex_state = 2023, .external_lex_state = 3},
  [26] = {.lex_state = 2023, .external_lex_state = 3},
  [27] = {.lex_state = 2023, .external_lex_state = 3},
  [28] = {.lex_state = 2023, .external_lex_state = 3},
  [29] = {.lex_state = 2023, .external_lex_state = 3},
  [30] = {.lex_state = 2023, .external_lex_state = 3},
  [31] = {.lex_state = 2023, .external_lex_state = 3},
  [32] = {.lex_state = 2023, .external_lex_state = 3},
  [33] = {.lex_state = 2023, .external_lex_state = 4},
  [34] = {.lex_state = 2023, .external_lex_state = 4},
  [35] = {.lex_state = 2023, .external_lex_state = 4},
  [36] = {.lex_state = 2023, .external_lex_state = 4},
  [37] = {.lex_state = 2023, .external_lex_state = 4},
  [38] = {.lex_state = 2023, .external_lex_state = 4},
  [39] = {.lex_state = 2023, .external_lex_state = 2},
  [40] = {.lex_state = 2023, .external_lex_state = 4},
  [41] = {.lex_state = 2023, .external_lex_state = 4},
  [42] = {.lex_state = 2023, .external_lex_state = 4},
  [43] = {.lex_state = 2023, .external_lex_state = 4},
  [44] = {.lex_state = 2023, .external_lex_state = 4},
  [45] = {.lex_state = 2023, .external_lex_state = 4},
  [46] = {.lex_state = 2023, .external_lex_state = 4},
  [47] = {.lex_state = 2023, .external_lex_state = 4},
  [48] = {.lex_state = 2023, .external_lex_state = 4},
  [49] = {.lex_state = 2023, .external_lex_state = 4},
  [50] = {.lex_state = 2023, .external_lex_state = 4},
  [51] = {.lex_state = 2023, .external_lex_state = 4},
  [52] = {.lex_state = 2023, .external_lex_state = 4},
  [53] = {.lex_state = 2023, .external_lex_state = 4},
  [54] = {.lex_state = 2023, .external_lex_state = 4},
  [55] = {.lex_state = 2023, .external_lex_state = 4},
  [56] = {.lex_state = 2023, .external_lex_state = 4},
  [57] = {.lex_state = 2023, .external_lex_state = 4},
  [58] = {.lex_state = 2023, .external_lex_state = 4},
  [59] = {.lex_state = 2023, .external_lex_state = 4},
  [60] = {.lex_state = 2023, .external_lex_state = 4},
  [61] = {.lex_state = 2023, .external_lex_state = 4},
  [62] = {.lex_state = 2023, .external_lex_state = 4},
  [63] = {.lex_state = 2023, .external_lex_state = 4},
  [64] = {.lex_state = 2023, .external_lex_state = 4},
  [65] = {.lex_state = 2023, .external_lex_state = 4},
  [66] = {.lex_state = 2023, .external_lex_state = 4},
  [67] = {.lex_state = 2023, .external_lex_state = 4},
  [68] = {.lex_state = 2023, .external_lex_state = 4},
  [69] = {.lex_state = 2023, .external_lex_state = 2},
  [70] = {.lex_state = 2023, .external_lex_state = 4},
  [71] = {.lex_state = 2023, .external_lex_state = 4},
  [72] = {.lex_state = 2023, .external_lex_state = 5},
  [73] = {.lex_state = 2023, .external_lex_state = 5},
  [74] = {.lex_state = 2023, .external_lex_state = 5},
  [75] = {.lex_state = 2023, .external_lex_state = 6},
  [76] = {.lex_state = 2023, .external_lex_state = 7},
  [77] = {.lex_state = 2023, .external_lex_state = 6},
  [78] = {.lex_state = 2023, .external_lex_state = 6},
  [79] = {.lex_state = 2023, .external_lex_state = 7},
  [80] = {.lex_state = 2023, .external_lex_state = 7},
  [81] = {.lex_state = 2023, .external_lex_state = 5},
  [82] = {.lex_state = 2023, .external_lex_state = 5},
  [83] = {.lex_state = 2023, .external_lex_state = 7},
  [84] = {.lex_state = 2023, .external_lex_state = 6},
  [85] = {.lex_state = 2023, .external_lex_state = 7},
  [86] = {.lex_state = 2023, .external_lex_state = 6},
  [87] = {.lex_state = 2023, .external_lex_state = 8},
  [88] = {.lex_state = 2023, .external_lex_state = 5},
  [89] = {.lex_state = 2023, .external_lex_state = 9},
  [90] = {.lex_state = 2023, .external_lex_state = 5},
  [91] = {.lex_state = 2023, .external_lex_state = 10},
  [92] = {.lex_state = 2023, .external_lex_state = 5},
  [93] = {.lex_state = 2023, .external_lex_state = 7},
  [94] = {.lex_state = 2023, .external_lex_state = 11},
  [95] = {.lex_state = 2023, .external_lex_state = 7},
  [96] = {.lex_state = 2023, .external_lex_state = 6},
  [97] = {.lex_state = 2023, .external_lex_state = 5},
  [98] = {.lex_state = 2023, .external_lex_state = 5},
  [99] = {.lex_state = 2023, .external_lex_state = 6},
  [100] = {.lex_state = 2023, .external_lex_state = 5},
  [101] = {.lex_state = 2023, .external_lex_state = 5},
  [102] = {.lex_state = 2023, .external_lex_state = 12},
  [103] = {.lex_state = 2023, .external_lex_state = 3},
  [104] = {.lex_state = 2023, .external_lex_state = 7},
  [105] = {.lex_state = 2023, .external_lex_state = 7},
  [106] = {.lex_state = 2023, .external_lex_state = 3},
  [107] = {.lex_state = 2023, .external_lex_state = 6},
  [108] = {.lex_state = 2023, .external_lex_state = 6},
  [109] = {.lex_state = 2023, .external_lex_state = 6},
  [110] = {.lex_state = 2023, .external_lex_state = 6},
  [111] = {.lex_state = 2023, .external_lex_state = 3},
  [112] = {.lex_state = 2023, .external_lex_state = 6},
  [113] = {.lex_state = 2023, .external_lex_state = 3},
  [114] = {.lex_state = 2023, .external_lex_state = 3},
  [115] = {.lex_state = 2023, .external_lex_state = 3},
  [116] = {.lex_state = 2023, .external_lex_state = 3},
  [117] = {.lex_state = 2023, .external_lex_state = 3},
  [118] = {.lex_state = 2023, .external_lex_state = 7},
  [119] = {.lex_state = 2023, .external_lex_state = 7},
  [120] = {.lex_state = 2023, .external_lex_state = 3},
  [121] = {.lex_state = 2023, .external_lex_state = 3},
  [122] = {.lex_state = 2023, .external_lex_state = 3},
  [123] = {.lex_state = 2023, .external_lex_state = 3},
  [124] = {.lex_state = 2023, .external_lex_state = 3},
  [125] = {.lex_state = 2023, .external_lex_state = 13},
  [126] = {.lex_state = 2023, .external_lex_state = 7},
  [127] = {.lex_state = 2023, .external_lex_state = 2},
  [128] = {.lex_state = 2023, .external_lex_state = 4},
  [129] = {.lex_state = 2023, .external_lex_state = 2},
  [130] = {.lex_state = 2023, .external_lex_state = 3},
  [131] = {.lex_state = 2023, .external_lex_state = 3},
  [132] = {.lex_state = 2023, .external_lex_state = 3},
  [133] = {.lex_state = 2023, .external_lex_state = 3},
  [134] = {.lex_state = 2023, .external_lex_state = 2},
  [135] = {.lex_state = 2023, .external_lex_state = 4},
  [136] = {.lex_state = 2023, .external_lex_state = 4},
  [137] = {.lex_state = 2023, .external_lex_state = 4},
  [138] = {.lex_state = 2023, .external_lex_state = 4},
  [139] = {.lex_state = 2023, .external_lex_state = 4},
  [140] = {.lex_state = 2023, .external_lex_state = 2},
  [141] = {.lex_state = 2023, .external_lex_state = 2},
  [142] = {.lex_state = 2023, .external_lex_state = 2},
  [143] = {.lex_state = 2023, .external_lex_state = 3},
  [144] = {.lex_state = 2023, .external_lex_state = 2},
  [145] = {.lex_state = 2023, .external_lex_state = 3},
  [146] = {.lex_state = 2023, .external_lex_state = 2},
  [147] = {.lex_state = 2023, .external_lex_state = 3},
  [148] = {.lex_state = 2023, .external_lex_state = 2},
  [149] = {.lex_state = 2023, .external_lex_state = 3},
  [150] = {.lex_state = 2023, .external_lex_state = 4},
  [151] = {.lex_state = 2023, .external_lex_state = 3},
  [152] = {.lex_state = 2023, .external_lex_state = 2},
  [153] = {.lex_state = 2023, .external_lex_state = 2},
  [154] = {.lex_state = 2023, .external_lex_state = 4},
  [155] = {.lex_state = 2023, .external_lex_state = 4},
  [156] = {.lex_state = 2023, .external_lex_state = 4},
  [157] = {.lex_state = 2023, .external_lex_state = 4},
  [158] = {.lex_state = 2023, .external_lex_state = 4},
  [159] = {.lex_state = 2023, .external_lex_state = 4},
  [160] = {.lex_state = 2023, .external_lex_state = 2},
  [161] = {.lex_state = 2023, .external_lex_state = 2},
  [162] = {.lex_state = 2023, .external_lex_state = 3},
  [163] = {.lex_state = 2023, .external_lex_state = 4},
  [164] = {.lex_state = 2023, .external_lex_state = 4},
  [165] = {.lex_state = 2023, .external_lex_state = 4},
  [166] = {.lex_state = 2023, .external_lex_state = 4},
  [167] = {.lex_state = 2023, .external_lex_state = 4},
  [168] = {.lex_state = 2023, .external_lex_state = 4},
  [169] = {.lex_state = 2023, .external_lex_state = 4},
  [170] = {.lex_state = 2023, .external_lex_state = 4},
  [171] = {.lex_state = 2023, .external_lex_state = 4},
  [172] = {.lex_state = 2023, .external_lex_state = 2},
  [173] = {.lex_state = 2023, .external_lex_state = 2},
  [174] = {.lex_state = 2023, .external_lex_state = 2},
  [175] = {.lex_state = 2023, .external_lex_state = 2},
  [176] = {.lex_state = 2023, .external_lex_state = 2},
  [177] = {.lex_state = 2023, .external_lex_state = 4},
  [178] = {.lex_state = 2023, .external_lex_state = 2},
  [179] = {.lex_state = 2023, .external_lex_state = 2},
  [180] = {.lex_state = 2023, .external_lex_state = 2},
  [181] = {.lex_state = 2023, .external_lex_state = 2},
  [182] = {.lex_state = 2023, .external_lex_state = 2},
  [183] = {.lex_state = 2023, .external_lex_state = 3},
  [184] = {.lex_state = 2023, .external_lex_state = 3},
  [185] = {.lex_state = 2023, .external_lex_state = 3},
  [186] = {.lex_state = 2023, .external_lex_state = 3},
  [187] = {.lex_state = 2023, .external_lex_state = 3},
  [188] = {.lex_state = 2023, .external_lex_state = 3},
  [189] = {.lex_state = 2023, .external_lex_state = 3},
  [190] = {.lex_state = 2023, .external_lex_state = 3},
  [191] = {.lex_state = 2023, .external_lex_state = 3},
  [192] = {.lex_state = 2023, .external_lex_state = 3},
  [193] = {.lex_state = 2023, .external_lex_state = 3},
  [194] = {.lex_state = 2023, .external_lex_state = 3},
  [195] = {.lex_state = 2023, .external_lex_state = 3},
  [196] = {.lex_state = 2023, .external_lex_state = 3},
  [197] = {.lex_state = 2023, .external_lex_state = 3},
  [198] = {.lex_state = 2023, .external_lex_state = 3},
  [199] = {.lex_state = 2023, .external_lex_state = 3},
  [200] = {.lex_state = 2023, .external_lex_state = 3},
  [201] = {.lex_state = 2023, .external_lex_state = 3},
  [202] = {.lex_state = 2023, .external_lex_state = 3},
  [203] = {.lex_state = 2023, .external_lex_state = 3},
  [204] = {.lex_state = 2023, .external_lex_state = 3},
  [205] = {.lex_state = 2023, .external_lex_state = 3},
  [206] = {.lex_state = 2023, .external_lex_state = 3},
  [207] = {.lex_state = 2023, .external_lex_state = 3},
  [208] = {.lex_state = 2023, .external_lex_state = 3},
  [209] = {.lex_state = 2023, .external_lex_state = 3},
  [210] = {.lex_state = 2023, .external_lex_state = 3},
  [211] = {.lex_state = 2023, .external_lex_state = 3},
  [212] = {.lex_state = 2023, .external_lex_state = 3},
  [213] = {.lex_state = 2023, .external_lex_state = 3},
  [214] = {.lex_state = 2023, .external_lex_state = 3},
  [215] = {.lex_state = 2023, .external_lex_state = 3},
  [216] = {.lex_state = 2023, .external_lex_state = 2},
  [217] = {.lex_state = 2023, .external_lex_state = 2},
  [218] = {.lex_state = 2023, .external_lex_state = 2},
  [219] = {.lex_state = 2023, .external_lex_state = 2},
  [220] = {.lex_state = 2023, .external_lex_state = 4},
  [221] = {.lex_state = 2023, .external_lex_state = 4},
  [222] = {.lex_state = 2023, .external_lex_state = 2},
  [223] = {.lex_state = 2023, .external_lex_state = 2},
  [224] = {.lex_state = 2023, .external_lex_state = 4},
  [225] = {.lex_state = 2023, .external_lex_state = 4},
  [226] = {.lex_state = 2023, .external_lex_state = 2},
  [227] = {.lex_state = 2023, .external_lex_state = 4},
  [228] = {.lex_state = 2023, .external_lex_state = 4},
  [229] = {.lex_state = 2023, .external_lex_state = 4},
  [230] = {.lex_state = 2023, .external_lex_state = 4},
  [231] = {.lex_state = 2023, .external_lex_state = 4},
  [232] = {.lex_state = 2023, .external_lex_state = 4},
  [233] = {.lex_state = 2023, .external_lex_state = 4},
  [234] = {.lex_state = 2023, .external_lex_state = 4},
  [235] = {.lex_state = 2023, .external_lex_state = 4},
  [236] = {.lex_state = 2023, .external_lex_state = 4},
  [237] = {.lex_state = 2023, .external_lex_state = 4},
  [238] = {.lex_state = 2023, .external_lex_state = 4},
  [239] = {.lex_state = 2023, .external_lex_state = 2},
  [240] = {.lex_state = 2023, .external_lex_state = 4},
  [241] = {.lex_state = 2023, .external_lex_state = 4},
  [242] = {.lex_state = 2023, .external_lex_state = 4},
  [243] = {.lex_state = 2023, .external_lex_state = 4},
  [244] = {.lex_state = 2023, .external_lex_state = 4},
  [245] = {.lex_state = 2023, .external_lex_state = 4},
  [246] = {.lex_state = 2023, .external_lex_state = 4},
  [247] = {.lex_state = 2023, .external_lex_state = 4},
  [248] = {.lex_state = 2023, .external_lex_state = 4},
  [249] = {.lex_state = 2023, .external_lex_state = 4},
  [250] = {.lex_state = 2023, .external_lex_state = 4},
  [251] = {.lex_state = 2023, .external_lex_state = 4},
  [252] = {.lex_state = 2023, .external_lex_state = 4},
  [253] = {.lex_state = 2023, .external_lex_state = 4},
  [254] = {.lex_state = 2023, .external_lex_state = 4},
  [255] = {.lex_state = 2023, .external_lex_state = 4},
  [256] = {.lex_state = 2023, .external_lex_state = 2},
  [257] = {.lex_state = 2023, .external_lex_state = 2},
  [258] = {.lex_state = 2023, .external_lex_state = 2},
  [259] = {.lex_state = 2023, .external_lex_state = 2},
  [260] = {.lex_state = 2023, .external_lex_state = 2},
  [261] = {.lex_state = 2023, .external_lex_state = 2},
  [262] = {.lex_state = 2023, .external_lex_state = 2},
  [263] = {.lex_state = 2023, .external_lex_state = 2},
  [264] = {.lex_state = 2023, .external_lex_state = 2},
  [265] = {.lex_state = 2023, .external_lex_state = 2},
  [266] = {.lex_state = 2023, .external_lex_state = 2},
  [267] = {.lex_state = 2023, .external_lex_state = 2},
  [268] = {.lex_state = 2023, .external_lex_state = 2},
  [269] = {.lex_state = 2023, .external_lex_state = 4},
  [270] = {.lex_state = 2023, .external_lex_state = 2},
  [271] = {.lex_state = 2023, .external_lex_state = 2},
  [272] = {.lex_state = 2023, .external_lex_state = 2},
  [273] = {.lex_state = 2023, .external_lex_state = 2},
  [274] = {.lex_state = 2023, .external_lex_state = 2},
  [275] = {.lex_state = 2023, .external_lex_state = 2},
  [276] = {.lex_state = 2023, .external_lex_state = 2},
  [277] = {.lex_state = 2023, .external_lex_state = 2},
  [278] = {.lex_state = 2023, .external_lex_state = 2},
  [279] = {.lex_state = 2023, .external_lex_state = 2},
  [280] = {.lex_state = 2023, .external_lex_state = 2},
  [281] = {.lex_state = 2023, .external_lex_state = 2},
  [282] = {.lex_state = 2023, .external_lex_state = 14},
  [283] = {.lex_state = 2023, .external_lex_state = 14},
  [284] = {.lex_state = 2023, .external_lex_state = 14},
  [285] = {.lex_state = 2023, .external_lex_state = 14},
  [286] = {.lex_state = 2023, .external_lex_state = 14},
  [287] = {.lex_state = 370, .external_lex_state = 15},
  [288] = {.lex_state = 370, .external_lex_state = 15},
  [289] = {.lex_state = 370, .external_lex_state = 15},
  [290] = {.lex_state = 370, .external_lex_state = 15},
  [291] = {.lex_state = 370, .external_lex_state = 15},
  [292] = {.lex_state = 370, .external_lex_state = 16},
  [293] = {.lex_state = 370, .external_lex_state = 16},
  [294] = {.lex_state = 370, .external_lex_state = 16},
  [295] = {.lex_state = 370, .external_lex_state = 16},
  [296] = {.lex_state = 370, .external_lex_state = 15},
  [297] = {.lex_state = 370, .external_lex_state = 16},
  [298] = {.lex_state = 2023, .external_lex_state = 17},
  [299] = {.lex_state = 370, .external_lex_state = 16},
  [300] = {.lex_state = 370, .external_lex_state = 15},
  [301] = {.lex_state = 2023, .external_lex_state = 14},
  [302] = {.lex_state = 370, .external_lex_state = 16},
  [303] = {.lex_state = 2023, .external_lex_state = 14},
  [304] = {.lex_state = 370, .external_lex_state = 16},
  [305] = {.lex_state = 2023, .external_lex_state = 14},
  [306] = {.lex_state = 2023, .external_lex_state = 14},
  [307] = {.lex_state = 2023, .external_lex_state = 14},
  [308] = {.lex_state = 370, .external_lex_state = 15},
  [309] = {.lex_state = 370, .external_lex_state = 15},
  [310] = {.lex_state = 2023, .external_lex_state = 14},
  [311] = {.lex_state = 370, .external_lex_state = 16},
  [312] = {.lex_state = 370, .external_lex_state = 16},
  [313] = {.lex_state = 370, .external_lex_state = 15},
  [314] = {.lex_state = 370, .external_lex_state = 16},
  [315] = {.lex_state = 1997, .external_lex_state = 18},
  [316] = {.lex_state = 1997, .external_lex_state = 18},
  [317] = {.lex_state = 1997, .external_lex_state = 18},
  [318] = {.lex_state = 1997, .external_lex_state = 19},
  [319] = {.lex_state = 1997, .external_lex_state = 18},
  [320] = {.lex_state = 1997, .external_lex_state = 19},
  [321] = {.lex_state = 1997, .external_lex_state = 19},
  [322] = {.lex_state = 1997, .external_lex_state = 18},
  [323] = {.lex_state = 1997, .external_lex_state = 19},
  [324] = {.lex_state = 1997, .external_lex_state = 19},
  [325] = {.lex_state = 0, .external_lex_state = 18},
  [326] = {.lex_state = 0, .external_lex_state = 18},
  [327] = {.lex_state = 0, .external_lex_state = 18},
  [328] = {.lex_state = 0, .external_lex_state = 18},
  [329] = {.lex_state = 0, .external_lex_state = 18},
  [330] = {.lex_state = 0, .external_lex_state = 18},
  [331] = {.lex_state = 0, .external_lex_state = 18},
  [332] = {.lex_state = 0, .external_lex_state = 18},
  [333] = {.lex_state = 0, .external_lex_state = 20},
  [334] = {.lex_state = 0, .external_lex_state = 18},
  [335] = {.lex_state = 0, .external_lex_state = 18},
  [336] = {.lex_state = 0, .external_lex_state = 18},
  [337] = {.lex_state = 0, .external_lex_state = 18},
  [338] = {.lex_state = 0, .external_lex_state = 21},
  [339] = {.lex_state = 0, .external_lex_state = 18},
  [340] = {.lex_state = 0, .external_lex_state = 18},
  [341] = {.lex_state = 0, .external_lex_state = 18},
  [342] = {.lex_state = 0, .external_lex_state = 18},
  [343] = {.lex_state = 0, .external_lex_state = 18},
  [344] = {.lex_state = 0, .external_lex_state = 18},
  [345] = {.lex_state = 0, .external_lex_state = 18},
  [346] = {.lex_state = 0, .external_lex_state = 18},
  [347] = {.lex_state = 0, .external_lex_state = 18},
  [348] = {.lex_state = 0, .external_lex_state = 18},
  [349] = {.lex_state = 0, .external_lex_state = 18},
  [350] = {.lex_state = 0, .external_lex_state = 20},
  [351] = {.lex_state = 0, .external_lex_state = 18},
  [352] = {.lex_state = 0, .external_lex_state = 20},
  [353] = {.lex_state = 0, .external_lex_state = 20},
  [354] = {.lex_state = 0, .external_lex_state = 18},
  [355] = {.lex_state = 0, .external_lex_state = 20},
  [356] = {.lex_state = 0, .external_lex_state = 18},
  [357] = {.lex_state = 0, .external_lex_state = 20},
  [358] = {.lex_state = 0, .external_lex_state = 18},
  [359] = {.lex_state = 0, .external_lex_state = 21},
  [360] = {.lex_state = 0, .external_lex_state = 21},
  [361] = {.lex_state = 0, .external_lex_state = 21},
  [362] = {.lex_state = 0, .external_lex_state = 21},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indentation = 1,
  ts_external_token_virtual_space = 2,
  ts_external_token__matching_done = 3,
  ts_external_token__block_close = 4,
  ts_external_token__block_close_loose = 5,
  ts_external_token__block_continuation = 6,
  ts_external_token__lazy_continuation = 7,
  ts_external_token__block_quote_start = 8,
  ts_external_token__indented_chunk_start = 9,
  ts_external_token_atx_h1_marker = 10,
  ts_external_token_atx_h2_marker = 11,
  ts_external_token_atx_h3_marker = 12,
  ts_external_token_atx_h4_marker = 13,
  ts_external_token_atx_h5_marker = 14,
  ts_external_token_atx_h6_marker = 15,
  ts_external_token__setext_h1_underline = 16,
  ts_external_token__setext_h2_underline = 17,
  ts_external_token__setext_h2_underline_or_thematic_break = 18,
  ts_external_token__thematic_break = 19,
  ts_external_token_list_marker_minus = 20,
  ts_external_token_list_marker_plus = 21,
  ts_external_token_list_marker_star = 22,
  ts_external_token_list_marker_parenthethis = 23,
  ts_external_token_list_marker_dot = 24,
  ts_external_token__fenced_code_block_start = 25,
  ts_external_token__blank_line_start = 26,
  ts_external_token__code_span_start = 27,
  ts_external_token__code_span_close = 28,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indentation] = sym__indentation,
  [ts_external_token_virtual_space] = sym_virtual_space,
  [ts_external_token__matching_done] = sym__matching_done,
  [ts_external_token__block_close] = sym__block_close,
  [ts_external_token__block_close_loose] = sym__block_close_loose,
  [ts_external_token__block_continuation] = sym__block_continuation,
  [ts_external_token__lazy_continuation] = sym__lazy_continuation,
  [ts_external_token__block_quote_start] = sym__block_quote_start,
  [ts_external_token__indented_chunk_start] = sym__indented_chunk_start,
  [ts_external_token_atx_h1_marker] = sym_atx_h1_marker,
  [ts_external_token_atx_h2_marker] = sym_atx_h2_marker,
  [ts_external_token_atx_h3_marker] = sym_atx_h3_marker,
  [ts_external_token_atx_h4_marker] = sym_atx_h4_marker,
  [ts_external_token_atx_h5_marker] = sym_atx_h5_marker,
  [ts_external_token_atx_h6_marker] = sym_atx_h6_marker,
  [ts_external_token__setext_h1_underline] = sym__setext_h1_underline,
  [ts_external_token__setext_h2_underline] = sym__setext_h2_underline,
  [ts_external_token__setext_h2_underline_or_thematic_break] = sym__setext_h2_underline_or_thematic_break,
  [ts_external_token__thematic_break] = sym__thematic_break,
  [ts_external_token_list_marker_minus] = sym_list_marker_minus,
  [ts_external_token_list_marker_plus] = sym_list_marker_plus,
  [ts_external_token_list_marker_star] = sym_list_marker_star,
  [ts_external_token_list_marker_parenthethis] = sym_list_marker_parenthethis,
  [ts_external_token_list_marker_dot] = sym_list_marker_dot,
  [ts_external_token__fenced_code_block_start] = sym__fenced_code_block_start,
  [ts_external_token__blank_line_start] = sym__blank_line_start,
  [ts_external_token__code_span_start] = sym__code_span_start,
  [ts_external_token__code_span_close] = sym__code_span_close,
};

static const bool ts_external_scanner_states[22][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token_virtual_space] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_close_loose] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
    [ts_external_token__code_span_close] = true,
  },
  [2] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [3] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_close_loose] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [4] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_close_loose] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_close_loose] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
    [ts_external_token__code_span_close] = true,
  },
  [9] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
    [ts_external_token__code_span_close] = true,
  },
  [10] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__lazy_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
    [ts_external_token__code_span_close] = true,
  },
  [11] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_close_loose] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [12] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [13] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__block_quote_start] = true,
    [ts_external_token__indented_chunk_start] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
    [ts_external_token_atx_h6_marker] = true,
    [ts_external_token__setext_h1_underline] = true,
    [ts_external_token__setext_h2_underline] = true,
    [ts_external_token__setext_h2_underline_or_thematic_break] = true,
    [ts_external_token__thematic_break] = true,
    [ts_external_token_list_marker_minus] = true,
    [ts_external_token_list_marker_plus] = true,
    [ts_external_token_list_marker_star] = true,
    [ts_external_token_list_marker_parenthethis] = true,
    [ts_external_token_list_marker_dot] = true,
    [ts_external_token__fenced_code_block_start] = true,
    [ts_external_token__blank_line_start] = true,
    [ts_external_token__code_span_start] = true,
  },
  [14] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__code_span_start] = true,
  },
  [15] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token_virtual_space] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__code_span_start] = true,
  },
  [16] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__code_span_start] = true,
  },
  [17] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__code_span_start] = true,
    [ts_external_token__code_span_close] = true,
  },
  [18] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
  },
  [19] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
    [ts_external_token__code_span_close] = true,
  },
  [20] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__block_continuation] = true,
  },
  [21] = {
    [ts_external_token__indentation] = true,
    [ts_external_token__matching_done] = true,
    [ts_external_token__block_continuation] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_backslash_escape] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_entity_reference] = ACTIONS(1),
    [sym_numeric_character_reference] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indentation] = ACTIONS(3),
    [sym_virtual_space] = ACTIONS(1),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(1),
    [sym__block_close_loose] = ACTIONS(1),
    [sym__block_continuation] = ACTIONS(3),
    [sym__lazy_continuation] = ACTIONS(1),
    [sym__block_quote_start] = ACTIONS(1),
    [sym__indented_chunk_start] = ACTIONS(1),
    [sym_atx_h1_marker] = ACTIONS(1),
    [sym_atx_h2_marker] = ACTIONS(1),
    [sym_atx_h3_marker] = ACTIONS(1),
    [sym_atx_h4_marker] = ACTIONS(1),
    [sym_atx_h5_marker] = ACTIONS(1),
    [sym_atx_h6_marker] = ACTIONS(1),
    [sym__setext_h1_underline] = ACTIONS(1),
    [sym__setext_h2_underline] = ACTIONS(1),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(1),
    [sym__thematic_break] = ACTIONS(1),
    [sym_list_marker_minus] = ACTIONS(1),
    [sym_list_marker_plus] = ACTIONS(1),
    [sym_list_marker_star] = ACTIONS(1),
    [sym_list_marker_parenthethis] = ACTIONS(1),
    [sym_list_marker_dot] = ACTIONS(1),
    [sym__fenced_code_block_start] = ACTIONS(1),
    [sym__blank_line_start] = ACTIONS(1),
    [sym__code_span_start] = ACTIONS(1),
    [sym__code_span_close] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(338),
    [sym__block] = STATE(39),
    [sym__blank_line] = STATE(39),
    [sym_paragraph] = STATE(125),
    [sym_indented_code_block] = STATE(39),
    [sym__indented_chunk] = STATE(129),
    [sym_block_quote] = STATE(39),
    [sym_atx_heading] = STATE(39),
    [sym_setext_heading] = STATE(39),
    [sym_thematic_break] = STATE(39),
    [sym_tight_list] = STATE(39),
    [sym_loose_list] = STATE(39),
    [sym__list_item_plus_tight] = STATE(172),
    [sym__list_item_minus_tight] = STATE(173),
    [sym__list_item_star_tight] = STATE(174),
    [sym__list_item_dot_tight] = STATE(175),
    [sym__list_item_parenthethis_tight] = STATE(176),
    [sym__list_item_plus_loose] = STATE(134),
    [sym__list_item_minus_loose] = STATE(140),
    [sym__list_item_star_loose] = STATE(141),
    [sym__list_item_dot_loose] = STATE(142),
    [sym__list_item_parenthethis_loose] = STATE(146),
    [sym_fenced_code_block] = STATE(39),
    [sym__inline] = STATE(78),
    [sym_hard_line_break] = STATE(84),
    [sym_text] = STATE(84),
    [sym_code_span] = STATE(84),
    [aux_sym_document_repeat1] = STATE(39),
    [aux_sym_tight_list_repeat1] = STATE(172),
    [aux_sym_tight_list_repeat2] = STATE(173),
    [aux_sym_tight_list_repeat3] = STATE(174),
    [aux_sym_tight_list_repeat4] = STATE(175),
    [aux_sym_tight_list_repeat5] = STATE(176),
    [aux_sym_loose_list_repeat1] = STATE(134),
    [aux_sym_loose_list_repeat2] = STATE(140),
    [aux_sym_loose_list_repeat3] = STATE(141),
    [aux_sym_loose_list_repeat4] = STATE(142),
    [aux_sym_loose_list_repeat5] = STATE(146),
    [aux_sym__inline_repeat1] = STATE(84),
    [aux_sym_text_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [sym_backslash_escape] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_entity_reference] = ACTIONS(9),
    [sym_numeric_character_reference] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(13),
    [sym__indented_chunk_start] = ACTIONS(15),
    [sym_atx_h1_marker] = ACTIONS(17),
    [sym_atx_h2_marker] = ACTIONS(17),
    [sym_atx_h3_marker] = ACTIONS(17),
    [sym_atx_h4_marker] = ACTIONS(17),
    [sym_atx_h5_marker] = ACTIONS(17),
    [sym_atx_h6_marker] = ACTIONS(17),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(19),
    [sym__thematic_break] = ACTIONS(19),
    [sym_list_marker_minus] = ACTIONS(21),
    [sym_list_marker_plus] = ACTIONS(23),
    [sym_list_marker_star] = ACTIONS(25),
    [sym_list_marker_parenthethis] = ACTIONS(27),
    [sym_list_marker_dot] = ACTIONS(29),
    [sym__fenced_code_block_start] = ACTIONS(31),
    [sym__blank_line_start] = ACTIONS(33),
    [sym__code_span_start] = ACTIONS(35),
  },
  [2] = {
    [sym__block] = STATE(11),
    [sym__blank_line] = STATE(11),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(11),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(11),
    [sym_atx_heading] = STATE(11),
    [sym_setext_heading] = STATE(11),
    [sym_thematic_break] = STATE(11),
    [sym_tight_list] = STATE(11),
    [sym_loose_list] = STATE(11),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(11),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(11),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(43),
    [sym__block_close_loose] = ACTIONS(45),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(71),
    [sym_backslash_escape] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(77),
    [sym_entity_reference] = ACTIONS(74),
    [sym_numeric_character_reference] = ACTIONS(74),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(80),
    [sym__block_close_loose] = ACTIONS(80),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(82),
    [sym__indented_chunk_start] = ACTIONS(85),
    [sym_atx_h1_marker] = ACTIONS(88),
    [sym_atx_h2_marker] = ACTIONS(88),
    [sym_atx_h3_marker] = ACTIONS(88),
    [sym_atx_h4_marker] = ACTIONS(88),
    [sym_atx_h5_marker] = ACTIONS(88),
    [sym_atx_h6_marker] = ACTIONS(88),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(91),
    [sym__thematic_break] = ACTIONS(91),
    [sym_list_marker_minus] = ACTIONS(94),
    [sym_list_marker_plus] = ACTIONS(97),
    [sym_list_marker_star] = ACTIONS(100),
    [sym_list_marker_parenthethis] = ACTIONS(103),
    [sym_list_marker_dot] = ACTIONS(106),
    [sym__fenced_code_block_start] = ACTIONS(109),
    [sym__blank_line_start] = ACTIONS(112),
    [sym__code_span_start] = ACTIONS(115),
  },
  [4] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(118),
    [sym__block_close_loose] = ACTIONS(120),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [5] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(122),
    [sym__block_close_loose] = ACTIONS(124),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [6] = {
    [sym__block] = STATE(22),
    [sym__blank_line] = STATE(22),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(22),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(22),
    [sym_atx_heading] = STATE(22),
    [sym_setext_heading] = STATE(22),
    [sym_thematic_break] = STATE(22),
    [sym_tight_list] = STATE(22),
    [sym_loose_list] = STATE(22),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(22),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(22),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(126),
    [sym__block_close_loose] = ACTIONS(128),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [7] = {
    [sym__block] = STATE(25),
    [sym__blank_line] = STATE(25),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(25),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(25),
    [sym_atx_heading] = STATE(25),
    [sym_setext_heading] = STATE(25),
    [sym_thematic_break] = STATE(25),
    [sym_tight_list] = STATE(25),
    [sym_loose_list] = STATE(25),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(25),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(25),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(130),
    [sym__block_close_loose] = ACTIONS(132),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [8] = {
    [sym__block] = STATE(28),
    [sym__blank_line] = STATE(28),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(28),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(28),
    [sym_atx_heading] = STATE(28),
    [sym_setext_heading] = STATE(28),
    [sym_thematic_break] = STATE(28),
    [sym_tight_list] = STATE(28),
    [sym_loose_list] = STATE(28),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(28),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(28),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(134),
    [sym__block_close_loose] = ACTIONS(136),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [9] = {
    [sym__block] = STATE(31),
    [sym__blank_line] = STATE(31),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(31),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(31),
    [sym_atx_heading] = STATE(31),
    [sym_setext_heading] = STATE(31),
    [sym_thematic_break] = STATE(31),
    [sym_tight_list] = STATE(31),
    [sym_loose_list] = STATE(31),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(31),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(31),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(138),
    [sym__block_close_loose] = ACTIONS(140),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [10] = {
    [sym__block] = STATE(26),
    [sym__blank_line] = STATE(26),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(26),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(26),
    [sym_atx_heading] = STATE(26),
    [sym_setext_heading] = STATE(26),
    [sym_thematic_break] = STATE(26),
    [sym_tight_list] = STATE(26),
    [sym_loose_list] = STATE(26),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(26),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(26),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(142),
    [sym__block_close_loose] = ACTIONS(144),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [11] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(146),
    [sym__block_close_loose] = ACTIONS(148),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [12] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(150),
    [sym__block_close_loose] = ACTIONS(152),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [13] = {
    [sym__block] = STATE(12),
    [sym__blank_line] = STATE(12),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(12),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(12),
    [sym_atx_heading] = STATE(12),
    [sym_setext_heading] = STATE(12),
    [sym_thematic_break] = STATE(12),
    [sym_tight_list] = STATE(12),
    [sym_loose_list] = STATE(12),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(12),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(154),
    [sym__block_close_loose] = ACTIONS(156),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [14] = {
    [sym__block] = STATE(4),
    [sym__blank_line] = STATE(4),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(4),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(4),
    [sym_atx_heading] = STATE(4),
    [sym_setext_heading] = STATE(4),
    [sym_thematic_break] = STATE(4),
    [sym_tight_list] = STATE(4),
    [sym_loose_list] = STATE(4),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(4),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(158),
    [sym__block_close_loose] = ACTIONS(160),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [15] = {
    [sym__block] = STATE(24),
    [sym__blank_line] = STATE(24),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(24),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(24),
    [sym_atx_heading] = STATE(24),
    [sym_setext_heading] = STATE(24),
    [sym_thematic_break] = STATE(24),
    [sym_tight_list] = STATE(24),
    [sym_loose_list] = STATE(24),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(24),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(24),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(162),
    [sym__block_close_loose] = ACTIONS(164),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [16] = {
    [sym__block] = STATE(17),
    [sym__blank_line] = STATE(17),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(17),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(17),
    [sym_atx_heading] = STATE(17),
    [sym_setext_heading] = STATE(17),
    [sym_thematic_break] = STATE(17),
    [sym_tight_list] = STATE(17),
    [sym_loose_list] = STATE(17),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(17),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(166),
    [sym__block_close_loose] = ACTIONS(168),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [17] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(170),
    [sym__block_close_loose] = ACTIONS(172),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [18] = {
    [sym__block] = STATE(5),
    [sym__blank_line] = STATE(5),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(5),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(5),
    [sym_atx_heading] = STATE(5),
    [sym_setext_heading] = STATE(5),
    [sym_thematic_break] = STATE(5),
    [sym_tight_list] = STATE(5),
    [sym_loose_list] = STATE(5),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(5),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(174),
    [sym__block_close_loose] = ACTIONS(176),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [19] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(178),
    [sym__block_close_loose] = ACTIONS(180),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [20] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(182),
    [sym__block_close_loose] = ACTIONS(184),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [21] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(186),
    [sym__block_close_loose] = ACTIONS(188),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [22] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(190),
    [sym__block_close_loose] = ACTIONS(192),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [23] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(194),
    [sym__block_close_loose] = ACTIONS(196),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [24] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(198),
    [sym__block_close_loose] = ACTIONS(200),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [25] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(202),
    [sym__block_close_loose] = ACTIONS(204),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [26] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(206),
    [sym__block_close_loose] = ACTIONS(208),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [27] = {
    [sym__block] = STATE(19),
    [sym__blank_line] = STATE(19),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(19),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(19),
    [sym_atx_heading] = STATE(19),
    [sym_setext_heading] = STATE(19),
    [sym_thematic_break] = STATE(19),
    [sym_tight_list] = STATE(19),
    [sym_loose_list] = STATE(19),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(19),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(19),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(210),
    [sym__block_close_loose] = ACTIONS(212),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [28] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(214),
    [sym__block_close_loose] = ACTIONS(216),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [29] = {
    [sym__block] = STATE(20),
    [sym__blank_line] = STATE(20),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(20),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(20),
    [sym_atx_heading] = STATE(20),
    [sym_setext_heading] = STATE(20),
    [sym_thematic_break] = STATE(20),
    [sym_tight_list] = STATE(20),
    [sym_loose_list] = STATE(20),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(20),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(20),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(218),
    [sym__block_close_loose] = ACTIONS(220),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [30] = {
    [sym__block] = STATE(21),
    [sym__blank_line] = STATE(21),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(21),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(21),
    [sym_atx_heading] = STATE(21),
    [sym_setext_heading] = STATE(21),
    [sym_thematic_break] = STATE(21),
    [sym_tight_list] = STATE(21),
    [sym_loose_list] = STATE(21),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(21),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(21),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(222),
    [sym__block_close_loose] = ACTIONS(224),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [31] = {
    [sym__block] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(3),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(3),
    [sym_atx_heading] = STATE(3),
    [sym_setext_heading] = STATE(3),
    [sym_thematic_break] = STATE(3),
    [sym_tight_list] = STATE(3),
    [sym_loose_list] = STATE(3),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(3),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(226),
    [sym__block_close_loose] = ACTIONS(228),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [32] = {
    [sym__block] = STATE(23),
    [sym__blank_line] = STATE(23),
    [sym_paragraph] = STATE(94),
    [sym_indented_code_block] = STATE(23),
    [sym__indented_chunk] = STATE(120),
    [sym_block_quote] = STATE(23),
    [sym_atx_heading] = STATE(23),
    [sym_setext_heading] = STATE(23),
    [sym_thematic_break] = STATE(23),
    [sym_tight_list] = STATE(23),
    [sym_loose_list] = STATE(23),
    [sym__list_item_plus_tight] = STATE(133),
    [sym__list_item_minus_tight] = STATE(132),
    [sym__list_item_star_tight] = STATE(131),
    [sym__list_item_dot_tight] = STATE(130),
    [sym__list_item_parenthethis_tight] = STATE(162),
    [sym__list_item_plus_loose] = STATE(117),
    [sym__list_item_minus_loose] = STATE(116),
    [sym__list_item_star_loose] = STATE(103),
    [sym__list_item_dot_loose] = STATE(114),
    [sym__list_item_parenthethis_loose] = STATE(113),
    [sym_fenced_code_block] = STATE(23),
    [sym__inline] = STATE(74),
    [sym_hard_line_break] = STATE(81),
    [sym_text] = STATE(81),
    [sym_code_span] = STATE(81),
    [aux_sym_document_repeat1] = STATE(23),
    [aux_sym_tight_list_repeat1] = STATE(133),
    [aux_sym_tight_list_repeat2] = STATE(132),
    [aux_sym_tight_list_repeat3] = STATE(131),
    [aux_sym_tight_list_repeat4] = STATE(130),
    [aux_sym_tight_list_repeat5] = STATE(162),
    [aux_sym_loose_list_repeat1] = STATE(117),
    [aux_sym_loose_list_repeat2] = STATE(116),
    [aux_sym_loose_list_repeat3] = STATE(103),
    [aux_sym_loose_list_repeat4] = STATE(114),
    [aux_sym_loose_list_repeat5] = STATE(113),
    [aux_sym__inline_repeat1] = STATE(81),
    [aux_sym_text_repeat1] = STATE(88),
    [sym__word] = ACTIONS(37),
    [sym_backslash_escape] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [sym_entity_reference] = ACTIONS(39),
    [sym_numeric_character_reference] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(230),
    [sym__block_close_loose] = ACTIONS(232),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(47),
    [sym__indented_chunk_start] = ACTIONS(49),
    [sym_atx_h1_marker] = ACTIONS(51),
    [sym_atx_h2_marker] = ACTIONS(51),
    [sym_atx_h3_marker] = ACTIONS(51),
    [sym_atx_h4_marker] = ACTIONS(51),
    [sym_atx_h5_marker] = ACTIONS(51),
    [sym_atx_h6_marker] = ACTIONS(51),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(53),
    [sym__thematic_break] = ACTIONS(53),
    [sym_list_marker_minus] = ACTIONS(55),
    [sym_list_marker_plus] = ACTIONS(57),
    [sym_list_marker_star] = ACTIONS(59),
    [sym_list_marker_parenthethis] = ACTIONS(61),
    [sym_list_marker_dot] = ACTIONS(63),
    [sym__fenced_code_block_start] = ACTIONS(65),
    [sym__blank_line_start] = ACTIONS(67),
    [sym__code_span_start] = ACTIONS(69),
  },
  [33] = {
    [sym__block] = STATE(71),
    [sym__blank_line] = STATE(71),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(71),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(71),
    [sym_atx_heading] = STATE(71),
    [sym_setext_heading] = STATE(71),
    [sym_thematic_break] = STATE(71),
    [sym_tight_list] = STATE(71),
    [sym_loose_list] = STATE(71),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(71),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(71),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(230),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [34] = {
    [sym__block] = STATE(43),
    [sym__blank_line] = STATE(43),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(43),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(43),
    [sym_atx_heading] = STATE(43),
    [sym_setext_heading] = STATE(43),
    [sym_thematic_break] = STATE(43),
    [sym_tight_list] = STATE(43),
    [sym_loose_list] = STATE(43),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(43),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(43),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(134),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [35] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(264),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [36] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(118),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [37] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(266),
    [sym_backslash_escape] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(272),
    [sym_entity_reference] = ACTIONS(269),
    [sym_numeric_character_reference] = ACTIONS(269),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(80),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(275),
    [sym__indented_chunk_start] = ACTIONS(278),
    [sym_atx_h1_marker] = ACTIONS(281),
    [sym_atx_h2_marker] = ACTIONS(281),
    [sym_atx_h3_marker] = ACTIONS(281),
    [sym_atx_h4_marker] = ACTIONS(281),
    [sym_atx_h5_marker] = ACTIONS(281),
    [sym_atx_h6_marker] = ACTIONS(281),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(284),
    [sym__thematic_break] = ACTIONS(284),
    [sym_list_marker_minus] = ACTIONS(287),
    [sym_list_marker_plus] = ACTIONS(290),
    [sym_list_marker_star] = ACTIONS(293),
    [sym_list_marker_parenthethis] = ACTIONS(296),
    [sym_list_marker_dot] = ACTIONS(299),
    [sym__fenced_code_block_start] = ACTIONS(302),
    [sym__blank_line_start] = ACTIONS(305),
    [sym__code_span_start] = ACTIONS(308),
  },
  [38] = {
    [sym__block] = STATE(66),
    [sym__blank_line] = STATE(66),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(66),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(66),
    [sym_atx_heading] = STATE(66),
    [sym_setext_heading] = STATE(66),
    [sym_thematic_break] = STATE(66),
    [sym_tight_list] = STATE(66),
    [sym_loose_list] = STATE(66),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(66),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(66),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(162),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [39] = {
    [sym__block] = STATE(69),
    [sym__blank_line] = STATE(69),
    [sym_paragraph] = STATE(125),
    [sym_indented_code_block] = STATE(69),
    [sym__indented_chunk] = STATE(129),
    [sym_block_quote] = STATE(69),
    [sym_atx_heading] = STATE(69),
    [sym_setext_heading] = STATE(69),
    [sym_thematic_break] = STATE(69),
    [sym_tight_list] = STATE(69),
    [sym_loose_list] = STATE(69),
    [sym__list_item_plus_tight] = STATE(172),
    [sym__list_item_minus_tight] = STATE(173),
    [sym__list_item_star_tight] = STATE(174),
    [sym__list_item_dot_tight] = STATE(175),
    [sym__list_item_parenthethis_tight] = STATE(176),
    [sym__list_item_plus_loose] = STATE(134),
    [sym__list_item_minus_loose] = STATE(140),
    [sym__list_item_star_loose] = STATE(141),
    [sym__list_item_dot_loose] = STATE(142),
    [sym__list_item_parenthethis_loose] = STATE(146),
    [sym_fenced_code_block] = STATE(69),
    [sym__inline] = STATE(78),
    [sym_hard_line_break] = STATE(84),
    [sym_text] = STATE(84),
    [sym_code_span] = STATE(84),
    [aux_sym_document_repeat1] = STATE(69),
    [aux_sym_tight_list_repeat1] = STATE(172),
    [aux_sym_tight_list_repeat2] = STATE(173),
    [aux_sym_tight_list_repeat3] = STATE(174),
    [aux_sym_tight_list_repeat4] = STATE(175),
    [aux_sym_tight_list_repeat5] = STATE(176),
    [aux_sym_loose_list_repeat1] = STATE(134),
    [aux_sym_loose_list_repeat2] = STATE(140),
    [aux_sym_loose_list_repeat3] = STATE(141),
    [aux_sym_loose_list_repeat4] = STATE(142),
    [aux_sym_loose_list_repeat5] = STATE(146),
    [aux_sym__inline_repeat1] = STATE(84),
    [aux_sym_text_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym__word] = ACTIONS(7),
    [sym_backslash_escape] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_entity_reference] = ACTIONS(9),
    [sym_numeric_character_reference] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(13),
    [sym__indented_chunk_start] = ACTIONS(15),
    [sym_atx_h1_marker] = ACTIONS(17),
    [sym_atx_h2_marker] = ACTIONS(17),
    [sym_atx_h3_marker] = ACTIONS(17),
    [sym_atx_h4_marker] = ACTIONS(17),
    [sym_atx_h5_marker] = ACTIONS(17),
    [sym_atx_h6_marker] = ACTIONS(17),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(19),
    [sym__thematic_break] = ACTIONS(19),
    [sym_list_marker_minus] = ACTIONS(21),
    [sym_list_marker_plus] = ACTIONS(23),
    [sym_list_marker_star] = ACTIONS(25),
    [sym_list_marker_parenthethis] = ACTIONS(27),
    [sym_list_marker_dot] = ACTIONS(29),
    [sym__fenced_code_block_start] = ACTIONS(31),
    [sym__blank_line_start] = ACTIONS(33),
    [sym__code_span_start] = ACTIONS(35),
  },
  [40] = {
    [sym__block] = STATE(49),
    [sym__blank_line] = STATE(49),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(49),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(49),
    [sym_atx_heading] = STATE(49),
    [sym_setext_heading] = STATE(49),
    [sym_thematic_break] = STATE(49),
    [sym_tight_list] = STATE(49),
    [sym_loose_list] = STATE(49),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(49),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(49),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(222),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [41] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(226),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [42] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(206),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [43] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(214),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [44] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(190),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [45] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(202),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [46] = {
    [sym__block] = STATE(48),
    [sym__blank_line] = STATE(48),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(48),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(48),
    [sym_atx_heading] = STATE(48),
    [sym_setext_heading] = STATE(48),
    [sym_thematic_break] = STATE(48),
    [sym_tight_list] = STATE(48),
    [sym_loose_list] = STATE(48),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(48),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(48),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(210),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [47] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(182),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [48] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(178),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [49] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(186),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [50] = {
    [sym__block] = STATE(47),
    [sym__blank_line] = STATE(47),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(47),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(47),
    [sym_atx_heading] = STATE(47),
    [sym_setext_heading] = STATE(47),
    [sym_thematic_break] = STATE(47),
    [sym_tight_list] = STATE(47),
    [sym_loose_list] = STATE(47),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(47),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(47),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(218),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [51] = {
    [sym__block] = STATE(36),
    [sym__blank_line] = STATE(36),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(36),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(36),
    [sym_atx_heading] = STATE(36),
    [sym_setext_heading] = STATE(36),
    [sym_thematic_break] = STATE(36),
    [sym_tight_list] = STATE(36),
    [sym_loose_list] = STATE(36),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(36),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(36),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(158),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [52] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(313),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [53] = {
    [sym__block] = STATE(35),
    [sym__blank_line] = STATE(35),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(35),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(35),
    [sym_atx_heading] = STATE(35),
    [sym_setext_heading] = STATE(35),
    [sym_thematic_break] = STATE(35),
    [sym_tight_list] = STATE(35),
    [sym_loose_list] = STATE(35),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(35),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(35),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(315),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [54] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(317),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [55] = {
    [sym__block] = STATE(54),
    [sym__blank_line] = STATE(54),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(54),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(54),
    [sym_atx_heading] = STATE(54),
    [sym_setext_heading] = STATE(54),
    [sym_thematic_break] = STATE(54),
    [sym_tight_list] = STATE(54),
    [sym_loose_list] = STATE(54),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(54),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(54),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(319),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [56] = {
    [sym__block] = STATE(61),
    [sym__blank_line] = STATE(61),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(61),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(61),
    [sym_atx_heading] = STATE(61),
    [sym_setext_heading] = STATE(61),
    [sym_thematic_break] = STATE(61),
    [sym_tight_list] = STATE(61),
    [sym_loose_list] = STATE(61),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(61),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(61),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(166),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [57] = {
    [sym__block] = STATE(63),
    [sym__blank_line] = STATE(63),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(63),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(63),
    [sym_atx_heading] = STATE(63),
    [sym_setext_heading] = STATE(63),
    [sym_thematic_break] = STATE(63),
    [sym_tight_list] = STATE(63),
    [sym_loose_list] = STATE(63),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(63),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(63),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(174),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [58] = {
    [sym__block] = STATE(67),
    [sym__blank_line] = STATE(67),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(67),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(67),
    [sym_atx_heading] = STATE(67),
    [sym_setext_heading] = STATE(67),
    [sym_thematic_break] = STATE(67),
    [sym_tight_list] = STATE(67),
    [sym_loose_list] = STATE(67),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(67),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(67),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(154),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [59] = {
    [sym__block] = STATE(64),
    [sym__blank_line] = STATE(64),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(64),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(64),
    [sym_atx_heading] = STATE(64),
    [sym_setext_heading] = STATE(64),
    [sym_thematic_break] = STATE(64),
    [sym_tight_list] = STATE(64),
    [sym_loose_list] = STATE(64),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(64),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(64),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(43),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [60] = {
    [sym__block] = STATE(41),
    [sym__blank_line] = STATE(41),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(41),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(41),
    [sym_atx_heading] = STATE(41),
    [sym_setext_heading] = STATE(41),
    [sym_thematic_break] = STATE(41),
    [sym_tight_list] = STATE(41),
    [sym_loose_list] = STATE(41),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(41),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(41),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(138),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [61] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(170),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [62] = {
    [sym__block] = STATE(42),
    [sym__blank_line] = STATE(42),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(42),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(42),
    [sym_atx_heading] = STATE(42),
    [sym_setext_heading] = STATE(42),
    [sym_thematic_break] = STATE(42),
    [sym_tight_list] = STATE(42),
    [sym_loose_list] = STATE(42),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(42),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(42),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(142),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [63] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(122),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [64] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(146),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [65] = {
    [sym__block] = STATE(52),
    [sym__blank_line] = STATE(52),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(52),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(52),
    [sym_atx_heading] = STATE(52),
    [sym_setext_heading] = STATE(52),
    [sym_thematic_break] = STATE(52),
    [sym_tight_list] = STATE(52),
    [sym_loose_list] = STATE(52),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(52),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(52),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(321),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [66] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(198),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [67] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(150),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [68] = {
    [sym__block] = STATE(44),
    [sym__blank_line] = STATE(44),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(44),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(44),
    [sym_atx_heading] = STATE(44),
    [sym_setext_heading] = STATE(44),
    [sym_thematic_break] = STATE(44),
    [sym_tight_list] = STATE(44),
    [sym_loose_list] = STATE(44),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(44),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(44),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(126),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [69] = {
    [sym__block] = STATE(69),
    [sym__blank_line] = STATE(69),
    [sym_paragraph] = STATE(125),
    [sym_indented_code_block] = STATE(69),
    [sym__indented_chunk] = STATE(129),
    [sym_block_quote] = STATE(69),
    [sym_atx_heading] = STATE(69),
    [sym_setext_heading] = STATE(69),
    [sym_thematic_break] = STATE(69),
    [sym_tight_list] = STATE(69),
    [sym_loose_list] = STATE(69),
    [sym__list_item_plus_tight] = STATE(172),
    [sym__list_item_minus_tight] = STATE(173),
    [sym__list_item_star_tight] = STATE(174),
    [sym__list_item_dot_tight] = STATE(175),
    [sym__list_item_parenthethis_tight] = STATE(176),
    [sym__list_item_plus_loose] = STATE(134),
    [sym__list_item_minus_loose] = STATE(140),
    [sym__list_item_star_loose] = STATE(141),
    [sym__list_item_dot_loose] = STATE(142),
    [sym__list_item_parenthethis_loose] = STATE(146),
    [sym_fenced_code_block] = STATE(69),
    [sym__inline] = STATE(78),
    [sym_hard_line_break] = STATE(84),
    [sym_text] = STATE(84),
    [sym_code_span] = STATE(84),
    [aux_sym_document_repeat1] = STATE(69),
    [aux_sym_tight_list_repeat1] = STATE(172),
    [aux_sym_tight_list_repeat2] = STATE(173),
    [aux_sym_tight_list_repeat3] = STATE(174),
    [aux_sym_tight_list_repeat4] = STATE(175),
    [aux_sym_tight_list_repeat5] = STATE(176),
    [aux_sym_loose_list_repeat1] = STATE(134),
    [aux_sym_loose_list_repeat2] = STATE(140),
    [aux_sym_loose_list_repeat3] = STATE(141),
    [aux_sym_loose_list_repeat4] = STATE(142),
    [aux_sym_loose_list_repeat5] = STATE(146),
    [aux_sym__inline_repeat1] = STATE(84),
    [aux_sym_text_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym__word] = ACTIONS(323),
    [sym_backslash_escape] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(329),
    [sym_entity_reference] = ACTIONS(326),
    [sym_numeric_character_reference] = ACTIONS(326),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(332),
    [sym__indented_chunk_start] = ACTIONS(335),
    [sym_atx_h1_marker] = ACTIONS(338),
    [sym_atx_h2_marker] = ACTIONS(338),
    [sym_atx_h3_marker] = ACTIONS(338),
    [sym_atx_h4_marker] = ACTIONS(338),
    [sym_atx_h5_marker] = ACTIONS(338),
    [sym_atx_h6_marker] = ACTIONS(338),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(341),
    [sym__thematic_break] = ACTIONS(341),
    [sym_list_marker_minus] = ACTIONS(344),
    [sym_list_marker_plus] = ACTIONS(347),
    [sym_list_marker_star] = ACTIONS(350),
    [sym_list_marker_parenthethis] = ACTIONS(353),
    [sym_list_marker_dot] = ACTIONS(356),
    [sym__fenced_code_block_start] = ACTIONS(359),
    [sym__blank_line_start] = ACTIONS(362),
    [sym__code_span_start] = ACTIONS(365),
  },
  [70] = {
    [sym__block] = STATE(45),
    [sym__blank_line] = STATE(45),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(45),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(45),
    [sym_atx_heading] = STATE(45),
    [sym_setext_heading] = STATE(45),
    [sym_thematic_break] = STATE(45),
    [sym_tight_list] = STATE(45),
    [sym_loose_list] = STATE(45),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(45),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(45),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(130),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
  [71] = {
    [sym__block] = STATE(37),
    [sym__blank_line] = STATE(37),
    [sym_paragraph] = STATE(102),
    [sym_indented_code_block] = STATE(37),
    [sym__indented_chunk] = STATE(158),
    [sym_block_quote] = STATE(37),
    [sym_atx_heading] = STATE(37),
    [sym_setext_heading] = STATE(37),
    [sym_thematic_break] = STATE(37),
    [sym_tight_list] = STATE(37),
    [sym_loose_list] = STATE(37),
    [sym__list_item_plus_tight] = STATE(168),
    [sym__list_item_minus_tight] = STATE(169),
    [sym__list_item_star_tight] = STATE(170),
    [sym__list_item_dot_tight] = STATE(171),
    [sym__list_item_parenthethis_tight] = STATE(177),
    [sym__list_item_plus_loose] = STATE(135),
    [sym__list_item_minus_loose] = STATE(136),
    [sym__list_item_star_loose] = STATE(137),
    [sym__list_item_dot_loose] = STATE(138),
    [sym__list_item_parenthethis_loose] = STATE(139),
    [sym_fenced_code_block] = STATE(37),
    [sym__inline] = STATE(80),
    [sym_hard_line_break] = STATE(85),
    [sym_text] = STATE(85),
    [sym_code_span] = STATE(85),
    [aux_sym_document_repeat1] = STATE(37),
    [aux_sym_tight_list_repeat1] = STATE(168),
    [aux_sym_tight_list_repeat2] = STATE(169),
    [aux_sym_tight_list_repeat3] = STATE(170),
    [aux_sym_tight_list_repeat4] = STATE(171),
    [aux_sym_tight_list_repeat5] = STATE(177),
    [aux_sym_loose_list_repeat1] = STATE(135),
    [aux_sym_loose_list_repeat2] = STATE(136),
    [aux_sym_loose_list_repeat3] = STATE(137),
    [aux_sym_loose_list_repeat4] = STATE(138),
    [aux_sym_loose_list_repeat5] = STATE(139),
    [aux_sym__inline_repeat1] = STATE(85),
    [aux_sym_text_repeat1] = STATE(95),
    [sym__word] = ACTIONS(234),
    [sym_backslash_escape] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [sym_entity_reference] = ACTIONS(236),
    [sym_numeric_character_reference] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(3),
    [sym__indentation] = ACTIONS(3),
    [sym__matching_done] = ACTIONS(3),
    [sym__block_close] = ACTIONS(194),
    [sym__block_continuation] = ACTIONS(3),
    [sym__block_quote_start] = ACTIONS(240),
    [sym__indented_chunk_start] = ACTIONS(242),
    [sym_atx_h1_marker] = ACTIONS(244),
    [sym_atx_h2_marker] = ACTIONS(244),
    [sym_atx_h3_marker] = ACTIONS(244),
    [sym_atx_h4_marker] = ACTIONS(244),
    [sym_atx_h5_marker] = ACTIONS(244),
    [sym_atx_h6_marker] = ACTIONS(244),
    [sym__setext_h2_underline_or_thematic_break] = ACTIONS(246),
    [sym__thematic_break] = ACTIONS(246),
    [sym_list_marker_minus] = ACTIONS(248),
    [sym_list_marker_plus] = ACTIONS(250),
    [sym_list_marker_star] = ACTIONS(252),
    [sym_list_marker_parenthethis] = ACTIONS(254),
    [sym_list_marker_dot] = ACTIONS(256),
    [sym__fenced_code_block_start] = ACTIONS(258),
    [sym__blank_line_start] = ACTIONS(260),
    [sym__code_span_start] = ACTIONS(262),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(368), 1,
      sym__word,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      sym__newline,
    ACTIONS(382), 1,
      sym__lazy_continuation,
    ACTIONS(385), 1,
      sym__code_span_start,
    STATE(88), 1,
      aux_sym_text_repeat1,
    STATE(72), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(371), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(81), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(380), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [63] = 11,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      sym__code_span_start,
    ACTIONS(388), 1,
      sym__newline,
    ACTIONS(392), 1,
      sym__lazy_continuation,
    STATE(88), 1,
      aux_sym_text_repeat1,
    STATE(72), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(39), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(81), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(390), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [126] = 11,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      sym__code_span_start,
    ACTIONS(388), 1,
      sym__newline,
    ACTIONS(396), 1,
      sym__lazy_continuation,
    STATE(88), 1,
      aux_sym_text_repeat1,
    STATE(73), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(39), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(81), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(394), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [189] = 11,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__code_span_start,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(400), 1,
      sym__lazy_continuation,
    STATE(96), 1,
      aux_sym_text_repeat1,
    STATE(77), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(9), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(84), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(390), 20,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
  [251] = 11,
    ACTIONS(402), 1,
      sym__word,
    ACTIONS(408), 1,
      anon_sym_BSLASH,
    ACTIONS(411), 1,
      sym__newline,
    ACTIONS(414), 1,
      sym__lazy_continuation,
    ACTIONS(417), 1,
      sym__code_span_start,
    STATE(95), 1,
      aux_sym_text_repeat1,
    STATE(76), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(405), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(85), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(380), 20,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [313] = 11,
    ACTIONS(420), 1,
      sym__word,
    ACTIONS(426), 1,
      anon_sym_BSLASH,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(432), 1,
      sym__lazy_continuation,
    ACTIONS(435), 1,
      sym__code_span_start,
    STATE(96), 1,
      aux_sym_text_repeat1,
    STATE(77), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(423), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(84), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(380), 20,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
  [375] = 11,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__code_span_start,
    ACTIONS(398), 1,
      sym__newline,
    ACTIONS(438), 1,
      sym__lazy_continuation,
    STATE(96), 1,
      aux_sym_text_repeat1,
    STATE(75), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(9), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(84), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(394), 20,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
  [437] = 11,
    ACTIONS(234), 1,
      sym__word,
    ACTIONS(238), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym__code_span_start,
    ACTIONS(440), 1,
      sym__newline,
    ACTIONS(442), 1,
      sym__lazy_continuation,
    STATE(95), 1,
      aux_sym_text_repeat1,
    STATE(76), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(236), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(85), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(390), 20,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [499] = 11,
    ACTIONS(234), 1,
      sym__word,
    ACTIONS(238), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym__code_span_start,
    ACTIONS(440), 1,
      sym__newline,
    ACTIONS(444), 1,
      sym__lazy_continuation,
    STATE(95), 1,
      aux_sym_text_repeat1,
    STATE(79), 2,
      sym__inline,
      aux_sym_paragraph_repeat1,
    ACTIONS(236), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(85), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(394), 20,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [561] = 8,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      sym__code_span_start,
    STATE(88), 1,
      aux_sym_text_repeat1,
    ACTIONS(446), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(82), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(448), 23,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [616] = 8,
    ACTIONS(450), 1,
      sym__word,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      sym__code_span_start,
    STATE(88), 1,
      aux_sym_text_repeat1,
    ACTIONS(453), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(82), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(459), 23,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [671] = 8,
    ACTIONS(464), 1,
      sym__word,
    ACTIONS(470), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 1,
      sym__code_span_start,
    STATE(95), 1,
      aux_sym_text_repeat1,
    ACTIONS(467), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(83), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(459), 22,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [725] = 8,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__code_span_start,
    STATE(96), 1,
      aux_sym_text_repeat1,
    ACTIONS(476), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(86), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(448), 22,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
  [779] = 8,
    ACTIONS(234), 1,
      sym__word,
    ACTIONS(238), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym__code_span_start,
    STATE(95), 1,
      aux_sym_text_repeat1,
    ACTIONS(478), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(83), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(448), 22,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
  [833] = 8,
    ACTIONS(480), 1,
      sym__word,
    ACTIONS(486), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      sym__code_span_start,
    STATE(96), 1,
      aux_sym_text_repeat1,
    ACTIONS(483), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(86), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
    ACTIONS(459), 22,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
  [887] = 6,
    ACTIONS(492), 1,
      sym__word,
    ACTIONS(497), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      sym__code_span_close,
    STATE(321), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 27,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [935] = 5,
    ACTIONS(505), 1,
      sym__code_span_start,
    STATE(90), 1,
      aux_sym_text_repeat1,
    ACTIONS(501), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(503), 26,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [980] = 6,
    ACTIONS(497), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      sym__word,
    ACTIONS(510), 1,
      sym__code_span_close,
    STATE(323), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 26,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1027] = 5,
    ACTIONS(517), 1,
      sym__code_span_start,
    STATE(90), 1,
      aux_sym_text_repeat1,
    ACTIONS(512), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(515), 26,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1072] = 6,
    ACTIONS(497), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      sym__word,
    ACTIONS(523), 1,
      sym__code_span_close,
    STATE(320), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 26,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1119] = 3,
    ACTIONS(525), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(527), 27,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1159] = 5,
    ACTIONS(532), 1,
      sym__code_span_start,
    STATE(93), 1,
      aux_sym_text_repeat1,
    ACTIONS(529), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(515), 25,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1203] = 6,
    ACTIONS(539), 1,
      sym__setext_h1_underline,
    ACTIONS(535), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(541), 2,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
    STATE(345), 2,
      sym_setext_h1_underline,
      sym_setext_h2_underline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(537), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1249] = 5,
    ACTIONS(545), 1,
      sym__code_span_start,
    STATE(93), 1,
      aux_sym_text_repeat1,
    ACTIONS(543), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(503), 25,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1293] = 5,
    ACTIONS(549), 1,
      sym__code_span_start,
    STATE(99), 1,
      aux_sym_text_repeat1,
    ACTIONS(547), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(503), 25,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1337] = 4,
    ACTIONS(551), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 26,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1379] = 3,
    ACTIONS(554), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(556), 27,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1419] = 5,
    ACTIONS(561), 1,
      sym__code_span_start,
    STATE(99), 1,
      aux_sym_text_repeat1,
    ACTIONS(558), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(515), 25,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1463] = 3,
    ACTIONS(564), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(566), 27,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1503] = 3,
    ACTIONS(568), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(570), 27,
      sym__newline,
      sym__block_close,
      sym__block_close_loose,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1543] = 6,
    ACTIONS(539), 1,
      sym__setext_h1_underline,
    ACTIONS(535), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(541), 2,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
    STATE(351), 2,
      sym_setext_h1_underline,
      sym_setext_h2_underline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(537), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1588] = 5,
    ACTIONS(59), 1,
      sym_list_marker_star,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(123), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1631] = 3,
    ACTIONS(568), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(570), 26,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1670] = 3,
    ACTIONS(525), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(527), 26,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1709] = 7,
    ACTIONS(49), 1,
      sym__indented_chunk_start,
    ACTIONS(67), 1,
      sym__blank_line_start,
    STATE(211), 1,
      sym__blank_line,
    ACTIONS(576), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(115), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(578), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1756] = 3,
    ACTIONS(525), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(527), 26,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1795] = 3,
    ACTIONS(554), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(556), 26,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1834] = 3,
    ACTIONS(564), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(566), 26,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1873] = 4,
    ACTIONS(580), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 25,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1914] = 5,
    ACTIONS(587), 1,
      sym_list_marker_plus,
    ACTIONS(583), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(111), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(585), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1957] = 3,
    ACTIONS(568), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(570), 26,
      sym__newline,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [1996] = 5,
    ACTIONS(61), 1,
      sym_list_marker_parenthethis,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(121), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2039] = 5,
    ACTIONS(63), 1,
      sym_list_marker_dot,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(122), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2082] = 7,
    ACTIONS(594), 1,
      sym__indented_chunk_start,
    ACTIONS(597), 1,
      sym__blank_line_start,
    STATE(211), 1,
      sym__blank_line,
    ACTIONS(590), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(115), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(592), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2129] = 5,
    ACTIONS(55), 1,
      sym_list_marker_minus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(124), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2172] = 5,
    ACTIONS(57), 1,
      sym_list_marker_plus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(111), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2215] = 3,
    ACTIONS(564), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(566), 26,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2254] = 3,
    ACTIONS(554), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(556), 26,
      sym__newline,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2293] = 7,
    ACTIONS(49), 1,
      sym__indented_chunk_start,
    ACTIONS(67), 1,
      sym__blank_line_start,
    STATE(211), 1,
      sym__blank_line,
    ACTIONS(600), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(106), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(602), 21,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2340] = 5,
    ACTIONS(608), 1,
      sym_list_marker_parenthethis,
    ACTIONS(604), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(121), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(606), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2383] = 5,
    ACTIONS(615), 1,
      sym_list_marker_dot,
    ACTIONS(611), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(122), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(613), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2426] = 5,
    ACTIONS(622), 1,
      sym_list_marker_star,
    ACTIONS(618), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(123), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(620), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2469] = 5,
    ACTIONS(629), 1,
      sym_list_marker_minus,
    ACTIONS(625), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(124), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(627), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2512] = 6,
    ACTIONS(539), 1,
      sym__setext_h1_underline,
    ACTIONS(535), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(541), 2,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
    STATE(358), 2,
      sym_setext_h1_underline,
      sym_setext_h2_underline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(537), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2557] = 4,
    ACTIONS(632), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 25,
      sym__block_close,
      sym__lazy_continuation,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h1_underline,
      sym__setext_h2_underline,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2598] = 5,
    ACTIONS(635), 1,
      sym_list_marker_plus,
    ACTIONS(583), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(127), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(585), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2640] = 5,
    ACTIONS(638), 1,
      sym_list_marker_plus,
    ACTIONS(583), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(128), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(585), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2682] = 7,
    ACTIONS(15), 1,
      sym__indented_chunk_start,
    ACTIONS(33), 1,
      sym__blank_line_start,
    STATE(217), 1,
      sym__blank_line,
    ACTIONS(600), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(148), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(602), 20,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2728] = 5,
    ACTIONS(645), 1,
      sym_list_marker_dot,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(145), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2770] = 5,
    ACTIONS(647), 1,
      sym_list_marker_star,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(147), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2812] = 5,
    ACTIONS(649), 1,
      sym_list_marker_minus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(149), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2854] = 5,
    ACTIONS(651), 1,
      sym_list_marker_plus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(151), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2896] = 5,
    ACTIONS(23), 1,
      sym_list_marker_plus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(127), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2938] = 5,
    ACTIONS(250), 1,
      sym_list_marker_plus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(128), 3,
      sym__list_item_plus_tight,
      sym__list_item_plus_loose,
      aux_sym_loose_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [2980] = 5,
    ACTIONS(248), 1,
      sym_list_marker_minus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(157), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3022] = 5,
    ACTIONS(252), 1,
      sym_list_marker_star,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(156), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3064] = 5,
    ACTIONS(256), 1,
      sym_list_marker_dot,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(155), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3106] = 5,
    ACTIONS(254), 1,
      sym_list_marker_parenthethis,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(154), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3148] = 5,
    ACTIONS(21), 1,
      sym_list_marker_minus,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(152), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3190] = 5,
    ACTIONS(25), 1,
      sym_list_marker_star,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(153), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3232] = 5,
    ACTIONS(29), 1,
      sym_list_marker_dot,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(160), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3274] = 5,
    ACTIONS(657), 1,
      sym_list_marker_parenthethis,
    ACTIONS(653), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(143), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(655), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3316] = 7,
    ACTIONS(660), 1,
      sym__indented_chunk_start,
    ACTIONS(663), 1,
      sym__blank_line_start,
    STATE(217), 1,
      sym__blank_line,
    ACTIONS(590), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(144), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(592), 20,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3362] = 5,
    ACTIONS(670), 1,
      sym_list_marker_dot,
    ACTIONS(666), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(145), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(668), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3404] = 5,
    ACTIONS(27), 1,
      sym_list_marker_parenthethis,
    ACTIONS(572), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(161), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(574), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3446] = 5,
    ACTIONS(677), 1,
      sym_list_marker_star,
    ACTIONS(673), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(147), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(675), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3488] = 7,
    ACTIONS(15), 1,
      sym__indented_chunk_start,
    ACTIONS(33), 1,
      sym__blank_line_start,
    STATE(217), 1,
      sym__blank_line,
    ACTIONS(576), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(144), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(578), 20,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3534] = 5,
    ACTIONS(684), 1,
      sym_list_marker_minus,
    ACTIONS(680), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(149), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(682), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3576] = 7,
    ACTIONS(687), 1,
      sym__indented_chunk_start,
    ACTIONS(690), 1,
      sym__blank_line_start,
    STATE(241), 1,
      sym__blank_line,
    ACTIONS(590), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(150), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(592), 20,
      sym__block_close,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3622] = 5,
    ACTIONS(697), 1,
      sym_list_marker_plus,
    ACTIONS(693), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(151), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(695), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3664] = 5,
    ACTIONS(700), 1,
      sym_list_marker_minus,
    ACTIONS(625), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(152), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(627), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3706] = 5,
    ACTIONS(703), 1,
      sym_list_marker_star,
    ACTIONS(618), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(153), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(620), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3748] = 5,
    ACTIONS(706), 1,
      sym_list_marker_parenthethis,
    ACTIONS(604), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(154), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(606), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3790] = 5,
    ACTIONS(709), 1,
      sym_list_marker_dot,
    ACTIONS(611), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(155), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(613), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3832] = 5,
    ACTIONS(712), 1,
      sym_list_marker_star,
    ACTIONS(618), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(156), 3,
      sym__list_item_star_tight,
      sym__list_item_star_loose,
      aux_sym_loose_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(620), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3874] = 5,
    ACTIONS(715), 1,
      sym_list_marker_minus,
    ACTIONS(625), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(157), 3,
      sym__list_item_minus_tight,
      sym__list_item_minus_loose,
      aux_sym_loose_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(627), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3916] = 7,
    ACTIONS(242), 1,
      sym__indented_chunk_start,
    ACTIONS(260), 1,
      sym__blank_line_start,
    STATE(241), 1,
      sym__blank_line,
    ACTIONS(600), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(159), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(602), 20,
      sym__block_close,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [3962] = 7,
    ACTIONS(242), 1,
      sym__indented_chunk_start,
    ACTIONS(260), 1,
      sym__blank_line_start,
    STATE(241), 1,
      sym__blank_line,
    ACTIONS(576), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(150), 2,
      sym__indented_chunk,
      aux_sym_indented_code_block_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(578), 20,
      sym__block_close,
      sym__block_quote_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4008] = 5,
    ACTIONS(718), 1,
      sym_list_marker_dot,
    ACTIONS(611), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(160), 3,
      sym__list_item_dot_tight,
      sym__list_item_dot_loose,
      aux_sym_loose_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(613), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4050] = 5,
    ACTIONS(721), 1,
      sym_list_marker_parenthethis,
    ACTIONS(604), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(161), 3,
      sym__list_item_parenthethis_tight,
      sym__list_item_parenthethis_loose,
      aux_sym_loose_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(606), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4092] = 5,
    ACTIONS(724), 1,
      sym_list_marker_parenthethis,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(143), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 22,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4134] = 5,
    ACTIONS(726), 1,
      sym_list_marker_plus,
    ACTIONS(693), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(163), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(695), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4175] = 5,
    ACTIONS(729), 1,
      sym_list_marker_minus,
    ACTIONS(680), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(164), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(682), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4216] = 5,
    ACTIONS(732), 1,
      sym_list_marker_star,
    ACTIONS(673), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(165), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(675), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4257] = 5,
    ACTIONS(735), 1,
      sym_list_marker_dot,
    ACTIONS(666), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(166), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(668), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4298] = 5,
    ACTIONS(738), 1,
      sym_list_marker_parenthethis,
    ACTIONS(653), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(167), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(655), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4339] = 5,
    ACTIONS(741), 1,
      sym_list_marker_plus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(163), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4380] = 5,
    ACTIONS(743), 1,
      sym_list_marker_minus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(164), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4421] = 5,
    ACTIONS(745), 1,
      sym_list_marker_star,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(165), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4462] = 5,
    ACTIONS(747), 1,
      sym_list_marker_dot,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(166), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4503] = 5,
    ACTIONS(749), 1,
      sym_list_marker_plus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(178), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4544] = 5,
    ACTIONS(751), 1,
      sym_list_marker_minus,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(179), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4585] = 5,
    ACTIONS(753), 1,
      sym_list_marker_star,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(180), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4626] = 5,
    ACTIONS(755), 1,
      sym_list_marker_dot,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(181), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4667] = 5,
    ACTIONS(757), 1,
      sym_list_marker_parenthethis,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(182), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4708] = 5,
    ACTIONS(759), 1,
      sym_list_marker_parenthethis,
    ACTIONS(641), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(167), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(643), 21,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4749] = 5,
    ACTIONS(761), 1,
      sym_list_marker_plus,
    ACTIONS(693), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(178), 2,
      sym__list_item_plus_tight,
      aux_sym_tight_list_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(695), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4790] = 5,
    ACTIONS(764), 1,
      sym_list_marker_minus,
    ACTIONS(680), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(179), 2,
      sym__list_item_minus_tight,
      aux_sym_tight_list_repeat2,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(682), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4831] = 5,
    ACTIONS(767), 1,
      sym_list_marker_star,
    ACTIONS(673), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(180), 2,
      sym__list_item_star_tight,
      aux_sym_tight_list_repeat3,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(675), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4872] = 5,
    ACTIONS(770), 1,
      sym_list_marker_dot,
    ACTIONS(666), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(181), 2,
      sym__list_item_dot_tight,
      aux_sym_tight_list_repeat4,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(668), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4913] = 5,
    ACTIONS(773), 1,
      sym_list_marker_parenthethis,
    ACTIONS(653), 2,
      anon_sym_BSLASH,
      sym__word,
    STATE(182), 2,
      sym__list_item_parenthethis_tight,
      aux_sym_tight_list_repeat5,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(655), 21,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4954] = 3,
    ACTIONS(776), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(778), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [4990] = 3,
    ACTIONS(780), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(782), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5026] = 3,
    ACTIONS(784), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(786), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5062] = 3,
    ACTIONS(788), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(790), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5098] = 3,
    ACTIONS(792), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(794), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5134] = 3,
    ACTIONS(796), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(798), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5170] = 3,
    ACTIONS(800), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(802), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5206] = 3,
    ACTIONS(804), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(806), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5242] = 3,
    ACTIONS(808), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(810), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5278] = 3,
    ACTIONS(812), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(814), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5314] = 3,
    ACTIONS(816), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(818), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5350] = 3,
    ACTIONS(820), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(822), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5386] = 3,
    ACTIONS(824), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(826), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5422] = 3,
    ACTIONS(828), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(830), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5458] = 3,
    ACTIONS(832), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(834), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5494] = 3,
    ACTIONS(836), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(838), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5530] = 3,
    ACTIONS(840), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(842), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5566] = 3,
    ACTIONS(844), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(846), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5602] = 3,
    ACTIONS(848), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(850), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5638] = 3,
    ACTIONS(852), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(854), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5674] = 3,
    ACTIONS(856), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(858), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5710] = 3,
    ACTIONS(860), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(862), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5746] = 3,
    ACTIONS(864), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(866), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5782] = 3,
    ACTIONS(868), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(870), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5818] = 3,
    ACTIONS(872), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(874), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5854] = 3,
    ACTIONS(876), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(878), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5890] = 3,
    ACTIONS(880), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(882), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5926] = 3,
    ACTIONS(884), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(886), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5962] = 3,
    ACTIONS(888), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(890), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [5998] = 3,
    ACTIONS(892), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(894), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6034] = 3,
    ACTIONS(896), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(898), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6070] = 3,
    ACTIONS(900), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(902), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6106] = 3,
    ACTIONS(904), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(906), 23,
      sym__block_close,
      sym__block_close_loose,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6142] = 3,
    ACTIONS(852), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(854), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6177] = 3,
    ACTIONS(888), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(890), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6212] = 3,
    ACTIONS(828), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(830), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6247] = 3,
    ACTIONS(816), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(818), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6282] = 3,
    ACTIONS(900), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(902), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6317] = 3,
    ACTIONS(904), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(906), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6352] = 3,
    ACTIONS(812), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(814), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6387] = 3,
    ACTIONS(808), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(810), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6422] = 3,
    ACTIONS(820), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(822), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6457] = 3,
    ACTIONS(896), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(898), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6492] = 3,
    ACTIONS(804), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(806), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6527] = 3,
    ACTIONS(892), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(894), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6562] = 3,
    ACTIONS(884), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(886), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6597] = 3,
    ACTIONS(880), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(882), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6632] = 3,
    ACTIONS(876), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(878), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6667] = 3,
    ACTIONS(872), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(874), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6702] = 3,
    ACTIONS(868), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(870), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6737] = 3,
    ACTIONS(780), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(782), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6772] = 3,
    ACTIONS(832), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(834), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6807] = 3,
    ACTIONS(848), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(850), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6842] = 3,
    ACTIONS(852), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(854), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6877] = 3,
    ACTIONS(856), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(858), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6912] = 3,
    ACTIONS(860), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(862), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6947] = 3,
    ACTIONS(776), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(778), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [6982] = 3,
    ACTIONS(864), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(866), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7017] = 3,
    ACTIONS(888), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(890), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7052] = 3,
    ACTIONS(840), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(842), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7087] = 3,
    ACTIONS(836), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(838), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7122] = 3,
    ACTIONS(824), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(826), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7157] = 3,
    ACTIONS(844), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(846), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7192] = 3,
    ACTIONS(784), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(786), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7227] = 3,
    ACTIONS(788), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(790), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7262] = 3,
    ACTIONS(792), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(794), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7297] = 3,
    ACTIONS(796), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(798), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7332] = 3,
    ACTIONS(800), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(802), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7367] = 3,
    ACTIONS(776), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(778), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7402] = 3,
    ACTIONS(804), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(806), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7437] = 3,
    ACTIONS(808), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(810), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7472] = 3,
    ACTIONS(812), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(814), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7507] = 3,
    ACTIONS(816), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(818), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7542] = 3,
    ACTIONS(800), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(802), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7577] = 3,
    ACTIONS(900), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(902), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7612] = 3,
    ACTIONS(796), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(798), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7647] = 3,
    ACTIONS(904), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(906), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7682] = 3,
    ACTIONS(792), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(794), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7717] = 3,
    ACTIONS(788), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(790), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7752] = 3,
    ACTIONS(784), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(786), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7787] = 3,
    ACTIONS(844), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(846), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7822] = 3,
    ACTIONS(824), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(826), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7857] = 3,
    ACTIONS(820), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(822), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7892] = 3,
    ACTIONS(896), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(898), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7927] = 3,
    ACTIONS(836), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(838), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7962] = 3,
    ACTIONS(840), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(842), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [7997] = 3,
    ACTIONS(828), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(830), 22,
      sym__block_close,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8032] = 3,
    ACTIONS(864), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(866), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8067] = 3,
    ACTIONS(860), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(862), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8102] = 3,
    ACTIONS(856), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(858), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8137] = 3,
    ACTIONS(848), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(850), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8172] = 3,
    ACTIONS(892), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(894), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8207] = 3,
    ACTIONS(832), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(834), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8242] = 3,
    ACTIONS(780), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(782), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8277] = 3,
    ACTIONS(884), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(886), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8312] = 3,
    ACTIONS(880), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(882), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8347] = 3,
    ACTIONS(876), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(878), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8382] = 3,
    ACTIONS(872), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(874), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8417] = 3,
    ACTIONS(868), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(870), 22,
      sym__block_quote_start,
      sym__indented_chunk_start,
      sym_atx_h1_marker,
      sym_atx_h2_marker,
      sym_atx_h3_marker,
      sym_atx_h4_marker,
      sym_atx_h5_marker,
      sym_atx_h6_marker,
      sym__setext_h2_underline_or_thematic_break,
      sym__thematic_break,
      sym_list_marker_minus,
      sym_list_marker_plus,
      sym_list_marker_star,
      sym_list_marker_parenthethis,
      sym_list_marker_dot,
      sym__fenced_code_block_start,
      sym__blank_line_start,
      sym__code_span_start,
      ts_builtin_sym_end,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8452] = 9,
    ACTIONS(908), 1,
      sym__word,
    ACTIONS(912), 1,
      anon_sym_BSLASH,
    ACTIONS(914), 1,
      sym__newline,
    ACTIONS(916), 1,
      sym__code_span_start,
    STATE(301), 1,
      aux_sym_text_repeat1,
    STATE(337), 1,
      sym__inline,
    ACTIONS(910), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(286), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
  [8488] = 9,
    ACTIONS(908), 1,
      sym__word,
    ACTIONS(912), 1,
      anon_sym_BSLASH,
    ACTIONS(916), 1,
      sym__code_span_start,
    ACTIONS(918), 1,
      sym__newline,
    STATE(301), 1,
      aux_sym_text_repeat1,
    STATE(330), 1,
      sym__inline,
    ACTIONS(910), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(286), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
  [8524] = 9,
    ACTIONS(908), 1,
      sym__word,
    ACTIONS(912), 1,
      anon_sym_BSLASH,
    ACTIONS(916), 1,
      sym__code_span_start,
    ACTIONS(920), 1,
      sym__newline,
    STATE(301), 1,
      aux_sym_text_repeat1,
    STATE(331), 1,
      sym__inline,
    ACTIONS(910), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(286), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
  [8560] = 8,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(922), 1,
      sym__word,
    ACTIONS(928), 1,
      anon_sym_BSLASH,
    ACTIONS(931), 1,
      sym__code_span_start,
    STATE(301), 1,
      aux_sym_text_repeat1,
    ACTIONS(925), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(285), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
  [8593] = 8,
    ACTIONS(448), 1,
      sym__newline,
    ACTIONS(908), 1,
      sym__word,
    ACTIONS(912), 1,
      anon_sym_BSLASH,
    ACTIONS(916), 1,
      sym__code_span_start,
    STATE(301), 1,
      aux_sym_text_repeat1,
    ACTIONS(934), 3,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    STATE(285), 4,
      sym_hard_line_break,
      sym_text,
      sym_code_span,
      aux_sym__inline_repeat1,
  [8626] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(942), 1,
      sym_virtual_space,
    ACTIONS(944), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(291), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8656] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(946), 1,
      sym_virtual_space,
    ACTIONS(948), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(296), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8686] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(950), 1,
      sym_virtual_space,
    ACTIONS(952), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(300), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8716] = 8,
    ACTIONS(954), 1,
      sym__word,
    ACTIONS(960), 1,
      sym__newline,
    ACTIONS(963), 1,
      sym_virtual_space,
    ACTIONS(966), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(957), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(290), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8746] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(968), 1,
      sym_virtual_space,
    ACTIONS(970), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(290), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8776] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(978), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(333), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8806] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(980), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(357), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8836] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(982), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(355), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8866] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(984), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(353), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8896] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(968), 1,
      sym_virtual_space,
    ACTIONS(986), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(290), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8926] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(988), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(352), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [8956] = 6,
    ACTIONS(497), 1,
      anon_sym_BSLASH,
    ACTIONS(990), 1,
      sym__word,
    ACTIONS(993), 1,
      sym__code_span_close,
    STATE(318), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 5,
      sym__newline,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [8982] = 8,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(995), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    STATE(350), 1,
      sym_code_fence_content,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(304), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9012] = 8,
    ACTIONS(936), 1,
      sym__word,
    ACTIONS(940), 1,
      sym__newline,
    ACTIONS(968), 1,
      sym_virtual_space,
    ACTIONS(997), 1,
      sym__block_close,
    STATE(309), 1,
      aux_sym_text_repeat1,
    ACTIONS(938), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(290), 2,
      sym_text,
      aux_sym__indented_chunk_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9042] = 5,
    ACTIONS(1001), 1,
      sym__code_span_start,
    STATE(303), 1,
      aux_sym_text_repeat1,
    ACTIONS(999), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(503), 4,
      sym__newline,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9065] = 7,
    ACTIONS(1003), 1,
      sym__word,
    ACTIONS(1009), 1,
      sym__newline,
    ACTIONS(1012), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    ACTIONS(1006), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(302), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9092] = 5,
    ACTIONS(1017), 1,
      sym__code_span_start,
    STATE(303), 1,
      aux_sym_text_repeat1,
    ACTIONS(1014), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(515), 4,
      sym__newline,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9115] = 7,
    ACTIONS(972), 1,
      sym__word,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(1020), 1,
      sym__block_close,
    STATE(312), 1,
      aux_sym_text_repeat1,
    ACTIONS(974), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    STATE(302), 2,
      sym_text,
      aux_sym_code_fence_content_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9142] = 3,
    ACTIONS(554), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(556), 5,
      sym__newline,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9160] = 4,
    ACTIONS(1022), 1,
      sym__newline,
    ACTIONS(497), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(495), 4,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9180] = 3,
    ACTIONS(564), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(566), 5,
      sym__newline,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9198] = 5,
    ACTIONS(1025), 1,
      sym__word,
    STATE(308), 1,
      aux_sym_text_repeat1,
    ACTIONS(1028), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    ACTIONS(515), 3,
      sym__newline,
      sym_virtual_space,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9220] = 5,
    ACTIONS(1031), 1,
      sym__word,
    STATE(308), 1,
      aux_sym_text_repeat1,
    ACTIONS(1033), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    ACTIONS(503), 3,
      sym__newline,
      sym_virtual_space,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9242] = 3,
    ACTIONS(525), 2,
      anon_sym_BSLASH,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(527), 5,
      sym__newline,
      sym__code_span_start,
      sym_backslash_escape,
      sym_entity_reference,
      sym_numeric_character_reference,
  [9260] = 5,
    ACTIONS(1035), 1,
      sym__word,
    STATE(311), 1,
      aux_sym_text_repeat1,
    ACTIONS(515), 2,
      sym__newline,
      sym__block_close,
    ACTIONS(1038), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9281] = 5,
    ACTIONS(1041), 1,
      sym__word,
    STATE(311), 1,
      aux_sym_text_repeat1,
    ACTIONS(503), 2,
      sym__newline,
      sym__block_close,
    ACTIONS(1043), 2,
      sym__code_span_start,
      anon_sym_BSLASH,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9302] = 3,
    ACTIONS(1045), 1,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(1047), 5,
      sym__newline,
      sym_virtual_space,
      sym__block_close,
      sym__code_span_start,
      anon_sym_BSLASH,
  [9319] = 3,
    ACTIONS(1049), 1,
      sym__word,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
    ACTIONS(1051), 4,
      sym__newline,
      sym__block_close,
      sym__code_span_start,
      anon_sym_BSLASH,
  [9335] = 5,
    ACTIONS(1053), 1,
      sym__word,
    ACTIONS(1055), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_info_string_repeat1,
    STATE(340), 1,
      sym_info_string,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9354] = 5,
    ACTIONS(1053), 1,
      sym__word,
    ACTIONS(1057), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_info_string_repeat1,
    STATE(342), 1,
      sym_info_string,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9373] = 5,
    ACTIONS(1053), 1,
      sym__word,
    ACTIONS(1059), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_info_string_repeat1,
    STATE(341), 1,
      sym_info_string,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9392] = 4,
    ACTIONS(1061), 1,
      sym__word,
    ACTIONS(1063), 1,
      sym__code_span_close,
    STATE(324), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9408] = 4,
    ACTIONS(1065), 1,
      sym__word,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(319), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9424] = 4,
    ACTIONS(1061), 1,
      sym__word,
    ACTIONS(1070), 1,
      sym__code_span_close,
    STATE(324), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9440] = 4,
    ACTIONS(1061), 1,
      sym__word,
    ACTIONS(1072), 1,
      sym__code_span_close,
    STATE(324), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9456] = 4,
    ACTIONS(1074), 1,
      sym__word,
    ACTIONS(1076), 1,
      sym__newline,
    STATE(319), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9472] = 4,
    ACTIONS(1061), 1,
      sym__word,
    ACTIONS(1078), 1,
      sym__code_span_close,
    STATE(324), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9488] = 4,
    ACTIONS(1068), 1,
      sym__code_span_close,
    ACTIONS(1080), 1,
      sym__word,
    STATE(324), 1,
      aux_sym_info_string_repeat1,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9504] = 2,
    ACTIONS(1083), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9514] = 2,
    ACTIONS(1085), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9524] = 2,
    ACTIONS(1087), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9534] = 2,
    ACTIONS(1089), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9544] = 2,
    ACTIONS(1091), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9554] = 2,
    ACTIONS(1093), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9564] = 2,
    ACTIONS(1095), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9574] = 2,
    ACTIONS(1097), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9584] = 2,
    ACTIONS(1099), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9594] = 2,
    ACTIONS(1101), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9604] = 2,
    ACTIONS(1103), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9614] = 2,
    ACTIONS(1105), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9624] = 2,
    ACTIONS(1107), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9634] = 2,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9644] = 2,
    ACTIONS(1111), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9654] = 2,
    ACTIONS(1113), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9664] = 2,
    ACTIONS(1115), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9674] = 2,
    ACTIONS(1117), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9684] = 2,
    ACTIONS(1119), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9694] = 2,
    ACTIONS(1121), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9704] = 2,
    ACTIONS(1123), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9714] = 2,
    ACTIONS(1125), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9724] = 2,
    ACTIONS(1127), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9734] = 2,
    ACTIONS(1129), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9744] = 2,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9754] = 2,
    ACTIONS(978), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9764] = 2,
    ACTIONS(1133), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9774] = 2,
    ACTIONS(984), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9784] = 2,
    ACTIONS(1135), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9794] = 2,
    ACTIONS(1137), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9804] = 2,
    ACTIONS(980), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9814] = 2,
    ACTIONS(1139), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9824] = 2,
    ACTIONS(1141), 1,
      sym__block_close,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9834] = 2,
    ACTIONS(1143), 1,
      sym__newline,
    ACTIONS(3), 4,
      sym__indentation,
      sym__matching_done,
      sym__block_continuation,
      sym__whitespace,
  [9844] = 2,
    ACTIONS(1145), 1,
      sym__matching_done,
    ACTIONS(3), 3,
      sym__indentation,
      sym__block_continuation,
      sym__whitespace,
  [9853] = 2,
    ACTIONS(1147), 1,
      sym__matching_done,
    ACTIONS(3), 3,
      sym__indentation,
      sym__block_continuation,
      sym__whitespace,
  [9862] = 2,
    ACTIONS(1149), 1,
      sym__matching_done,
    ACTIONS(3), 3,
      sym__indentation,
      sym__block_continuation,
      sym__whitespace,
  [9871] = 2,
    ACTIONS(1151), 1,
      sym__matching_done,
    ACTIONS(3), 3,
      sym__indentation,
      sym__block_continuation,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(72)] = 0,
  [SMALL_STATE(73)] = 63,
  [SMALL_STATE(74)] = 126,
  [SMALL_STATE(75)] = 189,
  [SMALL_STATE(76)] = 251,
  [SMALL_STATE(77)] = 313,
  [SMALL_STATE(78)] = 375,
  [SMALL_STATE(79)] = 437,
  [SMALL_STATE(80)] = 499,
  [SMALL_STATE(81)] = 561,
  [SMALL_STATE(82)] = 616,
  [SMALL_STATE(83)] = 671,
  [SMALL_STATE(84)] = 725,
  [SMALL_STATE(85)] = 779,
  [SMALL_STATE(86)] = 833,
  [SMALL_STATE(87)] = 887,
  [SMALL_STATE(88)] = 935,
  [SMALL_STATE(89)] = 980,
  [SMALL_STATE(90)] = 1027,
  [SMALL_STATE(91)] = 1072,
  [SMALL_STATE(92)] = 1119,
  [SMALL_STATE(93)] = 1159,
  [SMALL_STATE(94)] = 1203,
  [SMALL_STATE(95)] = 1249,
  [SMALL_STATE(96)] = 1293,
  [SMALL_STATE(97)] = 1337,
  [SMALL_STATE(98)] = 1379,
  [SMALL_STATE(99)] = 1419,
  [SMALL_STATE(100)] = 1463,
  [SMALL_STATE(101)] = 1503,
  [SMALL_STATE(102)] = 1543,
  [SMALL_STATE(103)] = 1588,
  [SMALL_STATE(104)] = 1631,
  [SMALL_STATE(105)] = 1670,
  [SMALL_STATE(106)] = 1709,
  [SMALL_STATE(107)] = 1756,
  [SMALL_STATE(108)] = 1795,
  [SMALL_STATE(109)] = 1834,
  [SMALL_STATE(110)] = 1873,
  [SMALL_STATE(111)] = 1914,
  [SMALL_STATE(112)] = 1957,
  [SMALL_STATE(113)] = 1996,
  [SMALL_STATE(114)] = 2039,
  [SMALL_STATE(115)] = 2082,
  [SMALL_STATE(116)] = 2129,
  [SMALL_STATE(117)] = 2172,
  [SMALL_STATE(118)] = 2215,
  [SMALL_STATE(119)] = 2254,
  [SMALL_STATE(120)] = 2293,
  [SMALL_STATE(121)] = 2340,
  [SMALL_STATE(122)] = 2383,
  [SMALL_STATE(123)] = 2426,
  [SMALL_STATE(124)] = 2469,
  [SMALL_STATE(125)] = 2512,
  [SMALL_STATE(126)] = 2557,
  [SMALL_STATE(127)] = 2598,
  [SMALL_STATE(128)] = 2640,
  [SMALL_STATE(129)] = 2682,
  [SMALL_STATE(130)] = 2728,
  [SMALL_STATE(131)] = 2770,
  [SMALL_STATE(132)] = 2812,
  [SMALL_STATE(133)] = 2854,
  [SMALL_STATE(134)] = 2896,
  [SMALL_STATE(135)] = 2938,
  [SMALL_STATE(136)] = 2980,
  [SMALL_STATE(137)] = 3022,
  [SMALL_STATE(138)] = 3064,
  [SMALL_STATE(139)] = 3106,
  [SMALL_STATE(140)] = 3148,
  [SMALL_STATE(141)] = 3190,
  [SMALL_STATE(142)] = 3232,
  [SMALL_STATE(143)] = 3274,
  [SMALL_STATE(144)] = 3316,
  [SMALL_STATE(145)] = 3362,
  [SMALL_STATE(146)] = 3404,
  [SMALL_STATE(147)] = 3446,
  [SMALL_STATE(148)] = 3488,
  [SMALL_STATE(149)] = 3534,
  [SMALL_STATE(150)] = 3576,
  [SMALL_STATE(151)] = 3622,
  [SMALL_STATE(152)] = 3664,
  [SMALL_STATE(153)] = 3706,
  [SMALL_STATE(154)] = 3748,
  [SMALL_STATE(155)] = 3790,
  [SMALL_STATE(156)] = 3832,
  [SMALL_STATE(157)] = 3874,
  [SMALL_STATE(158)] = 3916,
  [SMALL_STATE(159)] = 3962,
  [SMALL_STATE(160)] = 4008,
  [SMALL_STATE(161)] = 4050,
  [SMALL_STATE(162)] = 4092,
  [SMALL_STATE(163)] = 4134,
  [SMALL_STATE(164)] = 4175,
  [SMALL_STATE(165)] = 4216,
  [SMALL_STATE(166)] = 4257,
  [SMALL_STATE(167)] = 4298,
  [SMALL_STATE(168)] = 4339,
  [SMALL_STATE(169)] = 4380,
  [SMALL_STATE(170)] = 4421,
  [SMALL_STATE(171)] = 4462,
  [SMALL_STATE(172)] = 4503,
  [SMALL_STATE(173)] = 4544,
  [SMALL_STATE(174)] = 4585,
  [SMALL_STATE(175)] = 4626,
  [SMALL_STATE(176)] = 4667,
  [SMALL_STATE(177)] = 4708,
  [SMALL_STATE(178)] = 4749,
  [SMALL_STATE(179)] = 4790,
  [SMALL_STATE(180)] = 4831,
  [SMALL_STATE(181)] = 4872,
  [SMALL_STATE(182)] = 4913,
  [SMALL_STATE(183)] = 4954,
  [SMALL_STATE(184)] = 4990,
  [SMALL_STATE(185)] = 5026,
  [SMALL_STATE(186)] = 5062,
  [SMALL_STATE(187)] = 5098,
  [SMALL_STATE(188)] = 5134,
  [SMALL_STATE(189)] = 5170,
  [SMALL_STATE(190)] = 5206,
  [SMALL_STATE(191)] = 5242,
  [SMALL_STATE(192)] = 5278,
  [SMALL_STATE(193)] = 5314,
  [SMALL_STATE(194)] = 5350,
  [SMALL_STATE(195)] = 5386,
  [SMALL_STATE(196)] = 5422,
  [SMALL_STATE(197)] = 5458,
  [SMALL_STATE(198)] = 5494,
  [SMALL_STATE(199)] = 5530,
  [SMALL_STATE(200)] = 5566,
  [SMALL_STATE(201)] = 5602,
  [SMALL_STATE(202)] = 5638,
  [SMALL_STATE(203)] = 5674,
  [SMALL_STATE(204)] = 5710,
  [SMALL_STATE(205)] = 5746,
  [SMALL_STATE(206)] = 5782,
  [SMALL_STATE(207)] = 5818,
  [SMALL_STATE(208)] = 5854,
  [SMALL_STATE(209)] = 5890,
  [SMALL_STATE(210)] = 5926,
  [SMALL_STATE(211)] = 5962,
  [SMALL_STATE(212)] = 5998,
  [SMALL_STATE(213)] = 6034,
  [SMALL_STATE(214)] = 6070,
  [SMALL_STATE(215)] = 6106,
  [SMALL_STATE(216)] = 6142,
  [SMALL_STATE(217)] = 6177,
  [SMALL_STATE(218)] = 6212,
  [SMALL_STATE(219)] = 6247,
  [SMALL_STATE(220)] = 6282,
  [SMALL_STATE(221)] = 6317,
  [SMALL_STATE(222)] = 6352,
  [SMALL_STATE(223)] = 6387,
  [SMALL_STATE(224)] = 6422,
  [SMALL_STATE(225)] = 6457,
  [SMALL_STATE(226)] = 6492,
  [SMALL_STATE(227)] = 6527,
  [SMALL_STATE(228)] = 6562,
  [SMALL_STATE(229)] = 6597,
  [SMALL_STATE(230)] = 6632,
  [SMALL_STATE(231)] = 6667,
  [SMALL_STATE(232)] = 6702,
  [SMALL_STATE(233)] = 6737,
  [SMALL_STATE(234)] = 6772,
  [SMALL_STATE(235)] = 6807,
  [SMALL_STATE(236)] = 6842,
  [SMALL_STATE(237)] = 6877,
  [SMALL_STATE(238)] = 6912,
  [SMALL_STATE(239)] = 6947,
  [SMALL_STATE(240)] = 6982,
  [SMALL_STATE(241)] = 7017,
  [SMALL_STATE(242)] = 7052,
  [SMALL_STATE(243)] = 7087,
  [SMALL_STATE(244)] = 7122,
  [SMALL_STATE(245)] = 7157,
  [SMALL_STATE(246)] = 7192,
  [SMALL_STATE(247)] = 7227,
  [SMALL_STATE(248)] = 7262,
  [SMALL_STATE(249)] = 7297,
  [SMALL_STATE(250)] = 7332,
  [SMALL_STATE(251)] = 7367,
  [SMALL_STATE(252)] = 7402,
  [SMALL_STATE(253)] = 7437,
  [SMALL_STATE(254)] = 7472,
  [SMALL_STATE(255)] = 7507,
  [SMALL_STATE(256)] = 7542,
  [SMALL_STATE(257)] = 7577,
  [SMALL_STATE(258)] = 7612,
  [SMALL_STATE(259)] = 7647,
  [SMALL_STATE(260)] = 7682,
  [SMALL_STATE(261)] = 7717,
  [SMALL_STATE(262)] = 7752,
  [SMALL_STATE(263)] = 7787,
  [SMALL_STATE(264)] = 7822,
  [SMALL_STATE(265)] = 7857,
  [SMALL_STATE(266)] = 7892,
  [SMALL_STATE(267)] = 7927,
  [SMALL_STATE(268)] = 7962,
  [SMALL_STATE(269)] = 7997,
  [SMALL_STATE(270)] = 8032,
  [SMALL_STATE(271)] = 8067,
  [SMALL_STATE(272)] = 8102,
  [SMALL_STATE(273)] = 8137,
  [SMALL_STATE(274)] = 8172,
  [SMALL_STATE(275)] = 8207,
  [SMALL_STATE(276)] = 8242,
  [SMALL_STATE(277)] = 8277,
  [SMALL_STATE(278)] = 8312,
  [SMALL_STATE(279)] = 8347,
  [SMALL_STATE(280)] = 8382,
  [SMALL_STATE(281)] = 8417,
  [SMALL_STATE(282)] = 8452,
  [SMALL_STATE(283)] = 8488,
  [SMALL_STATE(284)] = 8524,
  [SMALL_STATE(285)] = 8560,
  [SMALL_STATE(286)] = 8593,
  [SMALL_STATE(287)] = 8626,
  [SMALL_STATE(288)] = 8656,
  [SMALL_STATE(289)] = 8686,
  [SMALL_STATE(290)] = 8716,
  [SMALL_STATE(291)] = 8746,
  [SMALL_STATE(292)] = 8776,
  [SMALL_STATE(293)] = 8806,
  [SMALL_STATE(294)] = 8836,
  [SMALL_STATE(295)] = 8866,
  [SMALL_STATE(296)] = 8896,
  [SMALL_STATE(297)] = 8926,
  [SMALL_STATE(298)] = 8956,
  [SMALL_STATE(299)] = 8982,
  [SMALL_STATE(300)] = 9012,
  [SMALL_STATE(301)] = 9042,
  [SMALL_STATE(302)] = 9065,
  [SMALL_STATE(303)] = 9092,
  [SMALL_STATE(304)] = 9115,
  [SMALL_STATE(305)] = 9142,
  [SMALL_STATE(306)] = 9160,
  [SMALL_STATE(307)] = 9180,
  [SMALL_STATE(308)] = 9198,
  [SMALL_STATE(309)] = 9220,
  [SMALL_STATE(310)] = 9242,
  [SMALL_STATE(311)] = 9260,
  [SMALL_STATE(312)] = 9281,
  [SMALL_STATE(313)] = 9302,
  [SMALL_STATE(314)] = 9319,
  [SMALL_STATE(315)] = 9335,
  [SMALL_STATE(316)] = 9354,
  [SMALL_STATE(317)] = 9373,
  [SMALL_STATE(318)] = 9392,
  [SMALL_STATE(319)] = 9408,
  [SMALL_STATE(320)] = 9424,
  [SMALL_STATE(321)] = 9440,
  [SMALL_STATE(322)] = 9456,
  [SMALL_STATE(323)] = 9472,
  [SMALL_STATE(324)] = 9488,
  [SMALL_STATE(325)] = 9504,
  [SMALL_STATE(326)] = 9514,
  [SMALL_STATE(327)] = 9524,
  [SMALL_STATE(328)] = 9534,
  [SMALL_STATE(329)] = 9544,
  [SMALL_STATE(330)] = 9554,
  [SMALL_STATE(331)] = 9564,
  [SMALL_STATE(332)] = 9574,
  [SMALL_STATE(333)] = 9584,
  [SMALL_STATE(334)] = 9594,
  [SMALL_STATE(335)] = 9604,
  [SMALL_STATE(336)] = 9614,
  [SMALL_STATE(337)] = 9624,
  [SMALL_STATE(338)] = 9634,
  [SMALL_STATE(339)] = 9644,
  [SMALL_STATE(340)] = 9654,
  [SMALL_STATE(341)] = 9664,
  [SMALL_STATE(342)] = 9674,
  [SMALL_STATE(343)] = 9684,
  [SMALL_STATE(344)] = 9694,
  [SMALL_STATE(345)] = 9704,
  [SMALL_STATE(346)] = 9714,
  [SMALL_STATE(347)] = 9724,
  [SMALL_STATE(348)] = 9734,
  [SMALL_STATE(349)] = 9744,
  [SMALL_STATE(350)] = 9754,
  [SMALL_STATE(351)] = 9764,
  [SMALL_STATE(352)] = 9774,
  [SMALL_STATE(353)] = 9784,
  [SMALL_STATE(354)] = 9794,
  [SMALL_STATE(355)] = 9804,
  [SMALL_STATE(356)] = 9814,
  [SMALL_STATE(357)] = 9824,
  [SMALL_STATE(358)] = 9834,
  [SMALL_STATE(359)] = 9844,
  [SMALL_STATE(360)] = 9853,
  [SMALL_STATE(361)] = 9862,
  [SMALL_STATE(362)] = 9871,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(289),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(282),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(329),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(317),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(335),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(287),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(284),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(336),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(316),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(332),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(288),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(283),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(325),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(315),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(339),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(88),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(81),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(97),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(72),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(87),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(95),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(85),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(126),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(104),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(89),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(96),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(84),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(110),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(112),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(77),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(91),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(88),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(82),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(97),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(87),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(95),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(83),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(126),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(89),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(96),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(86),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(110),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(91),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(321),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(323),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(90),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(90),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(320),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_span, 2, .dynamic_precedence = 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_span, 2, .dynamic_precedence = 1),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(93),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(93),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(362),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_span, 3, .dynamic_precedence = 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_span, 3, .dynamic_precedence = 1),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(99),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(99),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hard_line_break, 3, .dynamic_precedence = 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hard_line_break, 3, .dynamic_precedence = 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loose_list, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loose_list, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_code_block, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_code_block, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(360),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_loose_list_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat1, 2), SHIFT_REPEAT(2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_code_block_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(289),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(335),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_code_block, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_code_block, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_loose_list_repeat5, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat5, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat5, 2), SHIFT_REPEAT(14),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_loose_list_repeat4, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat4, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat4, 2), SHIFT_REPEAT(16),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_loose_list_repeat3, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat3, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat3, 2), SHIFT_REPEAT(18),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_loose_list_repeat2, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat2, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat2, 2), SHIFT_REPEAT(13),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(361),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat1, 2), SHIFT_REPEAT(7),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat1, 2), SHIFT_REPEAT(32),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tight_list, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tight_list, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tight_list_repeat5, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat5, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat5, 2), SHIFT_REPEAT(51),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(288),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(339),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tight_list_repeat4, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat4, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat4, 2), SHIFT_REPEAT(56),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tight_list_repeat3, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat3, 2),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat3, 2), SHIFT_REPEAT(57),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tight_list_repeat2, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat2, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat2, 2), SHIFT_REPEAT(58),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(287),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 2), SHIFT_REPEAT(332),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tight_list_repeat1, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat1, 2), SHIFT_REPEAT(59),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat2, 2), SHIFT_REPEAT(6),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat3, 2), SHIFT_REPEAT(8),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat5, 2), SHIFT_REPEAT(29),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat4, 2), SHIFT_REPEAT(27),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat3, 2), SHIFT_REPEAT(30),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat2, 2), SHIFT_REPEAT(15),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat4, 2), SHIFT_REPEAT(10),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loose_list_repeat5, 2), SHIFT_REPEAT(9),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat1, 2), SHIFT_REPEAT(33),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat2, 2), SHIFT_REPEAT(38),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat3, 2), SHIFT_REPEAT(40),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat4, 2), SHIFT_REPEAT(46),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat5, 2), SHIFT_REPEAT(50),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat1, 2), SHIFT_REPEAT(70),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat2, 2), SHIFT_REPEAT(68),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat3, 2), SHIFT_REPEAT(34),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat4, 2), SHIFT_REPEAT(62),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tight_list_repeat5, 2), SHIFT_REPEAT(60),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_minus_loose, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_minus_loose, 2),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_plus_loose, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_plus_loose, 3),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_parenthethis_tight, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_parenthethis_tight, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_star_loose, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_star_loose, 2),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_star_tight, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_star_tight, 2),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_plus_loose, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_plus_loose, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_plus_tight, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_plus_tight, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_minus_tight, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_minus_tight, 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thematic_break, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thematic_break, 2),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atx_heading, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atx_heading, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indented_chunk, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indented_chunk, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fenced_code_block, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_code_block, 4),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_dot_tight, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_dot_tight, 2),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_quote, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_plus_tight, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_plus_tight, 3),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_dot_loose, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_dot_loose, 2),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_parenthethis_loose, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_parenthethis_loose, 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_minus_loose, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_minus_loose, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_minus_tight, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_minus_tight, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atx_heading, 3, .production_id = 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atx_heading, 3, .production_id = 3),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indented_chunk, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indented_chunk, 3),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_quote, 3),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_star_tight, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_star_tight, 3),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_star_loose, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_star_loose, 3),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_parenthethis_tight, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_parenthethis_tight, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_parenthethis_loose, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_parenthethis_loose, 3),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_dot_tight, 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_dot_tight, 3),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_code_block_repeat1, 1, .production_id = 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indented_code_block_repeat1, 1, .production_id = 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item_dot_loose, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item_dot_loose, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setext_heading, 3, .dynamic_precedence = 2, .production_id = 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setext_heading, 3, .dynamic_precedence = 2, .production_id = 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fenced_code_block, 6),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_code_block, 6),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fenced_code_block, 5),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_code_block, 5),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(301),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(285),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(306),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(298),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indented_chunk_repeat1, 2), SHIFT_REPEAT(309),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_chunk_repeat1, 2), SHIFT_REPEAT(309),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_chunk_repeat1, 2), SHIFT_REPEAT(313),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_chunk_repeat1, 2), SHIFT_REPEAT(290),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indented_chunk_repeat1, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [990] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(318),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_fence_content_repeat1, 2), SHIFT_REPEAT(312),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_fence_content_repeat1, 2), SHIFT_REPEAT(312),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_fence_content_repeat1, 2), SHIFT_REPEAT(314),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_fence_content_repeat1, 2),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(303),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(303),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_fence_content, 1),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1), SHIFT(359),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(308),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(308),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(311),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(311),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indented_chunk_repeat1, 1, .production_id = 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indented_chunk_repeat1, 1, .production_id = 1),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_fence_content_repeat1, 1, .production_id = 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_fence_content_repeat1, 1, .production_id = 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_info_string_repeat1, 2), SHIFT_REPEAT(319),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_info_string_repeat1, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_info_string_repeat1, 2), SHIFT_REPEAT(324),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_string, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setext_h1_underline, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setext_h2_underline, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_markdown_external_scanner_create(void);
void tree_sitter_markdown_external_scanner_destroy(void *);
bool tree_sitter_markdown_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_markdown_external_scanner_serialize(void *, char *);
void tree_sitter_markdown_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_markdown(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_markdown_external_scanner_create,
      tree_sitter_markdown_external_scanner_destroy,
      tree_sitter_markdown_external_scanner_scan,
      tree_sitter_markdown_external_scanner_serialize,
      tree_sitter_markdown_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
