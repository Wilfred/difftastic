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

#define LANGUAGE_VERSION 11
#define STATE_COUNT 477
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 21
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_ATforward = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_COLON = 18,
  anon_sym_ATmixin = 19,
  anon_sym_ATinclude = 20,
  anon_sym_LPAREN2 = 21,
  anon_sym_RPAREN2 = 22,
  anon_sym_PERCENT = 23,
  anon_sym_ATextend = 24,
  anon_sym_ATif = 25,
  anon_sym_ATelse = 26,
  anon_sym_if = 27,
  anon_sym_ATeach = 28,
  anon_sym_in = 29,
  anon_sym_ATfor = 30,
  anon_sym_through = 31,
  anon_sym_ATwhile = 32,
  anon_sym_ATfunction = 33,
  anon_sym_ATreturn = 34,
  sym_nesting_selector = 35,
  anon_sym_STAR = 36,
  anon_sym_DOT = 37,
  anon_sym_COLON_COLON = 38,
  anon_sym_POUND = 39,
  anon_sym_LBRACK = 40,
  anon_sym_EQ = 41,
  anon_sym_TILDE_EQ = 42,
  anon_sym_CARET_EQ = 43,
  anon_sym_PIPE_EQ = 44,
  anon_sym_STAR_EQ = 45,
  anon_sym_DOLLAR_EQ = 46,
  anon_sym_RBRACK = 47,
  anon_sym_GT = 48,
  anon_sym_TILDE = 49,
  anon_sym_PLUS = 50,
  sym_important = 51,
  anon_sym_and = 52,
  anon_sym_or = 53,
  anon_sym_not = 54,
  anon_sym_only = 55,
  anon_sym_selector = 56,
  aux_sym_color_value_token1 = 57,
  sym_string_value = 58,
  aux_sym_integer_value_token1 = 59,
  aux_sym_float_value_token1 = 60,
  sym_unit = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_LT = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_LT_EQ = 67,
  anon_sym_GT_EQ = 68,
  sym_identifier = 69,
  sym_variable_identifier = 70,
  sym_at_keyword = 71,
  sym_comment = 72,
  sym_single_line_comment = 73,
  sym_plain_value = 74,
  sym__descendant_operator = 75,
  sym_stylesheet = 76,
  sym_import_statement = 77,
  sym_media_statement = 78,
  sym_charset_statement = 79,
  sym_namespace_statement = 80,
  sym_keyframes_statement = 81,
  sym_keyframe_block_list = 82,
  sym_keyframe_block = 83,
  sym_from = 84,
  sym_supports_statement = 85,
  sym_at_rule = 86,
  sym_use_statement = 87,
  sym_forward_statement = 88,
  sym_parameters = 89,
  sym_parameter = 90,
  sym_mixin_statement = 91,
  sym_include_statement = 92,
  sym_include_arguments = 93,
  sym_include_argument = 94,
  sym_placeholder = 95,
  sym_extend_statement = 96,
  sym_if_statement = 97,
  sym_if_clause = 98,
  sym_else_if_clause = 99,
  sym_else_clause = 100,
  sym_each_statement = 101,
  sym_for_statement = 102,
  sym_while_statement = 103,
  sym_function_statement = 104,
  sym_return_statement = 105,
  sym_rule_set = 106,
  sym_selectors = 107,
  sym_block = 108,
  sym__selector = 109,
  sym_universal_selector = 110,
  sym_class_selector = 111,
  sym_pseudo_class_selector = 112,
  sym_pseudo_element_selector = 113,
  sym_id_selector = 114,
  sym_attribute_selector = 115,
  sym_child_selector = 116,
  sym_descendant_selector = 117,
  sym_sibling_selector = 118,
  sym_adjacent_sibling_selector = 119,
  sym_pseudo_class_arguments = 120,
  sym_declaration = 121,
  sym_last_declaration = 122,
  sym__query = 123,
  sym_feature_query = 124,
  sym_parenthesized_query = 125,
  sym_binary_query = 126,
  sym_unary_query = 127,
  sym_selector_query = 128,
  sym__value = 129,
  sym_parenthesized_value = 130,
  sym_color_value = 131,
  sym_integer_value = 132,
  sym_float_value = 133,
  sym_call_expression = 134,
  sym_binary_expression = 135,
  sym_arguments = 136,
  aux_sym_stylesheet_repeat1 = 137,
  aux_sym_import_statement_repeat1 = 138,
  aux_sym_keyframe_block_list_repeat1 = 139,
  aux_sym_parameters_repeat1 = 140,
  aux_sym_include_arguments_repeat1 = 141,
  aux_sym_if_statement_repeat1 = 142,
  aux_sym_selectors_repeat1 = 143,
  aux_sym_block_repeat1 = 144,
  aux_sym_pseudo_class_arguments_repeat1 = 145,
  aux_sym_pseudo_class_arguments_repeat2 = 146,
  aux_sym_declaration_repeat1 = 147,
  aux_sym_arguments_repeat1 = 148,
  alias_sym_argument_name = 149,
  alias_sym_argument_value = 150,
  alias_sym_attribute_name = 151,
  alias_sym_class_name = 152,
  alias_sym_condition = 153,
  alias_sym_default_value = 154,
  alias_sym_feature_name = 155,
  alias_sym_function_name = 156,
  alias_sym_id_name = 157,
  alias_sym_key = 158,
  alias_sym_keyframes_name = 159,
  alias_sym_keyword_query = 160,
  alias_sym_name = 161,
  alias_sym_namespace_name = 162,
  alias_sym_property_name = 163,
  alias_sym_tag_name = 164,
  alias_sym_through = 165,
  alias_sym_value = 166,
  alias_sym_variable = 167,
  alias_sym_variable_name = 168,
  alias_sym_variable_value = 169,
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
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
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
  [sym_important] = "important",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
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
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_forward_statement] = "forward_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_mixin_statement] = "mixin_statement",
  [sym_include_statement] = "include_statement",
  [sym_include_arguments] = "include_arguments",
  [sym_include_argument] = "include_argument",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
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
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_name] = "name",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_name] = "variable_name",
  [alias_sym_variable_value] = "variable_value",
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
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
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
  [sym_important] = sym_important,
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
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
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_forward_statement] = sym_forward_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_mixin_statement] = sym_mixin_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_include_arguments] = sym_include_arguments,
  [sym_include_argument] = sym_include_argument,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
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
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_name] = alias_sym_variable_name,
  [alias_sym_variable_value] = alias_sym_variable_value,
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
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
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
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
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
  [sym_important] = {
    .visible = true,
    .named = true,
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
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
  [sym_single_line_comment] = {
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
  [sym_from] = {
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
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
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
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
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
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
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
  [alias_sym_key] = {
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
  [alias_sym_name] = {
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
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[28][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_variable_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_class_name,
  },
  [6] = {
    [1] = alias_sym_tag_name,
  },
  [7] = {
    [1] = alias_sym_id_name,
  },
  [8] = {
    [0] = alias_sym_function_name,
  },
  [9] = {
    [1] = alias_sym_keyframes_name,
  },
  [10] = {
    [1] = alias_sym_name,
  },
  [11] = {
    [1] = alias_sym_condition,
  },
  [12] = {
    [1] = alias_sym_attribute_name,
  },
  [13] = {
    [2] = alias_sym_class_name,
  },
  [14] = {
    [2] = alias_sym_tag_name,
  },
  [15] = {
    [2] = alias_sym_id_name,
  },
  [16] = {
    [1] = alias_sym_namespace_name,
  },
  [17] = {
    [0] = alias_sym_variable_name,
  },
  [18] = {
    [0] = alias_sym_argument_value,
  },
  [19] = {
    [0] = alias_sym_property_name,
  },
  [20] = {
    [2] = alias_sym_attribute_name,
  },
  [21] = {
    [1] = alias_sym_value,
  },
  [22] = {
    [2] = alias_sym_condition,
  },
  [23] = {
    [1] = alias_sym_feature_name,
  },
  [24] = {
    [0] = alias_sym_variable_name,
    [2] = alias_sym_default_value,
  },
  [25] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [26] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [27] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static inline bool sym_single_line_comment_character_set_2(int32_t lookahead) {
  return
    lookahead == '\t' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '!' ||
    ('(' <= lookahead && lookahead <= '*') ||
    lookahead == ',' ||
    lookahead == ';' ||
    lookahead == '[' ||
    lookahead == ']' ||
    lookahead == '{' ||
    lookahead == '}';
}

static inline bool sym_plain_value_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '!' ||
    lookahead == '(' ||
    lookahead == ')' ||
    lookahead == ',' ||
    lookahead == ';' ||
    lookahead == '[' ||
    lookahead == ']' ||
    lookahead == '{' ||
    lookahead == '}';
}

static inline bool sym_plain_value_character_set_2(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '!' ||
    ('(' <= lookahead && lookahead <= '*') ||
    lookahead == ',' ||
    lookahead == ';' ||
    lookahead == '[' ||
    lookahead == ']' ||
    lookahead == '{' ||
    lookahead == '}';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(110);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(385);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(381);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == '{') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == '{') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 100:
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 104:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 105:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(389);
      END_STATE();
    case 106:
      if (eof) ADVANCE(110);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 107:
      if (eof) ADVANCE(110);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(100);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '_') ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(385);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(381);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(105);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(328);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'x') ADVANCE(330);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(322);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '/') ADVANCE(105);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(105);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 109},
  [18] = {.lex_state = 109},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 109},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 109},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 107},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 107},
  [35] = {.lex_state = 107},
  [36] = {.lex_state = 107},
  [37] = {.lex_state = 107},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 107},
  [45] = {.lex_state = 107},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 107},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 107},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 107},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 107},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 2, .external_lex_state = 1},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 3, .external_lex_state = 1},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
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
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 107, .external_lex_state = 1},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 24},
  [241] = {.lex_state = 107, .external_lex_state = 1},
  [242] = {.lex_state = 24},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 107, .external_lex_state = 1},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 107, .external_lex_state = 1},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 107, .external_lex_state = 1},
  [253] = {.lex_state = 107, .external_lex_state = 1},
  [254] = {.lex_state = 107, .external_lex_state = 1},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 107, .external_lex_state = 1},
  [259] = {.lex_state = 107, .external_lex_state = 1},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 107, .external_lex_state = 1},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 107, .external_lex_state = 1},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 107, .external_lex_state = 1},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 107, .external_lex_state = 1},
  [276] = {.lex_state = 107, .external_lex_state = 1},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 107, .external_lex_state = 1},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 107, .external_lex_state = 1},
  [286] = {.lex_state = 107, .external_lex_state = 1},
  [287] = {.lex_state = 107, .external_lex_state = 1},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 107, .external_lex_state = 1},
  [290] = {.lex_state = 107, .external_lex_state = 1},
  [291] = {.lex_state = 107, .external_lex_state = 1},
  [292] = {.lex_state = 107, .external_lex_state = 1},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 107, .external_lex_state = 1},
  [295] = {.lex_state = 107, .external_lex_state = 1},
  [296] = {.lex_state = 107, .external_lex_state = 1},
  [297] = {.lex_state = 107, .external_lex_state = 1},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 11},
  [307] = {.lex_state = 107, .external_lex_state = 1},
  [308] = {.lex_state = 24},
  [309] = {.lex_state = 107, .external_lex_state = 1},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 107, .external_lex_state = 1},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 24},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 24},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 107, .external_lex_state = 1},
  [324] = {.lex_state = 107, .external_lex_state = 1},
  [325] = {.lex_state = 93},
  [326] = {.lex_state = 93},
  [327] = {.lex_state = 93},
  [328] = {.lex_state = 93},
  [329] = {.lex_state = 93},
  [330] = {.lex_state = 24},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 11},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 21},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 107},
  [356] = {.lex_state = 93},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 93},
  [359] = {.lex_state = 107},
  [360] = {.lex_state = 107},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 93},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 93},
  [365] = {.lex_state = 107},
  [366] = {.lex_state = 107},
  [367] = {.lex_state = 18},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 107},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 18},
  [378] = {.lex_state = 107},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 107},
  [383] = {.lex_state = 107},
  [384] = {.lex_state = 18},
  [385] = {.lex_state = 107},
  [386] = {.lex_state = 11},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 107},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 25},
  [394] = {.lex_state = 14},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 107},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 107},
  [404] = {.lex_state = 18},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 107},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 18},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 21},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 11},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 21},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 21},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 107},
  [446] = {.lex_state = 107},
  [447] = {.lex_state = 107},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 21},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 107},
  [473] = {.lex_state = 107},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 107},
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
    [anon_sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ATextend] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATfor] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_ATwhile] = ACTIONS(1),
    [anon_sym_ATfunction] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
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
    [sym_important] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(474),
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_forward_statement] = STATE(3),
    [sym_mixin_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_placeholder] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(401),
    [sym__selector] = STATE(272),
    [sym_universal_selector] = STATE(272),
    [sym_class_selector] = STATE(272),
    [sym_pseudo_class_selector] = STATE(272),
    [sym_pseudo_element_selector] = STATE(272),
    [sym_id_selector] = STATE(272),
    [sym_attribute_selector] = STATE(272),
    [sym_child_selector] = STATE(272),
    [sym_descendant_selector] = STATE(272),
    [sym_sibling_selector] = STATE(272),
    [sym_adjacent_sibling_selector] = STATE(272),
    [sym_declaration] = STATE(3),
    [aux_sym_stylesheet_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_ATforward] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(25),
    [anon_sym_ATinclude] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_ATif] = ACTIONS(31),
    [anon_sym_ATeach] = ACTIONS(33),
    [anon_sym_ATfor] = ACTIONS(35),
    [anon_sym_ATwhile] = ACTIONS(37),
    [anon_sym_ATfunction] = ACTIONS(39),
    [sym_nesting_selector] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_string_value] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
    [sym_variable_identifier] = ACTIONS(55),
    [sym_at_keyword] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_ATimport,
    ACTIONS(64), 1,
      anon_sym_ATmedia,
    ACTIONS(67), 1,
      anon_sym_ATcharset,
    ACTIONS(70), 1,
      anon_sym_ATnamespace,
    ACTIONS(76), 1,
      anon_sym_ATsupports,
    ACTIONS(79), 1,
      anon_sym_ATuse,
    ACTIONS(82), 1,
      anon_sym_ATforward,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(88), 1,
      anon_sym_ATmixin,
    ACTIONS(91), 1,
      anon_sym_ATinclude,
    ACTIONS(94), 1,
      anon_sym_PERCENT,
    ACTIONS(97), 1,
      anon_sym_ATif,
    ACTIONS(100), 1,
      anon_sym_ATeach,
    ACTIONS(103), 1,
      anon_sym_ATfor,
    ACTIONS(106), 1,
      anon_sym_ATwhile,
    ACTIONS(109), 1,
      anon_sym_ATfunction,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym_variable_identifier,
    ACTIONS(136), 1,
      sym_at_keyword,
    STATE(18), 1,
      sym_if_clause,
    STATE(401), 1,
      sym_selectors,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(73), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(112), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(272), 11,
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
    STATE(2), 20,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_use_statement,
      sym_forward_statement,
      sym_mixin_statement,
      sym_include_statement,
      sym_placeholder,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
  [129] = 32,
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
    ACTIONS(19), 1,
      anon_sym_ATuse,
    ACTIONS(21), 1,
      anon_sym_ATforward,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_ATmixin,
    ACTIONS(27), 1,
      anon_sym_ATinclude,
    ACTIONS(29), 1,
      anon_sym_PERCENT,
    ACTIONS(31), 1,
      anon_sym_ATif,
    ACTIONS(33), 1,
      anon_sym_ATeach,
    ACTIONS(35), 1,
      anon_sym_ATfor,
    ACTIONS(37), 1,
      anon_sym_ATwhile,
    ACTIONS(39), 1,
      anon_sym_ATfunction,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_variable_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_if_clause,
    STATE(401), 1,
      sym_selectors,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(272), 11,
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
    STATE(2), 20,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_use_statement,
      sym_forward_statement,
      sym_mixin_statement,
      sym_include_statement,
      sym_placeholder,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
  [258] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(418), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [386] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(414), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [514] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(442), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(5), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [642] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(439), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [770] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(464), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [898] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(436), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(7), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1026] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(430), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1154] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(427), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(10), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1282] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(448), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(4), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1410] = 32,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_ATimport,
    ACTIONS(143), 1,
      anon_sym_ATmedia,
    ACTIONS(145), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_ATsupports,
    ACTIONS(155), 1,
      anon_sym_ATmixin,
    ACTIONS(157), 1,
      anon_sym_ATinclude,
    ACTIONS(159), 1,
      anon_sym_ATextend,
    ACTIONS(161), 1,
      anon_sym_ATif,
    ACTIONS(163), 1,
      anon_sym_ATeach,
    ACTIONS(165), 1,
      anon_sym_ATfor,
    ACTIONS(167), 1,
      anon_sym_ATwhile,
    ACTIONS(169), 1,
      anon_sym_ATfunction,
    ACTIONS(171), 1,
      anon_sym_ATreturn,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_variable_identifier,
    ACTIONS(177), 1,
      sym_at_keyword,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    STATE(456), 1,
      sym_last_declaration,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(41), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(149), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(272), 11,
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
    STATE(8), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1538] = 31,
    ACTIONS(197), 1,
      anon_sym_ATimport,
    ACTIONS(200), 1,
      anon_sym_ATmedia,
    ACTIONS(203), 1,
      anon_sym_ATcharset,
    ACTIONS(206), 1,
      anon_sym_ATnamespace,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_ATsupports,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_ATmixin,
    ACTIONS(223), 1,
      anon_sym_ATinclude,
    ACTIONS(226), 1,
      anon_sym_ATextend,
    ACTIONS(229), 1,
      anon_sym_ATif,
    ACTIONS(232), 1,
      anon_sym_ATeach,
    ACTIONS(235), 1,
      anon_sym_ATfor,
    ACTIONS(238), 1,
      anon_sym_ATwhile,
    ACTIONS(241), 1,
      anon_sym_ATfunction,
    ACTIONS(244), 1,
      anon_sym_ATreturn,
    ACTIONS(250), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(256), 1,
      anon_sym_COLON_COLON,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(268), 1,
      sym_variable_identifier,
    ACTIONS(271), 1,
      sym_at_keyword,
    STATE(19), 1,
      sym_if_clause,
    STATE(407), 1,
      sym_selectors,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(209), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(247), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(272), 11,
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
    STATE(14), 19,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_mixin_statement,
      sym_include_statement,
      sym_extend_statement,
      sym_if_statement,
      sym_each_statement,
      sym_for_statement,
      sym_while_statement,
      sym_function_statement,
      sym_return_statement,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
  [1663] = 20,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      sym_nesting_selector,
    ACTIONS(280), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      sym_string_value,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    STATE(139), 1,
      sym__value,
    STATE(156), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(275), 11,
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
  [1740] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      sym_string_value,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(296), 1,
      sym_nesting_selector,
    STATE(139), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(311), 11,
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
  [1814] = 6,
    ACTIONS(302), 1,
      anon_sym_ATelse,
    STATE(35), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(21), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(300), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1862] = 6,
    ACTIONS(302), 1,
      anon_sym_ATelse,
    STATE(71), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(304), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(306), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1910] = 6,
    ACTIONS(308), 1,
      anon_sym_ATelse,
    STATE(105), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(304), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(306), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1957] = 6,
    ACTIONS(308), 1,
      anon_sym_ATelse,
    STATE(92), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(298), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(300), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2004] = 5,
    ACTIONS(314), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(21), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(312), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2049] = 5,
    ACTIONS(317), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(310), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(312), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(322), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2132] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(326), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2210] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(334), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(338), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2288] = 18,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      sym_important,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(138), 1,
      sym__value,
    STATE(144), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(360), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(364), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2433] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(368), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2509] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2585] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(384), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2623] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2699] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2737] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2775] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(326), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2813] = 17,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(153), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2879] = 17,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3021] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3059] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(418), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(420), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3097] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3135] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(426), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3173] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(320), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(322), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(432), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(336), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(338), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3325] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(322), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(324), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(326), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3401] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3515] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3553] = 17,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(450), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(157), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3619] = 17,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(158), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(456), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(458), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3723] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(460), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(462), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3761] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(464), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(466), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3799] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(468), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(470), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3837] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(472), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(474), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3875] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(476), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(478), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3913] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(480), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(482), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(484), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(486), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3989] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(488), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(490), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4027] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(492), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(494), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(300), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4103] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(496), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(498), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(500), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(502), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4179] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(504), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(506), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4217] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(332), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(334), 21,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4255] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(508), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(510), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(512), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(514), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(516), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(518), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4369] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4443] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4517] = 7,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    STATE(134), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(524), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(520), 6,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(528), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 9,
      anon_sym_LPAREN,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4562] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4599] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(320), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(322), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(418), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(420), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4673] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(324), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(326), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(532), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(530), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(362), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(364), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(536), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(534), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4821] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(382), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(384), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(464), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(466), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4932] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(468), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(470), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(472), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(474), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5006] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(476), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(478), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(492), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(494), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(504), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(506), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5154] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(500), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(502), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5191] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(426), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(488), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(490), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(516), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(518), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5302] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5339] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(298), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(300), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5376] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(480), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(482), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5450] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(508), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(510), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(410), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5524] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(512), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(514), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5561] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(496), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(498), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5598] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(484), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(486), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(358), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(360), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(366), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(368), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5709] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(370), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(372), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(378), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(380), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5820] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 20,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5894] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(542), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(538), 6,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(540), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(544), 8,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5933] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    STATE(134), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(528), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 12,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5971] = 4,
    ACTIONS(550), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(546), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6006] = 4,
    ACTIONS(556), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(552), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6041] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(560), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(558), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(564), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(562), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6105] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(568), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(566), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6137] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(572), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(570), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6169] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(576), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(574), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6201] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(580), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(578), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6233] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(544), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(540), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(582), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(588), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(586), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(590), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6361] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(596), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(594), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6393] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(598), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(600), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6428] = 9,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(608), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(606), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(350), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6471] = 9,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(608), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(606), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(348), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6514] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(618), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(620), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6549] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(346), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(622), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(624), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6583] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(626), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(290), 11,
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
  [6626] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(630), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(292), 11,
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
  [6669] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(355), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6722] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(366), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6775] = 16,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(642), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6830] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(365), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6883] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(646), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(253), 11,
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
  [6926] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(648), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(307), 11,
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
  [6969] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7022] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(652), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(289), 11,
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
  [7065] = 14,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      sym_string_value,
    ACTIONS(666), 1,
      aux_sym_integer_value_token1,
    ACTIONS(669), 1,
      aux_sym_float_value_token1,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(675), 1,
      sym_variable_identifier,
    ACTIONS(678), 1,
      sym_plain_value,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(598), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7116] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(681), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(324), 11,
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
  [7159] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7207] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_SEMI,
    ACTIONS(687), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7259] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7311] = 13,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      sym_string_value,
    ACTIONS(704), 1,
      aux_sym_integer_value_token1,
    ACTIONS(707), 1,
      aux_sym_float_value_token1,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(713), 1,
      sym_variable_identifier,
    ACTIONS(716), 1,
      sym_plain_value,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(693), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7359] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(383), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7411] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(723), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7463] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(727), 1,
      sym_important,
    STATE(138), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7515] = 5,
    ACTIONS(729), 1,
      anon_sym_LPAREN2,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(528), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7546] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7593] = 5,
    ACTIONS(733), 1,
      anon_sym_LPAREN2,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(528), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7624] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7670] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(590), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7696] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(145), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7742] = 4,
    ACTIONS(739), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(546), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(548), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7770] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(142), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7816] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(148), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7862] = 4,
    ACTIONS(745), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(552), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(554), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7890] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(143), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7936] = 12,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      aux_sym_integer_value_token1,
    ACTIONS(757), 1,
      aux_sym_float_value_token1,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(761), 1,
      sym_variable_identifier,
    ACTIONS(763), 1,
      sym_plain_value,
    STATE(278), 1,
      sym__value,
    STATE(373), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(271), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7979] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(574), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(576), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8004] = 4,
    ACTIONS(765), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(552), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8031] = 4,
    ACTIONS(767), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(546), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8058] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(562), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(564), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8083] = 12,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      aux_sym_integer_value_token1,
    ACTIONS(757), 1,
      aux_sym_float_value_token1,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(761), 1,
      sym_variable_identifier,
    ACTIONS(763), 1,
      sym_plain_value,
    STATE(278), 1,
      sym__value,
    STATE(404), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(271), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(544), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(540), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(582), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(588), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(586), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8201] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(590), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8226] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(560), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(558), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8251] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(596), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(594), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(540), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(544), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(594), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8326] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(582), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(584), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(566), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(568), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8376] = 12,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    STATE(152), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(564), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(562), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(558), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(560), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8469] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(586), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(588), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8494] = 12,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    STATE(162), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8537] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(578), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(580), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8562] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(568), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(566), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(572), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(570), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8612] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(580), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(578), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8637] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(576), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(574), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8662] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(570), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(572), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [8687] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(310), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8727] = 11,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      aux_sym_integer_value_token1,
    ACTIONS(757), 1,
      aux_sym_float_value_token1,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(763), 1,
      sym_plain_value,
    ACTIONS(785), 1,
      sym_variable_identifier,
    STATE(257), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(271), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8767] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(135), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8807] = 11,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      sym_string_value,
    ACTIONS(793), 1,
      aux_sym_integer_value_token1,
    ACTIONS(795), 1,
      aux_sym_float_value_token1,
    ACTIONS(797), 1,
      sym_identifier,
    ACTIONS(799), 1,
      sym_variable_identifier,
    ACTIONS(801), 1,
      sym_plain_value,
    STATE(137), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8847] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(306), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8887] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(288), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8927] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(42), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8967] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(41), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9007] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(28), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9047] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(283), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9087] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(313), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9127] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(315), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9167] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(279), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9207] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(284), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9247] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(319), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9287] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(249), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9327] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(318), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9367] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(282), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9407] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(304), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9447] = 11,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      sym_string_value,
    ACTIONS(793), 1,
      aux_sym_integer_value_token1,
    ACTIONS(795), 1,
      aux_sym_float_value_token1,
    ACTIONS(797), 1,
      sym_identifier,
    ACTIONS(799), 1,
      sym_variable_identifier,
    ACTIONS(801), 1,
      sym_plain_value,
    STATE(196), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9487] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(193), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9527] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(127), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9567] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(301), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9607] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(293), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9647] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(250), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9687] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(314), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9727] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(316), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9767] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    ACTIONS(803), 1,
      aux_sym_integer_value_token1,
    ACTIONS(805), 1,
      aux_sym_float_value_token1,
    STATE(312), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9807] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(322), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9847] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(266), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9887] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(277), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9927] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(60), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9967] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    ACTIONS(803), 1,
      aux_sym_integer_value_token1,
    ACTIONS(805), 1,
      aux_sym_float_value_token1,
    STATE(300), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10007] = 11,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      aux_sym_integer_value_token1,
    ACTIONS(757), 1,
      aux_sym_float_value_token1,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(763), 1,
      sym_plain_value,
    ACTIONS(785), 1,
      sym_variable_identifier,
    STATE(270), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(271), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10047] = 11,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      sym_string_value,
    ACTIONS(793), 1,
      aux_sym_integer_value_token1,
    ACTIONS(795), 1,
      aux_sym_float_value_token1,
    ACTIONS(797), 1,
      sym_identifier,
    ACTIONS(799), 1,
      sym_variable_identifier,
    ACTIONS(801), 1,
      sym_plain_value,
    STATE(136), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10087] = 11,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_integer_value_token1,
    ACTIONS(288), 1,
      aux_sym_float_value_token1,
    ACTIONS(292), 1,
      sym_variable_identifier,
    ACTIONS(294), 1,
      sym_plain_value,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      sym_string_value,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(59), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(130), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10127] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(321), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10167] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(273), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10207] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    ACTIONS(803), 1,
      aux_sym_integer_value_token1,
    ACTIONS(805), 1,
      aux_sym_float_value_token1,
    STATE(193), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10247] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(274), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10287] = 11,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    ACTIONS(777), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_variable_identifier,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(281), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(176), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10327] = 5,
    ACTIONS(809), 1,
      anon_sym_COLON,
    ACTIONS(811), 1,
      anon_sym_LPAREN2,
    STATE(294), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(807), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10354] = 5,
    ACTIONS(813), 1,
      anon_sym_LPAREN2,
    STATE(262), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(528), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10381] = 9,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(332), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10416] = 5,
    ACTIONS(811), 1,
      anon_sym_LPAREN2,
    ACTIONS(821), 1,
      anon_sym_COLON,
    STATE(280), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(819), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10443] = 9,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(333), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10478] = 4,
    ACTIONS(827), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(552), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10502] = 4,
    ACTIONS(829), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(546), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10526] = 4,
    ACTIONS(831), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(582), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10550] = 3,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10571] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(582), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10592] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(837), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10613] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10638] = 5,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10663] = 4,
    ACTIONS(847), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(546), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10686] = 3,
    ACTIONS(851), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(849), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10707] = 4,
    ACTIONS(855), 1,
      anon_sym_COLON,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(853), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10730] = 3,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(520), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10751] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(564), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(562), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(568), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(566), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10793] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(572), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(570), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10814] = 3,
    ACTIONS(861), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(859), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10835] = 3,
    ACTIONS(865), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(863), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(576), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(574), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(580), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(578), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10898] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(596), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(594), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10919] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(560), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(558), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10940] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(867), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10961] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(590), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10982] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11005] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(588), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(586), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11026] = 3,
    ACTIONS(875), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(873), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11047] = 4,
    ACTIONS(877), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(552), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11070] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(879), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(883), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(881), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(544), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(540), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11114] = 13,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      sym__descendant_operator,
    STATE(388), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [11155] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11180] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11205] = 13,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      sym__descendant_operator,
    STATE(383), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [11246] = 3,
    ACTIONS(907), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(905), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11267] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11292] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(883), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(881), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11315] = 5,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11340] = 3,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(911), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11361] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11386] = 5,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11411] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11436] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11461] = 3,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(917), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11482] = 3,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(921), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11503] = 3,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(925), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11524] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11549] = 4,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(931), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(929), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11572] = 4,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(933), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11595] = 3,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(937), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11616] = 4,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(941), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11639] = 5,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11664] = 3,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(945), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11685] = 3,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(949), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11706] = 3,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(953), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11727] = 3,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(520), 10,
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
  [11747] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(347), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11773] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(386), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11799] = 4,
    ACTIONS(962), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(966), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(964), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11821] = 4,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11843] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(340), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11869] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(361), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11895] = 4,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11917] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(339), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11943] = 4,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11965] = 11,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12001] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(338), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [12027] = 3,
    ACTIONS(976), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(520), 10,
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
  [12047] = 4,
    ACTIONS(978), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12069] = 11,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12105] = 4,
    ACTIONS(980), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(966), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(964), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12127] = 4,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12149] = 4,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12171] = 4,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12193] = 4,
    ACTIONS(988), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12215] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(335), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [12241] = 4,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12263] = 4,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12285] = 6,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_selector,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(369), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [12311] = 4,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12333] = 4,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(843), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(841), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12355] = 3,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(520), 10,
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
  [12375] = 11,
    ACTIONS(857), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      sym__descendant_operator,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12410] = 7,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
    ACTIONS(1005), 1,
      anon_sym_from,
    ACTIONS(1007), 1,
      sym_to,
    ACTIONS(1009), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(328), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(392), 2,
      sym_from,
      sym_integer_value,
  [12435] = 7,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    ACTIONS(1013), 1,
      anon_sym_from,
    ACTIONS(1016), 1,
      sym_to,
    ACTIONS(1019), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(392), 2,
      sym_from,
      sym_integer_value,
  [12460] = 7,
    ACTIONS(1005), 1,
      anon_sym_from,
    ACTIONS(1007), 1,
      sym_to,
    ACTIONS(1009), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(392), 2,
      sym_from,
      sym_integer_value,
  [12485] = 7,
    ACTIONS(1005), 1,
      anon_sym_from,
    ACTIONS(1007), 1,
      sym_to,
    ACTIONS(1009), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(392), 2,
      sym_from,
      sym_integer_value,
  [12510] = 7,
    ACTIONS(1005), 1,
      anon_sym_from,
    ACTIONS(1007), 1,
      sym_to,
    ACTIONS(1009), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(327), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(392), 2,
      sym_from,
      sym_integer_value,
  [12535] = 3,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1028), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [12551] = 3,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1032), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [12567] = 7,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_block,
    STATE(344), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12591] = 7,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_block,
    STATE(346), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12615] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1044), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12628] = 6,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_block,
    STATE(363), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12662] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1048), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1050), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12688] = 6,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_block,
    STATE(354), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1052), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1054), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12735] = 6,
    ACTIONS(733), 1,
      anon_sym_LPAREN2,
    ACTIONS(1056), 1,
      sym_string_value,
    ACTIONS(1058), 1,
      sym_identifier,
    STATE(183), 1,
      sym_arguments,
    STATE(461), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12755] = 6,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
    ACTIONS(1062), 1,
      anon_sym_LPAREN2,
    STATE(30), 1,
      sym_block,
    STATE(371), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12775] = 6,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_block,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12795] = 6,
    ACTIONS(733), 1,
      anon_sym_LPAREN2,
    ACTIONS(1058), 1,
      sym_identifier,
    ACTIONS(1066), 1,
      sym_string_value,
    STATE(183), 1,
      sym_arguments,
    STATE(435), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12815] = 6,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_block,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12835] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1070), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12849] = 5,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    STATE(372), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12867] = 6,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1062), 1,
      anon_sym_LPAREN2,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_block,
    STATE(387), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12887] = 5,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [12905] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_block,
    STATE(399), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12922] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_block,
    STATE(402), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12939] = 3,
    ACTIONS(1080), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12952] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_block,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12969] = 4,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12984] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1084), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12995] = 5,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_block,
    STATE(400), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13012] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(324), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13023] = 4,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1086), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13038] = 4,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13053] = 4,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [13068] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(320), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13079] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13107] = 4,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13122] = 4,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13137] = 5,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_block,
    STATE(408), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13154] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1070), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13169] = 4,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [13184] = 4,
    ACTIONS(1098), 1,
      sym_string_value,
    ACTIONS(1100), 1,
      sym_identifier,
    STATE(419), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13198] = 4,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13212] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13226] = 4,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN2,
    STATE(377), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13240] = 4,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13254] = 4,
    ACTIONS(1114), 1,
      sym_string_value,
    ACTIONS(1116), 1,
      sym_identifier,
    STATE(471), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13268] = 4,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13282] = 4,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN2,
    STATE(384), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13296] = 4,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13310] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13324] = 4,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(1127), 1,
      anon_sym_if,
    STATE(36), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13338] = 4,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1129), 1,
      anon_sym_if,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13352] = 4,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13366] = 4,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13380] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN2,
    STATE(384), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13394] = 4,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13408] = 3,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 2,
      anon_sym_and,
      anon_sym_or,
  [13420] = 4,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13434] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13448] = 3,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13460] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13471] = 3,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13482] = 3,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13493] = 3,
    ACTIONS(1162), 1,
      aux_sym_color_value_token1,
    ACTIONS(1164), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13504] = 3,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(1166), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13515] = 3,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13526] = 3,
    ACTIONS(1172), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13537] = 3,
    ACTIONS(1174), 1,
      sym_variable_identifier,
    STATE(403), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13548] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1176), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13557] = 3,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13568] = 3,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13579] = 3,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13590] = 3,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13601] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [13619] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1178), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13628] = 3,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13639] = 3,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13650] = 3,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13661] = 3,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    ACTIONS(1182), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13672] = 3,
    ACTIONS(1174), 1,
      sym_variable_identifier,
    STATE(374), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13683] = 3,
    ACTIONS(733), 1,
      anon_sym_LPAREN2,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13694] = 3,
    ACTIONS(1184), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13705] = 2,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13713] = 2,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13721] = 2,
    ACTIONS(1188), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13729] = 2,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13737] = 2,
    ACTIONS(1190), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13745] = 2,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13753] = 2,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13761] = 2,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13769] = 2,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13777] = 2,
    ACTIONS(1198), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13785] = 2,
    ACTIONS(1200), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13793] = 2,
    ACTIONS(1202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13801] = 2,
    ACTIONS(1204), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13809] = 2,
    ACTIONS(1206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13817] = 2,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13825] = 2,
    ACTIONS(1208), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13833] = 2,
    ACTIONS(1210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13841] = 2,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13849] = 2,
    ACTIONS(1214), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13857] = 2,
    ACTIONS(1216), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13865] = 2,
    ACTIONS(1218), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13873] = 2,
    ACTIONS(1220), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13881] = 2,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13889] = 2,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13897] = 2,
    ACTIONS(1224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13905] = 2,
    ACTIONS(1226), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13913] = 2,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13921] = 2,
    ACTIONS(1230), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13929] = 2,
    ACTIONS(1232), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13937] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13945] = 2,
    ACTIONS(1234), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13953] = 2,
    ACTIONS(1236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13961] = 2,
    ACTIONS(1238), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13969] = 2,
    ACTIONS(1240), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13977] = 2,
    ACTIONS(1242), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13985] = 2,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13993] = 2,
    ACTIONS(1244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14001] = 2,
    ACTIONS(1246), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14009] = 2,
    ACTIONS(1248), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14017] = 2,
    ACTIONS(1250), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14025] = 2,
    ACTIONS(1252), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14033] = 2,
    ACTIONS(1254), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14041] = 2,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14049] = 2,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14057] = 2,
    ACTIONS(1258), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14065] = 2,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14073] = 2,
    ACTIONS(1262), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14081] = 2,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14089] = 2,
    ACTIONS(1266), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14097] = 2,
    ACTIONS(1129), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14105] = 2,
    ACTIONS(1127), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14113] = 2,
    ACTIONS(1268), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14121] = 2,
    ACTIONS(685), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14129] = 2,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14137] = 2,
    ACTIONS(1270), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14145] = 2,
    ACTIONS(1272), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14153] = 2,
    ACTIONS(1274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14161] = 2,
    ACTIONS(1276), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14169] = 2,
    ACTIONS(1278), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14177] = 2,
    ACTIONS(1280), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14185] = 2,
    ACTIONS(1282), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14193] = 2,
    ACTIONS(1284), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14201] = 2,
    ACTIONS(1286), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [14209] = 2,
    ACTIONS(1288), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 129,
  [SMALL_STATE(4)] = 258,
  [SMALL_STATE(5)] = 386,
  [SMALL_STATE(6)] = 514,
  [SMALL_STATE(7)] = 642,
  [SMALL_STATE(8)] = 770,
  [SMALL_STATE(9)] = 898,
  [SMALL_STATE(10)] = 1026,
  [SMALL_STATE(11)] = 1154,
  [SMALL_STATE(12)] = 1282,
  [SMALL_STATE(13)] = 1410,
  [SMALL_STATE(14)] = 1538,
  [SMALL_STATE(15)] = 1663,
  [SMALL_STATE(16)] = 1740,
  [SMALL_STATE(17)] = 1814,
  [SMALL_STATE(18)] = 1862,
  [SMALL_STATE(19)] = 1910,
  [SMALL_STATE(20)] = 1957,
  [SMALL_STATE(21)] = 2004,
  [SMALL_STATE(22)] = 2049,
  [SMALL_STATE(23)] = 2093,
  [SMALL_STATE(24)] = 2132,
  [SMALL_STATE(25)] = 2171,
  [SMALL_STATE(26)] = 2210,
  [SMALL_STATE(27)] = 2249,
  [SMALL_STATE(28)] = 2288,
  [SMALL_STATE(29)] = 2357,
  [SMALL_STATE(30)] = 2395,
  [SMALL_STATE(31)] = 2433,
  [SMALL_STATE(32)] = 2471,
  [SMALL_STATE(33)] = 2509,
  [SMALL_STATE(34)] = 2547,
  [SMALL_STATE(35)] = 2585,
  [SMALL_STATE(36)] = 2623,
  [SMALL_STATE(37)] = 2661,
  [SMALL_STATE(38)] = 2699,
  [SMALL_STATE(39)] = 2737,
  [SMALL_STATE(40)] = 2775,
  [SMALL_STATE(41)] = 2813,
  [SMALL_STATE(42)] = 2879,
  [SMALL_STATE(43)] = 2945,
  [SMALL_STATE(44)] = 2983,
  [SMALL_STATE(45)] = 3021,
  [SMALL_STATE(46)] = 3059,
  [SMALL_STATE(47)] = 3097,
  [SMALL_STATE(48)] = 3135,
  [SMALL_STATE(49)] = 3173,
  [SMALL_STATE(50)] = 3211,
  [SMALL_STATE(51)] = 3249,
  [SMALL_STATE(52)] = 3287,
  [SMALL_STATE(53)] = 3325,
  [SMALL_STATE(54)] = 3363,
  [SMALL_STATE(55)] = 3401,
  [SMALL_STATE(56)] = 3439,
  [SMALL_STATE(57)] = 3477,
  [SMALL_STATE(58)] = 3515,
  [SMALL_STATE(59)] = 3553,
  [SMALL_STATE(60)] = 3619,
  [SMALL_STATE(61)] = 3685,
  [SMALL_STATE(62)] = 3723,
  [SMALL_STATE(63)] = 3761,
  [SMALL_STATE(64)] = 3799,
  [SMALL_STATE(65)] = 3837,
  [SMALL_STATE(66)] = 3875,
  [SMALL_STATE(67)] = 3913,
  [SMALL_STATE(68)] = 3951,
  [SMALL_STATE(69)] = 3989,
  [SMALL_STATE(70)] = 4027,
  [SMALL_STATE(71)] = 4065,
  [SMALL_STATE(72)] = 4103,
  [SMALL_STATE(73)] = 4141,
  [SMALL_STATE(74)] = 4179,
  [SMALL_STATE(75)] = 4217,
  [SMALL_STATE(76)] = 4255,
  [SMALL_STATE(77)] = 4293,
  [SMALL_STATE(78)] = 4331,
  [SMALL_STATE(79)] = 4369,
  [SMALL_STATE(80)] = 4406,
  [SMALL_STATE(81)] = 4443,
  [SMALL_STATE(82)] = 4480,
  [SMALL_STATE(83)] = 4517,
  [SMALL_STATE(84)] = 4562,
  [SMALL_STATE(85)] = 4599,
  [SMALL_STATE(86)] = 4636,
  [SMALL_STATE(87)] = 4673,
  [SMALL_STATE(88)] = 4710,
  [SMALL_STATE(89)] = 4747,
  [SMALL_STATE(90)] = 4784,
  [SMALL_STATE(91)] = 4821,
  [SMALL_STATE(92)] = 4858,
  [SMALL_STATE(93)] = 4895,
  [SMALL_STATE(94)] = 4932,
  [SMALL_STATE(95)] = 4969,
  [SMALL_STATE(96)] = 5006,
  [SMALL_STATE(97)] = 5043,
  [SMALL_STATE(98)] = 5080,
  [SMALL_STATE(99)] = 5117,
  [SMALL_STATE(100)] = 5154,
  [SMALL_STATE(101)] = 5191,
  [SMALL_STATE(102)] = 5228,
  [SMALL_STATE(103)] = 5265,
  [SMALL_STATE(104)] = 5302,
  [SMALL_STATE(105)] = 5339,
  [SMALL_STATE(106)] = 5376,
  [SMALL_STATE(107)] = 5413,
  [SMALL_STATE(108)] = 5450,
  [SMALL_STATE(109)] = 5487,
  [SMALL_STATE(110)] = 5524,
  [SMALL_STATE(111)] = 5561,
  [SMALL_STATE(112)] = 5598,
  [SMALL_STATE(113)] = 5635,
  [SMALL_STATE(114)] = 5672,
  [SMALL_STATE(115)] = 5709,
  [SMALL_STATE(116)] = 5746,
  [SMALL_STATE(117)] = 5783,
  [SMALL_STATE(118)] = 5820,
  [SMALL_STATE(119)] = 5857,
  [SMALL_STATE(120)] = 5894,
  [SMALL_STATE(121)] = 5933,
  [SMALL_STATE(122)] = 5971,
  [SMALL_STATE(123)] = 6006,
  [SMALL_STATE(124)] = 6041,
  [SMALL_STATE(125)] = 6073,
  [SMALL_STATE(126)] = 6105,
  [SMALL_STATE(127)] = 6137,
  [SMALL_STATE(128)] = 6169,
  [SMALL_STATE(129)] = 6201,
  [SMALL_STATE(130)] = 6233,
  [SMALL_STATE(131)] = 6265,
  [SMALL_STATE(132)] = 6297,
  [SMALL_STATE(133)] = 6329,
  [SMALL_STATE(134)] = 6361,
  [SMALL_STATE(135)] = 6393,
  [SMALL_STATE(136)] = 6428,
  [SMALL_STATE(137)] = 6471,
  [SMALL_STATE(138)] = 6514,
  [SMALL_STATE(139)] = 6549,
  [SMALL_STATE(140)] = 6583,
  [SMALL_STATE(141)] = 6626,
  [SMALL_STATE(142)] = 6669,
  [SMALL_STATE(143)] = 6722,
  [SMALL_STATE(144)] = 6775,
  [SMALL_STATE(145)] = 6830,
  [SMALL_STATE(146)] = 6883,
  [SMALL_STATE(147)] = 6926,
  [SMALL_STATE(148)] = 6969,
  [SMALL_STATE(149)] = 7022,
  [SMALL_STATE(150)] = 7065,
  [SMALL_STATE(151)] = 7116,
  [SMALL_STATE(152)] = 7159,
  [SMALL_STATE(153)] = 7207,
  [SMALL_STATE(154)] = 7259,
  [SMALL_STATE(155)] = 7311,
  [SMALL_STATE(156)] = 7359,
  [SMALL_STATE(157)] = 7411,
  [SMALL_STATE(158)] = 7463,
  [SMALL_STATE(159)] = 7515,
  [SMALL_STATE(160)] = 7546,
  [SMALL_STATE(161)] = 7593,
  [SMALL_STATE(162)] = 7624,
  [SMALL_STATE(163)] = 7670,
  [SMALL_STATE(164)] = 7696,
  [SMALL_STATE(165)] = 7742,
  [SMALL_STATE(166)] = 7770,
  [SMALL_STATE(167)] = 7816,
  [SMALL_STATE(168)] = 7862,
  [SMALL_STATE(169)] = 7890,
  [SMALL_STATE(170)] = 7936,
  [SMALL_STATE(171)] = 7979,
  [SMALL_STATE(172)] = 8004,
  [SMALL_STATE(173)] = 8031,
  [SMALL_STATE(174)] = 8058,
  [SMALL_STATE(175)] = 8083,
  [SMALL_STATE(176)] = 8126,
  [SMALL_STATE(177)] = 8151,
  [SMALL_STATE(178)] = 8176,
  [SMALL_STATE(179)] = 8201,
  [SMALL_STATE(180)] = 8226,
  [SMALL_STATE(181)] = 8251,
  [SMALL_STATE(182)] = 8276,
  [SMALL_STATE(183)] = 8301,
  [SMALL_STATE(184)] = 8326,
  [SMALL_STATE(185)] = 8351,
  [SMALL_STATE(186)] = 8376,
  [SMALL_STATE(187)] = 8419,
  [SMALL_STATE(188)] = 8444,
  [SMALL_STATE(189)] = 8469,
  [SMALL_STATE(190)] = 8494,
  [SMALL_STATE(191)] = 8537,
  [SMALL_STATE(192)] = 8562,
  [SMALL_STATE(193)] = 8587,
  [SMALL_STATE(194)] = 8612,
  [SMALL_STATE(195)] = 8637,
  [SMALL_STATE(196)] = 8662,
  [SMALL_STATE(197)] = 8687,
  [SMALL_STATE(198)] = 8727,
  [SMALL_STATE(199)] = 8767,
  [SMALL_STATE(200)] = 8807,
  [SMALL_STATE(201)] = 8847,
  [SMALL_STATE(202)] = 8887,
  [SMALL_STATE(203)] = 8927,
  [SMALL_STATE(204)] = 8967,
  [SMALL_STATE(205)] = 9007,
  [SMALL_STATE(206)] = 9047,
  [SMALL_STATE(207)] = 9087,
  [SMALL_STATE(208)] = 9127,
  [SMALL_STATE(209)] = 9167,
  [SMALL_STATE(210)] = 9207,
  [SMALL_STATE(211)] = 9247,
  [SMALL_STATE(212)] = 9287,
  [SMALL_STATE(213)] = 9327,
  [SMALL_STATE(214)] = 9367,
  [SMALL_STATE(215)] = 9407,
  [SMALL_STATE(216)] = 9447,
  [SMALL_STATE(217)] = 9487,
  [SMALL_STATE(218)] = 9527,
  [SMALL_STATE(219)] = 9567,
  [SMALL_STATE(220)] = 9607,
  [SMALL_STATE(221)] = 9647,
  [SMALL_STATE(222)] = 9687,
  [SMALL_STATE(223)] = 9727,
  [SMALL_STATE(224)] = 9767,
  [SMALL_STATE(225)] = 9807,
  [SMALL_STATE(226)] = 9847,
  [SMALL_STATE(227)] = 9887,
  [SMALL_STATE(228)] = 9927,
  [SMALL_STATE(229)] = 9967,
  [SMALL_STATE(230)] = 10007,
  [SMALL_STATE(231)] = 10047,
  [SMALL_STATE(232)] = 10087,
  [SMALL_STATE(233)] = 10127,
  [SMALL_STATE(234)] = 10167,
  [SMALL_STATE(235)] = 10207,
  [SMALL_STATE(236)] = 10247,
  [SMALL_STATE(237)] = 10287,
  [SMALL_STATE(238)] = 10327,
  [SMALL_STATE(239)] = 10354,
  [SMALL_STATE(240)] = 10381,
  [SMALL_STATE(241)] = 10416,
  [SMALL_STATE(242)] = 10443,
  [SMALL_STATE(243)] = 10478,
  [SMALL_STATE(244)] = 10502,
  [SMALL_STATE(245)] = 10526,
  [SMALL_STATE(246)] = 10550,
  [SMALL_STATE(247)] = 10571,
  [SMALL_STATE(248)] = 10592,
  [SMALL_STATE(249)] = 10613,
  [SMALL_STATE(250)] = 10638,
  [SMALL_STATE(251)] = 10663,
  [SMALL_STATE(252)] = 10686,
  [SMALL_STATE(253)] = 10707,
  [SMALL_STATE(254)] = 10730,
  [SMALL_STATE(255)] = 10751,
  [SMALL_STATE(256)] = 10772,
  [SMALL_STATE(257)] = 10793,
  [SMALL_STATE(258)] = 10814,
  [SMALL_STATE(259)] = 10835,
  [SMALL_STATE(260)] = 10856,
  [SMALL_STATE(261)] = 10877,
  [SMALL_STATE(262)] = 10898,
  [SMALL_STATE(263)] = 10919,
  [SMALL_STATE(264)] = 10940,
  [SMALL_STATE(265)] = 10961,
  [SMALL_STATE(266)] = 10982,
  [SMALL_STATE(267)] = 11005,
  [SMALL_STATE(268)] = 11026,
  [SMALL_STATE(269)] = 11047,
  [SMALL_STATE(270)] = 11070,
  [SMALL_STATE(271)] = 11093,
  [SMALL_STATE(272)] = 11114,
  [SMALL_STATE(273)] = 11155,
  [SMALL_STATE(274)] = 11180,
  [SMALL_STATE(275)] = 11205,
  [SMALL_STATE(276)] = 11246,
  [SMALL_STATE(277)] = 11267,
  [SMALL_STATE(278)] = 11292,
  [SMALL_STATE(279)] = 11315,
  [SMALL_STATE(280)] = 11340,
  [SMALL_STATE(281)] = 11361,
  [SMALL_STATE(282)] = 11386,
  [SMALL_STATE(283)] = 11411,
  [SMALL_STATE(284)] = 11436,
  [SMALL_STATE(285)] = 11461,
  [SMALL_STATE(286)] = 11482,
  [SMALL_STATE(287)] = 11503,
  [SMALL_STATE(288)] = 11524,
  [SMALL_STATE(289)] = 11549,
  [SMALL_STATE(290)] = 11572,
  [SMALL_STATE(291)] = 11595,
  [SMALL_STATE(292)] = 11616,
  [SMALL_STATE(293)] = 11639,
  [SMALL_STATE(294)] = 11664,
  [SMALL_STATE(295)] = 11685,
  [SMALL_STATE(296)] = 11706,
  [SMALL_STATE(297)] = 11727,
  [SMALL_STATE(298)] = 11747,
  [SMALL_STATE(299)] = 11773,
  [SMALL_STATE(300)] = 11799,
  [SMALL_STATE(301)] = 11821,
  [SMALL_STATE(302)] = 11843,
  [SMALL_STATE(303)] = 11869,
  [SMALL_STATE(304)] = 11895,
  [SMALL_STATE(305)] = 11917,
  [SMALL_STATE(306)] = 11943,
  [SMALL_STATE(307)] = 11965,
  [SMALL_STATE(308)] = 12001,
  [SMALL_STATE(309)] = 12027,
  [SMALL_STATE(310)] = 12047,
  [SMALL_STATE(311)] = 12069,
  [SMALL_STATE(312)] = 12105,
  [SMALL_STATE(313)] = 12127,
  [SMALL_STATE(314)] = 12149,
  [SMALL_STATE(315)] = 12171,
  [SMALL_STATE(316)] = 12193,
  [SMALL_STATE(317)] = 12215,
  [SMALL_STATE(318)] = 12241,
  [SMALL_STATE(319)] = 12263,
  [SMALL_STATE(320)] = 12285,
  [SMALL_STATE(321)] = 12311,
  [SMALL_STATE(322)] = 12333,
  [SMALL_STATE(323)] = 12355,
  [SMALL_STATE(324)] = 12375,
  [SMALL_STATE(325)] = 12410,
  [SMALL_STATE(326)] = 12435,
  [SMALL_STATE(327)] = 12460,
  [SMALL_STATE(328)] = 12485,
  [SMALL_STATE(329)] = 12510,
  [SMALL_STATE(330)] = 12535,
  [SMALL_STATE(331)] = 12551,
  [SMALL_STATE(332)] = 12567,
  [SMALL_STATE(333)] = 12591,
  [SMALL_STATE(334)] = 12615,
  [SMALL_STATE(335)] = 12628,
  [SMALL_STATE(336)] = 12649,
  [SMALL_STATE(337)] = 12662,
  [SMALL_STATE(338)] = 12675,
  [SMALL_STATE(339)] = 12688,
  [SMALL_STATE(340)] = 12709,
  [SMALL_STATE(341)] = 12722,
  [SMALL_STATE(342)] = 12735,
  [SMALL_STATE(343)] = 12755,
  [SMALL_STATE(344)] = 12775,
  [SMALL_STATE(345)] = 12795,
  [SMALL_STATE(346)] = 12815,
  [SMALL_STATE(347)] = 12835,
  [SMALL_STATE(348)] = 12849,
  [SMALL_STATE(349)] = 12867,
  [SMALL_STATE(350)] = 12887,
  [SMALL_STATE(351)] = 12905,
  [SMALL_STATE(352)] = 12922,
  [SMALL_STATE(353)] = 12939,
  [SMALL_STATE(354)] = 12952,
  [SMALL_STATE(355)] = 12969,
  [SMALL_STATE(356)] = 12984,
  [SMALL_STATE(357)] = 12995,
  [SMALL_STATE(358)] = 13012,
  [SMALL_STATE(359)] = 13023,
  [SMALL_STATE(360)] = 13038,
  [SMALL_STATE(361)] = 13053,
  [SMALL_STATE(362)] = 13068,
  [SMALL_STATE(363)] = 13079,
  [SMALL_STATE(364)] = 13096,
  [SMALL_STATE(365)] = 13107,
  [SMALL_STATE(366)] = 13122,
  [SMALL_STATE(367)] = 13137,
  [SMALL_STATE(368)] = 13154,
  [SMALL_STATE(369)] = 13169,
  [SMALL_STATE(370)] = 13184,
  [SMALL_STATE(371)] = 13198,
  [SMALL_STATE(372)] = 13212,
  [SMALL_STATE(373)] = 13226,
  [SMALL_STATE(374)] = 13240,
  [SMALL_STATE(375)] = 13254,
  [SMALL_STATE(376)] = 13268,
  [SMALL_STATE(377)] = 13282,
  [SMALL_STATE(378)] = 13296,
  [SMALL_STATE(379)] = 13310,
  [SMALL_STATE(380)] = 13324,
  [SMALL_STATE(381)] = 13338,
  [SMALL_STATE(382)] = 13352,
  [SMALL_STATE(383)] = 13366,
  [SMALL_STATE(384)] = 13380,
  [SMALL_STATE(385)] = 13394,
  [SMALL_STATE(386)] = 13408,
  [SMALL_STATE(387)] = 13420,
  [SMALL_STATE(388)] = 13434,
  [SMALL_STATE(389)] = 13448,
  [SMALL_STATE(390)] = 13460,
  [SMALL_STATE(391)] = 13471,
  [SMALL_STATE(392)] = 13482,
  [SMALL_STATE(393)] = 13493,
  [SMALL_STATE(394)] = 13504,
  [SMALL_STATE(395)] = 13515,
  [SMALL_STATE(396)] = 13526,
  [SMALL_STATE(397)] = 13537,
  [SMALL_STATE(398)] = 13548,
  [SMALL_STATE(399)] = 13557,
  [SMALL_STATE(400)] = 13568,
  [SMALL_STATE(401)] = 13579,
  [SMALL_STATE(402)] = 13590,
  [SMALL_STATE(403)] = 13601,
  [SMALL_STATE(404)] = 13610,
  [SMALL_STATE(405)] = 13619,
  [SMALL_STATE(406)] = 13628,
  [SMALL_STATE(407)] = 13639,
  [SMALL_STATE(408)] = 13650,
  [SMALL_STATE(409)] = 13661,
  [SMALL_STATE(410)] = 13672,
  [SMALL_STATE(411)] = 13683,
  [SMALL_STATE(412)] = 13694,
  [SMALL_STATE(413)] = 13705,
  [SMALL_STATE(414)] = 13713,
  [SMALL_STATE(415)] = 13721,
  [SMALL_STATE(416)] = 13729,
  [SMALL_STATE(417)] = 13737,
  [SMALL_STATE(418)] = 13745,
  [SMALL_STATE(419)] = 13753,
  [SMALL_STATE(420)] = 13761,
  [SMALL_STATE(421)] = 13769,
  [SMALL_STATE(422)] = 13777,
  [SMALL_STATE(423)] = 13785,
  [SMALL_STATE(424)] = 13793,
  [SMALL_STATE(425)] = 13801,
  [SMALL_STATE(426)] = 13809,
  [SMALL_STATE(427)] = 13817,
  [SMALL_STATE(428)] = 13825,
  [SMALL_STATE(429)] = 13833,
  [SMALL_STATE(430)] = 13841,
  [SMALL_STATE(431)] = 13849,
  [SMALL_STATE(432)] = 13857,
  [SMALL_STATE(433)] = 13865,
  [SMALL_STATE(434)] = 13873,
  [SMALL_STATE(435)] = 13881,
  [SMALL_STATE(436)] = 13889,
  [SMALL_STATE(437)] = 13897,
  [SMALL_STATE(438)] = 13905,
  [SMALL_STATE(439)] = 13913,
  [SMALL_STATE(440)] = 13921,
  [SMALL_STATE(441)] = 13929,
  [SMALL_STATE(442)] = 13937,
  [SMALL_STATE(443)] = 13945,
  [SMALL_STATE(444)] = 13953,
  [SMALL_STATE(445)] = 13961,
  [SMALL_STATE(446)] = 13969,
  [SMALL_STATE(447)] = 13977,
  [SMALL_STATE(448)] = 13985,
  [SMALL_STATE(449)] = 13993,
  [SMALL_STATE(450)] = 14001,
  [SMALL_STATE(451)] = 14009,
  [SMALL_STATE(452)] = 14017,
  [SMALL_STATE(453)] = 14025,
  [SMALL_STATE(454)] = 14033,
  [SMALL_STATE(455)] = 14041,
  [SMALL_STATE(456)] = 14049,
  [SMALL_STATE(457)] = 14057,
  [SMALL_STATE(458)] = 14065,
  [SMALL_STATE(459)] = 14073,
  [SMALL_STATE(460)] = 14081,
  [SMALL_STATE(461)] = 14089,
  [SMALL_STATE(462)] = 14097,
  [SMALL_STATE(463)] = 14105,
  [SMALL_STATE(464)] = 14113,
  [SMALL_STATE(465)] = 14121,
  [SMALL_STATE(466)] = 14129,
  [SMALL_STATE(467)] = 14137,
  [SMALL_STATE(468)] = 14145,
  [SMALL_STATE(469)] = 14153,
  [SMALL_STATE(470)] = 14161,
  [SMALL_STATE(471)] = 14169,
  [SMALL_STATE(472)] = 14177,
  [SMALL_STATE(473)] = 14185,
  [SMALL_STATE(474)] = 14193,
  [SMALL_STATE(475)] = 14201,
  [SMALL_STATE(476)] = 14209,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(200),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(317),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(225),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(370),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(437),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(320),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(208),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(197),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(428),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(426),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(424),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(417),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(214),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(446),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(447),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(210),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(454),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(272),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(248),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(444),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(438),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(459),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(469),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(323),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(453),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(240),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(231),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(223),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(375),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(449),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(303),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(428),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(451),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(452),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(222),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(221),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(472),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(476),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(212),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(455),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(207),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(272),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(248),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(444),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(438),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(459),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(469),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(297),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(468),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(242),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(463),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(462),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 22),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 19),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 17),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 21),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 21),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 17),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 17),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 17),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 17),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 26),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 26),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 27),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 27),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 19),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(199),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(201),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(423),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(121),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(201),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(423),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(130),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(131),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(130),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 24),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 25),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 18),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(232),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(203),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(431),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(392),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(394),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 23),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(186),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(298),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(147),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(397),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(175),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(16),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 17),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 19),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
