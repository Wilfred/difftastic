#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 287
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
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
  sym_pseudo_element_arguments = 77,
  sym_declaration = 78,
  sym_last_declaration = 79,
  sym__query = 80,
  sym_feature_query = 81,
  sym_parenthesized_query = 82,
  sym_binary_query = 83,
  sym_unary_query = 84,
  sym_selector_query = 85,
  sym__value = 86,
  sym_parenthesized_value = 87,
  sym_color_value = 88,
  sym_integer_value = 89,
  sym_float_value = 90,
  sym_call_expression = 91,
  sym_binary_expression = 92,
  sym_arguments = 93,
  aux_sym_stylesheet_repeat1 = 94,
  aux_sym_import_statement_repeat1 = 95,
  aux_sym_keyframe_block_list_repeat1 = 96,
  aux_sym_selectors_repeat1 = 97,
  aux_sym_block_repeat1 = 98,
  aux_sym_pseudo_class_arguments_repeat1 = 99,
  aux_sym_pseudo_class_arguments_repeat2 = 100,
  aux_sym_declaration_repeat1 = 101,
  aux_sym_arguments_repeat1 = 102,
  alias_sym_class_name = 103,
  alias_sym_feature_name = 104,
  alias_sym_function_name = 105,
  alias_sym_id_name = 106,
  alias_sym_keyframes_name = 107,
  alias_sym_keyword_query = 108,
  alias_sym_namespace_name = 109,
  alias_sym_property_name = 110,
  alias_sym_tag_name = 111,
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
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

static const uint16_t ts_non_terminal_alias_map[] = {
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
        : c <= '*')))
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
        : c <= ')')))
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
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'k') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 67:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 68:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '&') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
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
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == 'y') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '_') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(25);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'y') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'y') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(68);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 72},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 12},
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
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 72, .external_lex_state = 1},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 72, .external_lex_state = 1},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 72, .external_lex_state = 1},
  [114] = {.lex_state = 72, .external_lex_state = 1},
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
  [126] = {.lex_state = 72, .external_lex_state = 1},
  [127] = {.lex_state = 72, .external_lex_state = 1},
  [128] = {.lex_state = 72, .external_lex_state = 1},
  [129] = {.lex_state = 72, .external_lex_state = 1},
  [130] = {.lex_state = 72, .external_lex_state = 1},
  [131] = {.lex_state = 72, .external_lex_state = 1},
  [132] = {.lex_state = 72, .external_lex_state = 1},
  [133] = {.lex_state = 72, .external_lex_state = 1},
  [134] = {.lex_state = 72, .external_lex_state = 1},
  [135] = {.lex_state = 72, .external_lex_state = 1},
  [136] = {.lex_state = 72, .external_lex_state = 1},
  [137] = {.lex_state = 72, .external_lex_state = 1},
  [138] = {.lex_state = 72, .external_lex_state = 1},
  [139] = {.lex_state = 72, .external_lex_state = 1},
  [140] = {.lex_state = 72, .external_lex_state = 1},
  [141] = {.lex_state = 72, .external_lex_state = 1},
  [142] = {.lex_state = 72, .external_lex_state = 1},
  [143] = {.lex_state = 72, .external_lex_state = 1},
  [144] = {.lex_state = 72, .external_lex_state = 1},
  [145] = {.lex_state = 72, .external_lex_state = 1},
  [146] = {.lex_state = 72, .external_lex_state = 1},
  [147] = {.lex_state = 72, .external_lex_state = 1},
  [148] = {.lex_state = 72, .external_lex_state = 1},
  [149] = {.lex_state = 72, .external_lex_state = 1},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 72, .external_lex_state = 1},
  [152] = {.lex_state = 72, .external_lex_state = 1},
  [153] = {.lex_state = 72, .external_lex_state = 1},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 72, .external_lex_state = 1},
  [157] = {.lex_state = 72, .external_lex_state = 1},
  [158] = {.lex_state = 72, .external_lex_state = 1},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 72, .external_lex_state = 1},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 72, .external_lex_state = 1},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 72, .external_lex_state = 1},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 72},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 72},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 72},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 72},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 18},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 72},
  [259] = {.lex_state = 72},
  [260] = {.lex_state = 72},
  [261] = {.lex_state = 72},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 72},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 24},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 72},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 72},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 24},
  [280] = {.lex_state = 72},
  [281] = {.lex_state = 72},
  [282] = {.lex_state = 24},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 72},
  [285] = {.lex_state = 72},
  [286] = {.lex_state = 72},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
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
    [sym_selectors] = STATE(250),
    [sym__selector] = STATE(134),
    [sym_universal_selector] = STATE(134),
    [sym_class_selector] = STATE(134),
    [sym_pseudo_class_selector] = STATE(134),
    [sym_pseudo_element_selector] = STATE(134),
    [sym_id_selector] = STATE(134),
    [sym_attribute_selector] = STATE(134),
    [sym_child_selector] = STATE(134),
    [sym_descendant_selector] = STATE(134),
    [sym_sibling_selector] = STATE(134),
    [sym_adjacent_sibling_selector] = STATE(134),
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

static const uint16_t ts_small_parse_table[] = {
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
    STATE(252), 1,
      sym_selectors,
    STATE(256), 1,
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
    STATE(134), 11,
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
    STATE(252), 1,
      sym_selectors,
    STATE(274), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(134), 11,
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
    STATE(252), 1,
      sym_selectors,
    STATE(271), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 10,
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
    STATE(134), 11,
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
    STATE(252), 1,
      sym_selectors,
    STATE(264), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(134), 11,
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
    STATE(252), 1,
      sym_selectors,
    STATE(257), 1,
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
    STATE(134), 11,
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
    STATE(252), 1,
      sym_selectors,
    STATE(277), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(134), 11,
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
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_ATimport,
    ACTIONS(70), 1,
      anon_sym_ATmedia,
    ACTIONS(73), 1,
      anon_sym_ATcharset,
    ACTIONS(76), 1,
      anon_sym_ATnamespace,
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
    STATE(250), 1,
      sym_selectors,
    ACTIONS(79), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(134), 11,
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
    STATE(250), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(134), 11,
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
      anon_sym_ATimport,
    ACTIONS(117), 1,
      anon_sym_ATmedia,
    ACTIONS(120), 1,
      anon_sym_ATcharset,
    ACTIONS(123), 1,
      anon_sym_ATnamespace,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
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
    STATE(252), 1,
      sym_selectors,
    ACTIONS(126), 2,
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
      aux_sym_block_repeat1,
    STATE(134), 11,
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
    STATE(39), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(146), 11,
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
  [827] = 18,
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
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(144), 11,
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
  [898] = 17,
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
    ACTIONS(185), 1,
      sym_nesting_selector,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
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
  [966] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1023] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(207), 1,
      sym_important,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
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
  [1115] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      sym_important,
    STATE(34), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1169] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(223), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(166), 11,
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
  [1211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(231), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(233), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(227), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1243] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(235), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(142), 11,
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
  [1285] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(237), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(176), 11,
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
  [1327] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(239), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(136), 11,
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
  [1369] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(241), 2,
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
  [1411] = 10,
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
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(243), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(129), 11,
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
  [1453] = 13,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      sym_string_value,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1500] = 13,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(232), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1547] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_LPAREN2,
    ACTIONS(264), 1,
      sym_string_value,
    ACTIONS(267), 1,
      aux_sym_integer_value_token1,
    ACTIONS(270), 1,
      aux_sym_float_value_token1,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(276), 1,
      sym_plain_value,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1592] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1641] = 13,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(234), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(289), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [1714] = 3,
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
  [1740] = 3,
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
  [1766] = 3,
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
  [1792] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(309), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1864] = 3,
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
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(317), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(321), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1942] = 13,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(329), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2014] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      sym_string_value,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_plain_value,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2060] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      anon_sym_LPAREN2,
    ACTIONS(341), 1,
      sym_string_value,
    ACTIONS(344), 1,
      aux_sym_integer_value_token1,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(333), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2102] = 13,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(245), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(329), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(360), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(364), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2252] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(366), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(374), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(378), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
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
  [2398] = 3,
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
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
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
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(390), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
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
  [2580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
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
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(374), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(378), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(364), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(360), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2740] = 3,
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
  [2766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(390), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(317), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2818] = 3,
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
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(406), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2870] = 3,
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
  [2896] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(410), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(309), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(321), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
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
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(406), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3130] = 4,
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
  [3157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_unit,
    ACTIONS(420), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(418), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3184] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(426), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3273] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(436), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3337] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3377] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(211), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(456), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3437] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3477] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(212), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3513] = 3,
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
  [3537] = 3,
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
  [3561] = 3,
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
  [3585] = 3,
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
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(480), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3633] = 11,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(488), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(486), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3700] = 10,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    STATE(98), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(490), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(256), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3764] = 10,
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
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_string_value,
    STATE(48), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3801] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(183), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(500), 1,
      sym_string_value,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym_plain_value,
    STATE(214), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3869] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      sym_string_value,
    ACTIONS(512), 1,
      sym_plain_value,
    STATE(215), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3903] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(514), 1,
      sym_string_value,
    ACTIONS(516), 1,
      sym_plain_value,
    STATE(188), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_pseudo_class_arguments,
    ACTIONS(518), 11,
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
  [3963] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      sym_string_value,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(536), 1,
      sym_plain_value,
    STATE(89), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3997] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(186), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4031] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_string_value,
    ACTIONS(544), 1,
      sym_plain_value,
    STATE(97), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_pseudo_class_arguments,
    ACTIONS(546), 11,
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
  [4091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(552), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(550), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_pseudo_element_arguments,
    ACTIONS(554), 11,
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
  [4143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_pseudo_element_arguments,
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
  [4169] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_string_value,
    ACTIONS(566), 1,
      sym_plain_value,
    STATE(209), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4203] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_string_value,
    ACTIONS(570), 1,
      sym_plain_value,
    STATE(17), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4237] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym_string_value,
    ACTIONS(574), 1,
      sym_plain_value,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4271] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_string_value,
    ACTIONS(578), 1,
      sym_plain_value,
    STATE(217), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4305] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_string_value,
    ACTIONS(582), 1,
      sym_plain_value,
    STATE(92), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4339] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym_string_value,
    ACTIONS(586), 1,
      sym_plain_value,
    STATE(177), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4373] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_string_value,
    ACTIONS(590), 1,
      sym_plain_value,
    STATE(213), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4407] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(592), 1,
      sym_string_value,
    ACTIONS(594), 1,
      sym_plain_value,
    STATE(216), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(596), 1,
      sym_string_value,
    ACTIONS(598), 1,
      sym_plain_value,
    STATE(221), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4475] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_plain_value,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4509] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(604), 1,
      sym_string_value,
    ACTIONS(606), 1,
      sym_plain_value,
    STATE(14), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(608), 11,
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
  [4563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(612), 11,
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
  [4583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      anon_sym_COLON,
    ACTIONS(616), 10,
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
  [4605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(622), 10,
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
  [4627] = 3,
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
  [4647] = 3,
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
  [4667] = 3,
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
  [4687] = 3,
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
  [4707] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    STATE(242), 1,
      aux_sym_selectors_repeat1,
  [4747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(662), 11,
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
  [4767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(666), 10,
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
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(670), 11,
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
  [4809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(674), 11,
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
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(678), 11,
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
  [4849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(682), 11,
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
  [4869] = 3,
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
  [4889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(686), 10,
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
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(690), 11,
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
  [4931] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    STATE(245), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(694), 11,
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
  [4991] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [5031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_COLON,
    ACTIONS(698), 11,
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
  [5051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(702), 11,
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
  [5071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(706), 11,
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
  [5091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
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
  [5115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(712), 11,
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
  [5135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(716), 11,
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
  [5155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(720), 11,
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
  [5175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(219), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(207), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
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
  [5244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
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
  [5263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
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
  [5282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(241), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5307] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(201), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_unit,
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
  [5388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(203), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(204), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(428), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5457] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    ACTIONS(736), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(222), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(230), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
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
  [5563] = 3,
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
  [5581] = 3,
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
  [5599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(432), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5617] = 3,
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
  [5635] = 3,
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
  [5653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(458), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_COLON,
    ACTIONS(650), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      anon_sym_TILDE,
    ACTIONS(658), 1,
      anon_sym_PLUS,
    ACTIONS(660), 1,
      sym__descendant_operator,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [5705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(482), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(438), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_arguments,
    ACTIONS(211), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SLASH,
    ACTIONS(744), 1,
      sym_unit,
    ACTIONS(412), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(746), 1,
      sym_unit,
    ACTIONS(418), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5798] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(752), 1,
      aux_sym_integer_value_token1,
    STATE(255), 1,
      sym_integer_value,
    ACTIONS(750), 2,
      sym_from,
      sym_to,
    STATE(184), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5819] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_block,
    STATE(208), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [5842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(765), 1,
      aux_sym_integer_value_token1,
    STATE(255), 1,
      sym_integer_value,
    ACTIONS(762), 2,
      sym_from,
      sym_to,
    STATE(184), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    ACTIONS(768), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5878] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_block,
    STATE(210), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [5901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
    ACTIONS(774), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH,
    ACTIONS(480), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_integer_value_token1,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym_integer_value,
    ACTIONS(750), 2,
      sym_from,
      sym_to,
    STATE(195), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5952] = 3,
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
  [5967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SLASH,
    ACTIONS(436), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SLASH,
    ACTIONS(426), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SLASH,
    ACTIONS(456), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6012] = 3,
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
  [6027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_integer_value_token1,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym_integer_value,
    ACTIONS(750), 2,
      sym_from,
      sym_to,
    STATE(184), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6048] = 3,
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
  [6063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_integer_value_token1,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym_integer_value,
    ACTIONS(750), 2,
      sym_from,
      sym_to,
    STATE(182), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6099] = 3,
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
  [6114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym_block,
    STATE(233), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(226), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_block,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_block,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(816), 1,
      anon_sym_SEMI,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_string_value,
    ACTIONS(822), 1,
      sym_identifier,
    STATE(171), 1,
      sym_arguments,
    STATE(268), 1,
      sym_call_expression,
  [6407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(824), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      sym_identifier,
    ACTIONS(826), 1,
      sym_string_value,
    STATE(171), 1,
      sym_arguments,
    STATE(276), 1,
      sym_call_expression,
  [6439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      sym_block,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COLON,
    ACTIONS(784), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(824), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(839), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_block,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_string_value,
    ACTIONS(848), 1,
      sym_identifier,
    STATE(275), 1,
      sym_call_expression,
  [6649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_selectors_repeat1,
  [6675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_string_value,
    ACTIONS(857), 1,
      sym_identifier,
    STATE(283), 1,
      sym_call_expression,
  [6688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 2,
      anon_sym_and,
      anon_sym_or,
  [6712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      aux_sym_selectors_repeat1,
  [6725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_import_statement_repeat1,
  [6751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_keyframe_block_list,
  [6774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_keyframe_block_list,
  [6784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [6794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
  [6804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [6814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [6824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [6834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(880), 1,
      sym_unit,
  [6844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym_color_value_token1,
    ACTIONS(884), 1,
      sym_identifier,
  [6854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_block,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [6878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_identifier,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_identifier,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_identifier,
  [6899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_identifier,
  [6906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_SEMI,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_identifier,
  [6934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_SEMI,
  [6941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_color_value_token1,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_SEMI,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LPAREN2,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_identifier,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
  [6983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_identifier,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_SEMI,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SEMI,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym_color_value_token1,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_identifier,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym_color_value_token1,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_SEMI,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
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
  [SMALL_STATE(13)] = 898,
  [SMALL_STATE(14)] = 966,
  [SMALL_STATE(15)] = 1023,
  [SMALL_STATE(16)] = 1077,
  [SMALL_STATE(17)] = 1115,
  [SMALL_STATE(18)] = 1169,
  [SMALL_STATE(19)] = 1211,
  [SMALL_STATE(20)] = 1243,
  [SMALL_STATE(21)] = 1285,
  [SMALL_STATE(22)] = 1327,
  [SMALL_STATE(23)] = 1369,
  [SMALL_STATE(24)] = 1411,
  [SMALL_STATE(25)] = 1453,
  [SMALL_STATE(26)] = 1500,
  [SMALL_STATE(27)] = 1547,
  [SMALL_STATE(28)] = 1592,
  [SMALL_STATE(29)] = 1641,
  [SMALL_STATE(30)] = 1688,
  [SMALL_STATE(31)] = 1714,
  [SMALL_STATE(32)] = 1740,
  [SMALL_STATE(33)] = 1766,
  [SMALL_STATE(34)] = 1792,
  [SMALL_STATE(35)] = 1838,
  [SMALL_STATE(36)] = 1864,
  [SMALL_STATE(37)] = 1890,
  [SMALL_STATE(38)] = 1916,
  [SMALL_STATE(39)] = 1942,
  [SMALL_STATE(40)] = 1988,
  [SMALL_STATE(41)] = 2014,
  [SMALL_STATE(42)] = 2060,
  [SMALL_STATE(43)] = 2102,
  [SMALL_STATE(44)] = 2148,
  [SMALL_STATE(45)] = 2174,
  [SMALL_STATE(46)] = 2200,
  [SMALL_STATE(47)] = 2226,
  [SMALL_STATE(48)] = 2252,
  [SMALL_STATE(49)] = 2294,
  [SMALL_STATE(50)] = 2320,
  [SMALL_STATE(51)] = 2346,
  [SMALL_STATE(52)] = 2372,
  [SMALL_STATE(53)] = 2398,
  [SMALL_STATE(54)] = 2424,
  [SMALL_STATE(55)] = 2450,
  [SMALL_STATE(56)] = 2476,
  [SMALL_STATE(57)] = 2502,
  [SMALL_STATE(58)] = 2528,
  [SMALL_STATE(59)] = 2554,
  [SMALL_STATE(60)] = 2580,
  [SMALL_STATE(61)] = 2610,
  [SMALL_STATE(62)] = 2636,
  [SMALL_STATE(63)] = 2662,
  [SMALL_STATE(64)] = 2688,
  [SMALL_STATE(65)] = 2714,
  [SMALL_STATE(66)] = 2740,
  [SMALL_STATE(67)] = 2766,
  [SMALL_STATE(68)] = 2792,
  [SMALL_STATE(69)] = 2818,
  [SMALL_STATE(70)] = 2844,
  [SMALL_STATE(71)] = 2870,
  [SMALL_STATE(72)] = 2896,
  [SMALL_STATE(73)] = 2922,
  [SMALL_STATE(74)] = 2948,
  [SMALL_STATE(75)] = 2974,
  [SMALL_STATE(76)] = 3000,
  [SMALL_STATE(77)] = 3026,
  [SMALL_STATE(78)] = 3052,
  [SMALL_STATE(79)] = 3078,
  [SMALL_STATE(80)] = 3104,
  [SMALL_STATE(81)] = 3130,
  [SMALL_STATE(82)] = 3157,
  [SMALL_STATE(83)] = 3184,
  [SMALL_STATE(84)] = 3225,
  [SMALL_STATE(85)] = 3249,
  [SMALL_STATE(86)] = 3273,
  [SMALL_STATE(87)] = 3313,
  [SMALL_STATE(88)] = 3337,
  [SMALL_STATE(89)] = 3377,
  [SMALL_STATE(90)] = 3413,
  [SMALL_STATE(91)] = 3437,
  [SMALL_STATE(92)] = 3477,
  [SMALL_STATE(93)] = 3513,
  [SMALL_STATE(94)] = 3537,
  [SMALL_STATE(95)] = 3561,
  [SMALL_STATE(96)] = 3585,
  [SMALL_STATE(97)] = 3609,
  [SMALL_STATE(98)] = 3633,
  [SMALL_STATE(99)] = 3673,
  [SMALL_STATE(100)] = 3700,
  [SMALL_STATE(101)] = 3737,
  [SMALL_STATE(102)] = 3764,
  [SMALL_STATE(103)] = 3801,
  [SMALL_STATE(104)] = 3835,
  [SMALL_STATE(105)] = 3869,
  [SMALL_STATE(106)] = 3903,
  [SMALL_STATE(107)] = 3937,
  [SMALL_STATE(108)] = 3963,
  [SMALL_STATE(109)] = 3997,
  [SMALL_STATE(110)] = 4031,
  [SMALL_STATE(111)] = 4065,
  [SMALL_STATE(112)] = 4091,
  [SMALL_STATE(113)] = 4117,
  [SMALL_STATE(114)] = 4143,
  [SMALL_STATE(115)] = 4169,
  [SMALL_STATE(116)] = 4203,
  [SMALL_STATE(117)] = 4237,
  [SMALL_STATE(118)] = 4271,
  [SMALL_STATE(119)] = 4305,
  [SMALL_STATE(120)] = 4339,
  [SMALL_STATE(121)] = 4373,
  [SMALL_STATE(122)] = 4407,
  [SMALL_STATE(123)] = 4441,
  [SMALL_STATE(124)] = 4475,
  [SMALL_STATE(125)] = 4509,
  [SMALL_STATE(126)] = 4543,
  [SMALL_STATE(127)] = 4563,
  [SMALL_STATE(128)] = 4583,
  [SMALL_STATE(129)] = 4605,
  [SMALL_STATE(130)] = 4627,
  [SMALL_STATE(131)] = 4647,
  [SMALL_STATE(132)] = 4667,
  [SMALL_STATE(133)] = 4687,
  [SMALL_STATE(134)] = 4707,
  [SMALL_STATE(135)] = 4747,
  [SMALL_STATE(136)] = 4767,
  [SMALL_STATE(137)] = 4789,
  [SMALL_STATE(138)] = 4809,
  [SMALL_STATE(139)] = 4829,
  [SMALL_STATE(140)] = 4849,
  [SMALL_STATE(141)] = 4869,
  [SMALL_STATE(142)] = 4889,
  [SMALL_STATE(143)] = 4911,
  [SMALL_STATE(144)] = 4931,
  [SMALL_STATE(145)] = 4971,
  [SMALL_STATE(146)] = 4991,
  [SMALL_STATE(147)] = 5031,
  [SMALL_STATE(148)] = 5051,
  [SMALL_STATE(149)] = 5071,
  [SMALL_STATE(150)] = 5091,
  [SMALL_STATE(151)] = 5115,
  [SMALL_STATE(152)] = 5135,
  [SMALL_STATE(153)] = 5155,
  [SMALL_STATE(154)] = 5175,
  [SMALL_STATE(155)] = 5200,
  [SMALL_STATE(156)] = 5225,
  [SMALL_STATE(157)] = 5244,
  [SMALL_STATE(158)] = 5263,
  [SMALL_STATE(159)] = 5282,
  [SMALL_STATE(160)] = 5307,
  [SMALL_STATE(161)] = 5342,
  [SMALL_STATE(162)] = 5367,
  [SMALL_STATE(163)] = 5388,
  [SMALL_STATE(164)] = 5413,
  [SMALL_STATE(165)] = 5438,
  [SMALL_STATE(166)] = 5457,
  [SMALL_STATE(167)] = 5492,
  [SMALL_STATE(168)] = 5517,
  [SMALL_STATE(169)] = 5542,
  [SMALL_STATE(170)] = 5563,
  [SMALL_STATE(171)] = 5581,
  [SMALL_STATE(172)] = 5599,
  [SMALL_STATE(173)] = 5617,
  [SMALL_STATE(174)] = 5635,
  [SMALL_STATE(175)] = 5653,
  [SMALL_STATE(176)] = 5671,
  [SMALL_STATE(177)] = 5705,
  [SMALL_STATE(178)] = 5723,
  [SMALL_STATE(179)] = 5741,
  [SMALL_STATE(180)] = 5762,
  [SMALL_STATE(181)] = 5780,
  [SMALL_STATE(182)] = 5798,
  [SMALL_STATE(183)] = 5819,
  [SMALL_STATE(184)] = 5842,
  [SMALL_STATE(185)] = 5863,
  [SMALL_STATE(186)] = 5878,
  [SMALL_STATE(187)] = 5901,
  [SMALL_STATE(188)] = 5916,
  [SMALL_STATE(189)] = 5931,
  [SMALL_STATE(190)] = 5952,
  [SMALL_STATE(191)] = 5967,
  [SMALL_STATE(192)] = 5982,
  [SMALL_STATE(193)] = 5997,
  [SMALL_STATE(194)] = 6012,
  [SMALL_STATE(195)] = 6027,
  [SMALL_STATE(196)] = 6048,
  [SMALL_STATE(197)] = 6063,
  [SMALL_STATE(198)] = 6084,
  [SMALL_STATE(199)] = 6099,
  [SMALL_STATE(200)] = 6114,
  [SMALL_STATE(201)] = 6126,
  [SMALL_STATE(202)] = 6138,
  [SMALL_STATE(203)] = 6150,
  [SMALL_STATE(204)] = 6162,
  [SMALL_STATE(205)] = 6182,
  [SMALL_STATE(206)] = 6194,
  [SMALL_STATE(207)] = 6206,
  [SMALL_STATE(208)] = 6226,
  [SMALL_STATE(209)] = 6245,
  [SMALL_STATE(210)] = 6260,
  [SMALL_STATE(211)] = 6279,
  [SMALL_STATE(212)] = 6296,
  [SMALL_STATE(213)] = 6313,
  [SMALL_STATE(214)] = 6328,
  [SMALL_STATE(215)] = 6343,
  [SMALL_STATE(216)] = 6358,
  [SMALL_STATE(217)] = 6373,
  [SMALL_STATE(218)] = 6388,
  [SMALL_STATE(219)] = 6407,
  [SMALL_STATE(220)] = 6420,
  [SMALL_STATE(221)] = 6439,
  [SMALL_STATE(222)] = 6454,
  [SMALL_STATE(223)] = 6468,
  [SMALL_STATE(224)] = 6478,
  [SMALL_STATE(225)] = 6488,
  [SMALL_STATE(226)] = 6502,
  [SMALL_STATE(227)] = 6518,
  [SMALL_STATE(228)] = 6530,
  [SMALL_STATE(229)] = 6544,
  [SMALL_STATE(230)] = 6554,
  [SMALL_STATE(231)] = 6568,
  [SMALL_STATE(232)] = 6582,
  [SMALL_STATE(233)] = 6596,
  [SMALL_STATE(234)] = 6612,
  [SMALL_STATE(235)] = 6626,
  [SMALL_STATE(236)] = 6636,
  [SMALL_STATE(237)] = 6649,
  [SMALL_STATE(238)] = 6662,
  [SMALL_STATE(239)] = 6675,
  [SMALL_STATE(240)] = 6688,
  [SMALL_STATE(241)] = 6701,
  [SMALL_STATE(242)] = 6712,
  [SMALL_STATE(243)] = 6725,
  [SMALL_STATE(244)] = 6738,
  [SMALL_STATE(245)] = 6751,
  [SMALL_STATE(246)] = 6764,
  [SMALL_STATE(247)] = 6774,
  [SMALL_STATE(248)] = 6784,
  [SMALL_STATE(249)] = 6794,
  [SMALL_STATE(250)] = 6804,
  [SMALL_STATE(251)] = 6814,
  [SMALL_STATE(252)] = 6824,
  [SMALL_STATE(253)] = 6834,
  [SMALL_STATE(254)] = 6844,
  [SMALL_STATE(255)] = 6854,
  [SMALL_STATE(256)] = 6864,
  [SMALL_STATE(257)] = 6871,
  [SMALL_STATE(258)] = 6878,
  [SMALL_STATE(259)] = 6885,
  [SMALL_STATE(260)] = 6892,
  [SMALL_STATE(261)] = 6899,
  [SMALL_STATE(262)] = 6906,
  [SMALL_STATE(263)] = 6913,
  [SMALL_STATE(264)] = 6920,
  [SMALL_STATE(265)] = 6927,
  [SMALL_STATE(266)] = 6934,
  [SMALL_STATE(267)] = 6941,
  [SMALL_STATE(268)] = 6948,
  [SMALL_STATE(269)] = 6955,
  [SMALL_STATE(270)] = 6962,
  [SMALL_STATE(271)] = 6969,
  [SMALL_STATE(272)] = 6976,
  [SMALL_STATE(273)] = 6983,
  [SMALL_STATE(274)] = 6990,
  [SMALL_STATE(275)] = 6997,
  [SMALL_STATE(276)] = 7004,
  [SMALL_STATE(277)] = 7011,
  [SMALL_STATE(278)] = 7018,
  [SMALL_STATE(279)] = 7025,
  [SMALL_STATE(280)] = 7032,
  [SMALL_STATE(281)] = 7039,
  [SMALL_STATE(282)] = 7046,
  [SMALL_STATE(283)] = 7053,
  [SMALL_STATE(284)] = 7060,
  [SMALL_STATE(285)] = 7067,
  [SMALL_STATE(286)] = 7074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(108),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(155),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(118),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(239),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(259),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(168),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(134),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(140),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(273),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(286),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(270),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(261),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(157),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(103),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(164),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(236),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(167),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(273),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(286),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(258),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(267),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(105),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(60),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(267),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(105),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(82),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(60),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 10),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 10),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(124),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(116),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(255),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(253),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 14),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(18),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [910] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
