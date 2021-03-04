#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 278
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 9
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum {
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
  anon_sym_COLON = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_POUND = 19,
  anon_sym_LBRACK = 20,
  anon_sym_EQ = 21,
  anon_sym_TILDE_EQ = 22,
  anon_sym_CARET_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_DOLLAR_EQ = 26,
  anon_sym_RBRACK = 27,
  anon_sym_GT = 28,
  anon_sym_TILDE = 29,
  anon_sym_PLUS = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_important = 33,
  anon_sym_LPAREN2 = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_not = 37,
  anon_sym_only = 38,
  anon_sym_selector = 39,
  aux_sym_color_value_token1 = 40,
  sym_string_value = 41,
  aux_sym_integer_value_token1 = 42,
  aux_sym_float_value_token1 = 43,
  sym_unit = 44,
  anon_sym_DASH = 45,
  anon_sym_SLASH = 46,
  sym_identifier = 47,
  sym_at_keyword = 48,
  sym_comment = 49,
  sym_plain_value = 50,
  sym__descendant_operator = 51,
  sym_stylesheet = 52,
  sym_import_statement = 53,
  sym_media_statement = 54,
  sym_charset_statement = 55,
  sym_namespace_statement = 56,
  sym_keyframes_statement = 57,
  sym_keyframe_block_list = 58,
  sym_keyframe_block = 59,
  sym_supports_statement = 60,
  sym_at_rule = 61,
  sym_rule_set = 62,
  sym_selectors = 63,
  sym_block = 64,
  sym__selector = 65,
  sym_universal_selector = 66,
  sym_class_selector = 67,
  sym_pseudo_class_selector = 68,
  sym_pseudo_element_selector = 69,
  sym_id_selector = 70,
  sym_attribute_selector = 71,
  sym_child_selector = 72,
  sym_descendant_selector = 73,
  sym_sibling_selector = 74,
  sym_adjacent_sibling_selector = 75,
  sym_pseudo_class_arguments = 76,
  sym_declaration = 77,
  sym_last_declaration = 78,
  sym__query = 79,
  sym_feature_query = 80,
  sym_parenthesized_query = 81,
  sym_binary_query = 82,
  sym_unary_query = 83,
  sym_selector_query = 84,
  sym__value = 85,
  sym_parenthesized_value = 86,
  sym_color_value = 87,
  sym_integer_value = 88,
  sym_float_value = 89,
  sym_call_expression = 90,
  sym_binary_expression = 91,
  sym_arguments = 92,
  aux_sym_stylesheet_repeat1 = 93,
  aux_sym_import_statement_repeat1 = 94,
  aux_sym_keyframe_block_list_repeat1 = 95,
  aux_sym_selectors_repeat1 = 96,
  aux_sym_block_repeat1 = 97,
  aux_sym_pseudo_class_arguments_repeat1 = 98,
  aux_sym_pseudo_class_arguments_repeat2 = 99,
  aux_sym_declaration_repeat1 = 100,
  aux_sym_arguments_repeat1 = 101,
  alias_sym_class_name = 102,
  alias_sym_feature_name = 103,
  alias_sym_function_name = 104,
  alias_sym_id_name = 105,
  alias_sym_keyframes_name = 106,
  alias_sym_keyword_query = 107,
  alias_sym_namespace_name = 108,
  alias_sym_property_name = 109,
  alias_sym_tag_name = 110,
};

static const char *ts_symbol_names[] = {
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
  [anon_sym_COLON] = ":",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
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
  [sym_pseudo_class_arguments] = "arguments",
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
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
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

static TSSymbol ts_symbol_map[] = {
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
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
  [sym_pseudo_class_arguments] = sym_arguments,
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
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
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
  [anon_sym_COLON] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_string_value] = {
    .visible = true,
    .named = true,
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
  [sym_pseudo_class_arguments] = {
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
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
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
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
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
    [2] = alias_sym_class_name,
  },
  [10] = {
    [2] = alias_sym_tag_name,
  },
  [11] = {
    [2] = alias_sym_id_name,
  },
  [12] = {
    [1] = alias_sym_namespace_name,
  },
  [13] = {
    [0] = alias_sym_property_name,
  },
  [14] = {
    [1] = alias_sym_feature_name,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 70:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(263);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(70);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 4, .external_lex_state = 1},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 74},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 74},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 74},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 74},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 74},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 74},
  [75] = {.lex_state = 74},
  [76] = {.lex_state = 74},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 74, .external_lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 74, .external_lex_state = 1},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 74, .external_lex_state = 1},
  [123] = {.lex_state = 74, .external_lex_state = 1},
  [124] = {.lex_state = 74, .external_lex_state = 1},
  [125] = {.lex_state = 74, .external_lex_state = 1},
  [126] = {.lex_state = 74, .external_lex_state = 1},
  [127] = {.lex_state = 74, .external_lex_state = 1},
  [128] = {.lex_state = 74, .external_lex_state = 1},
  [129] = {.lex_state = 74, .external_lex_state = 1},
  [130] = {.lex_state = 74, .external_lex_state = 1},
  [131] = {.lex_state = 74, .external_lex_state = 1},
  [132] = {.lex_state = 74, .external_lex_state = 1},
  [133] = {.lex_state = 74, .external_lex_state = 1},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 74, .external_lex_state = 1},
  [136] = {.lex_state = 74, .external_lex_state = 1},
  [137] = {.lex_state = 74, .external_lex_state = 1},
  [138] = {.lex_state = 74, .external_lex_state = 1},
  [139] = {.lex_state = 74, .external_lex_state = 1},
  [140] = {.lex_state = 74, .external_lex_state = 1},
  [141] = {.lex_state = 74, .external_lex_state = 1},
  [142] = {.lex_state = 74, .external_lex_state = 1},
  [143] = {.lex_state = 74, .external_lex_state = 1},
  [144] = {.lex_state = 74, .external_lex_state = 1},
  [145] = {.lex_state = 74, .external_lex_state = 1},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 74, .external_lex_state = 1},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 74, .external_lex_state = 1},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 74, .external_lex_state = 1},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 74, .external_lex_state = 1},
  [160] = {.lex_state = 74, .external_lex_state = 1},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 74, .external_lex_state = 1},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 63},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 63},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 63},
  [191] = {.lex_state = 63},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 74},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 74},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 63},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 63},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 74},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 74},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 23},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 26},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 74},
  [250] = {.lex_state = 74},
  [251] = {.lex_state = 74},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 74},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 74},
  [259] = {.lex_state = 74},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 74},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 26},
  [264] = {.lex_state = 74},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 74},
  [269] = {.lex_state = 74},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 74},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 26},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 74},
  [277] = {.lex_state = 2},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(272),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(241),
    [sym__selector] = STATE(141),
    [sym_universal_selector] = STATE(141),
    [sym_class_selector] = STATE(141),
    [sym_pseudo_class_selector] = STATE(141),
    [sym_pseudo_element_selector] = STATE(141),
    [sym_id_selector] = STATE(141),
    [sym_attribute_selector] = STATE(141),
    [sym_child_selector] = STATE(141),
    [sym_descendant_selector] = STATE(141),
    [sym_sibling_selector] = STATE(141),
    [sym_adjacent_sibling_selector] = STATE(141),
    [sym_declaration] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    STATE(243), 1,
      sym_selectors,
    STATE(265), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [85] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_selectors,
    STATE(248), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [170] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_selectors,
    STATE(274), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [255] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_selectors,
    STATE(256), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [340] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_selectors,
    STATE(267), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [425] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_selectors,
    STATE(262), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [510] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_ATimport,
    ACTIONS(68), 1,
      anon_sym_ATmedia,
    ACTIONS(71), 1,
      anon_sym_ATcharset,
    ACTIONS(74), 1,
      anon_sym_ATnamespace,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_ATsupports,
    ACTIONS(88), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_at_keyword,
    STATE(243), 1,
      sym_selectors,
    ACTIONS(77), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(85), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(141), 11,
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
  [592] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_at_keyword,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 10,
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
    STATE(141), 11,
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
  [674] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_ATimport,
    ACTIONS(119), 1,
      anon_sym_ATmedia,
    ACTIONS(122), 1,
      anon_sym_ATcharset,
    ACTIONS(125), 1,
      anon_sym_ATnamespace,
    ACTIONS(131), 1,
      anon_sym_ATsupports,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_at_keyword,
    STATE(241), 1,
      sym_selectors,
    ACTIONS(128), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(134), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 10,
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
    STATE(141), 11,
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
  [756] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      sym_nesting_selector,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(171), 1,
      sym_string_value,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_plain_value,
    STATE(41), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(143), 11,
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
  [827] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(171), 1,
      sym_string_value,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(181), 1,
      sym_nesting_selector,
    STATE(81), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(153), 11,
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
  [895] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      sym_important,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [952] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      sym_important,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1006] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_arguments,
    ACTIONS(211), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(213), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(217), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(209), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1098] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(219), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(140), 11,
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
  [1140] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(160), 11,
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
  [1182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(229), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(231), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(225), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1214] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(233), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(169), 11,
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
  [1256] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(235), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(126), 11,
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
  [1298] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(237), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(127), 11,
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
  [1340] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(239), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(128), 11,
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
  [1382] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(227), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1429] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(214), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1476] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LPAREN2,
    ACTIONS(260), 1,
      sym_string_value,
    ACTIONS(263), 1,
      aux_sym_integer_value_token1,
    ACTIONS(266), 1,
      aux_sym_float_value_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_plain_value,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1521] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1570] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(223), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(285), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [1643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(289), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(297), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(301), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(305), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1773] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(313), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1845] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_POUND,
    ACTIONS(320), 1,
      anon_sym_LPAREN2,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(326), 1,
      aux_sym_integer_value_token1,
    ACTIONS(329), 1,
      aux_sym_float_value_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(335), 1,
      sym_plain_value,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(315), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(340), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [1939] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1985] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(233), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(350), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(354), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(358), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(362), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2135] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(368), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(372), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(376), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(380), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(289), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(384), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(400), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_arguments,
    ACTIONS(211), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(217), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(372), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(404), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(376), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(362), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(358), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(350), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(354), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(305), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(340), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(301), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(297), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(404), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(313), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(368), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(380), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(400), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_unit,
    ACTIONS(408), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(406), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_unit,
    ACTIONS(414), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(412), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3067] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3156] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3196] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(440), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(211), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3232] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3272] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(448), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3336] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(440), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(205), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(454), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3396] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(460), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(464), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(468), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(472), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(476), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3556] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(480), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(252), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3620] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(91), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(484), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(482), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      anon_sym_LPAREN2,
    ACTIONS(490), 1,
      sym_string_value,
    ACTIONS(492), 1,
      aux_sym_integer_value_token1,
    ACTIONS(494), 1,
      aux_sym_float_value_token1,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      sym_plain_value,
    STATE(166), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      sym_string_value,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_plain_value,
    STATE(212), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(178), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3786] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym_string_value,
    ACTIONS(520), 1,
      sym_plain_value,
    STATE(208), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_pseudo_class_arguments,
    ACTIONS(522), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3846] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(528), 1,
      sym_string_value,
    ACTIONS(530), 1,
      sym_plain_value,
    STATE(207), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3880] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(532), 1,
      sym_string_value,
    ACTIONS(534), 1,
      sym_plain_value,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3914] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(536), 1,
      sym_string_value,
    ACTIONS(538), 1,
      sym_plain_value,
    STATE(98), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3948] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_string_value,
    ACTIONS(542), 1,
      sym_plain_value,
    STATE(96), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(546), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(544), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4008] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(548), 1,
      sym_string_value,
    ACTIONS(550), 1,
      sym_plain_value,
    STATE(188), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4042] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym_string_value,
    ACTIONS(554), 1,
      sym_plain_value,
    STATE(210), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4076] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(179), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_COLON,
    STATE(137), 1,
      sym_pseudo_class_arguments,
    ACTIONS(560), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4136] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      anon_sym_LPAREN2,
    ACTIONS(492), 1,
      aux_sym_integer_value_token1,
    ACTIONS(494), 1,
      aux_sym_float_value_token1,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_string_value,
    ACTIONS(566), 1,
      sym_plain_value,
    STATE(89), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4170] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_string_value,
    ACTIONS(570), 1,
      sym_plain_value,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym_string_value,
    ACTIONS(574), 1,
      sym_plain_value,
    STATE(201), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4238] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_string_value,
    ACTIONS(578), 1,
      sym_plain_value,
    STATE(204), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4272] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_string_value,
    ACTIONS(582), 1,
      sym_plain_value,
    STATE(213), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4306] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      anon_sym_LPAREN2,
    ACTIONS(492), 1,
      aux_sym_integer_value_token1,
    ACTIONS(494), 1,
      aux_sym_float_value_token1,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym_string_value,
    ACTIONS(586), 1,
      sym_plain_value,
    STATE(85), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4340] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_string_value,
    ACTIONS(590), 1,
      sym_plain_value,
    STATE(14), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(592), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(596), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_COLON,
    ACTIONS(600), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COLON,
    ACTIONS(604), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(608), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(616), 1,
      anon_sym_COLON,
    ACTIONS(614), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      anon_sym_COLON,
    ACTIONS(618), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(622), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(626), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COLON,
    ACTIONS(630), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(634), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COLON,
    ACTIONS(638), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_arguments,
    ACTIONS(211), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(217), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(644), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(648), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_COLON,
    ACTIONS(652), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(656), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(660), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(664), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4766] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      anon_sym_TILDE,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      sym__descendant_operator,
    STATE(234), 1,
      aux_sym_selectors_repeat1,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(688), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4826] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      anon_sym_TILDE,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      sym__descendant_operator,
    STATE(233), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(209), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COLON,
    ACTIONS(692), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(203), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(192), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(216), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(209), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(194), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(230), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5050] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(226), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5075] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      anon_sym_TILDE,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      sym__descendant_operator,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(199), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(209), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(422), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(438), 1,
      anon_sym_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(198), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_unit,
    ACTIONS(412), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(414), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_COLON,
    ACTIONS(209), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5238] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      anon_sym_TILDE,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      sym__descendant_operator,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_unit,
    ACTIONS(406), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(408), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(466), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(470), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(462), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(426), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(478), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(456), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(450), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5420] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      anon_sym_GT,
    ACTIONS(682), 1,
      anon_sym_TILDE,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      sym__descendant_operator,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [5454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(474), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(211), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH,
    ACTIONS(716), 1,
      sym_unit,
    ACTIONS(406), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(718), 1,
      sym_unit,
    ACTIONS(412), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SLASH,
    ACTIONS(468), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SLASH,
    ACTIONS(472), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    ACTIONS(720), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    ACTIONS(724), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5589] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_block,
    STATE(202), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [5612] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_block,
    STATE(200), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [5635] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 1,
      aux_sym_integer_value_token1,
    STATE(238), 1,
      sym_integer_value,
    ACTIONS(738), 2,
      sym_from,
      sym_to,
    STATE(190), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(424), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(448), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(420), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(454), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(460), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_integer_value_token1,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_integer_value,
    ACTIONS(738), 2,
      sym_from,
      sym_to,
    STATE(191), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_integer_value_token1,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_integer_value,
    ACTIONS(738), 2,
      sym_from,
      sym_to,
    STATE(180), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(476), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(464), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      aux_sym_integer_value_token1,
    STATE(238), 1,
      sym_integer_value,
    ACTIONS(748), 2,
      sym_from,
      sym_to,
    STATE(190), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_integer_value_token1,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_integer_value,
    ACTIONS(738), 2,
      sym_from,
      sym_to,
    STATE(190), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_block,
    STATE(225), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_block,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_block,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_block,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [6010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(778), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [6055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      sym_string_value,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(164), 1,
      sym_arguments,
    STATE(266), 1,
      sym_call_expression,
  [6074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(792), 1,
      sym_string_value,
    STATE(164), 1,
      sym_arguments,
    STATE(260), 1,
      sym_call_expression,
  [6123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [6155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SLASH,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(770), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(804), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [6227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_block,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(778), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COLON,
    ACTIONS(756), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym_block,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [6339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [6353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_string_value,
    ACTIONS(820), 1,
      sym_identifier,
    STATE(253), 1,
      sym_call_expression,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(732), 2,
      anon_sym_and,
      anon_sym_or,
  [6404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_string_value,
    ACTIONS(829), 1,
      sym_identifier,
    STATE(252), 1,
      sym_call_expression,
  [6417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_selectors_repeat1,
  [6430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      aux_sym_selectors_repeat1,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [6469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
  [6482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_keyframe_block_list,
  [6492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_block,
  [6502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym_color_value_token1,
    ACTIONS(848), 1,
      sym_identifier,
  [6512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    ACTIONS(850), 1,
      sym_unit,
  [6522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [6532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [6542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [6552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [6562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_arguments,
  [6572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_keyframe_block_list,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_color_value_token1,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_identifier,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_identifier,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym_identifier,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [6638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_identifier,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_identifier,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_SEMI,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_identifier,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym_color_value_token1,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_identifier,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_SEMI,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_identifier,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_identifier,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_color_value_token1,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_identifier,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LPAREN2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 510,
  [SMALL_STATE(9)] = 592,
  [SMALL_STATE(10)] = 674,
  [SMALL_STATE(11)] = 756,
  [SMALL_STATE(12)] = 827,
  [SMALL_STATE(13)] = 895,
  [SMALL_STATE(14)] = 952,
  [SMALL_STATE(15)] = 1006,
  [SMALL_STATE(16)] = 1060,
  [SMALL_STATE(17)] = 1098,
  [SMALL_STATE(18)] = 1140,
  [SMALL_STATE(19)] = 1182,
  [SMALL_STATE(20)] = 1214,
  [SMALL_STATE(21)] = 1256,
  [SMALL_STATE(22)] = 1298,
  [SMALL_STATE(23)] = 1340,
  [SMALL_STATE(24)] = 1382,
  [SMALL_STATE(25)] = 1429,
  [SMALL_STATE(26)] = 1476,
  [SMALL_STATE(27)] = 1521,
  [SMALL_STATE(28)] = 1570,
  [SMALL_STATE(29)] = 1617,
  [SMALL_STATE(30)] = 1643,
  [SMALL_STATE(31)] = 1669,
  [SMALL_STATE(32)] = 1695,
  [SMALL_STATE(33)] = 1721,
  [SMALL_STATE(34)] = 1747,
  [SMALL_STATE(35)] = 1773,
  [SMALL_STATE(36)] = 1819,
  [SMALL_STATE(37)] = 1845,
  [SMALL_STATE(38)] = 1887,
  [SMALL_STATE(39)] = 1913,
  [SMALL_STATE(40)] = 1939,
  [SMALL_STATE(41)] = 1985,
  [SMALL_STATE(42)] = 2031,
  [SMALL_STATE(43)] = 2057,
  [SMALL_STATE(44)] = 2083,
  [SMALL_STATE(45)] = 2109,
  [SMALL_STATE(46)] = 2135,
  [SMALL_STATE(47)] = 2177,
  [SMALL_STATE(48)] = 2203,
  [SMALL_STATE(49)] = 2229,
  [SMALL_STATE(50)] = 2255,
  [SMALL_STATE(51)] = 2281,
  [SMALL_STATE(52)] = 2307,
  [SMALL_STATE(53)] = 2333,
  [SMALL_STATE(54)] = 2359,
  [SMALL_STATE(55)] = 2385,
  [SMALL_STATE(56)] = 2411,
  [SMALL_STATE(57)] = 2437,
  [SMALL_STATE(58)] = 2467,
  [SMALL_STATE(59)] = 2493,
  [SMALL_STATE(60)] = 2519,
  [SMALL_STATE(61)] = 2545,
  [SMALL_STATE(62)] = 2571,
  [SMALL_STATE(63)] = 2597,
  [SMALL_STATE(64)] = 2623,
  [SMALL_STATE(65)] = 2649,
  [SMALL_STATE(66)] = 2675,
  [SMALL_STATE(67)] = 2701,
  [SMALL_STATE(68)] = 2727,
  [SMALL_STATE(69)] = 2753,
  [SMALL_STATE(70)] = 2779,
  [SMALL_STATE(71)] = 2805,
  [SMALL_STATE(72)] = 2831,
  [SMALL_STATE(73)] = 2857,
  [SMALL_STATE(74)] = 2883,
  [SMALL_STATE(75)] = 2909,
  [SMALL_STATE(76)] = 2935,
  [SMALL_STATE(77)] = 2961,
  [SMALL_STATE(78)] = 2987,
  [SMALL_STATE(79)] = 3013,
  [SMALL_STATE(80)] = 3040,
  [SMALL_STATE(81)] = 3067,
  [SMALL_STATE(82)] = 3108,
  [SMALL_STATE(83)] = 3132,
  [SMALL_STATE(84)] = 3156,
  [SMALL_STATE(85)] = 3196,
  [SMALL_STATE(86)] = 3232,
  [SMALL_STATE(87)] = 3272,
  [SMALL_STATE(88)] = 3312,
  [SMALL_STATE(89)] = 3336,
  [SMALL_STATE(90)] = 3372,
  [SMALL_STATE(91)] = 3396,
  [SMALL_STATE(92)] = 3436,
  [SMALL_STATE(93)] = 3460,
  [SMALL_STATE(94)] = 3484,
  [SMALL_STATE(95)] = 3508,
  [SMALL_STATE(96)] = 3532,
  [SMALL_STATE(97)] = 3556,
  [SMALL_STATE(98)] = 3593,
  [SMALL_STATE(99)] = 3620,
  [SMALL_STATE(100)] = 3657,
  [SMALL_STATE(101)] = 3684,
  [SMALL_STATE(102)] = 3718,
  [SMALL_STATE(103)] = 3752,
  [SMALL_STATE(104)] = 3786,
  [SMALL_STATE(105)] = 3820,
  [SMALL_STATE(106)] = 3846,
  [SMALL_STATE(107)] = 3880,
  [SMALL_STATE(108)] = 3914,
  [SMALL_STATE(109)] = 3948,
  [SMALL_STATE(110)] = 3982,
  [SMALL_STATE(111)] = 4008,
  [SMALL_STATE(112)] = 4042,
  [SMALL_STATE(113)] = 4076,
  [SMALL_STATE(114)] = 4110,
  [SMALL_STATE(115)] = 4136,
  [SMALL_STATE(116)] = 4170,
  [SMALL_STATE(117)] = 4204,
  [SMALL_STATE(118)] = 4238,
  [SMALL_STATE(119)] = 4272,
  [SMALL_STATE(120)] = 4306,
  [SMALL_STATE(121)] = 4340,
  [SMALL_STATE(122)] = 4374,
  [SMALL_STATE(123)] = 4394,
  [SMALL_STATE(124)] = 4414,
  [SMALL_STATE(125)] = 4434,
  [SMALL_STATE(126)] = 4454,
  [SMALL_STATE(127)] = 4476,
  [SMALL_STATE(128)] = 4498,
  [SMALL_STATE(129)] = 4520,
  [SMALL_STATE(130)] = 4540,
  [SMALL_STATE(131)] = 4560,
  [SMALL_STATE(132)] = 4580,
  [SMALL_STATE(133)] = 4600,
  [SMALL_STATE(134)] = 4620,
  [SMALL_STATE(135)] = 4644,
  [SMALL_STATE(136)] = 4664,
  [SMALL_STATE(137)] = 4684,
  [SMALL_STATE(138)] = 4704,
  [SMALL_STATE(139)] = 4724,
  [SMALL_STATE(140)] = 4744,
  [SMALL_STATE(141)] = 4766,
  [SMALL_STATE(142)] = 4806,
  [SMALL_STATE(143)] = 4826,
  [SMALL_STATE(144)] = 4866,
  [SMALL_STATE(145)] = 4886,
  [SMALL_STATE(146)] = 4906,
  [SMALL_STATE(147)] = 4931,
  [SMALL_STATE(148)] = 4956,
  [SMALL_STATE(149)] = 4981,
  [SMALL_STATE(150)] = 5000,
  [SMALL_STATE(151)] = 5025,
  [SMALL_STATE(152)] = 5050,
  [SMALL_STATE(153)] = 5075,
  [SMALL_STATE(154)] = 5110,
  [SMALL_STATE(155)] = 5135,
  [SMALL_STATE(156)] = 5154,
  [SMALL_STATE(157)] = 5173,
  [SMALL_STATE(158)] = 5198,
  [SMALL_STATE(159)] = 5219,
  [SMALL_STATE(160)] = 5238,
  [SMALL_STATE(161)] = 5273,
  [SMALL_STATE(162)] = 5294,
  [SMALL_STATE(163)] = 5312,
  [SMALL_STATE(164)] = 5330,
  [SMALL_STATE(165)] = 5348,
  [SMALL_STATE(166)] = 5366,
  [SMALL_STATE(167)] = 5384,
  [SMALL_STATE(168)] = 5402,
  [SMALL_STATE(169)] = 5420,
  [SMALL_STATE(170)] = 5454,
  [SMALL_STATE(171)] = 5472,
  [SMALL_STATE(172)] = 5493,
  [SMALL_STATE(173)] = 5511,
  [SMALL_STATE(174)] = 5529,
  [SMALL_STATE(175)] = 5544,
  [SMALL_STATE(176)] = 5559,
  [SMALL_STATE(177)] = 5574,
  [SMALL_STATE(178)] = 5589,
  [SMALL_STATE(179)] = 5612,
  [SMALL_STATE(180)] = 5635,
  [SMALL_STATE(181)] = 5656,
  [SMALL_STATE(182)] = 5671,
  [SMALL_STATE(183)] = 5686,
  [SMALL_STATE(184)] = 5701,
  [SMALL_STATE(185)] = 5716,
  [SMALL_STATE(186)] = 5731,
  [SMALL_STATE(187)] = 5752,
  [SMALL_STATE(188)] = 5773,
  [SMALL_STATE(189)] = 5788,
  [SMALL_STATE(190)] = 5803,
  [SMALL_STATE(191)] = 5824,
  [SMALL_STATE(192)] = 5845,
  [SMALL_STATE(193)] = 5865,
  [SMALL_STATE(194)] = 5877,
  [SMALL_STATE(195)] = 5897,
  [SMALL_STATE(196)] = 5909,
  [SMALL_STATE(197)] = 5921,
  [SMALL_STATE(198)] = 5933,
  [SMALL_STATE(199)] = 5945,
  [SMALL_STATE(200)] = 5957,
  [SMALL_STATE(201)] = 5976,
  [SMALL_STATE(202)] = 5991,
  [SMALL_STATE(203)] = 6010,
  [SMALL_STATE(204)] = 6023,
  [SMALL_STATE(205)] = 6038,
  [SMALL_STATE(206)] = 6055,
  [SMALL_STATE(207)] = 6074,
  [SMALL_STATE(208)] = 6089,
  [SMALL_STATE(209)] = 6104,
  [SMALL_STATE(210)] = 6123,
  [SMALL_STATE(211)] = 6138,
  [SMALL_STATE(212)] = 6155,
  [SMALL_STATE(213)] = 6170,
  [SMALL_STATE(214)] = 6185,
  [SMALL_STATE(215)] = 6199,
  [SMALL_STATE(216)] = 6213,
  [SMALL_STATE(217)] = 6227,
  [SMALL_STATE(218)] = 6243,
  [SMALL_STATE(219)] = 6253,
  [SMALL_STATE(220)] = 6263,
  [SMALL_STATE(221)] = 6273,
  [SMALL_STATE(222)] = 6287,
  [SMALL_STATE(223)] = 6299,
  [SMALL_STATE(224)] = 6313,
  [SMALL_STATE(225)] = 6323,
  [SMALL_STATE(226)] = 6339,
  [SMALL_STATE(227)] = 6353,
  [SMALL_STATE(228)] = 6367,
  [SMALL_STATE(229)] = 6380,
  [SMALL_STATE(230)] = 6393,
  [SMALL_STATE(231)] = 6404,
  [SMALL_STATE(232)] = 6417,
  [SMALL_STATE(233)] = 6430,
  [SMALL_STATE(234)] = 6443,
  [SMALL_STATE(235)] = 6456,
  [SMALL_STATE(236)] = 6469,
  [SMALL_STATE(237)] = 6482,
  [SMALL_STATE(238)] = 6492,
  [SMALL_STATE(239)] = 6502,
  [SMALL_STATE(240)] = 6512,
  [SMALL_STATE(241)] = 6522,
  [SMALL_STATE(242)] = 6532,
  [SMALL_STATE(243)] = 6542,
  [SMALL_STATE(244)] = 6552,
  [SMALL_STATE(245)] = 6562,
  [SMALL_STATE(246)] = 6572,
  [SMALL_STATE(247)] = 6582,
  [SMALL_STATE(248)] = 6589,
  [SMALL_STATE(249)] = 6596,
  [SMALL_STATE(250)] = 6603,
  [SMALL_STATE(251)] = 6610,
  [SMALL_STATE(252)] = 6617,
  [SMALL_STATE(253)] = 6624,
  [SMALL_STATE(254)] = 6631,
  [SMALL_STATE(255)] = 6638,
  [SMALL_STATE(256)] = 6645,
  [SMALL_STATE(257)] = 6652,
  [SMALL_STATE(258)] = 6659,
  [SMALL_STATE(259)] = 6666,
  [SMALL_STATE(260)] = 6673,
  [SMALL_STATE(261)] = 6680,
  [SMALL_STATE(262)] = 6687,
  [SMALL_STATE(263)] = 6694,
  [SMALL_STATE(264)] = 6701,
  [SMALL_STATE(265)] = 6708,
  [SMALL_STATE(266)] = 6715,
  [SMALL_STATE(267)] = 6722,
  [SMALL_STATE(268)] = 6729,
  [SMALL_STATE(269)] = 6736,
  [SMALL_STATE(270)] = 6743,
  [SMALL_STATE(271)] = 6750,
  [SMALL_STATE(272)] = 6757,
  [SMALL_STATE(273)] = 6764,
  [SMALL_STATE(274)] = 6771,
  [SMALL_STATE(275)] = 6778,
  [SMALL_STATE(276)] = 6785,
  [SMALL_STATE(277)] = 6792,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(115),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(231),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(141),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(258),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(264),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(120),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(150),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(112),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(228),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(251),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(148),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(141),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(145),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(259),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(264),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(268),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(269),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(159),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(113),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(247),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(80),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(57),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(247),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(79),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(80),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(57),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(121),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(107),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(238),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(240),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 14),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(146),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(18),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [898] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
