#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 315
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 9
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

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
  sym_string_value = 42,
  aux_sym_integer_value_token1 = 43,
  aux_sym_float_value_token1 = 44,
  sym_unit = 45,
  anon_sym_DASH = 46,
  anon_sym_SLASH = 47,
  sym_identifier = 48,
  sym_at_keyword = 49,
  sym_comment = 50,
  sym_plain_value = 51,
  sym__descendant_operator = 52,
  sym__pseudo_class_selector_colon = 53,
  sym_stylesheet = 54,
  sym_import_statement = 55,
  sym_media_statement = 56,
  sym_charset_statement = 57,
  sym_namespace_statement = 58,
  sym_keyframes_statement = 59,
  sym_keyframe_block_list = 60,
  sym_keyframe_block = 61,
  sym_supports_statement = 62,
  sym_at_rule = 63,
  sym_rule_set = 64,
  sym_selectors = 65,
  sym_block = 66,
  sym__selector = 67,
  sym_universal_selector = 68,
  sym_class_selector = 69,
  sym_pseudo_class_selector = 70,
  sym_pseudo_element_selector = 71,
  sym_id_selector = 72,
  sym_attribute_selector = 73,
  sym_child_selector = 74,
  sym_descendant_selector = 75,
  sym_sibling_selector = 76,
  sym_adjacent_sibling_selector = 77,
  sym_namespace_selector = 78,
  sym_pseudo_class_arguments = 79,
  sym_pseudo_element_arguments = 80,
  sym_declaration = 81,
  sym_last_declaration = 82,
  sym__query = 83,
  sym_feature_query = 84,
  sym_parenthesized_query = 85,
  sym_binary_query = 86,
  sym_unary_query = 87,
  sym_selector_query = 88,
  sym__value = 89,
  sym_parenthesized_value = 90,
  sym_color_value = 91,
  sym_integer_value = 92,
  sym_float_value = 93,
  sym_grid_value = 94,
  sym_call_expression = 95,
  sym_binary_expression = 96,
  sym_arguments = 97,
  aux_sym_stylesheet_repeat1 = 98,
  aux_sym_import_statement_repeat1 = 99,
  aux_sym_keyframe_block_list_repeat1 = 100,
  aux_sym_selectors_repeat1 = 101,
  aux_sym_block_repeat1 = 102,
  aux_sym_pseudo_class_arguments_repeat1 = 103,
  aux_sym_pseudo_class_arguments_repeat2 = 104,
  aux_sym_declaration_repeat1 = 105,
  aux_sym_grid_value_repeat1 = 106,
  aux_sym_arguments_repeat1 = 107,
  alias_sym_class_name = 108,
  alias_sym_feature_name = 109,
  alias_sym_function_name = 110,
  alias_sym_id_name = 111,
  alias_sym_keyframes_name = 112,
  alias_sym_keyword_query = 113,
  alias_sym_namespace_name = 114,
  alias_sym_property_name = 115,
  alias_sym_tag_name = 116,
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
  [sym__pseudo_class_selector_colon] = ":",
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
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
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
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
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
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
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
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
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
  [5] = 2,
  [6] = 3,
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 27,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 78,
  [90] = 90,
  [91] = 74,
  [92] = 92,
  [93] = 87,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 97,
  [101] = 86,
  [102] = 73,
  [103] = 85,
  [104] = 84,
  [105] = 92,
  [106] = 106,
  [107] = 96,
  [108] = 83,
  [109] = 82,
  [110] = 110,
  [111] = 81,
  [112] = 112,
  [113] = 74,
  [114] = 79,
  [115] = 95,
  [116] = 94,
  [117] = 76,
  [118] = 90,
  [119] = 75,
  [120] = 120,
  [121] = 120,
  [122] = 77,
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 144,
  [145] = 144,
  [146] = 142,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 155,
  [156] = 152,
  [157] = 142,
  [158] = 158,
  [159] = 153,
  [160] = 147,
  [161] = 141,
  [162] = 152,
  [163] = 163,
  [164] = 33,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 71,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 130,
  [181] = 181,
  [182] = 182,
  [183] = 112,
  [184] = 110,
  [185] = 177,
  [186] = 186,
  [187] = 179,
  [188] = 188,
  [189] = 138,
  [190] = 131,
  [191] = 133,
  [192] = 139,
  [193] = 134,
  [194] = 137,
  [195] = 195,
  [196] = 135,
  [197] = 132,
  [198] = 123,
  [199] = 129,
  [200] = 71,
  [201] = 110,
  [202] = 112,
  [203] = 131,
  [204] = 129,
  [205] = 130,
  [206] = 137,
  [207] = 132,
  [208] = 139,
  [209] = 138,
  [210] = 135,
  [211] = 123,
  [212] = 134,
  [213] = 133,
  [214] = 214,
  [215] = 215,
  [216] = 215,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 217,
  [222] = 218,
  [223] = 214,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 225,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
  [237] = 234,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 238,
  [243] = 243,
  [244] = 241,
  [245] = 243,
  [246] = 233,
  [247] = 247,
  [248] = 81,
  [249] = 247,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 94,
  [254] = 247,
  [255] = 251,
  [256] = 97,
  [257] = 257,
  [258] = 258,
  [259] = 252,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 261,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 267,
  [270] = 262,
  [271] = 267,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 110,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 275,
  [283] = 283,
  [284] = 280,
  [285] = 281,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 287,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 295,
  [297] = 292,
  [298] = 298,
  [299] = 298,
  [300] = 300,
  [301] = 298,
  [302] = 295,
  [303] = 303,
  [304] = 304,
  [305] = 294,
  [306] = 306,
  [307] = 289,
  [308] = 308,
  [309] = 288,
  [310] = 290,
  [311] = 290,
  [312] = 312,
  [313] = 313,
  [314] = 314,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
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

static inline bool sym_plain_value_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '{') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '}') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 67:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 68:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(93);
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
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(68);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 2},
  [3] = {.lex_state = 72, .external_lex_state = 2},
  [4] = {.lex_state = 72, .external_lex_state = 2},
  [5] = {.lex_state = 72, .external_lex_state = 2},
  [6] = {.lex_state = 72, .external_lex_state = 2},
  [7] = {.lex_state = 72, .external_lex_state = 2},
  [8] = {.lex_state = 72, .external_lex_state = 2},
  [9] = {.lex_state = 72, .external_lex_state = 2},
  [10] = {.lex_state = 72, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 7, .external_lex_state = 1},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 7, .external_lex_state = 1},
  [22] = {.lex_state = 7, .external_lex_state = 1},
  [23] = {.lex_state = 7, .external_lex_state = 1},
  [24] = {.lex_state = 7, .external_lex_state = 1},
  [25] = {.lex_state = 72, .external_lex_state = 2},
  [26] = {.lex_state = 72, .external_lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 72, .external_lex_state = 2},
  [30] = {.lex_state = 72, .external_lex_state = 2},
  [31] = {.lex_state = 72, .external_lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2, .external_lex_state = 1},
  [34] = {.lex_state = 72, .external_lex_state = 2},
  [35] = {.lex_state = 72, .external_lex_state = 2},
  [36] = {.lex_state = 72, .external_lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 72, .external_lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 1},
  [41] = {.lex_state = 7, .external_lex_state = 1},
  [42] = {.lex_state = 7, .external_lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 1},
  [45] = {.lex_state = 7, .external_lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 1},
  [48] = {.lex_state = 7, .external_lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 1},
  [51] = {.lex_state = 7, .external_lex_state = 1},
  [52] = {.lex_state = 7, .external_lex_state = 1},
  [53] = {.lex_state = 7, .external_lex_state = 1},
  [54] = {.lex_state = 7, .external_lex_state = 1},
  [55] = {.lex_state = 7, .external_lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 7, .external_lex_state = 1},
  [61] = {.lex_state = 7, .external_lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 7, .external_lex_state = 1},
  [65] = {.lex_state = 7, .external_lex_state = 1},
  [66] = {.lex_state = 7, .external_lex_state = 1},
  [67] = {.lex_state = 7, .external_lex_state = 1},
  [68] = {.lex_state = 7, .external_lex_state = 1},
  [69] = {.lex_state = 7, .external_lex_state = 1},
  [70] = {.lex_state = 7, .external_lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 72, .external_lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 72, .external_lex_state = 2},
  [76] = {.lex_state = 72, .external_lex_state = 2},
  [77] = {.lex_state = 72, .external_lex_state = 2},
  [78] = {.lex_state = 72, .external_lex_state = 2},
  [79] = {.lex_state = 72, .external_lex_state = 2},
  [80] = {.lex_state = 72, .external_lex_state = 2},
  [81] = {.lex_state = 72, .external_lex_state = 2},
  [82] = {.lex_state = 72, .external_lex_state = 2},
  [83] = {.lex_state = 72, .external_lex_state = 2},
  [84] = {.lex_state = 72, .external_lex_state = 2},
  [85] = {.lex_state = 72, .external_lex_state = 2},
  [86] = {.lex_state = 72, .external_lex_state = 2},
  [87] = {.lex_state = 72, .external_lex_state = 2},
  [88] = {.lex_state = 72, .external_lex_state = 2},
  [89] = {.lex_state = 72, .external_lex_state = 2},
  [90] = {.lex_state = 72, .external_lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 72, .external_lex_state = 2},
  [93] = {.lex_state = 72, .external_lex_state = 2},
  [94] = {.lex_state = 72, .external_lex_state = 2},
  [95] = {.lex_state = 72, .external_lex_state = 2},
  [96] = {.lex_state = 72, .external_lex_state = 2},
  [97] = {.lex_state = 72, .external_lex_state = 2},
  [98] = {.lex_state = 72, .external_lex_state = 2},
  [99] = {.lex_state = 72, .external_lex_state = 2},
  [100] = {.lex_state = 72, .external_lex_state = 2},
  [101] = {.lex_state = 72, .external_lex_state = 2},
  [102] = {.lex_state = 72, .external_lex_state = 2},
  [103] = {.lex_state = 72, .external_lex_state = 2},
  [104] = {.lex_state = 72, .external_lex_state = 2},
  [105] = {.lex_state = 72, .external_lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 72, .external_lex_state = 2},
  [108] = {.lex_state = 72, .external_lex_state = 2},
  [109] = {.lex_state = 72, .external_lex_state = 2},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 72, .external_lex_state = 2},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 72, .external_lex_state = 2},
  [115] = {.lex_state = 72, .external_lex_state = 2},
  [116] = {.lex_state = 72, .external_lex_state = 2},
  [117] = {.lex_state = 72, .external_lex_state = 2},
  [118] = {.lex_state = 72, .external_lex_state = 2},
  [119] = {.lex_state = 72, .external_lex_state = 2},
  [120] = {.lex_state = 72, .external_lex_state = 2},
  [121] = {.lex_state = 72, .external_lex_state = 2},
  [122] = {.lex_state = 72, .external_lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 7, .external_lex_state = 1},
  [125] = {.lex_state = 7, .external_lex_state = 1},
  [126] = {.lex_state = 7, .external_lex_state = 1},
  [127] = {.lex_state = 7, .external_lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 9, .external_lex_state = 1},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 72, .external_lex_state = 1},
  [169] = {.lex_state = 72, .external_lex_state = 1},
  [170] = {.lex_state = 72, .external_lex_state = 1},
  [171] = {.lex_state = 72, .external_lex_state = 1},
  [172] = {.lex_state = 72, .external_lex_state = 1},
  [173] = {.lex_state = 72, .external_lex_state = 1},
  [174] = {.lex_state = 72, .external_lex_state = 1},
  [175] = {.lex_state = 72, .external_lex_state = 1},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 72, .external_lex_state = 1},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 72, .external_lex_state = 1},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 60},
  [215] = {.lex_state = 60},
  [216] = {.lex_state = 60},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 60},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 60},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 72},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 72},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 60},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 60},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 72},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 72},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 19},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 72},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 25},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 72},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 72},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 72},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 72},
  [306] = {.lex_state = 72},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 72},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 72},
  [313] = {.lex_state = 72},
  [314] = {.lex_state = 72},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
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
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(304),
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(281),
    [sym__selector] = STATE(172),
    [sym_universal_selector] = STATE(172),
    [sym_class_selector] = STATE(172),
    [sym_pseudo_class_selector] = STATE(172),
    [sym_pseudo_element_selector] = STATE(172),
    [sym_id_selector] = STATE(172),
    [sym_attribute_selector] = STATE(172),
    [sym_child_selector] = STATE(172),
    [sym_descendant_selector] = STATE(172),
    [sym_sibling_selector] = STATE(172),
    [sym_adjacent_sibling_selector] = STATE(172),
    [sym_namespace_selector] = STATE(172),
    [sym_declaration] = STATE(8),
    [aux_sym_stylesheet_repeat1] = STATE(8),
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
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym__pseudo_class_selector_colon] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(299), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
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
      aux_sym_block_repeat1,
    STATE(172), 12,
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
  [86] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(295), 1,
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
    STATE(172), 12,
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
  [172] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(296), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 10,
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
    STATE(172), 12,
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
  [258] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(301), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
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
      aux_sym_block_repeat1,
    STATE(172), 12,
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
  [344] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(302), 1,
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
    STATE(172), 12,
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
  [430] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(285), 1,
      sym_selectors,
    STATE(298), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
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
      aux_sym_block_repeat1,
    STATE(172), 12,
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
  [516] = 20,
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
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_at_keyword,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(281), 1,
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
    STATE(172), 12,
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
  [599] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_ATimport,
    ACTIONS(70), 1,
      anon_sym_ATmedia,
    ACTIONS(73), 1,
      anon_sym_ATcharset,
    ACTIONS(76), 1,
      anon_sym_ATnamespace,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_ATsupports,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(108), 1,
      sym_at_keyword,
    ACTIONS(111), 1,
      sym__pseudo_class_selector_colon,
    STATE(285), 1,
      sym_selectors,
    ACTIONS(79), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(87), 2,
      sym_nesting_selector,
      sym_string_value,
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
      aux_sym_block_repeat1,
    STATE(172), 12,
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
  [682] = 20,
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
      anon_sym_COLON_COLON,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_at_keyword,
    ACTIONS(158), 1,
      sym__pseudo_class_selector_colon,
    STATE(281), 1,
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
    STATE(172), 12,
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
  [765] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(161), 1,
      sym_nesting_selector,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      sym_string_value,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_plain_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(171), 12,
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
  [838] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      sym_string_value,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(183), 1,
      sym_nesting_selector,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(173), 12,
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
  [911] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      sym_string_value,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(187), 1,
      sym_nesting_selector,
    STATE(72), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(174), 12,
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
  [981] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    STATE(126), 1,
      sym_namespace_selector,
    STATE(218), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(195), 11,
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
  [1050] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym_plain_value,
    STATE(126), 1,
      sym_namespace_selector,
    STATE(222), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(195), 11,
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
  [1119] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      sym_important,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1180] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      sym_important,
    STATE(49), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1238] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(235), 1,
      sym_important,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1296] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_arguments,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(247), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(243), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(241), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [1339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_arguments,
    ACTIONS(237), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(247), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(239), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(241), 10,
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
  [1378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_pseudo_class_arguments,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(253), 18,
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
  [1412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_pseudo_element_arguments,
    ACTIONS(261), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(259), 18,
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
  [1446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_pseudo_class_arguments,
    ACTIONS(267), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(265), 18,
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
  [1480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_pseudo_element_arguments,
    ACTIONS(271), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(269), 18,
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
  [1514] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(273), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(64), 12,
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
  [1557] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(59), 12,
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
  [1600] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      sym_string_value,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(254), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1651] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      sym_string_value,
    ACTIONS(302), 1,
      aux_sym_integer_value_token1,
    ACTIONS(305), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(311), 1,
      sym_plain_value,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(288), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1700] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(314), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(69), 12,
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
  [1743] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(316), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(66), 12,
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
  [1786] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(125), 1,
      sym_namespace_selector,
    ACTIONS(189), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(195), 11,
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
  [1831] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(328), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(332), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(326), 10,
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
  [1917] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(334), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(175), 12,
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
  [1960] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(336), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(48), 12,
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
  [2003] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(126), 1,
      sym_namespace_selector,
    ACTIONS(189), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(195), 11,
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
  [2048] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(247), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(342), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(178), 12,
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
  [2142] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(249), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(346), 18,
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
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(350), 18,
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
  [2249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(354), 18,
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
  [2277] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(360), 18,
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
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(364), 18,
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
  [2383] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(273), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(241), 18,
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
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(372), 17,
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
  [2491] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_string_value,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(140), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(382), 18,
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
  [2569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(386), 18,
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
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(390), 18,
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
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(394), 18,
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
  [2653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(398), 18,
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
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(402), 18,
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
  [2709] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_LPAREN2,
    ACTIONS(417), 1,
      sym_string_value,
    ACTIONS(420), 1,
      aux_sym_integer_value_token1,
    ACTIONS(423), 1,
      aux_sym_float_value_token1,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(429), 1,
      sym_plain_value,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(406), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2755] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(264), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(434), 18,
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
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(440), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(438), 17,
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
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(442), 18,
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
  [2891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(446), 18,
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
  [2919] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(450), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(452), 18,
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
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(458), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(456), 17,
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
  [3023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(460), 18,
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
  [3051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(466), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(464), 17,
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
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(468), 18,
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
  [3109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(472), 18,
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
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(478), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(476), 17,
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
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(480), 18,
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
  [3195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_arguments,
    ACTIONS(239), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(237), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
  [3226] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(488), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3297] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(494), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(498), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(502), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(504), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(510), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(512), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(518), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(522), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(526), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(530), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(534), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(538), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(542), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(512), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(504), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(546), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3757] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(550), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(542), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(556), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(560), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(564), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(566), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(572), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(572), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(566), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(538), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(488), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(534), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(530), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(550), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4165] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(564), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(526), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(522), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_unit,
    ACTIONS(578), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(576), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(518), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_unit,
    ACTIONS(584), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(582), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4369] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(510), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(560), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(556), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(498), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(546), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(494), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(590), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(590), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(502), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [4647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(594), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(243), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(241), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [4701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(598), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(326), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [4730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(243), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(326), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [4759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(598), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(241), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [4788] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(602), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(606), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(610), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(614), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(618), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(622), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(626), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5004] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(181), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_string_value,
    STATE(106), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(630), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(634), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(638), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(644), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(642), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5148] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym_string_value,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(654), 1,
      sym_plain_value,
    STATE(246), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(656), 1,
      sym_string_value,
    ACTIONS(658), 1,
      sym_plain_value,
    STATE(209), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5224] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(660), 1,
      sym_string_value,
    ACTIONS(662), 1,
      sym_plain_value,
    STATE(233), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5262] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(666), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(674), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(242), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(666), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(674), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(238), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5334] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    ACTIONS(686), 1,
      sym_string_value,
    ACTIONS(688), 1,
      aux_sym_integer_value_token1,
    ACTIONS(690), 1,
      aux_sym_float_value_token1,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(694), 1,
      sym_plain_value,
    STATE(189), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5372] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(696), 1,
      sym_string_value,
    ACTIONS(698), 1,
      sym_plain_value,
    STATE(244), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(700), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(288), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5438] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(702), 1,
      sym_string_value,
    ACTIONS(704), 1,
      sym_plain_value,
    STATE(148), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5476] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    ACTIONS(688), 1,
      aux_sym_integer_value_token1,
    ACTIONS(690), 1,
      aux_sym_float_value_token1,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(706), 1,
      sym_string_value,
    ACTIONS(708), 1,
      sym_plain_value,
    STATE(144), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5514] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(710), 1,
      sym_string_value,
    ACTIONS(712), 1,
      sym_plain_value,
    STATE(16), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5552] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(714), 1,
      sym_string_value,
    STATE(218), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5590] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(716), 1,
      sym_string_value,
    ACTIONS(718), 1,
      sym_plain_value,
    STATE(17), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5628] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    ACTIONS(688), 1,
      aux_sym_integer_value_token1,
    ACTIONS(690), 1,
      aux_sym_float_value_token1,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(720), 1,
      sym_string_value,
    ACTIONS(722), 1,
      sym_plain_value,
    STATE(145), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5666] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(724), 1,
      sym_string_value,
    ACTIONS(726), 1,
      sym_plain_value,
    STATE(240), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5704] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(207), 1,
      sym_plain_value,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(728), 1,
      sym_string_value,
    STATE(222), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5742] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(730), 1,
      sym_string_value,
    ACTIONS(732), 1,
      sym_plain_value,
    STATE(138), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5780] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(734), 1,
      sym_string_value,
    ACTIONS(736), 1,
      sym_plain_value,
    STATE(239), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN2,
    ACTIONS(175), 1,
      aux_sym_integer_value_token1,
    ACTIONS(177), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(738), 1,
      sym_string_value,
    ACTIONS(740), 1,
      sym_plain_value,
    STATE(18), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5856] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(742), 1,
      sym_string_value,
    ACTIONS(744), 1,
      sym_plain_value,
    STATE(241), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5894] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(746), 1,
      sym_string_value,
    ACTIONS(748), 1,
      sym_plain_value,
    STATE(235), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5932] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(750), 1,
      sym_string_value,
    ACTIONS(752), 1,
      sym_plain_value,
    STATE(220), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5970] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN2,
    ACTIONS(199), 1,
      aux_sym_integer_value_token1,
    ACTIONS(201), 1,
      aux_sym_float_value_token1,
    ACTIONS(646), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(754), 1,
      sym_string_value,
    ACTIONS(756), 1,
      sym_plain_value,
    STATE(232), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(328), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(326), 10,
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
  [6033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(221), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(760), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(758), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [6060] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_SEMI,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(221), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6094] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(766), 1,
      anon_sym_SEMI,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(217), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COLON,
    ACTIONS(241), 12,
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
  [6149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(241), 12,
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
  [6170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
    ACTIONS(241), 12,
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
  [6191] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    STATE(273), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6234] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      aux_sym_selectors_repeat1,
  [6277] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    STATE(264), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6358] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(798), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [6396] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(237), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(239), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(225), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6445] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [6482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(259), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(608), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(224), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(236), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_unit,
    ACTIONS(582), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(584), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_unit,
    ACTIONS(576), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(578), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(229), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(226), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6693] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN2,
    ACTIONS(672), 1,
      anon_sym_selector,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(670), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(268), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(636), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(612), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(620), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(640), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(624), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(632), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6826] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      anon_sym_COLON_COLON,
    ACTIONS(778), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_TILDE,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      anon_sym_PIPE,
    ACTIONS(790), 1,
      sym__descendant_operator,
    ACTIONS(792), 1,
      sym__pseudo_class_selector_colon,
  [6860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(628), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(616), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(596), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(604), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_arguments,
    ACTIONS(237), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      sym_unit,
    ACTIONS(576), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_SLASH,
    ACTIONS(812), 1,
      sym_unit,
    ACTIONS(582), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SLASH,
    ACTIONS(610), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SLASH,
    ACTIONS(602), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SLASH,
    ACTIONS(606), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH,
    ACTIONS(630), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(614), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_SLASH,
    ACTIONS(638), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_SLASH,
    ACTIONS(634), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_SLASH,
    ACTIONS(626), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_SLASH,
    ACTIONS(594), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(622), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(618), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      aux_sym_integer_value_token1,
    STATE(283), 1,
      sym_integer_value,
    ACTIONS(816), 2,
      sym_from,
      sym_to,
    STATE(219), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7189] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_integer_value_token1,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_integer_value,
    ACTIONS(816), 2,
      sym_from,
      sym_to,
    STATE(214), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_integer_value_token1,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_integer_value,
    ACTIONS(816), 2,
      sym_from,
      sym_to,
    STATE(223), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_block,
    STATE(243), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    STATE(269), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    STATE(283), 1,
      sym_integer_value,
    ACTIONS(840), 2,
      sym_from,
      sym_to,
    STATE(219), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7317] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_integer_value_token1,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_integer_value,
    ACTIONS(816), 2,
      sym_from,
      sym_to,
    STATE(219), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_block,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(866), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      sym_string_value,
    ACTIONS(872), 1,
      sym_identifier,
    STATE(197), 1,
      sym_arguments,
    STATE(287), 1,
      sym_call_expression,
  [7544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(876), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(878), 1,
      sym_string_value,
    STATE(197), 1,
      sym_arguments,
    STATE(291), 1,
      sym_call_expression,
  [7591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(886), 1,
      anon_sym_SEMI,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_block,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_block,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_block,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_block,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_COLON,
    ACTIONS(864), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(876), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [7906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(911), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_string_value,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(288), 1,
      sym_call_expression,
  [7946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_LBRACE,
    STATE(274), 1,
      aux_sym_selectors_repeat1,
  [7959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
  [7985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_grid_value_repeat1,
  [8011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(828), 2,
      anon_sym_and,
      anon_sym_or,
  [8022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_grid_value_repeat1,
  [8035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_string_value,
    ACTIONS(937), 1,
      sym_identifier,
    STATE(309), 1,
      sym_call_expression,
  [8048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_grid_value_repeat1,
  [8061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_grid_value_repeat1,
  [8074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_selectors_repeat1,
  [8100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_keyframe_block_list,
  [8110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      sym_unit,
  [8120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [8130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
  [8140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_SEMI,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [8150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_color_value_token1,
    ACTIONS(959), 1,
      sym_identifier,
  [8160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_block,
  [8170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_keyframe_block_list,
  [8180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_block,
  [8190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_identifier,
    ACTIONS(965), 1,
      aux_sym_color_value_token1,
  [8200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
  [8210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_identifier,
  [8217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_SEMI,
  [8224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SEMI,
  [8231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_SEMI,
  [8238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_color_value_token1,
  [8245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_SEMI,
  [8252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [8259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LPAREN2,
  [8266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [8273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
  [8280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [8287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [8294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [8301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [8308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [8315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [8322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [8329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [8336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
  [8343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [8350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_identifier,
  [8357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_SEMI,
  [8364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_identifier,
  [8371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
  [8378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_color_value_token1,
  [8385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      aux_sym_color_value_token1,
  [8392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [8399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [8406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 516,
  [SMALL_STATE(9)] = 599,
  [SMALL_STATE(10)] = 682,
  [SMALL_STATE(11)] = 765,
  [SMALL_STATE(12)] = 838,
  [SMALL_STATE(13)] = 911,
  [SMALL_STATE(14)] = 981,
  [SMALL_STATE(15)] = 1050,
  [SMALL_STATE(16)] = 1119,
  [SMALL_STATE(17)] = 1180,
  [SMALL_STATE(18)] = 1238,
  [SMALL_STATE(19)] = 1296,
  [SMALL_STATE(20)] = 1339,
  [SMALL_STATE(21)] = 1378,
  [SMALL_STATE(22)] = 1412,
  [SMALL_STATE(23)] = 1446,
  [SMALL_STATE(24)] = 1480,
  [SMALL_STATE(25)] = 1514,
  [SMALL_STATE(26)] = 1557,
  [SMALL_STATE(27)] = 1600,
  [SMALL_STATE(28)] = 1651,
  [SMALL_STATE(29)] = 1700,
  [SMALL_STATE(30)] = 1743,
  [SMALL_STATE(31)] = 1786,
  [SMALL_STATE(32)] = 1831,
  [SMALL_STATE(33)] = 1884,
  [SMALL_STATE(34)] = 1917,
  [SMALL_STATE(35)] = 1960,
  [SMALL_STATE(36)] = 2003,
  [SMALL_STATE(37)] = 2048,
  [SMALL_STATE(38)] = 2099,
  [SMALL_STATE(39)] = 2142,
  [SMALL_STATE(40)] = 2193,
  [SMALL_STATE(41)] = 2221,
  [SMALL_STATE(42)] = 2249,
  [SMALL_STATE(43)] = 2277,
  [SMALL_STATE(44)] = 2327,
  [SMALL_STATE(45)] = 2355,
  [SMALL_STATE(46)] = 2383,
  [SMALL_STATE(47)] = 2433,
  [SMALL_STATE(48)] = 2461,
  [SMALL_STATE(49)] = 2491,
  [SMALL_STATE(50)] = 2541,
  [SMALL_STATE(51)] = 2569,
  [SMALL_STATE(52)] = 2597,
  [SMALL_STATE(53)] = 2625,
  [SMALL_STATE(54)] = 2653,
  [SMALL_STATE(55)] = 2681,
  [SMALL_STATE(56)] = 2709,
  [SMALL_STATE(57)] = 2755,
  [SMALL_STATE(58)] = 2805,
  [SMALL_STATE(59)] = 2833,
  [SMALL_STATE(60)] = 2863,
  [SMALL_STATE(61)] = 2891,
  [SMALL_STATE(62)] = 2919,
  [SMALL_STATE(63)] = 2965,
  [SMALL_STATE(64)] = 2993,
  [SMALL_STATE(65)] = 3023,
  [SMALL_STATE(66)] = 3051,
  [SMALL_STATE(67)] = 3081,
  [SMALL_STATE(68)] = 3109,
  [SMALL_STATE(69)] = 3137,
  [SMALL_STATE(70)] = 3167,
  [SMALL_STATE(71)] = 3195,
  [SMALL_STATE(72)] = 3226,
  [SMALL_STATE(73)] = 3271,
  [SMALL_STATE(74)] = 3297,
  [SMALL_STATE(75)] = 3341,
  [SMALL_STATE(76)] = 3367,
  [SMALL_STATE(77)] = 3393,
  [SMALL_STATE(78)] = 3419,
  [SMALL_STATE(79)] = 3445,
  [SMALL_STATE(80)] = 3471,
  [SMALL_STATE(81)] = 3497,
  [SMALL_STATE(82)] = 3523,
  [SMALL_STATE(83)] = 3549,
  [SMALL_STATE(84)] = 3575,
  [SMALL_STATE(85)] = 3601,
  [SMALL_STATE(86)] = 3627,
  [SMALL_STATE(87)] = 3653,
  [SMALL_STATE(88)] = 3679,
  [SMALL_STATE(89)] = 3705,
  [SMALL_STATE(90)] = 3731,
  [SMALL_STATE(91)] = 3757,
  [SMALL_STATE(92)] = 3801,
  [SMALL_STATE(93)] = 3827,
  [SMALL_STATE(94)] = 3853,
  [SMALL_STATE(95)] = 3879,
  [SMALL_STATE(96)] = 3905,
  [SMALL_STATE(97)] = 3931,
  [SMALL_STATE(98)] = 3957,
  [SMALL_STATE(99)] = 3983,
  [SMALL_STATE(100)] = 4009,
  [SMALL_STATE(101)] = 4035,
  [SMALL_STATE(102)] = 4061,
  [SMALL_STATE(103)] = 4087,
  [SMALL_STATE(104)] = 4113,
  [SMALL_STATE(105)] = 4139,
  [SMALL_STATE(106)] = 4165,
  [SMALL_STATE(107)] = 4209,
  [SMALL_STATE(108)] = 4235,
  [SMALL_STATE(109)] = 4261,
  [SMALL_STATE(110)] = 4287,
  [SMALL_STATE(111)] = 4315,
  [SMALL_STATE(112)] = 4341,
  [SMALL_STATE(113)] = 4369,
  [SMALL_STATE(114)] = 4413,
  [SMALL_STATE(115)] = 4439,
  [SMALL_STATE(116)] = 4465,
  [SMALL_STATE(117)] = 4491,
  [SMALL_STATE(118)] = 4517,
  [SMALL_STATE(119)] = 4543,
  [SMALL_STATE(120)] = 4569,
  [SMALL_STATE(121)] = 4595,
  [SMALL_STATE(122)] = 4621,
  [SMALL_STATE(123)] = 4647,
  [SMALL_STATE(124)] = 4672,
  [SMALL_STATE(125)] = 4701,
  [SMALL_STATE(126)] = 4730,
  [SMALL_STATE(127)] = 4759,
  [SMALL_STATE(128)] = 4788,
  [SMALL_STATE(129)] = 4829,
  [SMALL_STATE(130)] = 4854,
  [SMALL_STATE(131)] = 4879,
  [SMALL_STATE(132)] = 4904,
  [SMALL_STATE(133)] = 4929,
  [SMALL_STATE(134)] = 4954,
  [SMALL_STATE(135)] = 4979,
  [SMALL_STATE(136)] = 5004,
  [SMALL_STATE(137)] = 5045,
  [SMALL_STATE(138)] = 5070,
  [SMALL_STATE(139)] = 5095,
  [SMALL_STATE(140)] = 5120,
  [SMALL_STATE(141)] = 5148,
  [SMALL_STATE(142)] = 5186,
  [SMALL_STATE(143)] = 5224,
  [SMALL_STATE(144)] = 5262,
  [SMALL_STATE(145)] = 5298,
  [SMALL_STATE(146)] = 5334,
  [SMALL_STATE(147)] = 5372,
  [SMALL_STATE(148)] = 5410,
  [SMALL_STATE(149)] = 5438,
  [SMALL_STATE(150)] = 5476,
  [SMALL_STATE(151)] = 5514,
  [SMALL_STATE(152)] = 5552,
  [SMALL_STATE(153)] = 5590,
  [SMALL_STATE(154)] = 5628,
  [SMALL_STATE(155)] = 5666,
  [SMALL_STATE(156)] = 5704,
  [SMALL_STATE(157)] = 5742,
  [SMALL_STATE(158)] = 5780,
  [SMALL_STATE(159)] = 5818,
  [SMALL_STATE(160)] = 5856,
  [SMALL_STATE(161)] = 5894,
  [SMALL_STATE(162)] = 5932,
  [SMALL_STATE(163)] = 5970,
  [SMALL_STATE(164)] = 6008,
  [SMALL_STATE(165)] = 6033,
  [SMALL_STATE(166)] = 6060,
  [SMALL_STATE(167)] = 6094,
  [SMALL_STATE(168)] = 6128,
  [SMALL_STATE(169)] = 6149,
  [SMALL_STATE(170)] = 6170,
  [SMALL_STATE(171)] = 6191,
  [SMALL_STATE(172)] = 6234,
  [SMALL_STATE(173)] = 6277,
  [SMALL_STATE(174)] = 6320,
  [SMALL_STATE(175)] = 6358,
  [SMALL_STATE(176)] = 6396,
  [SMALL_STATE(177)] = 6420,
  [SMALL_STATE(178)] = 6445,
  [SMALL_STATE(179)] = 6482,
  [SMALL_STATE(180)] = 6507,
  [SMALL_STATE(181)] = 6526,
  [SMALL_STATE(182)] = 6551,
  [SMALL_STATE(183)] = 6576,
  [SMALL_STATE(184)] = 6597,
  [SMALL_STATE(185)] = 6618,
  [SMALL_STATE(186)] = 6643,
  [SMALL_STATE(187)] = 6668,
  [SMALL_STATE(188)] = 6693,
  [SMALL_STATE(189)] = 6718,
  [SMALL_STATE(190)] = 6736,
  [SMALL_STATE(191)] = 6754,
  [SMALL_STATE(192)] = 6772,
  [SMALL_STATE(193)] = 6790,
  [SMALL_STATE(194)] = 6808,
  [SMALL_STATE(195)] = 6826,
  [SMALL_STATE(196)] = 6860,
  [SMALL_STATE(197)] = 6878,
  [SMALL_STATE(198)] = 6896,
  [SMALL_STATE(199)] = 6914,
  [SMALL_STATE(200)] = 6932,
  [SMALL_STATE(201)] = 6954,
  [SMALL_STATE(202)] = 6973,
  [SMALL_STATE(203)] = 6992,
  [SMALL_STATE(204)] = 7008,
  [SMALL_STATE(205)] = 7024,
  [SMALL_STATE(206)] = 7040,
  [SMALL_STATE(207)] = 7056,
  [SMALL_STATE(208)] = 7072,
  [SMALL_STATE(209)] = 7088,
  [SMALL_STATE(210)] = 7104,
  [SMALL_STATE(211)] = 7120,
  [SMALL_STATE(212)] = 7136,
  [SMALL_STATE(213)] = 7152,
  [SMALL_STATE(214)] = 7168,
  [SMALL_STATE(215)] = 7189,
  [SMALL_STATE(216)] = 7210,
  [SMALL_STATE(217)] = 7231,
  [SMALL_STATE(218)] = 7254,
  [SMALL_STATE(219)] = 7275,
  [SMALL_STATE(220)] = 7296,
  [SMALL_STATE(221)] = 7317,
  [SMALL_STATE(222)] = 7340,
  [SMALL_STATE(223)] = 7361,
  [SMALL_STATE(224)] = 7382,
  [SMALL_STATE(225)] = 7394,
  [SMALL_STATE(226)] = 7414,
  [SMALL_STATE(227)] = 7426,
  [SMALL_STATE(228)] = 7438,
  [SMALL_STATE(229)] = 7450,
  [SMALL_STATE(230)] = 7470,
  [SMALL_STATE(231)] = 7482,
  [SMALL_STATE(232)] = 7494,
  [SMALL_STATE(233)] = 7510,
  [SMALL_STATE(234)] = 7525,
  [SMALL_STATE(235)] = 7544,
  [SMALL_STATE(236)] = 7559,
  [SMALL_STATE(237)] = 7572,
  [SMALL_STATE(238)] = 7591,
  [SMALL_STATE(239)] = 7608,
  [SMALL_STATE(240)] = 7623,
  [SMALL_STATE(241)] = 7638,
  [SMALL_STATE(242)] = 7653,
  [SMALL_STATE(243)] = 7670,
  [SMALL_STATE(244)] = 7689,
  [SMALL_STATE(245)] = 7704,
  [SMALL_STATE(246)] = 7723,
  [SMALL_STATE(247)] = 7738,
  [SMALL_STATE(248)] = 7752,
  [SMALL_STATE(249)] = 7762,
  [SMALL_STATE(250)] = 7776,
  [SMALL_STATE(251)] = 7786,
  [SMALL_STATE(252)] = 7802,
  [SMALL_STATE(253)] = 7816,
  [SMALL_STATE(254)] = 7826,
  [SMALL_STATE(255)] = 7840,
  [SMALL_STATE(256)] = 7856,
  [SMALL_STATE(257)] = 7866,
  [SMALL_STATE(258)] = 7878,
  [SMALL_STATE(259)] = 7892,
  [SMALL_STATE(260)] = 7906,
  [SMALL_STATE(261)] = 7920,
  [SMALL_STATE(262)] = 7933,
  [SMALL_STATE(263)] = 7946,
  [SMALL_STATE(264)] = 7959,
  [SMALL_STATE(265)] = 7972,
  [SMALL_STATE(266)] = 7985,
  [SMALL_STATE(267)] = 7998,
  [SMALL_STATE(268)] = 8011,
  [SMALL_STATE(269)] = 8022,
  [SMALL_STATE(270)] = 8035,
  [SMALL_STATE(271)] = 8048,
  [SMALL_STATE(272)] = 8061,
  [SMALL_STATE(273)] = 8074,
  [SMALL_STATE(274)] = 8087,
  [SMALL_STATE(275)] = 8100,
  [SMALL_STATE(276)] = 8110,
  [SMALL_STATE(277)] = 8120,
  [SMALL_STATE(278)] = 8130,
  [SMALL_STATE(279)] = 8140,
  [SMALL_STATE(280)] = 8150,
  [SMALL_STATE(281)] = 8160,
  [SMALL_STATE(282)] = 8170,
  [SMALL_STATE(283)] = 8180,
  [SMALL_STATE(284)] = 8190,
  [SMALL_STATE(285)] = 8200,
  [SMALL_STATE(286)] = 8210,
  [SMALL_STATE(287)] = 8217,
  [SMALL_STATE(288)] = 8224,
  [SMALL_STATE(289)] = 8231,
  [SMALL_STATE(290)] = 8238,
  [SMALL_STATE(291)] = 8245,
  [SMALL_STATE(292)] = 8252,
  [SMALL_STATE(293)] = 8259,
  [SMALL_STATE(294)] = 8266,
  [SMALL_STATE(295)] = 8273,
  [SMALL_STATE(296)] = 8280,
  [SMALL_STATE(297)] = 8287,
  [SMALL_STATE(298)] = 8294,
  [SMALL_STATE(299)] = 8301,
  [SMALL_STATE(300)] = 8308,
  [SMALL_STATE(301)] = 8315,
  [SMALL_STATE(302)] = 8322,
  [SMALL_STATE(303)] = 8329,
  [SMALL_STATE(304)] = 8336,
  [SMALL_STATE(305)] = 8343,
  [SMALL_STATE(306)] = 8350,
  [SMALL_STATE(307)] = 8357,
  [SMALL_STATE(308)] = 8364,
  [SMALL_STATE(309)] = 8371,
  [SMALL_STATE(310)] = 8378,
  [SMALL_STATE(311)] = 8385,
  [SMALL_STATE(312)] = 8392,
  [SMALL_STATE(313)] = 8399,
  [SMALL_STATE(314)] = 8406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(150),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(185),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(160),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(187),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(172),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(300),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(303),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(169),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(167),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(308),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(154),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(177),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(147),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(262),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(179),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(172),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(67),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(300),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(303),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(306),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(36),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(168),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(166),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(308),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(149),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(290),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(110),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(112),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(71),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(290),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(156),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(141),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(165),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(71),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(165),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(283),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(276),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(182),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(163),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(34),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [991] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
