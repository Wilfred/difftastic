#include "tree_sitter/parser.h"

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
#define STATE_COUNT 352
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 9
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_DOLLAR_EQ = 25,
  anon_sym_RBRACK = 26,
  anon_sym_GT = 27,
  anon_sym_TILDE = 28,
  anon_sym_PLUS = 29,
  anon_sym_PIPE = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_string_value_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_value_token2 = 45,
  aux_sym_integer_value_token1 = 46,
  aux_sym_float_value_token1 = 47,
  sym_unit = 48,
  anon_sym_DASH = 49,
  anon_sym_SLASH = 50,
  sym_identifier = 51,
  sym_at_keyword = 52,
  sym_js_comment = 53,
  sym_comment = 54,
  sym_plain_value = 55,
  sym__descendant_operator = 56,
  sym__pseudo_class_selector_colon = 57,
  sym___error_recovery = 58,
  sym_stylesheet = 59,
  sym_import_statement = 60,
  sym_media_statement = 61,
  sym_charset_statement = 62,
  sym_namespace_statement = 63,
  sym_keyframes_statement = 64,
  sym_keyframe_block_list = 65,
  sym_keyframe_block = 66,
  sym_supports_statement = 67,
  sym_postcss_statement = 68,
  sym_at_rule = 69,
  sym_rule_set = 70,
  sym_selectors = 71,
  sym_block = 72,
  sym__selector = 73,
  sym_universal_selector = 74,
  sym_class_selector = 75,
  sym_pseudo_class_selector = 76,
  sym_pseudo_element_selector = 77,
  sym_id_selector = 78,
  sym_attribute_selector = 79,
  sym_child_selector = 80,
  sym_descendant_selector = 81,
  sym_sibling_selector = 82,
  sym_adjacent_sibling_selector = 83,
  sym_namespace_selector = 84,
  sym_pseudo_class_arguments = 85,
  sym_pseudo_element_arguments = 86,
  sym_declaration = 87,
  sym_last_declaration = 88,
  sym__query = 89,
  sym_feature_query = 90,
  sym_parenthesized_query = 91,
  sym_binary_query = 92,
  sym_unary_query = 93,
  sym_selector_query = 94,
  sym__value = 95,
  sym_parenthesized_value = 96,
  sym_color_value = 97,
  sym_string_value = 98,
  sym_integer_value = 99,
  sym_float_value = 100,
  sym_grid_value = 101,
  sym_call_expression = 102,
  sym_binary_expression = 103,
  sym_arguments = 104,
  aux_sym_stylesheet_repeat1 = 105,
  aux_sym_import_statement_repeat1 = 106,
  aux_sym_keyframe_block_list_repeat1 = 107,
  aux_sym_postcss_statement_repeat1 = 108,
  aux_sym_selectors_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_pseudo_class_arguments_repeat1 = 111,
  aux_sym_declaration_repeat1 = 112,
  aux_sym_grid_value_repeat1 = 113,
  aux_sym_arguments_repeat1 = 114,
  alias_sym_class_name = 115,
  alias_sym_feature_name = 116,
  alias_sym_function_name = 117,
  alias_sym_id_name = 118,
  alias_sym_keyframes_name = 119,
  alias_sym_keyword_query = 120,
  alias_sym_namespace_name = 121,
  alias_sym_property_name = 122,
  alias_sym_tag_name = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = alias_sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = sym_identifier,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = sym_identifier,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    sym_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 26,
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
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
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
  [80] = 38,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 89,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 88,
  [111] = 104,
  [112] = 101,
  [113] = 113,
  [114] = 114,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 100,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 121,
  [124] = 124,
  [125] = 124,
  [126] = 126,
  [127] = 103,
  [128] = 128,
  [129] = 116,
  [130] = 96,
  [131] = 90,
  [132] = 132,
  [133] = 98,
  [134] = 91,
  [135] = 106,
  [136] = 132,
  [137] = 95,
  [138] = 103,
  [139] = 108,
  [140] = 118,
  [141] = 91,
  [142] = 126,
  [143] = 143,
  [144] = 86,
  [145] = 97,
  [146] = 105,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 143,
  [151] = 151,
  [152] = 152,
  [153] = 132,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 38,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 175,
  [180] = 178,
  [181] = 36,
  [182] = 38,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 67,
  [192] = 192,
  [193] = 157,
  [194] = 194,
  [195] = 114,
  [196] = 87,
  [197] = 194,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 204,
  [205] = 154,
  [206] = 206,
  [207] = 207,
  [208] = 159,
  [209] = 160,
  [210] = 161,
  [211] = 38,
  [212] = 156,
  [213] = 162,
  [214] = 164,
  [215] = 67,
  [216] = 163,
  [217] = 155,
  [218] = 158,
  [219] = 87,
  [220] = 114,
  [221] = 156,
  [222] = 154,
  [223] = 159,
  [224] = 160,
  [225] = 162,
  [226] = 164,
  [227] = 38,
  [228] = 161,
  [229] = 155,
  [230] = 163,
  [231] = 157,
  [232] = 158,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
  [237] = 234,
  [238] = 238,
  [239] = 238,
  [240] = 240,
  [241] = 241,
  [242] = 240,
  [243] = 236,
  [244] = 233,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 246,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 257,
  [260] = 260,
  [261] = 256,
  [262] = 256,
  [263] = 263,
  [264] = 264,
  [265] = 254,
  [266] = 255,
  [267] = 260,
  [268] = 268,
  [269] = 269,
  [270] = 269,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 108,
  [275] = 275,
  [276] = 273,
  [277] = 268,
  [278] = 104,
  [279] = 279,
  [280] = 273,
  [281] = 92,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 282,
  [290] = 290,
  [291] = 282,
  [292] = 288,
  [293] = 293,
  [294] = 114,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 297,
  [300] = 298,
  [301] = 301,
  [302] = 295,
  [303] = 303,
  [304] = 303,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 309,
  [311] = 311,
  [312] = 312,
  [313] = 303,
  [314] = 311,
  [315] = 303,
  [316] = 316,
  [317] = 317,
  [318] = 316,
  [319] = 312,
  [320] = 309,
  [321] = 321,
  [322] = 303,
  [323] = 311,
  [324] = 311,
  [325] = 303,
  [326] = 311,
  [327] = 317,
  [328] = 317,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 312,
  [333] = 333,
  [334] = 334,
  [335] = 321,
  [336] = 336,
  [337] = 334,
  [338] = 333,
  [339] = 339,
  [340] = 340,
  [341] = 333,
  [342] = 334,
  [343] = 343,
  [344] = 331,
  [345] = 333,
  [346] = 334,
  [347] = 333,
  [348] = 334,
  [349] = 333,
  [350] = 334,
  [351] = 311,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '~') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '~') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 's') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 's') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '{') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 's') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '{') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == ']') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == ']') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(312);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(309);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '}') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 64:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 65:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(314);
      END_STATE();
    case 66:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(177);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(309);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '/') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'y') ADVANCE(277);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == 'y') ADVANCE(278);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(65);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(311);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(315);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 67, .external_lex_state = 2},
  [2] = {.lex_state = 67, .external_lex_state = 2},
  [3] = {.lex_state = 67, .external_lex_state = 2},
  [4] = {.lex_state = 67, .external_lex_state = 2},
  [5] = {.lex_state = 67, .external_lex_state = 2},
  [6] = {.lex_state = 67, .external_lex_state = 2},
  [7] = {.lex_state = 67, .external_lex_state = 2},
  [8] = {.lex_state = 67, .external_lex_state = 2},
  [9] = {.lex_state = 67, .external_lex_state = 2},
  [10] = {.lex_state = 67, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3, .external_lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 67, .external_lex_state = 2},
  [27] = {.lex_state = 67, .external_lex_state = 2},
  [28] = {.lex_state = 10, .external_lex_state = 3},
  [29] = {.lex_state = 67, .external_lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 67, .external_lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 67, .external_lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 5, .external_lex_state = 3},
  [37] = {.lex_state = 67, .external_lex_state = 2},
  [38] = {.lex_state = 5, .external_lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 67, .external_lex_state = 2},
  [41] = {.lex_state = 67, .external_lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 67, .external_lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 9, .external_lex_state = 3},
  [46] = {.lex_state = 9, .external_lex_state = 3},
  [47] = {.lex_state = 9, .external_lex_state = 3},
  [48] = {.lex_state = 9, .external_lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 9, .external_lex_state = 3},
  [58] = {.lex_state = 9, .external_lex_state = 3},
  [59] = {.lex_state = 9, .external_lex_state = 3},
  [60] = {.lex_state = 9, .external_lex_state = 3},
  [61] = {.lex_state = 9, .external_lex_state = 3},
  [62] = {.lex_state = 9, .external_lex_state = 3},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 9, .external_lex_state = 3},
  [65] = {.lex_state = 9, .external_lex_state = 3},
  [66] = {.lex_state = 9, .external_lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 3},
  [70] = {.lex_state = 9, .external_lex_state = 3},
  [71] = {.lex_state = 9, .external_lex_state = 3},
  [72] = {.lex_state = 9, .external_lex_state = 3},
  [73] = {.lex_state = 9, .external_lex_state = 3},
  [74] = {.lex_state = 9, .external_lex_state = 3},
  [75] = {.lex_state = 9, .external_lex_state = 3},
  [76] = {.lex_state = 9, .external_lex_state = 3},
  [77] = {.lex_state = 9, .external_lex_state = 3},
  [78] = {.lex_state = 9, .external_lex_state = 3},
  [79] = {.lex_state = 9, .external_lex_state = 3},
  [80] = {.lex_state = 9, .external_lex_state = 3},
  [81] = {.lex_state = 9, .external_lex_state = 3},
  [82] = {.lex_state = 9, .external_lex_state = 3},
  [83] = {.lex_state = 9, .external_lex_state = 3},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 9, .external_lex_state = 3},
  [86] = {.lex_state = 67, .external_lex_state = 2},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 67, .external_lex_state = 2},
  [89] = {.lex_state = 67, .external_lex_state = 2},
  [90] = {.lex_state = 67, .external_lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 67, .external_lex_state = 2},
  [93] = {.lex_state = 67, .external_lex_state = 2},
  [94] = {.lex_state = 67, .external_lex_state = 2},
  [95] = {.lex_state = 67, .external_lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 67, .external_lex_state = 2},
  [98] = {.lex_state = 67, .external_lex_state = 2},
  [99] = {.lex_state = 67, .external_lex_state = 2},
  [100] = {.lex_state = 67, .external_lex_state = 2},
  [101] = {.lex_state = 67, .external_lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 67, .external_lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 67, .external_lex_state = 2},
  [107] = {.lex_state = 67, .external_lex_state = 2},
  [108] = {.lex_state = 67, .external_lex_state = 2},
  [109] = {.lex_state = 67, .external_lex_state = 2},
  [110] = {.lex_state = 67, .external_lex_state = 2},
  [111] = {.lex_state = 67, .external_lex_state = 2},
  [112] = {.lex_state = 67, .external_lex_state = 2},
  [113] = {.lex_state = 67, .external_lex_state = 2},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 67, .external_lex_state = 2},
  [116] = {.lex_state = 67, .external_lex_state = 2},
  [117] = {.lex_state = 67, .external_lex_state = 2},
  [118] = {.lex_state = 67, .external_lex_state = 2},
  [119] = {.lex_state = 67, .external_lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 67, .external_lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 67, .external_lex_state = 2},
  [125] = {.lex_state = 67, .external_lex_state = 2},
  [126] = {.lex_state = 67, .external_lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 67, .external_lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 67, .external_lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 67, .external_lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 67, .external_lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 67, .external_lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 67, .external_lex_state = 2},
  [140] = {.lex_state = 67, .external_lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 67, .external_lex_state = 2},
  [143] = {.lex_state = 67, .external_lex_state = 2},
  [144] = {.lex_state = 67, .external_lex_state = 2},
  [145] = {.lex_state = 67, .external_lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 67, .external_lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 67, .external_lex_state = 2},
  [150] = {.lex_state = 67, .external_lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 67, .external_lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 9, .external_lex_state = 3},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 9, .external_lex_state = 3},
  [170] = {.lex_state = 9, .external_lex_state = 3},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 9, .external_lex_state = 3},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 13, .external_lex_state = 3},
  [182] = {.lex_state = 13, .external_lex_state = 3},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 67, .external_lex_state = 3},
  [185] = {.lex_state = 67, .external_lex_state = 3},
  [186] = {.lex_state = 67, .external_lex_state = 3},
  [187] = {.lex_state = 67, .external_lex_state = 3},
  [188] = {.lex_state = 67, .external_lex_state = 3},
  [189] = {.lex_state = 67, .external_lex_state = 3},
  [190] = {.lex_state = 67, .external_lex_state = 3},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 67, .external_lex_state = 3},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 67, .external_lex_state = 3},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 67, .external_lex_state = 3},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 56},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 56},
  [239] = {.lex_state = 56},
  [240] = {.lex_state = 67},
  [241] = {.lex_state = 56},
  [242] = {.lex_state = 67},
  [243] = {.lex_state = 56},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 67},
  [256] = {.lex_state = 13},
  [257] = {.lex_state = 67},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 67},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 13},
  [265] = {.lex_state = 13},
  [266] = {.lex_state = 67},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 67},
  [270] = {.lex_state = 67},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 67},
  [273] = {.lex_state = 67},
  [274] = {.lex_state = 56},
  [275] = {.lex_state = 56},
  [276] = {.lex_state = 67},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 56},
  [279] = {.lex_state = 67},
  [280] = {.lex_state = 67},
  [281] = {.lex_state = 56},
  [282] = {.lex_state = 67},
  [283] = {.lex_state = 67},
  [284] = {.lex_state = 67},
  [285] = {.lex_state = 67},
  [286] = {.lex_state = 67},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 67},
  [289] = {.lex_state = 67},
  [290] = {.lex_state = 67},
  [291] = {.lex_state = 67},
  [292] = {.lex_state = 67},
  [293] = {.lex_state = 67},
  [294] = {.lex_state = 32},
  [295] = {.lex_state = 67},
  [296] = {.lex_state = 67},
  [297] = {.lex_state = 67},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 67},
  [300] = {.lex_state = 26},
  [301] = {.lex_state = 67},
  [302] = {.lex_state = 67},
  [303] = {.lex_state = 67},
  [304] = {.lex_state = 67},
  [305] = {.lex_state = 67},
  [306] = {.lex_state = 67},
  [307] = {.lex_state = 67},
  [308] = {.lex_state = 67},
  [309] = {.lex_state = 67},
  [310] = {.lex_state = 67},
  [311] = {.lex_state = 67},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 67},
  [314] = {.lex_state = 67},
  [315] = {.lex_state = 67},
  [316] = {.lex_state = 67},
  [317] = {.lex_state = 67},
  [318] = {.lex_state = 67},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 67},
  [321] = {.lex_state = 67},
  [322] = {.lex_state = 67},
  [323] = {.lex_state = 67},
  [324] = {.lex_state = 67},
  [325] = {.lex_state = 67},
  [326] = {.lex_state = 67},
  [327] = {.lex_state = 67},
  [328] = {.lex_state = 67},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 67},
  [331] = {.lex_state = 67},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 168},
  [334] = {.lex_state = 178},
  [335] = {.lex_state = 67},
  [336] = {.lex_state = 67},
  [337] = {.lex_state = 178},
  [338] = {.lex_state = 168},
  [339] = {.lex_state = 67},
  [340] = {.lex_state = 67},
  [341] = {.lex_state = 168},
  [342] = {.lex_state = 178},
  [343] = {.lex_state = 67},
  [344] = {.lex_state = 67},
  [345] = {.lex_state = 168},
  [346] = {.lex_state = 178},
  [347] = {.lex_state = 168},
  [348] = {.lex_state = 178},
  [349] = {.lex_state = 168},
  [350] = {.lex_state = 178},
  [351] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(336),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(297),
    [sym__selector] = STATE(189),
    [sym_universal_selector] = STATE(189),
    [sym_class_selector] = STATE(189),
    [sym_pseudo_class_selector] = STATE(189),
    [sym_pseudo_element_selector] = STATE(189),
    [sym_id_selector] = STATE(189),
    [sym_attribute_selector] = STATE(189),
    [sym_child_selector] = STATE(189),
    [sym_descendant_selector] = STATE(189),
    [sym_sibling_selector] = STATE(189),
    [sym_adjacent_sibling_selector] = STATE(189),
    [sym_namespace_selector] = STATE(189),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(189),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__pseudo_class_selector_colon] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    STATE(299), 1,
      sym_selectors,
    STATE(327), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [94] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_selectors,
    STATE(320), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [188] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_selectors,
    STATE(309), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [282] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_selectors,
    STATE(310), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [376] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_selectors,
    STATE(317), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [470] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_selectors,
    STATE(328), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [564] = 22,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_ATsupports,
    ACTIONS(91), 1,
      sym_nesting_selector,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_at_keyword,
    ACTIONS(121), 1,
      sym__pseudo_class_selector_colon,
    STATE(299), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [655] = 22,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_ATimport,
    ACTIONS(129), 1,
      anon_sym_ATmedia,
    ACTIONS(132), 1,
      anon_sym_ATcharset,
    ACTIONS(135), 1,
      anon_sym_ATnamespace,
    ACTIONS(141), 1,
      anon_sym_ATsupports,
    ACTIONS(144), 1,
      sym_nesting_selector,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_COLON_COLON,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_at_keyword,
    ACTIONS(174), 1,
      sym__pseudo_class_selector_colon,
    STATE(297), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [745] = 22,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_at_keyword,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(189), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [835] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(179), 1,
      sym_nesting_selector,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(36), 1,
      sym_string_value,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(186), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [920] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(205), 1,
      sym_nesting_selector,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(36), 1,
      sym_string_value,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(188), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1005] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(209), 1,
      sym_nesting_selector,
    STATE(36), 1,
      sym_string_value,
    STATE(44), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(192), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1087] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_important,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_plain_value,
    STATE(174), 1,
      sym_namespace_selector,
    STATE(181), 1,
      sym_string_value,
    STATE(244), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(206), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1168] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(235), 1,
      sym_plain_value,
    STATE(174), 1,
      sym_namespace_selector,
    STATE(181), 1,
      sym_string_value,
    STATE(235), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(206), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1249] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(117), 1,
      sym_block,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(237), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1324] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_important,
    ACTIONS(263), 1,
      anon_sym_LPAREN2,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      sym_plain_value,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(261), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1387] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_LPAREN2,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym_important,
    ACTIONS(275), 1,
      sym_plain_value,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(262), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1450] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1518] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      sym_important,
    STATE(49), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1583] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(297), 1,
      sym_important,
    STATE(50), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1648] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_arguments,
    ACTIONS(303), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(301), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(307), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(299), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1692] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(280), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1753] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1814] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(276), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1875] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(317), 1,
      sym_nesting_selector,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(72), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1925] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(170), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(206), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [1977] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_arguments,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [2023] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(204), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2073] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_important,
    ACTIONS(345), 1,
      anon_sym_LPAREN2,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      aux_sym_integer_value_token1,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2131] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(66), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2181] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(290), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2241] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(372), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(71), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2291] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_important,
    ACTIONS(385), 1,
      anon_sym_LPAREN2,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_integer_value_token1,
    ACTIONS(397), 1,
      aux_sym_float_value_token1,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(403), 1,
      sym_plain_value,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(374), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2347] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(285), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2407] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(410), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(414), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(408), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2445] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(416), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(73), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2495] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(420), 8,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(418), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2529] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2589] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(174), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(206), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2641] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(430), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(190), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2691] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(432), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2747] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(434), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(83), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2797] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2852] = 5,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(438), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2887] = 5,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(444), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2922] = 5,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(450), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2957] = 5,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(454), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2992] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3049] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3106] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3160] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3214] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3268] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3322] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_arguments,
    ACTIONS(474), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(472), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(301), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(307), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3362] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3416] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(478), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3445] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(482), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3474] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(486), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3503] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(490), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3532] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(494), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3561] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(498), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3590] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3641] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(502), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3670] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(506), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3699] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(510), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3730] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_arguments,
    ACTIONS(307), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(301), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3765] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3816] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(516), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3845] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(520), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3874] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(524), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3905] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(528), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3936] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(532), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3967] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(536), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3996] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(540), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4025] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(544), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(548), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4083] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(552), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4112] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(556), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4141] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(418), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4170] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(560), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4199] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(299), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4228] = 4,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(564), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4259] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(568), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4288] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(572), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4317] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(576), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(578), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4345] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_unit,
    ACTIONS(582), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(580), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [4377] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(588), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4405] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(590), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(592), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4433] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4461] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(602), 1,
      sym_important,
    ACTIONS(604), 1,
      anon_sym_LPAREN2,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      aux_sym_integer_value_token1,
    ACTIONS(612), 1,
      aux_sym_float_value_token1,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(616), 1,
      sym_plain_value,
    STATE(210), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4509] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(620), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4537] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(620), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4565] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(622), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(624), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4593] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4621] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_LPAREN2,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      aux_sym_integer_value_token1,
    ACTIONS(612), 1,
      aux_sym_float_value_token1,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(630), 1,
      sym_important,
    ACTIONS(632), 1,
      sym_plain_value,
    STATE(178), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4669] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(636), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(634), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4697] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(640), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(638), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4725] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(590), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(592), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4753] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(642), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4781] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(648), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(646), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4809] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      sym_important,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(654), 1,
      sym_plain_value,
    STATE(258), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4857] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_important,
    ACTIONS(275), 1,
      sym_plain_value,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(262), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4905] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(658), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(656), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4933] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(660), 1,
      sym_important,
    ACTIONS(662), 1,
      sym_plain_value,
    STATE(265), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4981] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(664), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(666), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5009] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(668), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5037] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5065] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(668), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5093] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(588), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5121] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(658), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(656), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5149] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(648), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(646), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5177] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(678), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5205] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_unit,
    ACTIONS(682), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(680), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5237] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(678), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5265] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(688), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(686), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5293] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(692), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5321] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(694), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(696), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5349] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(642), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5377] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(698), 1,
      sym_important,
    ACTIONS(700), 1,
      sym_plain_value,
    STATE(264), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5425] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(702), 1,
      sym_important,
    ACTIONS(704), 1,
      sym_plain_value,
    STATE(21), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5473] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(692), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5501] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(706), 1,
      sym_important,
    ACTIONS(708), 1,
      sym_plain_value,
    STATE(20), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5549] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(712), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(710), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5577] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(712), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(710), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5605] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(716), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5633] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(718), 1,
      sym_important,
    ACTIONS(720), 1,
      sym_plain_value,
    STATE(256), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5681] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(722), 1,
      sym_important,
    ACTIONS(724), 1,
      sym_plain_value,
    STATE(245), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5729] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(688), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(686), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5757] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_LPAREN2,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      aux_sym_integer_value_token1,
    ACTIONS(612), 1,
      aux_sym_float_value_token1,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(726), 1,
      sym_important,
    ACTIONS(728), 1,
      sym_plain_value,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5805] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5833] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(730), 1,
      sym_important,
    ACTIONS(732), 1,
      sym_plain_value,
    STATE(233), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5881] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(640), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(638), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5909] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(734), 1,
      sym_important,
    ACTIONS(736), 1,
      sym_plain_value,
    STATE(228), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5957] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(664), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(666), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5985] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(235), 1,
      sym_plain_value,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(235), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6033] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6061] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_important,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_plain_value,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(261), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6109] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6137] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(694), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(696), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6165] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(738), 1,
      sym_important,
    ACTIONS(740), 1,
      sym_plain_value,
    STATE(161), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6213] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(716), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6241] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(744), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(742), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6269] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(576), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(578), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6297] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(636), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(634), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6325] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(746), 1,
      sym_important,
    ACTIONS(748), 1,
      sym_plain_value,
    STATE(254), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6373] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(750), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(752), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6401] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(754), 1,
      sym_important,
    ACTIONS(756), 1,
      sym_plain_value,
    STATE(166), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6449] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(750), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(752), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6477] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(744), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(742), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6505] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(758), 1,
      sym_important,
    ACTIONS(760), 1,
      sym_plain_value,
    STATE(19), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6553] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(692), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6581] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_important,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(231), 1,
      sym_plain_value,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(244), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6629] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(764), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(762), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6658] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(768), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(766), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6687] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(772), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(770), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6716] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(776), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(774), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6745] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(780), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(778), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6774] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(784), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(782), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6803] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(788), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(786), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6832] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(792), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(790), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6861] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(796), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(794), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6890] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(798), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6919] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(802), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6948] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(420), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(418), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6977] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(806), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(334), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7009] = 5,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7039] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(810), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(808), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7071] = 5,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(812), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7101] = 5,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(812), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(408), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7131] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(818), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(816), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7163] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7195] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7227] = 5,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(408), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7257] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7286] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7315] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7344] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(826), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(830), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(260), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7383] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7412] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(826), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(830), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(267), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7451] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(410), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(408), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7479] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 14,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_DASH,
  [7505] = 9,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(234), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7540] = 3,
    ACTIONS(842), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7562] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7584] = 14,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    STATE(285), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7628] = 3,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7650] = 14,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    STATE(290), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7694] = 14,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_LBRACE,
    STATE(283), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7738] = 12,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [7777] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(307), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7804] = 12,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7843] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(774), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(776), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7865] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(268), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7891] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_unit,
    ACTIONS(680), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(682), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7915] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_unit,
    ACTIONS(580), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(582), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7939] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(277), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7965] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(250), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7991] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(263), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8017] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(246), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8043] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(878), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8069] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8095] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(828), 1,
      anon_sym_LPAREN2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(251), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8121] = 12,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8159] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(762), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(764), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8180] = 11,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(848), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_TILDE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_PIPE,
    ACTIONS(860), 1,
      sym__descendant_operator,
    ACTIONS(862), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8215] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(882), 1,
      anon_sym_COLON,
    STATE(223), 1,
      sym_arguments,
    ACTIONS(301), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(472), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8244] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(782), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(784), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8265] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(788), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8286] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(790), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(792), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8307] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(420), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8328] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(770), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(772), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8349] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(796), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8370] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(804), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8391] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_arguments,
    ACTIONS(301), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8416] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(798), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(800), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8437] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(766), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(768), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8458] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(780), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8479] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SLASH,
    ACTIONS(884), 1,
      sym_unit,
    ACTIONS(580), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8501] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
    ACTIONS(886), 1,
      sym_unit,
    ACTIONS(680), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8523] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SLASH,
    ACTIONS(770), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8542] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SLASH,
    ACTIONS(762), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8561] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SLASH,
    ACTIONS(782), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8580] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SLASH,
    ACTIONS(786), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8599] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(794), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8618] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(802), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8656] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_SLASH,
    ACTIONS(790), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8675] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SLASH,
    ACTIONS(766), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8694] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SLASH,
    ACTIONS(798), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8713] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    ACTIONS(774), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8732] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SLASH,
    ACTIONS(778), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8751] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    STATE(291), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8775] = 7,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_block,
    STATE(266), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [8799] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8823] = 6,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    ACTIONS(908), 1,
      aux_sym_integer_value_token1,
    STATE(296), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      sym_from,
      sym_to,
    STATE(241), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [8845] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [8869] = 6,
    ACTIONS(908), 1,
      aux_sym_integer_value_token1,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      sym_from,
      sym_to,
    STATE(236), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [8891] = 6,
    ACTIONS(908), 1,
      aux_sym_integer_value_token1,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      sym_from,
      sym_to,
    STATE(243), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [8913] = 7,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    ACTIONS(916), 1,
      sym_identifier,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(335), 2,
      sym_string_value,
      sym_call_expression,
  [8937] = 6,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(923), 1,
      aux_sym_integer_value_token1,
    STATE(296), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(920), 2,
      sym_from,
      sym_to,
    STATE(241), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [8959] = 7,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    ACTIONS(916), 1,
      sym_identifier,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(321), 2,
      sym_string_value,
      sym_call_expression,
  [8983] = 6,
    ACTIONS(908), 1,
      aux_sym_integer_value_token1,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      sym_from,
      sym_to,
    STATE(241), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9005] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(928), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9029] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(930), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9048] = 6,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9069] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(932), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9082] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9095] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9108] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(936), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9121] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_block,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9142] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9155] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(940), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9168] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9186] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_block,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9206] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9224] = 5,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(948), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(318), 2,
      sym_string_value,
      sym_call_expression,
  [9242] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9260] = 5,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(316), 2,
      sym_string_value,
      sym_call_expression,
  [9278] = 5,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9296] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9314] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9332] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(960), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9346] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9364] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(964), 1,
      anon_sym_SEMI,
    ACTIONS(890), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9382] = 6,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_block,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9402] = 5,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    STATE(292), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9420] = 4,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9435] = 5,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_block,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9452] = 5,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_block,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9469] = 3,
    ACTIONS(882), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9482] = 4,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9497] = 4,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9512] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(674), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9523] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9534] = 4,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9549] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9564] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9575] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9590] = 4,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9605] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(620), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9616] = 4,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9630] = 4,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    STATE(286), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9644] = 4,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9658] = 4,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9672] = 4,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9686] = 3,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_and,
      anon_sym_or,
  [9698] = 4,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9712] = 4,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9726] = 4,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9740] = 4,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9754] = 4,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9768] = 4,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9782] = 3,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(1011), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9793] = 3,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9804] = 3,
    ACTIONS(1015), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9815] = 3,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9826] = 3,
    ACTIONS(1017), 1,
      aux_sym_color_value_token1,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9837] = 3,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9848] = 3,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(1021), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9859] = 3,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9870] = 3,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9881] = 2,
    ACTIONS(1025), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9889] = 2,
    ACTIONS(1027), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9897] = 2,
    ACTIONS(1029), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9905] = 2,
    ACTIONS(1031), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9913] = 2,
    ACTIONS(1033), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9921] = 2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9929] = 2,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9937] = 2,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9945] = 2,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9953] = 2,
    ACTIONS(1043), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9961] = 2,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9969] = 2,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9977] = 2,
    ACTIONS(1041), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9985] = 2,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9993] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10001] = 2,
    ACTIONS(1049), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10009] = 2,
    ACTIONS(1051), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10017] = 2,
    ACTIONS(1053), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10025] = 2,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10033] = 2,
    ACTIONS(1057), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10041] = 2,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10049] = 2,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10057] = 2,
    ACTIONS(1059), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10065] = 2,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10073] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10081] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10089] = 2,
    ACTIONS(1061), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10097] = 2,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10105] = 2,
    ACTIONS(1065), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10113] = 2,
    ACTIONS(1067), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10121] = 2,
    ACTIONS(1069), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10129] = 2,
    ACTIONS(1071), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10137] = 2,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10145] = 2,
    ACTIONS(1075), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10153] = 2,
    ACTIONS(1077), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10161] = 2,
    ACTIONS(1079), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10169] = 2,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10177] = 2,
    ACTIONS(1083), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10185] = 2,
    ACTIONS(1085), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10193] = 2,
    ACTIONS(1087), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10201] = 2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10209] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10217] = 2,
    ACTIONS(1093), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10225] = 2,
    ACTIONS(1095), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10233] = 2,
    ACTIONS(1097), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10241] = 2,
    ACTIONS(1099), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10249] = 2,
    ACTIONS(1101), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10257] = 2,
    ACTIONS(1103), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10265] = 2,
    ACTIONS(1027), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 470,
  [SMALL_STATE(8)] = 564,
  [SMALL_STATE(9)] = 655,
  [SMALL_STATE(10)] = 745,
  [SMALL_STATE(11)] = 835,
  [SMALL_STATE(12)] = 920,
  [SMALL_STATE(13)] = 1005,
  [SMALL_STATE(14)] = 1087,
  [SMALL_STATE(15)] = 1168,
  [SMALL_STATE(16)] = 1249,
  [SMALL_STATE(17)] = 1324,
  [SMALL_STATE(18)] = 1387,
  [SMALL_STATE(19)] = 1450,
  [SMALL_STATE(20)] = 1518,
  [SMALL_STATE(21)] = 1583,
  [SMALL_STATE(22)] = 1648,
  [SMALL_STATE(23)] = 1692,
  [SMALL_STATE(24)] = 1753,
  [SMALL_STATE(25)] = 1814,
  [SMALL_STATE(26)] = 1875,
  [SMALL_STATE(27)] = 1925,
  [SMALL_STATE(28)] = 1977,
  [SMALL_STATE(29)] = 2023,
  [SMALL_STATE(30)] = 2073,
  [SMALL_STATE(31)] = 2131,
  [SMALL_STATE(32)] = 2181,
  [SMALL_STATE(33)] = 2241,
  [SMALL_STATE(34)] = 2291,
  [SMALL_STATE(35)] = 2347,
  [SMALL_STATE(36)] = 2407,
  [SMALL_STATE(37)] = 2445,
  [SMALL_STATE(38)] = 2495,
  [SMALL_STATE(39)] = 2529,
  [SMALL_STATE(40)] = 2589,
  [SMALL_STATE(41)] = 2641,
  [SMALL_STATE(42)] = 2691,
  [SMALL_STATE(43)] = 2747,
  [SMALL_STATE(44)] = 2797,
  [SMALL_STATE(45)] = 2852,
  [SMALL_STATE(46)] = 2887,
  [SMALL_STATE(47)] = 2922,
  [SMALL_STATE(48)] = 2957,
  [SMALL_STATE(49)] = 2992,
  [SMALL_STATE(50)] = 3049,
  [SMALL_STATE(51)] = 3106,
  [SMALL_STATE(52)] = 3160,
  [SMALL_STATE(53)] = 3214,
  [SMALL_STATE(54)] = 3268,
  [SMALL_STATE(55)] = 3322,
  [SMALL_STATE(56)] = 3362,
  [SMALL_STATE(57)] = 3416,
  [SMALL_STATE(58)] = 3445,
  [SMALL_STATE(59)] = 3474,
  [SMALL_STATE(60)] = 3503,
  [SMALL_STATE(61)] = 3532,
  [SMALL_STATE(62)] = 3561,
  [SMALL_STATE(63)] = 3590,
  [SMALL_STATE(64)] = 3641,
  [SMALL_STATE(65)] = 3670,
  [SMALL_STATE(66)] = 3699,
  [SMALL_STATE(67)] = 3730,
  [SMALL_STATE(68)] = 3765,
  [SMALL_STATE(69)] = 3816,
  [SMALL_STATE(70)] = 3845,
  [SMALL_STATE(71)] = 3874,
  [SMALL_STATE(72)] = 3905,
  [SMALL_STATE(73)] = 3936,
  [SMALL_STATE(74)] = 3967,
  [SMALL_STATE(75)] = 3996,
  [SMALL_STATE(76)] = 4025,
  [SMALL_STATE(77)] = 4054,
  [SMALL_STATE(78)] = 4083,
  [SMALL_STATE(79)] = 4112,
  [SMALL_STATE(80)] = 4141,
  [SMALL_STATE(81)] = 4170,
  [SMALL_STATE(82)] = 4199,
  [SMALL_STATE(83)] = 4228,
  [SMALL_STATE(84)] = 4259,
  [SMALL_STATE(85)] = 4288,
  [SMALL_STATE(86)] = 4317,
  [SMALL_STATE(87)] = 4345,
  [SMALL_STATE(88)] = 4377,
  [SMALL_STATE(89)] = 4405,
  [SMALL_STATE(90)] = 4433,
  [SMALL_STATE(91)] = 4461,
  [SMALL_STATE(92)] = 4509,
  [SMALL_STATE(93)] = 4537,
  [SMALL_STATE(94)] = 4565,
  [SMALL_STATE(95)] = 4593,
  [SMALL_STATE(96)] = 4621,
  [SMALL_STATE(97)] = 4669,
  [SMALL_STATE(98)] = 4697,
  [SMALL_STATE(99)] = 4725,
  [SMALL_STATE(100)] = 4753,
  [SMALL_STATE(101)] = 4781,
  [SMALL_STATE(102)] = 4809,
  [SMALL_STATE(103)] = 4857,
  [SMALL_STATE(104)] = 4905,
  [SMALL_STATE(105)] = 4933,
  [SMALL_STATE(106)] = 4981,
  [SMALL_STATE(107)] = 5009,
  [SMALL_STATE(108)] = 5037,
  [SMALL_STATE(109)] = 5065,
  [SMALL_STATE(110)] = 5093,
  [SMALL_STATE(111)] = 5121,
  [SMALL_STATE(112)] = 5149,
  [SMALL_STATE(113)] = 5177,
  [SMALL_STATE(114)] = 5205,
  [SMALL_STATE(115)] = 5237,
  [SMALL_STATE(116)] = 5265,
  [SMALL_STATE(117)] = 5293,
  [SMALL_STATE(118)] = 5321,
  [SMALL_STATE(119)] = 5349,
  [SMALL_STATE(120)] = 5377,
  [SMALL_STATE(121)] = 5425,
  [SMALL_STATE(122)] = 5473,
  [SMALL_STATE(123)] = 5501,
  [SMALL_STATE(124)] = 5549,
  [SMALL_STATE(125)] = 5577,
  [SMALL_STATE(126)] = 5605,
  [SMALL_STATE(127)] = 5633,
  [SMALL_STATE(128)] = 5681,
  [SMALL_STATE(129)] = 5729,
  [SMALL_STATE(130)] = 5757,
  [SMALL_STATE(131)] = 5805,
  [SMALL_STATE(132)] = 5833,
  [SMALL_STATE(133)] = 5881,
  [SMALL_STATE(134)] = 5909,
  [SMALL_STATE(135)] = 5957,
  [SMALL_STATE(136)] = 5985,
  [SMALL_STATE(137)] = 6033,
  [SMALL_STATE(138)] = 6061,
  [SMALL_STATE(139)] = 6109,
  [SMALL_STATE(140)] = 6137,
  [SMALL_STATE(141)] = 6165,
  [SMALL_STATE(142)] = 6213,
  [SMALL_STATE(143)] = 6241,
  [SMALL_STATE(144)] = 6269,
  [SMALL_STATE(145)] = 6297,
  [SMALL_STATE(146)] = 6325,
  [SMALL_STATE(147)] = 6373,
  [SMALL_STATE(148)] = 6401,
  [SMALL_STATE(149)] = 6449,
  [SMALL_STATE(150)] = 6477,
  [SMALL_STATE(151)] = 6505,
  [SMALL_STATE(152)] = 6553,
  [SMALL_STATE(153)] = 6581,
  [SMALL_STATE(154)] = 6629,
  [SMALL_STATE(155)] = 6658,
  [SMALL_STATE(156)] = 6687,
  [SMALL_STATE(157)] = 6716,
  [SMALL_STATE(158)] = 6745,
  [SMALL_STATE(159)] = 6774,
  [SMALL_STATE(160)] = 6803,
  [SMALL_STATE(161)] = 6832,
  [SMALL_STATE(162)] = 6861,
  [SMALL_STATE(163)] = 6890,
  [SMALL_STATE(164)] = 6919,
  [SMALL_STATE(165)] = 6948,
  [SMALL_STATE(166)] = 6977,
  [SMALL_STATE(167)] = 7009,
  [SMALL_STATE(168)] = 7039,
  [SMALL_STATE(169)] = 7071,
  [SMALL_STATE(170)] = 7101,
  [SMALL_STATE(171)] = 7131,
  [SMALL_STATE(172)] = 7163,
  [SMALL_STATE(173)] = 7195,
  [SMALL_STATE(174)] = 7227,
  [SMALL_STATE(175)] = 7257,
  [SMALL_STATE(176)] = 7286,
  [SMALL_STATE(177)] = 7315,
  [SMALL_STATE(178)] = 7344,
  [SMALL_STATE(179)] = 7383,
  [SMALL_STATE(180)] = 7412,
  [SMALL_STATE(181)] = 7451,
  [SMALL_STATE(182)] = 7479,
  [SMALL_STATE(183)] = 7505,
  [SMALL_STATE(184)] = 7540,
  [SMALL_STATE(185)] = 7562,
  [SMALL_STATE(186)] = 7584,
  [SMALL_STATE(187)] = 7628,
  [SMALL_STATE(188)] = 7650,
  [SMALL_STATE(189)] = 7694,
  [SMALL_STATE(190)] = 7738,
  [SMALL_STATE(191)] = 7777,
  [SMALL_STATE(192)] = 7804,
  [SMALL_STATE(193)] = 7843,
  [SMALL_STATE(194)] = 7865,
  [SMALL_STATE(195)] = 7891,
  [SMALL_STATE(196)] = 7915,
  [SMALL_STATE(197)] = 7939,
  [SMALL_STATE(198)] = 7965,
  [SMALL_STATE(199)] = 7991,
  [SMALL_STATE(200)] = 8017,
  [SMALL_STATE(201)] = 8043,
  [SMALL_STATE(202)] = 8069,
  [SMALL_STATE(203)] = 8095,
  [SMALL_STATE(204)] = 8121,
  [SMALL_STATE(205)] = 8159,
  [SMALL_STATE(206)] = 8180,
  [SMALL_STATE(207)] = 8215,
  [SMALL_STATE(208)] = 8244,
  [SMALL_STATE(209)] = 8265,
  [SMALL_STATE(210)] = 8286,
  [SMALL_STATE(211)] = 8307,
  [SMALL_STATE(212)] = 8328,
  [SMALL_STATE(213)] = 8349,
  [SMALL_STATE(214)] = 8370,
  [SMALL_STATE(215)] = 8391,
  [SMALL_STATE(216)] = 8416,
  [SMALL_STATE(217)] = 8437,
  [SMALL_STATE(218)] = 8458,
  [SMALL_STATE(219)] = 8479,
  [SMALL_STATE(220)] = 8501,
  [SMALL_STATE(221)] = 8523,
  [SMALL_STATE(222)] = 8542,
  [SMALL_STATE(223)] = 8561,
  [SMALL_STATE(224)] = 8580,
  [SMALL_STATE(225)] = 8599,
  [SMALL_STATE(226)] = 8618,
  [SMALL_STATE(227)] = 8637,
  [SMALL_STATE(228)] = 8656,
  [SMALL_STATE(229)] = 8675,
  [SMALL_STATE(230)] = 8694,
  [SMALL_STATE(231)] = 8713,
  [SMALL_STATE(232)] = 8732,
  [SMALL_STATE(233)] = 8751,
  [SMALL_STATE(234)] = 8775,
  [SMALL_STATE(235)] = 8799,
  [SMALL_STATE(236)] = 8823,
  [SMALL_STATE(237)] = 8845,
  [SMALL_STATE(238)] = 8869,
  [SMALL_STATE(239)] = 8891,
  [SMALL_STATE(240)] = 8913,
  [SMALL_STATE(241)] = 8937,
  [SMALL_STATE(242)] = 8959,
  [SMALL_STATE(243)] = 8983,
  [SMALL_STATE(244)] = 9005,
  [SMALL_STATE(245)] = 9029,
  [SMALL_STATE(246)] = 9048,
  [SMALL_STATE(247)] = 9069,
  [SMALL_STATE(248)] = 9082,
  [SMALL_STATE(249)] = 9095,
  [SMALL_STATE(250)] = 9108,
  [SMALL_STATE(251)] = 9121,
  [SMALL_STATE(252)] = 9142,
  [SMALL_STATE(253)] = 9155,
  [SMALL_STATE(254)] = 9168,
  [SMALL_STATE(255)] = 9186,
  [SMALL_STATE(256)] = 9206,
  [SMALL_STATE(257)] = 9224,
  [SMALL_STATE(258)] = 9242,
  [SMALL_STATE(259)] = 9260,
  [SMALL_STATE(260)] = 9278,
  [SMALL_STATE(261)] = 9296,
  [SMALL_STATE(262)] = 9314,
  [SMALL_STATE(263)] = 9332,
  [SMALL_STATE(264)] = 9346,
  [SMALL_STATE(265)] = 9364,
  [SMALL_STATE(266)] = 9382,
  [SMALL_STATE(267)] = 9402,
  [SMALL_STATE(268)] = 9420,
  [SMALL_STATE(269)] = 9435,
  [SMALL_STATE(270)] = 9452,
  [SMALL_STATE(271)] = 9469,
  [SMALL_STATE(272)] = 9482,
  [SMALL_STATE(273)] = 9497,
  [SMALL_STATE(274)] = 9512,
  [SMALL_STATE(275)] = 9523,
  [SMALL_STATE(276)] = 9534,
  [SMALL_STATE(277)] = 9549,
  [SMALL_STATE(278)] = 9564,
  [SMALL_STATE(279)] = 9575,
  [SMALL_STATE(280)] = 9590,
  [SMALL_STATE(281)] = 9605,
  [SMALL_STATE(282)] = 9616,
  [SMALL_STATE(283)] = 9630,
  [SMALL_STATE(284)] = 9644,
  [SMALL_STATE(285)] = 9658,
  [SMALL_STATE(286)] = 9672,
  [SMALL_STATE(287)] = 9686,
  [SMALL_STATE(288)] = 9698,
  [SMALL_STATE(289)] = 9712,
  [SMALL_STATE(290)] = 9726,
  [SMALL_STATE(291)] = 9740,
  [SMALL_STATE(292)] = 9754,
  [SMALL_STATE(293)] = 9768,
  [SMALL_STATE(294)] = 9782,
  [SMALL_STATE(295)] = 9793,
  [SMALL_STATE(296)] = 9804,
  [SMALL_STATE(297)] = 9815,
  [SMALL_STATE(298)] = 9826,
  [SMALL_STATE(299)] = 9837,
  [SMALL_STATE(300)] = 9848,
  [SMALL_STATE(301)] = 9859,
  [SMALL_STATE(302)] = 9870,
  [SMALL_STATE(303)] = 9881,
  [SMALL_STATE(304)] = 9889,
  [SMALL_STATE(305)] = 9897,
  [SMALL_STATE(306)] = 9905,
  [SMALL_STATE(307)] = 9913,
  [SMALL_STATE(308)] = 9921,
  [SMALL_STATE(309)] = 9929,
  [SMALL_STATE(310)] = 9937,
  [SMALL_STATE(311)] = 9945,
  [SMALL_STATE(312)] = 9953,
  [SMALL_STATE(313)] = 9961,
  [SMALL_STATE(314)] = 9969,
  [SMALL_STATE(315)] = 9977,
  [SMALL_STATE(316)] = 9985,
  [SMALL_STATE(317)] = 9993,
  [SMALL_STATE(318)] = 10001,
  [SMALL_STATE(319)] = 10009,
  [SMALL_STATE(320)] = 10017,
  [SMALL_STATE(321)] = 10025,
  [SMALL_STATE(322)] = 10033,
  [SMALL_STATE(323)] = 10041,
  [SMALL_STATE(324)] = 10049,
  [SMALL_STATE(325)] = 10057,
  [SMALL_STATE(326)] = 10065,
  [SMALL_STATE(327)] = 10073,
  [SMALL_STATE(328)] = 10081,
  [SMALL_STATE(329)] = 10089,
  [SMALL_STATE(330)] = 10097,
  [SMALL_STATE(331)] = 10105,
  [SMALL_STATE(332)] = 10113,
  [SMALL_STATE(333)] = 10121,
  [SMALL_STATE(334)] = 10129,
  [SMALL_STATE(335)] = 10137,
  [SMALL_STATE(336)] = 10145,
  [SMALL_STATE(337)] = 10153,
  [SMALL_STATE(338)] = 10161,
  [SMALL_STATE(339)] = 10169,
  [SMALL_STATE(340)] = 10177,
  [SMALL_STATE(341)] = 10185,
  [SMALL_STATE(342)] = 10193,
  [SMALL_STATE(343)] = 10201,
  [SMALL_STATE(344)] = 10209,
  [SMALL_STATE(345)] = 10217,
  [SMALL_STATE(346)] = 10225,
  [SMALL_STATE(347)] = 10233,
  [SMALL_STATE(348)] = 10241,
  [SMALL_STATE(349)] = 10249,
  [SMALL_STATE(350)] = 10257,
  [SMALL_STATE(351)] = 10265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(203),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(194),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(189),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(343),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(340),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(339),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(338),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(337),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(187),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(96),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(200),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(105),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(257),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(344),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(197),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(189),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(69),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(343),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(340),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(339),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(40),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(338),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(337),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(185),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(183),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(330),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(148),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(312),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(153),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(345),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(346),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(114),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(67),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(312),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(153),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(171),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(138),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(345),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(346),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(114),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(87),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(67),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(171),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(296),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(294),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(68),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(199),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(128),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(41),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1075] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
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
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
